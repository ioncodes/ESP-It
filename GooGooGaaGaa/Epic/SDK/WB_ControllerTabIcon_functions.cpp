#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ControllerTabIcon

#include "Basic.hpp"

#include "WB_ControllerTabIcon_classes.hpp"
#include "WB_ControllerTabIcon_parameters.hpp"


namespace SDK
{

// Function WB_ControllerTabIcon.WB_ControllerTabIcon_C.Get_ControllerIcon_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_ControllerTabIcon_C::Get_ControllerIcon_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerTabIcon_C", "Get_ControllerIcon_Visibility");

	Params::WB_ControllerTabIcon_C_Get_ControllerIcon_Visibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
