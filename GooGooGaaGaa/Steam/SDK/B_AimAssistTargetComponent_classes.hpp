#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AimAssistTargetComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_AimAssistTargetComponent.B_AimAssistTargetComponent_C
// 0x0010 (0x0240 - 0x0230)
class UB_AimAssistTargetComponent_C final : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_AimAssistTargetComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_AimAssistTargetComponent_C">();
	}
	static class UB_AimAssistTargetComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_AimAssistTargetComponent_C>();
	}
};
static_assert(alignof(UB_AimAssistTargetComponent_C) == 0x000010, "Wrong alignment on UB_AimAssistTargetComponent_C");
static_assert(sizeof(UB_AimAssistTargetComponent_C) == 0x000240, "Wrong size on UB_AimAssistTargetComponent_C");
static_assert(offsetof(UB_AimAssistTargetComponent_C, UberGraphFrame) == 0x000230, "Member 'UB_AimAssistTargetComponent_C::UberGraphFrame' has a wrong offset!");

}
