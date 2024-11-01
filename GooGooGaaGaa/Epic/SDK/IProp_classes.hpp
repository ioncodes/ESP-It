#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IProp

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IProp.IProp_C
// 0x0000 (0x0028 - 0x0028)
class IIProp_C final : public IInterface
{
public:
	void Action(bool* ForcedBoolean);
	void ApplyTemplateData(class AActor* Template, bool* ForcedBoolean);
	void Fly(double TargetBoost, double DeltaTime, bool* ForcedBoolean);
	void GetCameraDistance(double* CameraDistance);
	void GetCenter(struct FVector* Center);
	void GetMaxHealth(double* MaxHealth);
	void GetName(class FString* Name_0);
	void GetRuntimePropData(struct FSRuntimePropData* RuntimePropData);
	void GetSize(double* Size);
	void GetVisualInterpolators(TArray<class AB_VisualIntepolator_C*>* VisualInterpolators);
	void Jump(bool* JumpSuccess);
	void Move(const struct FVector& Vector, bool* ForcedOutput);
	void OffsetPosition(class AActor* Prop, const struct FTransform& WantedSpawnTransform, TArray<class AActor*>& IgnoreActors, bool* ValidTransform, struct FTransform* Transform);
	void SetControlledByWitch(class AB_PropPawnPhysics_C* Witch, const struct FSRuntimePropData& LastRuntimePropData, bool* ForcedOutput);
	void SetRuntimeSpeedMultiplier(double RuntimeSpeedMultiplier, bool* ForcedBoolean);
	void SetWantedRotation(const struct FRotator& WantedRotation, bool* ForcedBoolean);
	void Stop(bool Start, const struct FRotator& WantedRotation, bool* ForcedOutput);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IProp_C">();
	}
	static class IIProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IIProp_C>();
	}
};
static_assert(alignof(IIProp_C) == 0x000008, "Wrong alignment on IIProp_C");
static_assert(sizeof(IIProp_C) == 0x000028, "Wrong size on IIProp_C");

}

