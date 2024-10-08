#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_KillSkill

#include "Basic.hpp"

#include "B_KillSkill_classes.hpp"
#include "B_KillSkill_parameters.hpp"


namespace SDK
{

// Function B_KillSkill.B_KillSkill_C.CanActivate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_KillSkill_C::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_KillSkill_C", "CanActivate");

	Params::B_KillSkill_C_CanActivate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_KillSkill.B_KillSkill_C.ExecuteUbergraph_B_KillSkill
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_KillSkill_C::ExecuteUbergraph_B_KillSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_KillSkill_C", "ExecuteUbergraph_B_KillSkill");

	Params::B_KillSkill_C_ExecuteUbergraph_B_KillSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_KillSkill.B_KillSkill_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UB_KillSkill_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_KillSkill_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_KillSkill.B_KillSkill_C.OnSkillPressClient
// (Event, Public, BlueprintEvent)

void UB_KillSkill_C::OnSkillPressClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_KillSkill_C", "OnSkillPressClient");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_KillSkill.B_KillSkill_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UB_KillSkill_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_KillSkill_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_KillSkill.B_KillSkill_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_KillSkill_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_KillSkill_C", "ReceiveTick");

	Params::B_KillSkill_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_KillSkill.B_KillSkill_C.TickMode
// (Public, BlueprintCallable, BlueprintEvent)

void UB_KillSkill_C::TickMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_KillSkill_C", "TickMode");

	UObject::ProcessEvent(Func, nullptr);
}

}

