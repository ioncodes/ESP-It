#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ComboBoxOverlay

#include "Basic.hpp"

#include "WB_ComboBoxOverlay_classes.hpp"
#include "WB_ComboBoxOverlay_parameters.hpp"


namespace SDK
{

// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.ExecuteUbergraph_WB_ComboBoxOverlay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ComboBoxOverlay_C::ExecuteUbergraph_WB_ComboBoxOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxOverlay_C", "ExecuteUbergraph_WB_ComboBoxOverlay");

	Params::WB_ComboBoxOverlay_C_ExecuteUbergraph_WB_ComboBoxOverlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_ComboBoxOverlay_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxOverlay_C", "GetInitialFocusWidget");

	Params::WB_ComboBoxOverlay_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.GetSizeBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                         SizeBox                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_ComboBoxOverlay_C::GetSizeBox(class USizeBox** SizeBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxOverlay_C", "GetSizeBox");

	Params::WB_ComboBoxOverlay_C_GetSizeBox Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SizeBox != nullptr)
		*SizeBox = Parms.SizeBox;
}


// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ComboBoxOverlay_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxOverlay_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ComboBoxOverlay_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxOverlay_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ComboBoxOverlay_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxOverlay_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.SetBaseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_ComboBoxOverlay_C::SetBaseWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxOverlay_C", "SetBaseWidget");

	Params::WB_ComboBoxOverlay_C_SetBaseWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ComboBoxOverlay.WB_ComboBoxOverlay_C.SetOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ComboBoxOverlay_C::SetOption(const class FText& Option, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxOverlay_C", "SetOption");

	Params::WB_ComboBoxOverlay_C_SetOption Parms{};

	Parms.Option = std::move(Option);
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

