#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_JumpScareParameters

#include "Basic.hpp"

#include "PropWitchHuntModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_JumpScareParameters.B_JumpScareParameters_C
// 0x0040 (0x0090 - 0x0050)
class UB_JumpScareParameters_C final : public USkillParameters
{
public:
	double                                        Cooldown;                                          // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ActivationManaCost;                                // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StartVelocity;                                     // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Acceleration;                                      // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScalePerSecond;                                    // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BlindDurationMinimum;                              // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BlindDurationMaximum;                              // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FlightDuration;                                    // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class FText GetFormattedTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_JumpScareParameters_C">();
	}
	static class UB_JumpScareParameters_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_JumpScareParameters_C>();
	}
};
static_assert(alignof(UB_JumpScareParameters_C) == 0x000008, "Wrong alignment on UB_JumpScareParameters_C");
static_assert(sizeof(UB_JumpScareParameters_C) == 0x000090, "Wrong size on UB_JumpScareParameters_C");
static_assert(offsetof(UB_JumpScareParameters_C, Cooldown) == 0x000050, "Member 'UB_JumpScareParameters_C::Cooldown' has a wrong offset!");
static_assert(offsetof(UB_JumpScareParameters_C, ActivationManaCost) == 0x000058, "Member 'UB_JumpScareParameters_C::ActivationManaCost' has a wrong offset!");
static_assert(offsetof(UB_JumpScareParameters_C, StartVelocity) == 0x000060, "Member 'UB_JumpScareParameters_C::StartVelocity' has a wrong offset!");
static_assert(offsetof(UB_JumpScareParameters_C, Acceleration) == 0x000068, "Member 'UB_JumpScareParameters_C::Acceleration' has a wrong offset!");
static_assert(offsetof(UB_JumpScareParameters_C, ScalePerSecond) == 0x000070, "Member 'UB_JumpScareParameters_C::ScalePerSecond' has a wrong offset!");
static_assert(offsetof(UB_JumpScareParameters_C, BlindDurationMinimum) == 0x000078, "Member 'UB_JumpScareParameters_C::BlindDurationMinimum' has a wrong offset!");
static_assert(offsetof(UB_JumpScareParameters_C, BlindDurationMaximum) == 0x000080, "Member 'UB_JumpScareParameters_C::BlindDurationMaximum' has a wrong offset!");
static_assert(offsetof(UB_JumpScareParameters_C, FlightDuration) == 0x000088, "Member 'UB_JumpScareParameters_C::FlightDuration' has a wrong offset!");

}
