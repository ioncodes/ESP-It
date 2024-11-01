#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_DissolvingPropsActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_BaseGameModifierActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_DissolvingPropsActor.B_DissolvingPropsActor_C
// 0x0018 (0x02B8 - 0x02A0)
class AB_DissolvingPropsActor_C final : public AB_BaseGameModifierActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_DissolvingPropsActor_C;           // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         InitialPropCount;                                  // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstTickSkipped;                                  // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AD[0x3];                                      // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IntervalsCompleted;                                // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DissolveProps();
	void ExecuteUbergraph_B_DissolvingPropsActor(int32 EntryPoint);
	void GetAllProps(TArray<class AB_StaticMeshProp_C*>* Props);
	int32 GetNumberOfPropsToDestroy();
	void InitializeRules();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StartMod();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_DissolvingPropsActor_C">();
	}
	static class AB_DissolvingPropsActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_DissolvingPropsActor_C>();
	}
};
static_assert(alignof(AB_DissolvingPropsActor_C) == 0x000008, "Wrong alignment on AB_DissolvingPropsActor_C");
static_assert(sizeof(AB_DissolvingPropsActor_C) == 0x0002B8, "Wrong size on AB_DissolvingPropsActor_C");
static_assert(offsetof(AB_DissolvingPropsActor_C, UberGraphFrame_B_DissolvingPropsActor_C) == 0x0002A0, "Member 'AB_DissolvingPropsActor_C::UberGraphFrame_B_DissolvingPropsActor_C' has a wrong offset!");
static_assert(offsetof(AB_DissolvingPropsActor_C, InitialPropCount) == 0x0002A8, "Member 'AB_DissolvingPropsActor_C::InitialPropCount' has a wrong offset!");
static_assert(offsetof(AB_DissolvingPropsActor_C, FirstTickSkipped) == 0x0002AC, "Member 'AB_DissolvingPropsActor_C::FirstTickSkipped' has a wrong offset!");
static_assert(offsetof(AB_DissolvingPropsActor_C, IntervalsCompleted) == 0x0002B0, "Member 'AB_DissolvingPropsActor_C::IntervalsCompleted' has a wrong offset!");

}

