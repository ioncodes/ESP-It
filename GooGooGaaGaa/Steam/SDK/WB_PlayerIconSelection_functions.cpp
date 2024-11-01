#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PlayerIconSelection

#include "Basic.hpp"

#include "WB_PlayerIconSelection_classes.hpp"
#include "WB_PlayerIconSelection_parameters.hpp"


namespace SDK
{

// Function WB_PlayerIconSelection.WB_PlayerIconSelection_C.BndEvt__WB_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_PlayerIconSelection_C::BndEvt__WB_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PlayerIconSelection_C", "BndEvt__WB_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PlayerIconSelection.WB_PlayerIconSelection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_PlayerIconSelection_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PlayerIconSelection_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PlayerIconSelection.WB_PlayerIconSelection_C.ExecuteUbergraph_WB_PlayerIconSelection
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PlayerIconSelection_C::ExecuteUbergraph_WB_PlayerIconSelection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PlayerIconSelection_C", "ExecuteUbergraph_WB_PlayerIconSelection");

	Params::WB_PlayerIconSelection_C_ExecuteUbergraph_WB_PlayerIconSelection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PlayerIconSelection.WB_PlayerIconSelection_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_PlayerIconSelection_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PlayerIconSelection_C", "GetInitialFocusWidget");

	Params::WB_PlayerIconSelection_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_PlayerIconSelection.WB_PlayerIconSelection_C.InitIconButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_PlayerIconSelection_C::InitIconButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PlayerIconSelection_C", "InitIconButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PlayerIconSelection.WB_PlayerIconSelection_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PlayerIconSelection_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PlayerIconSelection_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PlayerIconSelection.WB_PlayerIconSelection_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PlayerIconSelection_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PlayerIconSelection_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PlayerIconSelection.WB_PlayerIconSelection_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PlayerIconSelection_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PlayerIconSelection_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

