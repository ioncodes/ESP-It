#include <iostream>

#ifdef EPIC_SDK
#include "Epic/SDK/Engine_classes.hpp"
#include "Epic/SDK/Basic.cpp"
#include "Epic/SDK/CoreUObject_functions.cpp"
#include "Epic/SDK/Engine_functions.cpp"
#else
#include "Steam/SDK/Engine_classes.hpp"
#include "Steam/SDK/Basic.cpp"
#include "Steam/SDK/CoreUObject_functions.cpp"
#include "Steam/SDK/Engine_functions.cpp"
#endif

using namespace SDK;

static void(__thiscall* OriginalPostRenderFunction)(UGameViewportClient*, UCanvas*) = nullptr;

static bool bEnableESP = false;

static constexpr bool bDebug = false;
static __forceinline void DebugLog(const char* Format, ...)
{
    if constexpr (bDebug)
    {
        va_list Args;
        va_start(Args, Format);
        vprintf(Format, Args);
        va_end(Args);
    }
}

static void DrawTextOnCanvas(UCanvas* Canvas, const FString& Text, const FVector2D& Position)
{
    Canvas->K2_DrawText(
        UEngine::GetEngine()->LargeFont,
        Text,
        Position,
        FVector2D(1, 1),
        FLinearColor(1, 1, 1, 1),
        0,
        FLinearColor(0, 0, 0, 0),
        FVector2D(0, 0),
        false,
        false,
        false,
        FLinearColor(0, 0, 0, 0)
    );
}

static void DrawESP(UGameViewportClient* Viewport, UCanvas* Canvas)
{
    UWorld* World = Viewport->World;
    UGameInstance* GameInstance = World ? World->OwningGameInstance : nullptr;
    AGameStateBase* GameState = World ? World->GameState : nullptr;

    if (!World || !GameInstance || !GameState)
        return;

    APlayerController* PlayerController = GameInstance->LocalPlayers[0]->PlayerController;
    if (!PlayerController)
        return;

    APawn* CurrentPlayerPawn = PlayerController->Pawn;
    if (!CurrentPlayerPawn)
        return;

    for (APlayerState* PlayerState : GameState->PlayerArray)
    {
        APawn* Pawn = PlayerState->GetPawn();
        if (!Pawn || Pawn == CurrentPlayerPawn)
            continue;

        FVector PawnLocation = Pawn->K2_GetActorLocation();
        FVector2D PlayerScreenLocation;
        if (!PlayerController->ProjectWorldLocationToScreen(PawnLocation, &PlayerScreenLocation, true))
            continue;

        FVector2D Line1Start(PlayerScreenLocation.X, PlayerScreenLocation.Y - 10);
        FVector2D Line1End(PlayerScreenLocation.X, PlayerScreenLocation.Y + 10);

        FVector2D Line2Start(PlayerScreenLocation.X - 10, PlayerScreenLocation.Y);
        FVector2D Line2End(PlayerScreenLocation.X + 10, PlayerScreenLocation.Y);

        Canvas->K2_DrawLine(Line1Start, Line1End, 2, FLinearColor(1, 0, 0, 1));
        Canvas->K2_DrawLine(Line2Start, Line2End, 2, FLinearColor(1, 0, 0, 1));

        DrawTextOnCanvas(Canvas, PlayerState->PlayerNamePrivate, PlayerScreenLocation);
    }
}

static void __fastcall PostRenderHook(UGameViewportClient* self, UCanvas* Canvas)
{
    if (bEnableESP)
    {
        Canvas->K2_DrawText(
            UEngine::GetEngine()->LargeFont,
            FString(L"i have a small pp"),
            FVector2D(10, 10),
            FVector2D(1, 1),
            FLinearColor(1, 1, 1, 1),
            0,
            FLinearColor(0, 0, 0, 0),
            FVector2D(0, 0),
            false,
            false,
            false,
            FLinearColor(0, 0, 0, 0)
        );

        DrawESP(self, Canvas);
    }


    OriginalPostRenderFunction(self, Canvas);
}

DWORD MainThread(HMODULE Module)
{
    AllocConsole();
    FILE* Dummy;
    freopen_s(&Dummy, "CONOUT$", "w", stdout);
    freopen_s(&Dummy, "CONIN$", "r", stdin);

    UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = UKismetStringLibrary::Conv_StringToName(L"F2");

    UEngine* Engine = UEngine::GetEngine();
    UObject* ConsoleObject = UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
    Engine->GameViewport->ViewportConsole = static_cast<UConsole*>(ConsoleObject);

    uintptr_t VTable = reinterpret_cast<uintptr_t>(Engine->GameViewport->VTable);
    DebugLog("GameViewport vtable @ 0x%p\n", reinterpret_cast<void*>(VTable));
    uintptr_t PostRender = VTable + 0x380;
    DebugLog("VTable address for PostRender = 0x%p\n", reinterpret_cast<void*>(PostRender));

    DWORD OldProtect;
    VirtualProtect(reinterpret_cast<void*>(PostRender), sizeof(void*), PAGE_EXECUTE_READWRITE, &OldProtect);
    OriginalPostRenderFunction = reinterpret_cast<decltype(OriginalPostRenderFunction)>(
        InterlockedExchangePointer(
            reinterpret_cast<PVOID volatile*>(PostRender),
            PostRenderHook
        )
    );
    VirtualProtect(reinterpret_cast<void*>(PostRender), sizeof(void*), OldProtect, &OldProtect);

    DebugLog("Original PostRender = 0x%p\n", reinterpret_cast<void*>(OriginalPostRenderFunction));
    DebugLog("PostRender hook = 0x%p\n", reinterpret_cast<void*>(PostRenderHook));

    while (true)
    {
        if (GetAsyncKeyState(VK_INSERT) & 1)
        {
            bEnableESP = !bEnableESP;
            DebugLog("ESP %s\n", bEnableESP ? "enabled" : "disabled");
        }

        Sleep(100);
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);
        break;
    }

    return TRUE;
}