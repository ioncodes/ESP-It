#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WitchPickupConfusionWave

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_WitchPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_WitchPickupConfusionWave.B_WitchPickupConfusionWave_C
// 0x0008 (0x0318 - 0x0310)
class AB_WitchPickupConfusionWave_C final : public AB_WitchPickup_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_WitchPickupConfusionWave_C;       // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_WitchPickupConfusionWave(int32 EntryPoint);
	void PickupCollected(class APawn* Pawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_WitchPickupConfusionWave_C">();
	}
	static class AB_WitchPickupConfusionWave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_WitchPickupConfusionWave_C>();
	}
};
static_assert(alignof(AB_WitchPickupConfusionWave_C) == 0x000008, "Wrong alignment on AB_WitchPickupConfusionWave_C");
static_assert(sizeof(AB_WitchPickupConfusionWave_C) == 0x000318, "Wrong size on AB_WitchPickupConfusionWave_C");
static_assert(offsetof(AB_WitchPickupConfusionWave_C, UberGraphFrame_B_WitchPickupConfusionWave_C) == 0x000310, "Member 'AB_WitchPickupConfusionWave_C::UberGraphFrame_B_WitchPickupConfusionWave_C' has a wrong offset!");

}

