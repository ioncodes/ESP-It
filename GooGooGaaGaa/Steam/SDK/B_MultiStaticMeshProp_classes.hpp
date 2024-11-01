#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MultiStaticMeshProp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_StaticMeshProp_classes.hpp"
#include "EHighlightChannel_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_MultiStaticMeshProp.B_MultiStaticMeshProp_C
// 0x0020 (0x05B0 - 0x0590)
class AB_MultiStaticMeshProp_C : public AB_StaticMeshProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_MultiStaticMeshProp_C;            // 0x0588(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UStaticMeshComponent*>           StaticMeshes;                                      // 0x0590(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FString>                         IncludingStaticMeshNames;                          // 0x05A0(0x0010)(Edit, BlueprintVisible)

public:
	void SetPhysicsEnabled(bool bIsEnabled);
	void WakeFromSleep();
	void PutToSleep();
	void GetRippleEffect(class UNiagaraSystem** RippleEffectNiagara);
	void GetVisualInterpolators(TArray<class AB_VisualIntepolator_C*>* VisualInterpolators);
	void RefreshHighlight(bool* Highlightable);
	void SetupMultiMeshes();
	void Jump(bool* JumpSuccess);
	void Stop(bool Start, const struct FRotator& WantedRotation, bool* ForcedOutput);
	void Move(const struct FVector& Vector, bool* ForcedOutput);
	void ReceiveBeginPlay();
	void AttachSpringArm(class AB_PropPawnPhysics_C* Witch);
	void UpdatePhysicsType();
	void RestoreVelocity(const struct FSRuntimePropData& RuntimePropData);
	void SetHighlightChannel(EHighlightChannel Channel);
	void ResetPhysicsType();
	void ResetVisualInterpolation();
	void SelectForEditing(class APlayerState* EditingPlayerState, bool KeepOtherPropsSleep);
	void UnselectFromEditing();
	void ExecuteUbergraph_B_MultiStaticMeshProp(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MultiStaticMeshProp_C">();
	}
	static class AB_MultiStaticMeshProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_MultiStaticMeshProp_C>();
	}
};
static_assert(alignof(AB_MultiStaticMeshProp_C) == 0x000010, "Wrong alignment on AB_MultiStaticMeshProp_C");
static_assert(sizeof(AB_MultiStaticMeshProp_C) == 0x0005B0, "Wrong size on AB_MultiStaticMeshProp_C");
static_assert(offsetof(AB_MultiStaticMeshProp_C, UberGraphFrame_B_MultiStaticMeshProp_C) == 0x000588, "Member 'AB_MultiStaticMeshProp_C::UberGraphFrame_B_MultiStaticMeshProp_C' has a wrong offset!");
static_assert(offsetof(AB_MultiStaticMeshProp_C, StaticMeshes) == 0x000590, "Member 'AB_MultiStaticMeshProp_C::StaticMeshes' has a wrong offset!");
static_assert(offsetof(AB_MultiStaticMeshProp_C, IncludingStaticMeshNames) == 0x0005A0, "Member 'AB_MultiStaticMeshProp_C::IncludingStaticMeshNames' has a wrong offset!");

}

