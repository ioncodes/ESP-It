#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CheckBoxWithEditableLabel

#include "Basic.hpp"

#include "WB_CheckBoxWithEditableLabel_classes.hpp"
#include "WB_CheckBoxWithEditableLabel_parameters.hpp"


namespace SDK
{

// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.OnCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_CheckBoxWithEditableLabel_C*  Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CheckBoxWithEditableLabel_C::OnCheckStateChanged__DelegateSignature(class UWB_CheckBoxWithEditableLabel_C* Sender, bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "OnCheckStateChanged__DelegateSignature");

	Params::WB_CheckBoxWithEditableLabel_C_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CheckBoxWithEditableLabel_C::BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WB_CheckBoxWithEditableLabel_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.BndEvt__WB_CheckBoxWithEditableLabel_ResetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWB_CheckBoxWithEditableLabel_C::BndEvt__WB_CheckBoxWithEditableLabel_ResetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "BndEvt__WB_CheckBoxWithEditableLabel_ResetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.CheckDefaultToUpdateUI
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CheckBoxWithEditableLabel_C::CheckDefaultToUpdateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "CheckDefaultToUpdateUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.CreateTooltip
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CheckBoxWithEditableLabel_C::CreateTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "CreateTooltip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.ExecuteUbergraph_WB_CheckBoxWithEditableLabel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CheckBoxWithEditableLabel_C::ExecuteUbergraph_WB_CheckBoxWithEditableLabel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "ExecuteUbergraph_WB_CheckBoxWithEditableLabel");

	Params::WB_CheckBoxWithEditableLabel_C_ExecuteUbergraph_WB_CheckBoxWithEditableLabel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.GetIsChecked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsChecked                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CheckBoxWithEditableLabel_C::GetIsChecked(bool* IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "GetIsChecked");

	Params::WB_CheckBoxWithEditableLabel_C_GetIsChecked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsChecked != nullptr)
		*IsChecked = Parms.IsChecked;
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.InitializeBoolParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIParameterData                 BoolParam                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FUIParam                         DefaultValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWB_CheckBoxWithEditableLabel_C::InitializeBoolParam(const struct FUIParameterData& BoolParam, const struct FUIParam& DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "InitializeBoolParam");

	Params::WB_CheckBoxWithEditableLabel_C_InitializeBoolParam Parms{};

	Parms.BoolParam = std::move(BoolParam);
	Parms.DefaultValue = std::move(DefaultValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.OnClickedEvent
// (BlueprintCallable, BlueprintEvent)

void UWB_CheckBoxWithEditableLabel_C::OnClickedEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "OnClickedEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_CheckBoxWithEditableLabel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "OnFocusReceived");

	Params::WB_CheckBoxWithEditableLabel_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_CheckBoxWithEditableLabel_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "OnMouseEnter");

	Params::WB_CheckBoxWithEditableLabel_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CheckBoxWithEditableLabel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "PreConstruct");

	Params::WB_CheckBoxWithEditableLabel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.SetIsChecked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsChecked                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CheckBoxWithEditableLabel_C::SetIsChecked(bool InIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "SetIsChecked");

	Params::WB_CheckBoxWithEditableLabel_C_SetIsChecked Parms{};

	Parms.InIsChecked = InIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.SetIsCheckedWithoutEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsChecked                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CheckBoxWithEditableLabel_C::SetIsCheckedWithoutEvent(bool InIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "SetIsCheckedWithoutEvent");

	Params::WB_CheckBoxWithEditableLabel_C_SetIsCheckedWithoutEvent Parms{};

	Parms.InIsChecked = InIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CheckBoxWithEditableLabel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CheckBoxWithEditableLabel_C", "Tick");

	Params::WB_CheckBoxWithEditableLabel_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
