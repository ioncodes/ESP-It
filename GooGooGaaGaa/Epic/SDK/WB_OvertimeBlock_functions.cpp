#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_OvertimeBlock

#include "Basic.hpp"

#include "WB_OvertimeBlock_classes.hpp"
#include "WB_OvertimeBlock_parameters.hpp"


namespace SDK
{

// Function WB_OvertimeBlock.WB_OvertimeBlock_C.GetPercent_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWB_OvertimeBlock_C::GetPercent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OvertimeBlock_C", "GetPercent_0");

	Params::WB_OvertimeBlock_C_GetPercent_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
