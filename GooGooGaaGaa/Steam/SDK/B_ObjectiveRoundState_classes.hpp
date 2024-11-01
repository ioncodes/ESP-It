#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ObjectiveRoundState

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "ETeamID_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ObjectiveRoundState.B_ObjectiveRoundState_C
// 0x0018 (0x0040 - 0x0028)
class UB_ObjectiveRoundState_C final : public UObject
{
public:
	int32                                         Playtime;                                          // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalCauldronsFilled;                              // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WitchLivesLeft;                                    // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeamID                                       WinnerTeam;                                        // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TotalWins;                                         // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ObjectiveRoundState_C">();
	}
	static class UB_ObjectiveRoundState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_ObjectiveRoundState_C>();
	}
};
static_assert(alignof(UB_ObjectiveRoundState_C) == 0x000008, "Wrong alignment on UB_ObjectiveRoundState_C");
static_assert(sizeof(UB_ObjectiveRoundState_C) == 0x000040, "Wrong size on UB_ObjectiveRoundState_C");
static_assert(offsetof(UB_ObjectiveRoundState_C, Playtime) == 0x000028, "Member 'UB_ObjectiveRoundState_C::Playtime' has a wrong offset!");
static_assert(offsetof(UB_ObjectiveRoundState_C, TotalCauldronsFilled) == 0x00002C, "Member 'UB_ObjectiveRoundState_C::TotalCauldronsFilled' has a wrong offset!");
static_assert(offsetof(UB_ObjectiveRoundState_C, WitchLivesLeft) == 0x000030, "Member 'UB_ObjectiveRoundState_C::WitchLivesLeft' has a wrong offset!");
static_assert(offsetof(UB_ObjectiveRoundState_C, WinnerTeam) == 0x000034, "Member 'UB_ObjectiveRoundState_C::WinnerTeam' has a wrong offset!");
static_assert(offsetof(UB_ObjectiveRoundState_C, TotalWins) == 0x000038, "Member 'UB_ObjectiveRoundState_C::TotalWins' has a wrong offset!");

}

