#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ScaleGizmo

#include "Basic.hpp"

#include "B_ScaleGizmo_classes.hpp"
#include "B_ScaleGizmo_parameters.hpp"


namespace SDK
{

// Function B_ScaleGizmo.B_ScaleGizmo_C.SetHighlightAxis
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Axis                                  Axis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForcedBool                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ScaleGizmo_C::SetHighlightAxis(E_Axis Axis, bool* ForcedBool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ScaleGizmo_C", "SetHighlightAxis");

	Params::B_ScaleGizmo_C_SetHighlightAxis Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

	if (ForcedBool != nullptr)
		*ForcedBool = Parms.ForcedBool;
}

}

