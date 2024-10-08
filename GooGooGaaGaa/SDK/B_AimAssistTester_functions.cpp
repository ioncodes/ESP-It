#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AimAssistTester

#include "Basic.hpp"

#include "B_AimAssistTester_classes.hpp"
#include "B_AimAssistTester_parameters.hpp"


namespace SDK
{

// Function B_AimAssistTester.B_AimAssistTester_C.ExecuteUbergraph_B_AimAssistTester
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_AimAssistTester_C::ExecuteUbergraph_B_AimAssistTester(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AimAssistTester_C", "ExecuteUbergraph_B_AimAssistTester");

	Params::B_AimAssistTester_C_ExecuteUbergraph_B_AimAssistTester Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AimAssistTester.B_AimAssistTester_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_AimAssistTester_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AimAssistTester_C", "ReceiveTick");

	Params::B_AimAssistTester_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

