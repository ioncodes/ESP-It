#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ConfusionWave

#include "Basic.hpp"

#include "B_MushroomArea_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ConfusionWave.B_ConfusionWave_C
// 0x0010 (0x03B0 - 0x03A0)
class AB_ConfusionWave_C final : public AB_MushroomArea_C
{
public:
	double                                        EffectRadius;                                      // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SpawnSound;                                        // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	double GetConfuseDuration();
	double GetCurrentSphereRadius();
	void HandleFade();
	void TearUp(const struct FTransform& SpawnTransform, class AActor* Param_Owner, class APawn* Param_Instigator);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ConfusionWave_C">();
	}
	static class AB_ConfusionWave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ConfusionWave_C>();
	}
};
static_assert(alignof(AB_ConfusionWave_C) == 0x000010, "Wrong alignment on AB_ConfusionWave_C");
static_assert(sizeof(AB_ConfusionWave_C) == 0x0003B0, "Wrong size on AB_ConfusionWave_C");
static_assert(offsetof(AB_ConfusionWave_C, EffectRadius) == 0x000398, "Member 'AB_ConfusionWave_C::EffectRadius' has a wrong offset!");
static_assert(offsetof(AB_ConfusionWave_C, SpawnSound) == 0x0003A0, "Member 'AB_ConfusionWave_C::SpawnSound' has a wrong offset!");

}
