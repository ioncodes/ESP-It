#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_WitchIt

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BFL_WitchIt.BFL_WitchIt_C
// 0x0000 (0x0028 - 0x0028)
class UBFL_WitchIt_C final : public UBlueprintFunctionLibrary
{
public:
	static void IsNativePlatformSteam(class UObject* WorldContext, class UObject* __WorldContext, bool* IsSteam);
	static void GetProductUserIdFromPlayerState(class APlayerState* PlayerState, class UObject* __WorldContext, class FString* PlatformId);
	static void IsSessionUsageAllowed(class UObject* __WorldContext, bool* bIsAllowed);
	static void GetUniqueNetIdFromFirstLocalPlayer(class UObject* WorldContext, class UObject* __WorldContext, struct FUniqueNetIdRepl* NewParam);
	static void GetNativePlatformAccountIdFromPlayerState(class APlayerState* PlayerState, class UObject* __WorldContext, class FString* PlatformId);
	static void GetNativePlatformAccountId(class UObject* WorldContext, class UObject* __WorldContext, class FString* PlatformId);
	static void UseNewServerBrowser(class UObject* __WorldContext, bool* Out);
	static class AB_GameState_C* GetBGameState(class UObject* __WorldContext);
	static class AB_GameMode_C* GetBGameMode(class UObject* __WorldContext);
	static class UB_GameInstance_C* GetBGameInstance(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BFL_WitchIt_C">();
	}
	static class UBFL_WitchIt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBFL_WitchIt_C>();
	}
};
static_assert(alignof(UBFL_WitchIt_C) == 0x000008, "Wrong alignment on UBFL_WitchIt_C");
static_assert(sizeof(UBFL_WitchIt_C) == 0x000028, "Wrong size on UBFL_WitchIt_C");

}
