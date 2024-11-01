#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ModifierButton

#include "Basic.hpp"

#include "WB_ModifierButton_classes.hpp"
#include "WB_ModifierButton_parameters.hpp"


namespace SDK
{

// Function WB_ModifierButton.WB_ModifierButton_C.BndEvt__WB_SkillRuleButton_WB_GridButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_ModifierButton_C::BndEvt__WB_SkillRuleButton_WB_GridButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModifierButton_C", "BndEvt__WB_SkillRuleButton_WB_GridButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ModifierButton.WB_ModifierButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ModifierButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModifierButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ModifierButton.WB_ModifierButton_C.ExecuteUbergraph_WB_ModifierButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ModifierButton_C::ExecuteUbergraph_WB_ModifierButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModifierButton_C", "ExecuteUbergraph_WB_ModifierButton");

	Params::WB_ModifierButton_C_ExecuteUbergraph_WB_ModifierButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ModifierButton.WB_ModifierButton_C.GetGridButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_GridButton_C*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWB_GridButton_C* UWB_ModifierButton_C::GetGridButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ModifierButton_C", "GetGridButton");

	Params::WB_ModifierButton_C_GetGridButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

