#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Dummy

#include "Basic.hpp"

#include "B_Dummy_classes.hpp"
#include "B_Dummy_parameters.hpp"


namespace SDK
{

// Function B_Dummy.B_Dummy_C.UpdateRotation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Dummy_C::UpdateRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Dummy_C", "UpdateRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Dummy.B_Dummy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Dummy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Dummy_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Dummy.B_Dummy_C.ExecuteUbergraph_B_Dummy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Dummy_C::ExecuteUbergraph_B_Dummy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Dummy_C", "ExecuteUbergraph_B_Dummy");

	Params::B_Dummy_C_ExecuteUbergraph_B_Dummy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
