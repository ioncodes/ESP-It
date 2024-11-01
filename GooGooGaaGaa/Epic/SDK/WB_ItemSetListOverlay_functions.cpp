#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ItemSetListOverlay

#include "Basic.hpp"

#include "WB_ItemSetListOverlay_classes.hpp"
#include "WB_ItemSetListOverlay_parameters.hpp"


namespace SDK
{

// Function WB_ItemSetListOverlay.WB_ItemSetListOverlay_C.GetOverlayVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_ItemSetListOverlay_C::GetOverlayVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ItemSetListOverlay_C", "GetOverlayVisibility");

	Params::WB_ItemSetListOverlay_C_GetOverlayVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

