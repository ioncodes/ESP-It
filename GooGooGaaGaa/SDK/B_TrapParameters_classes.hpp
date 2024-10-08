#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TrapParameters

#include "Basic.hpp"

#include "PropWitchHuntModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_TrapParameters.B_TrapParameters_C
// 0x0038 (0x0088 - 0x0050)
class UB_TrapParameters_C final : public USkillParameters
{
public:
	double                                        Cooldown;                                          // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SuckDuration;                                      // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SlowTime;                                          // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PropVacuumRadius;                                  // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WitchVacuumRadius;                                 // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PullForceProp;                                     // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PullForceWitch;                                    // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class FText GetFormattedTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_TrapParameters_C">();
	}
	static class UB_TrapParameters_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_TrapParameters_C>();
	}
};
static_assert(alignof(UB_TrapParameters_C) == 0x000008, "Wrong alignment on UB_TrapParameters_C");
static_assert(sizeof(UB_TrapParameters_C) == 0x000088, "Wrong size on UB_TrapParameters_C");
static_assert(offsetof(UB_TrapParameters_C, Cooldown) == 0x000050, "Member 'UB_TrapParameters_C::Cooldown' has a wrong offset!");
static_assert(offsetof(UB_TrapParameters_C, SuckDuration) == 0x000058, "Member 'UB_TrapParameters_C::SuckDuration' has a wrong offset!");
static_assert(offsetof(UB_TrapParameters_C, SlowTime) == 0x000060, "Member 'UB_TrapParameters_C::SlowTime' has a wrong offset!");
static_assert(offsetof(UB_TrapParameters_C, PropVacuumRadius) == 0x000068, "Member 'UB_TrapParameters_C::PropVacuumRadius' has a wrong offset!");
static_assert(offsetof(UB_TrapParameters_C, WitchVacuumRadius) == 0x000070, "Member 'UB_TrapParameters_C::WitchVacuumRadius' has a wrong offset!");
static_assert(offsetof(UB_TrapParameters_C, PullForceProp) == 0x000078, "Member 'UB_TrapParameters_C::PullForceProp' has a wrong offset!");
static_assert(offsetof(UB_TrapParameters_C, PullForceWitch) == 0x000080, "Member 'UB_TrapParameters_C::PullForceWitch' has a wrong offset!");

}

