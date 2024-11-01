#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Gramophone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_StaticMeshLightProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Gramophone.B_Gramophone_C
// 0x0010 (0x0610 - 0x0600)
class AB_Gramophone_C final : public AB_StaticMeshLightProp_C
{
public:
	uint8                                         Pad_5F1[0x7];                                      // 0x05F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Gramophone_C;                     // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        PercentTime;                                       // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateActionProp(bool Override);
	void DeactivateActionProp();
	void ExecuteUbergraph_B_Gramophone(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Gramophone_C">();
	}
	static class AB_Gramophone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Gramophone_C>();
	}
};
static_assert(alignof(AB_Gramophone_C) == 0x000010, "Wrong alignment on AB_Gramophone_C");
static_assert(sizeof(AB_Gramophone_C) == 0x000610, "Wrong size on AB_Gramophone_C");
static_assert(offsetof(AB_Gramophone_C, UberGraphFrame_B_Gramophone_C) == 0x0005F8, "Member 'AB_Gramophone_C::UberGraphFrame_B_Gramophone_C' has a wrong offset!");
static_assert(offsetof(AB_Gramophone_C, PercentTime) == 0x000600, "Member 'AB_Gramophone_C::PercentTime' has a wrong offset!");

}

