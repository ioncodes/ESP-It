#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SeekGameState

#include "Basic.hpp"

#include "EGameState_structs.hpp"
#include "B_GameState_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SeekGameState.B_SeekGameState_C
// 0x0018 (0x05C8 - 0x05B0)
class AB_SeekGameState_C : public AB_GameState_C
{
public:
	EGameState                                    State;                                             // 0x05A9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_376E[0x6];                                     // 0x05AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSeekStart;                                       // 0x05B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SeekTime;                                          // 0x05C0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSeekStart__DelegateSignature();
	void ShowResult();
	void HasTrackingStarted(bool* Param_HasTrackingStarted);
	void OnRep_State();
	void HasRoundStarted(bool* RoundHasStarted);
	void IsRoundEnd(bool* RoundIsEnd);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SeekGameState_C">();
	}
	static class AB_SeekGameState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SeekGameState_C>();
	}
};
static_assert(alignof(AB_SeekGameState_C) == 0x000008, "Wrong alignment on AB_SeekGameState_C");
static_assert(sizeof(AB_SeekGameState_C) == 0x0005C8, "Wrong size on AB_SeekGameState_C");
static_assert(offsetof(AB_SeekGameState_C, State) == 0x0005A9, "Member 'AB_SeekGameState_C::State' has a wrong offset!");
static_assert(offsetof(AB_SeekGameState_C, OnSeekStart) == 0x0005B0, "Member 'AB_SeekGameState_C::OnSeekStart' has a wrong offset!");
static_assert(offsetof(AB_SeekGameState_C, SeekTime) == 0x0005C0, "Member 'AB_SeekGameState_C::SeekTime' has a wrong offset!");

}
