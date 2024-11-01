#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ComboBoxWithLabel

#include "Basic.hpp"

#include "WB_ComboBoxWithLabel_classes.hpp"
#include "WB_ComboBoxWithLabel_parameters.hpp"


namespace SDK
{

// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_ComboBoxWithLabel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "OnFocusReceived");

	Params::WB_ComboBoxWithLabel_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.SetOptionIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OptionIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ComboBoxWithLabel_C::SetOptionIndex(int32 OptionIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "SetOptionIndex");

	Params::WB_ComboBoxWithLabel_C_SetOptionIndex Parms{};

	Parms.OptionIndex = OptionIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.GetOptionIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ComboBoxWithLabel_C::GetOptionIndex(const class FString& Option, int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "GetOptionIndex");

	Params::WB_ComboBoxWithLabel_C_GetOptionIndex Parms{};

	Parms.Option = std::move(Option);

	UObject::ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.Get_SelectedOptionLabel_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWB_ComboBoxWithLabel_C::Get_SelectedOptionLabel_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "Get_SelectedOptionLabel_Text_0");

	Params::WB_ComboBoxWithLabel_C_Get_SelectedOptionLabel_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.OpenComboBoxOverlay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_ComboBoxWithLabel_C::OpenComboBoxOverlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "OpenComboBoxOverlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ComboBoxWithLabel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.OnClicked
// (BlueprintCallable, BlueprintEvent)

void UWB_ComboBoxWithLabel_C::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.BndEvt__ComboBoxButton_K2Node_ComponentBoundEvent_212_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWB_ComboBoxWithLabel_C::BndEvt__ComboBoxButton_K2Node_ComponentBoundEvent_212_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "BndEvt__ComboBoxButton_K2Node_ComponentBoundEvent_212_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.BndEvt__ComboBoxButton_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWB_ComboBoxWithLabel_C::BndEvt__ComboBoxButton_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "BndEvt__ComboBoxButton_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.BndEvt__WB_ComboBoxWithLabel_ComboBoxButtonInsideScaleBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWB_ComboBoxWithLabel_C::BndEvt__WB_ComboBoxWithLabel_ComboBoxButtonInsideScaleBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "BndEvt__WB_ComboBoxWithLabel_ComboBoxButtonInsideScaleBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.BndEvt__WB_ComboBoxWithLabel_ComboBoxButtonInsideScaleBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWB_ComboBoxWithLabel_C::BndEvt__WB_ComboBoxWithLabel_ComboBoxButtonInsideScaleBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "BndEvt__WB_ComboBoxWithLabel_ComboBoxButtonInsideScaleBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ComboBoxWithLabel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "PreConstruct");

	Params::WB_ComboBoxWithLabel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ComboBoxWithLabel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "Tick");

	Params::WB_ComboBoxWithLabel_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ComboBoxWithLabel_C::OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "OnSelectionChanged__DelegateSignature");

	Params::WB_ComboBoxWithLabel_C_OnSelectionChanged__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C.ExecuteUbergraph_WB_ComboBoxWithLabel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ComboBoxWithLabel_C::ExecuteUbergraph_WB_ComboBoxWithLabel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ComboBoxWithLabel_C", "ExecuteUbergraph_WB_ComboBoxWithLabel");

	Params::WB_ComboBoxWithLabel_C_ExecuteUbergraph_WB_ComboBoxWithLabel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

