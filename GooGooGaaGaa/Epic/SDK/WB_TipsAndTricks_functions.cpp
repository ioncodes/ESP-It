#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TipsAndTricks

#include "Basic.hpp"

#include "WB_TipsAndTricks_classes.hpp"
#include "WB_TipsAndTricks_parameters.hpp"


namespace SDK
{

// Function WB_TipsAndTricks.WB_TipsAndTricks_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWB_TipsAndTricks_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TipsAndTricks_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TipsAndTricks.WB_TipsAndTricks_C.ExecuteUbergraph_WB_TipsAndTricks
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TipsAndTricks_C::ExecuteUbergraph_WB_TipsAndTricks(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TipsAndTricks_C", "ExecuteUbergraph_WB_TipsAndTricks");

	Params::WB_TipsAndTricks_C_ExecuteUbergraph_WB_TipsAndTricks Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TipsAndTricks.WB_TipsAndTricks_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWB_TipsAndTricks_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TipsAndTricks_C", "GetText_0");

	Params::WB_TipsAndTricks_C_GetText_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
