#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_DevMode

#include "Basic.hpp"

#include "WB_DevMode_classes.hpp"
#include "WB_DevMode_parameters.hpp"


namespace SDK
{

// Function WB_DevMode.WB_DevMode_C.BndEvt__WB_DevMode_TabButton_AimAssist_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_DevMode_C::BndEvt__WB_DevMode_TabButton_AimAssist_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "BndEvt__WB_DevMode_TabButton_AimAssist_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DevMode.WB_DevMode_C.BndEvt__WB_DevMode_TabButton_General_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_DevMode_C::BndEvt__WB_DevMode_TabButton_General_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "BndEvt__WB_DevMode_TabButton_General_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DevMode.WB_DevMode_C.BndEvt__WB_DevMode_WB_CheckBoxWithLabel_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_CheckBoxWithLabel_C*          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DevMode_C::BndEvt__WB_DevMode_WB_CheckBoxWithLabel_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(class UWB_CheckBoxWithLabel_C* Sender, bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "BndEvt__WB_DevMode_WB_CheckBoxWithLabel_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature");

	Params::WB_DevMode_C_BndEvt__WB_DevMode_WB_CheckBoxWithLabel_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DevMode.WB_DevMode_C.BndEvt__WB_GameRules_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_DevMode_C::BndEvt__WB_GameRules_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "BndEvt__WB_GameRules_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DevMode.WB_DevMode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_DevMode_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DevMode.WB_DevMode_C.CreateEventBindings
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DevMode_C::CreateEventBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "CreateEventBindings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DevMode.WB_DevMode_C.ExecuteUbergraph_WB_DevMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DevMode_C::ExecuteUbergraph_WB_DevMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "ExecuteUbergraph_WB_DevMode");

	Params::WB_DevMode_C_ExecuteUbergraph_WB_DevMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DevMode.WB_DevMode_C.FocusStoredWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DevMode_C::FocusStoredWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "FocusStoredWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DevMode.WB_DevMode_C.GetActiveTab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ActiveTab                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_DevMode_C::GetActiveTab(class UWidget** ActiveTab)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "GetActiveTab");

	Params::WB_DevMode_C_GetActiveTab Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveTab != nullptr)
		*ActiveTab = Parms.ActiveTab;
}


// Function WB_DevMode.WB_DevMode_C.GetAimAssistDefaultParams
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FUIParam>                 ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FUIParam> UWB_DevMode_C::GetAimAssistDefaultParams()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "GetAimAssistDefaultParams");

	Params::WB_DevMode_C_GetAimAssistDefaultParams Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_DevMode.WB_DevMode_C.GetControllerIconVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_DevMode_C::GetControllerIconVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "GetControllerIconVisibility");

	Params::WB_DevMode_C_GetControllerIconVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_DevMode.WB_DevMode_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_DevMode_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "GetInitialFocusWidget");

	Params::WB_DevMode_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_DevMode.WB_DevMode_C.GetShouldGoBackAfterAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_DevMode_C::GetShouldGoBackAfterAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "GetShouldGoBackAfterAction");

	Params::WB_DevMode_C_GetShouldGoBackAfterAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_DevMode.WB_DevMode_C.HandleCheckedStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChecked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DevMode_C::HandleCheckedStateChanged(bool bChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "HandleCheckedStateChanged");

	Params::WB_DevMode_C_HandleCheckedStateChanged Parms{};

	Parms.bChecked = bChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DevMode.WB_DevMode_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DevMode_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DevMode.WB_DevMode_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DevMode_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DevMode.WB_DevMode_C.OnCheckBoxValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_CheckBoxWithEditableLabel_C*  Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DevMode_C::OnCheckBoxValueChanged(class UWB_CheckBoxWithEditableLabel_C* Sender, bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "OnCheckBoxValueChanged");

	Params::WB_DevMode_C_OnCheckBoxValueChanged Parms{};

	Parms.Sender = Sender;
	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DevMode.WB_DevMode_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_DevMode_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "OnFocusReceived");

	Params::WB_DevMode_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_DevMode.WB_DevMode_C.OnParamSliderRealValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_SliderWithEditableLabel_C*    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  RealValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DevMode_C::OnParamSliderRealValueChanged(class UWB_SliderWithEditableLabel_C* Sender, double RealValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "OnParamSliderRealValueChanged");

	Params::WB_DevMode_C_OnParamSliderRealValueChanged Parms{};

	Parms.Sender = Sender;
	Parms.RealValue = RealValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DevMode.WB_DevMode_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_DevMode_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "OnPreviewKeyDown");

	Params::WB_DevMode_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_DevMode.WB_DevMode_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DevMode_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DevMode.WB_DevMode_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DevMode_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "PreConstruct");

	Params::WB_DevMode_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DevMode.WB_DevMode_C.SetActiveSettingsTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          RequestedSettingsTab                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_DevMode_C::SetActiveSettingsTab(class UWidget* RequestedSettingsTab)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "SetActiveSettingsTab");

	Params::WB_DevMode_C_SetActiveSettingsTab Parms{};

	Parms.RequestedSettingsTab = RequestedSettingsTab;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DevMode.WB_DevMode_C.SetSettings
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_DevMode_C::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "SetSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DevMode.WB_DevMode_C.SetupState
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_DevMode_C::SetupState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "SetupState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DevMode.WB_DevMode_C.StoreFocusedWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_DevMode_C::StoreFocusedWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "StoreFocusedWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DevMode.WB_DevMode_C.UpdateTabButtonStyles
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DevMode_C::UpdateTabButtonStyles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DevMode_C", "UpdateTabButtonStyles");

	UObject::ProcessEvent(Func, nullptr);
}

}
