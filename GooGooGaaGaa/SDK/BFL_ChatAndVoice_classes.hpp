#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_ChatAndVoice

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "ETeamID_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BFL_ChatAndVoice.BFL_ChatAndVoice_C
// 0x0000 (0x0028 - 0x0028)
class UBFL_ChatAndVoice_C final : public UBlueprintFunctionLibrary
{
public:
	static bool ArePlayersInSameObjectiveTeam(class APlayerState* PlayerStateA, class UObject* PlayerStateB, class UObject* __WorldContext);
	static bool ArePlayersInSameTeam(class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* __WorldContext);
	static bool IsPlayerBlockedWrapper(class APlayerState* MyPlayerState, class APlayerState* OtherPlayerState, class UObject* __WorldContext);
	static bool IsPlayerMutedManually(class APlayerState* Player_State, class UB_SaveGameManager_C* SaveGameManager, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BFL_ChatAndVoice_C">();
	}
	static class UBFL_ChatAndVoice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBFL_ChatAndVoice_C>();
	}
};
static_assert(alignof(UBFL_ChatAndVoice_C) == 0x000008, "Wrong alignment on UBFL_ChatAndVoice_C");
static_assert(sizeof(UBFL_ChatAndVoice_C) == 0x000028, "Wrong size on UBFL_ChatAndVoice_C");

}

