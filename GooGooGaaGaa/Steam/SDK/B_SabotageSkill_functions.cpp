#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SabotageSkill

#include "Basic.hpp"

#include "B_SabotageSkill_classes.hpp"
#include "B_SabotageSkill_parameters.hpp"


namespace SDK
{

// Function B_SabotageSkill.B_SabotageSkill_C.CanActivate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_SabotageSkill_C::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SabotageSkill_C", "CanActivate");

	Params::B_SabotageSkill_C_CanActivate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_SabotageSkill.B_SabotageSkill_C.ExecuteUbergraph_B_SabotageSkill
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_SabotageSkill_C::ExecuteUbergraph_B_SabotageSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SabotageSkill_C", "ExecuteUbergraph_B_SabotageSkill");

	Params::B_SabotageSkill_C_ExecuteUbergraph_B_SabotageSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SabotageSkill.B_SabotageSkill_C.HandleActivation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UB_SabotageSkill_C::HandleActivation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SabotageSkill_C", "HandleActivation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SabotageSkill.B_SabotageSkill_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UB_SabotageSkill_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SabotageSkill_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SabotageSkill.B_SabotageSkill_C.Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UB_SabotageSkill_C::Press()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SabotageSkill_C", "Press");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SabotageSkill.B_SabotageSkill_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_SabotageSkill_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SabotageSkill_C", "ReceiveTick");

	Params::B_SabotageSkill_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
