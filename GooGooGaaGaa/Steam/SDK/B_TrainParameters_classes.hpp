#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TrainParameters

#include "Basic.hpp"

#include "PropWitchHuntModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_TrainParameters.B_TrainParameters_C
// 0x0028 (0x0078 - 0x0050)
class UB_TrainParameters_C final : public USkillParameters
{
public:
	double                                        Cooldown;                                          // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Damage;                                            // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Velocity;                                          // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Duration;                                          // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        GravityScale;                                      // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class FText GetFormattedTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_TrainParameters_C">();
	}
	static class UB_TrainParameters_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_TrainParameters_C>();
	}
};
static_assert(alignof(UB_TrainParameters_C) == 0x000008, "Wrong alignment on UB_TrainParameters_C");
static_assert(sizeof(UB_TrainParameters_C) == 0x000078, "Wrong size on UB_TrainParameters_C");
static_assert(offsetof(UB_TrainParameters_C, Cooldown) == 0x000050, "Member 'UB_TrainParameters_C::Cooldown' has a wrong offset!");
static_assert(offsetof(UB_TrainParameters_C, Damage) == 0x000058, "Member 'UB_TrainParameters_C::Damage' has a wrong offset!");
static_assert(offsetof(UB_TrainParameters_C, Velocity) == 0x000060, "Member 'UB_TrainParameters_C::Velocity' has a wrong offset!");
static_assert(offsetof(UB_TrainParameters_C, Duration) == 0x000068, "Member 'UB_TrainParameters_C::Duration' has a wrong offset!");
static_assert(offsetof(UB_TrainParameters_C, GravityScale) == 0x000070, "Member 'UB_TrainParameters_C::GravityScale' has a wrong offset!");

}

