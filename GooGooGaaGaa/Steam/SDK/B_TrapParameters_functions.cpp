#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TrapParameters

#include "Basic.hpp"

#include "B_TrapParameters_classes.hpp"
#include "B_TrapParameters_parameters.hpp"


namespace SDK
{

// Function B_TrapParameters.B_TrapParameters_C.GetFormattedTooltip
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UB_TrapParameters_C::GetFormattedTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TrapParameters_C", "GetFormattedTooltip");

	Params::B_TrapParameters_C_GetFormattedTooltip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
