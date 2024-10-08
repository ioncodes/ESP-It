#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BuffHunterCooldown

#include "Basic.hpp"

#include "B_BuffHunterCooldown_classes.hpp"
#include "B_BuffHunterCooldown_parameters.hpp"


namespace SDK
{

// Function B_BuffHunterCooldown.B_BuffHunterCooldown_C.BuffEnd
// (BlueprintCallable, BlueprintEvent)

void AB_BuffHunterCooldown_C::BuffEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffHunterCooldown_C", "BuffEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BuffHunterCooldown.B_BuffHunterCooldown_C.BuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_PlayerState_C*                 PlayerState_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_BuffHunterCooldown_C::BuffStart(class AB_PlayerState_C* PlayerState_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffHunterCooldown_C", "BuffStart");

	Params::B_BuffHunterCooldown_C_BuffStart Parms{};

	Parms.PlayerState_0 = PlayerState_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BuffHunterCooldown.B_BuffHunterCooldown_C.ExecuteUbergraph_B_BuffHunterCooldown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BuffHunterCooldown_C::ExecuteUbergraph_B_BuffHunterCooldown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffHunterCooldown_C", "ExecuteUbergraph_B_BuffHunterCooldown");

	Params::B_BuffHunterCooldown_C_ExecuteUbergraph_B_BuffHunterCooldown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BuffHunterCooldown.B_BuffHunterCooldown_C.RemoveEffectMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_BuffHunterCooldown_C::RemoveEffectMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffHunterCooldown_C", "RemoveEffectMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BuffHunterCooldown.B_BuffHunterCooldown_C.SetSkillCooldownValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UB_BaseSkill_C*                   MovementSkillObject                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  MovementSkillCooldown                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UB_BaseSkill_C*                   UtilitySkillObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  UtilitySkillCooldown                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BuffHunterCooldown_C::SetSkillCooldownValues(class UB_BaseSkill_C* MovementSkillObject, double MovementSkillCooldown, class UB_BaseSkill_C* UtilitySkillObject, double UtilitySkillCooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffHunterCooldown_C", "SetSkillCooldownValues");

	Params::B_BuffHunterCooldown_C_SetSkillCooldownValues Parms{};

	Parms.MovementSkillObject = MovementSkillObject;
	Parms.MovementSkillCooldown = MovementSkillCooldown;
	Parms.UtilitySkillObject = UtilitySkillObject;
	Parms.UtilitySkillCooldown = UtilitySkillCooldown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BuffHunterCooldown.B_BuffHunterCooldown_C.SetSkillCooldownValuesMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UB_BaseSkill_C*                   MovementSkill_0                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  MovementSkillCooldown                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UB_BaseSkill_C*                   UtilitySkill_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  UtilitySkillCooldown                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BuffHunterCooldown_C::SetSkillCooldownValuesMulti(const class UB_BaseSkill_C* MovementSkill_0, const double MovementSkillCooldown, class UB_BaseSkill_C* UtilitySkill_0, double UtilitySkillCooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffHunterCooldown_C", "SetSkillCooldownValuesMulti");

	Params::B_BuffHunterCooldown_C_SetSkillCooldownValuesMulti Parms{};

	Parms.MovementSkill_0 = MovementSkill_0;
	Parms.MovementSkillCooldown = MovementSkillCooldown;
	Parms.UtilitySkill_0 = UtilitySkill_0;
	Parms.UtilitySkillCooldown = UtilitySkillCooldown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BuffHunterCooldown.B_BuffHunterCooldown_C.SpawnEffectMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_Hunter_C*                      Hunter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_BuffHunterCooldown_C::SpawnEffectMulti(class AB_Hunter_C* Hunter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffHunterCooldown_C", "SpawnEffectMulti");

	Params::B_BuffHunterCooldown_C_SpawnEffectMulti Parms{};

	Parms.Hunter = Hunter;

	UObject::ProcessEvent(Func, &Parms);
}

}

