#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ConfirmRegionSpecificInformation

#include "Basic.hpp"

#include "WB_ConfirmRegionSpecificInformation_classes.hpp"
#include "WB_ConfirmRegionSpecificInformation_parameters.hpp"


namespace SDK
{

// Function WB_ConfirmRegionSpecificInformation.WB_ConfirmRegionSpecificInformation_C.BndEvt__Yes_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_ConfirmRegionSpecificInformation_C::BndEvt__Yes_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmRegionSpecificInformation_C", "BndEvt__Yes_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ConfirmRegionSpecificInformation.WB_ConfirmRegionSpecificInformation_C.ExecuteUbergraph_WB_ConfirmRegionSpecificInformation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ConfirmRegionSpecificInformation_C::ExecuteUbergraph_WB_ConfirmRegionSpecificInformation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmRegionSpecificInformation_C", "ExecuteUbergraph_WB_ConfirmRegionSpecificInformation");

	Params::WB_ConfirmRegionSpecificInformation_C_ExecuteUbergraph_WB_ConfirmRegionSpecificInformation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ConfirmRegionSpecificInformation.WB_ConfirmRegionSpecificInformation_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_ConfirmRegionSpecificInformation_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmRegionSpecificInformation_C", "GetInitialFocusWidget");

	Params::WB_ConfirmRegionSpecificInformation_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_ConfirmRegionSpecificInformation.WB_ConfirmRegionSpecificInformation_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_ConfirmRegionSpecificInformation_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmRegionSpecificInformation_C", "GetVisibility_0");

	Params::WB_ConfirmRegionSpecificInformation_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ConfirmRegionSpecificInformation.WB_ConfirmRegionSpecificInformation_C.Hide Dialog for Future
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ConfirmRegionSpecificInformation_C::Hide_Dialog_for_Future()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmRegionSpecificInformation_C", "Hide Dialog for Future");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ConfirmRegionSpecificInformation.WB_ConfirmRegionSpecificInformation_C.InteractButtonPressed
// (BlueprintCallable, BlueprintEvent)

void UWB_ConfirmRegionSpecificInformation_C::InteractButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmRegionSpecificInformation_C", "InteractButtonPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ConfirmRegionSpecificInformation.WB_ConfirmRegionSpecificInformation_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ConfirmRegionSpecificInformation_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmRegionSpecificInformation_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ConfirmRegionSpecificInformation.WB_ConfirmRegionSpecificInformation_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ConfirmRegionSpecificInformation_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmRegionSpecificInformation_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ConfirmRegionSpecificInformation.WB_ConfirmRegionSpecificInformation_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_ConfirmRegionSpecificInformation_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmRegionSpecificInformation_C", "OnPreviewKeyDown");

	Params::WB_ConfirmRegionSpecificInformation_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ConfirmRegionSpecificInformation.WB_ConfirmRegionSpecificInformation_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ConfirmRegionSpecificInformation_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmRegionSpecificInformation_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}

}
