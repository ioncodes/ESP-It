#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BuffWitchManaBoost

#include "Basic.hpp"

#include "B_BuffWitchManaBoost_classes.hpp"
#include "B_BuffWitchManaBoost_parameters.hpp"


namespace SDK
{

// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.BuffEnd
// (BlueprintCallable, BlueprintEvent)

void AB_BuffWitchManaBoost_C::BuffEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffWitchManaBoost_C", "BuffEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.BuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_PlayerState_C*                 PlayerState_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_BuffWitchManaBoost_C::BuffStart(class AB_PlayerState_C* PlayerState_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffWitchManaBoost_C", "BuffStart");

	Params::B_BuffWitchManaBoost_C_BuffStart Parms{};

	Parms.PlayerState_0 = PlayerState_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.ExecuteUbergraph_B_BuffWitchManaBoost
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BuffWitchManaBoost_C::ExecuteUbergraph_B_BuffWitchManaBoost(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffWitchManaBoost_C", "ExecuteUbergraph_B_BuffWitchManaBoost");

	Params::B_BuffWitchManaBoost_C_ExecuteUbergraph_B_BuffWitchManaBoost Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.GetCurrentManaComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UB_ManaComponent_C*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UB_ManaComponent_C* AB_BuffWitchManaBoost_C::GetCurrentManaComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffWitchManaBoost_C", "GetCurrentManaComponent");

	Params::B_BuffWitchManaBoost_C_GetCurrentManaComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BuffWitchManaBoost_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffWitchManaBoost_C", "ReceiveTick");

	Params::B_BuffWitchManaBoost_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.SetManaRegen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UB_ManaComponent_C*               ManaComponent_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  ManaRegen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double AB_BuffWitchManaBoost_C::SetManaRegen(class UB_ManaComponent_C* ManaComponent_0, double ManaRegen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffWitchManaBoost_C", "SetManaRegen");

	Params::B_BuffWitchManaBoost_C_SetManaRegen Parms{};

	Parms.ManaComponent_0 = ManaComponent_0;
	Parms.ManaRegen = ManaRegen;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_BuffWitchManaBoost.B_BuffWitchManaBoost_C.SetManaRegenMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UB_ManaComponent_C*               ManaComponent_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  ManaRegen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BuffWitchManaBoost_C::SetManaRegenMulti(class UB_ManaComponent_C* ManaComponent_0, double ManaRegen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BuffWitchManaBoost_C", "SetManaRegenMulti");

	Params::B_BuffWitchManaBoost_C_SetManaRegenMulti Parms{};

	Parms.ManaComponent_0 = ManaComponent_0;
	Parms.ManaRegen = ManaRegen;

	UObject::ProcessEvent(Func, &Parms);
}

}
