#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_RandomPropLayoutPicker

#include "Basic.hpp"

#include "B_RandomPropLayoutPicker_classes.hpp"
#include "B_RandomPropLayoutPicker_parameters.hpp"


namespace SDK
{

// Function B_RandomPropLayoutPicker.B_RandomPropLayoutPicker_C.DeleteDefaultLayoutMapStatics
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_RandomPropLayoutPicker_C::DeleteDefaultLayoutMapStatics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RandomPropLayoutPicker_C", "DeleteDefaultLayoutMapStatics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_RandomPropLayoutPicker.B_RandomPropLayoutPicker_C.ExecuteUbergraph_B_RandomPropLayoutPicker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_RandomPropLayoutPicker_C::ExecuteUbergraph_B_RandomPropLayoutPicker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RandomPropLayoutPicker_C", "ExecuteUbergraph_B_RandomPropLayoutPicker");

	Params::B_RandomPropLayoutPicker_C_ExecuteUbergraph_B_RandomPropLayoutPicker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_RandomPropLayoutPicker.B_RandomPropLayoutPicker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_RandomPropLayoutPicker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RandomPropLayoutPicker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
