#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IHunter

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IHunter.IHunter_C
// 0x0000 (0x0028 - 0x0028)
class IIHunter_C final : public IInterface
{
public:
	double GetCurrentControllerYaw();
	bool GetIsConfused();
	bool GetRotateInstantForOneFrame();
	struct FTransform GetSpawnTransform(const struct FVector& Offset);
	struct FTransform GetSpawnTransformRotated(const struct FVector& Offset);
	void IsPlayingQuestionTaunt(bool* IsPlaying);
	void IsPlayingSpeakTaunt(bool* IsPlaying);
	void PlayModelAnimation(class UAnimMontage* Montage, double InPlayRate, bool* ForcedBoolean);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IHunter_C">();
	}
	static class IIHunter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IIHunter_C>();
	}
};
static_assert(alignof(IIHunter_C) == 0x000008, "Wrong alignment on IIHunter_C");
static_assert(sizeof(IIHunter_C) == 0x000028, "Wrong size on IIHunter_C");

}
