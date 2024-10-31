#include <Windows.h>
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

static void DrawESP(UGameViewportClient* Viewport, UCanvas* Canvas)
{
    UWorld* World = Viewport->World;
    UGameInstance* GameInstance = World->OwningGameInstance;
    AGameStateBase* GameState = World->GameState;
    if (!World || !GameInstance || !GameState)
        return;
    DebugLog("World: 0x%p\nGameInstance: 0x%p\nGameState: 0x%p\n", World, GameInstance, GameState);

    APlayerController* PlayerController = GameInstance->LocalPlayers[0]->PlayerController;
    if (!PlayerController)
        return;

    APawn* CurrentPlayerPawn = PlayerController->Pawn;
    if (!CurrentPlayerPawn)
        return;
    DebugLog("CurrentPlayerPawn: 0x%p\n", CurrentPlayerPawn);

    for (APlayerState* PlayerState : GameState->PlayerArray)
    {
        APawn* Pawn = PlayerState->GetPawn();
        if (!Pawn || Pawn == CurrentPlayerPawn)
            continue;

        // TODO: Check if pawn is Seeker or Hider

        FString PlayerName = PlayerState->PlayerNamePrivate;
        DebugLog("PlayerState: 0x%p\nPawn: 0x%p\nName: %s\n", PlayerState, Pawn, PlayerName.ToString());

        FVector PawnLocation = Pawn->K2_GetActorLocation();
        DebugLog("PawnLocation = (%f, %f, %f)\n", PawnLocation.X, PawnLocation.Y, PawnLocation.Z);

        FVector2D PlayerScreenLocation;
        if (!PlayerController->ProjectWorldLocationToScreen(PawnLocation, &PlayerScreenLocation, true))
            continue;

        Canvas->K2_DrawText(
            UEngine::GetEngine()->LargeFont,
            PlayerName,
            PlayerScreenLocation,
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
}

static void PostRenderHook(UGameViewportClient* self, UCanvas* Canvas)
{
    Canvas->K2_DrawText(
        UEngine::GetEngine()->LargeFont,
        FString(L"uwu we successfully hooked the post renderer owo"),
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

    OriginalPostRenderFunction(self, Canvas);
}

DWORD MainThread(HMODULE Module)
{
    AllocConsole();
    FILE* Dummy;
    freopen_s(&Dummy, "CONOUT$", "w", stdout);
    freopen_s(&Dummy, "CONIN$", "r", stdin);
    
    // Remap the keybind for the console to F2
    UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = UKismetStringLibrary::Conv_StringToName(L"F2");

    // Enable the debug console
    UEngine* Engine = UEngine::GetEngine();
    UObject* ConsoleObject = UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
    Engine->GameViewport->ViewportConsole = static_cast<UConsole*>(ConsoleObject);

    // Print the vtable address for the GameViewport and the PostRender function
    uintptr_t VTable = reinterpret_cast<uintptr_t>(Engine->GameViewport->VTable);
    printf("GameViewport vtable @ 0x%p\n", reinterpret_cast<void*>(VTable));
    uintptr_t PostRender = VTable + 0x380;
    printf("VTable address for PostRender = 0x%p\n", reinterpret_cast<void*>(PostRender));

    // Swap the PostRender pointer with our own
    DWORD OldProtect;
    VirtualProtect(reinterpret_cast<void*>(PostRender), sizeof(void*), PAGE_EXECUTE_READWRITE, &OldProtect);
    OriginalPostRenderFunction = reinterpret_cast<decltype(OriginalPostRenderFunction)>(
        InterlockedExchangePointer(
            reinterpret_cast<PVOID volatile*>(PostRender),
            PostRenderHook
        )
    );
    VirtualProtect(reinterpret_cast<void*>(PostRender), sizeof(void*), OldProtect, &OldProtect);

    // Print the addresses
    printf("Original PostRender = 0x%p\n", reinterpret_cast<void*>(OriginalPostRenderFunction));
    printf("PostRender hook = 0x%p\n", reinterpret_cast<void*>(PostRenderHook));

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