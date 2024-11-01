#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ObjectivePlayerController

#include "Basic.hpp"

#include "E_ObjectiveTeam_structs.hpp"
#include "Engine_structs.hpp"
#include "B_PlayerController_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ObjectivePlayerController.B_ObjectivePlayerController_C
// 0x0018 (0x0B30 - 0x0B18)
class AB_ObjectivePlayerController_C final : public AB_PlayerController_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_ObjectivePlayerController_C;      // 0x0B18(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AB_ObjectivePlayerState_C*              ObjectivePlayerState;                              // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBeingKickedDueMatchHasStarted;                   // 0x0B28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRejoiningMatch;                                  // 0x0B29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RejoinInitialized;                                 // 0x0B2A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_ObjectivePlayerController(int32 EntryPoint);
	void GetObjectivePlayerState(class AB_ObjectivePlayerState_C** ObjectivePlayerState_0);
	void LoadPropsAndCauldrons();
	void NotifyMatchRunningKick();
	void ReceiveTick(float DeltaSeconds);
	void SelectObjectiveTeam(E_ObjectiveTeam ObjectiveTeam);
	void SetObjectiveTeam(E_ObjectiveTeam ObjectiveTeam);
	void SetReadyObjectiveTeamSelection();
	void SurrenderServer();
	void ToggleTeamSelectionReady();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ObjectivePlayerController_C">();
	}
	static class AB_ObjectivePlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ObjectivePlayerController_C>();
	}
};
static_assert(alignof(AB_ObjectivePlayerController_C) == 0x000008, "Wrong alignment on AB_ObjectivePlayerController_C");
static_assert(sizeof(AB_ObjectivePlayerController_C) == 0x000B30, "Wrong size on AB_ObjectivePlayerController_C");
static_assert(offsetof(AB_ObjectivePlayerController_C, UberGraphFrame_B_ObjectivePlayerController_C) == 0x000B18, "Member 'AB_ObjectivePlayerController_C::UberGraphFrame_B_ObjectivePlayerController_C' has a wrong offset!");
static_assert(offsetof(AB_ObjectivePlayerController_C, ObjectivePlayerState) == 0x000B20, "Member 'AB_ObjectivePlayerController_C::ObjectivePlayerState' has a wrong offset!");
static_assert(offsetof(AB_ObjectivePlayerController_C, IsBeingKickedDueMatchHasStarted) == 0x000B28, "Member 'AB_ObjectivePlayerController_C::IsBeingKickedDueMatchHasStarted' has a wrong offset!");
static_assert(offsetof(AB_ObjectivePlayerController_C, IsRejoiningMatch) == 0x000B29, "Member 'AB_ObjectivePlayerController_C::IsRejoiningMatch' has a wrong offset!");
static_assert(offsetof(AB_ObjectivePlayerController_C, RejoinInitialized) == 0x000B2A, "Member 'AB_ObjectivePlayerController_C::RejoinInitialized' has a wrong offset!");

}

