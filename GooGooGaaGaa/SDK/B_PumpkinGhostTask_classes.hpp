#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PumpkinGhostTask

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_CollectTask_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PumpkinGhostTask.B_PumpkinGhostTask_C
// 0x0028 (0x0348 - 0x0320)
class AB_PumpkinGhostTask_C final : public AB_CollectTask_C
{
public:
	uint8                                         Pad_4B10[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_B_PumpkinGhostTask_C;               // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         CurrentPumpkinGhost;                               // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextPumpkinGhost;                                  // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Initialized;                                       // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B11[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AB_PumpkinGhostShootActor_C*>    TargetPumpkinList;                                 // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_B_PumpkinGhostTask(int32 EntryPoint);
	void GhostifyPumpkin();
	void InitializeIndividualTaskParameters();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PumpkinGhostTask_C">();
	}
	static class AB_PumpkinGhostTask_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PumpkinGhostTask_C>();
	}
};
static_assert(alignof(AB_PumpkinGhostTask_C) == 0x000008, "Wrong alignment on AB_PumpkinGhostTask_C");
static_assert(sizeof(AB_PumpkinGhostTask_C) == 0x000348, "Wrong size on AB_PumpkinGhostTask_C");
static_assert(offsetof(AB_PumpkinGhostTask_C, UberGraphFrame_B_PumpkinGhostTask_C) == 0x000320, "Member 'AB_PumpkinGhostTask_C::UberGraphFrame_B_PumpkinGhostTask_C' has a wrong offset!");
static_assert(offsetof(AB_PumpkinGhostTask_C, CurrentPumpkinGhost) == 0x000328, "Member 'AB_PumpkinGhostTask_C::CurrentPumpkinGhost' has a wrong offset!");
static_assert(offsetof(AB_PumpkinGhostTask_C, NextPumpkinGhost) == 0x00032C, "Member 'AB_PumpkinGhostTask_C::NextPumpkinGhost' has a wrong offset!");
static_assert(offsetof(AB_PumpkinGhostTask_C, Initialized) == 0x000330, "Member 'AB_PumpkinGhostTask_C::Initialized' has a wrong offset!");
static_assert(offsetof(AB_PumpkinGhostTask_C, TargetPumpkinList) == 0x000338, "Member 'AB_PumpkinGhostTask_C::TargetPumpkinList' has a wrong offset!");

}
