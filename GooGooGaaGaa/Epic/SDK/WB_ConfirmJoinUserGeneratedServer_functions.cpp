#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ConfirmJoinUserGeneratedServer

#include "Basic.hpp"

#include "WB_ConfirmJoinUserGeneratedServer_classes.hpp"
#include "WB_ConfirmJoinUserGeneratedServer_parameters.hpp"


namespace SDK
{

// Function WB_ConfirmJoinUserGeneratedServer.WB_ConfirmJoinUserGeneratedServer_C.BndEvt__No_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_ConfirmJoinUserGeneratedServer_C::BndEvt__No_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmJoinUserGeneratedServer_C", "BndEvt__No_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ConfirmJoinUserGeneratedServer.WB_ConfirmJoinUserGeneratedServer_C.BndEvt__Yes_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_ConfirmJoinUserGeneratedServer_C::BndEvt__Yes_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmJoinUserGeneratedServer_C", "BndEvt__Yes_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ConfirmJoinUserGeneratedServer.WB_ConfirmJoinUserGeneratedServer_C.CheckForHide
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ConfirmJoinUserGeneratedServer_C::CheckForHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmJoinUserGeneratedServer_C", "CheckForHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ConfirmJoinUserGeneratedServer.WB_ConfirmJoinUserGeneratedServer_C.ExecuteUbergraph_WB_ConfirmJoinUserGeneratedServer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ConfirmJoinUserGeneratedServer_C::ExecuteUbergraph_WB_ConfirmJoinUserGeneratedServer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmJoinUserGeneratedServer_C", "ExecuteUbergraph_WB_ConfirmJoinUserGeneratedServer");

	Params::WB_ConfirmJoinUserGeneratedServer_C_ExecuteUbergraph_WB_ConfirmJoinUserGeneratedServer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ConfirmJoinUserGeneratedServer.WB_ConfirmJoinUserGeneratedServer_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_ConfirmJoinUserGeneratedServer_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmJoinUserGeneratedServer_C", "GetInitialFocusWidget");

	Params::WB_ConfirmJoinUserGeneratedServer_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_ConfirmJoinUserGeneratedServer.WB_ConfirmJoinUserGeneratedServer_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_ConfirmJoinUserGeneratedServer_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmJoinUserGeneratedServer_C", "GetVisibility_0");

	Params::WB_ConfirmJoinUserGeneratedServer_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ConfirmJoinUserGeneratedServer.WB_ConfirmJoinUserGeneratedServer_C.InteractButtonPressed
// (BlueprintCallable, BlueprintEvent)

void UWB_ConfirmJoinUserGeneratedServer_C::InteractButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmJoinUserGeneratedServer_C", "InteractButtonPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ConfirmJoinUserGeneratedServer.WB_ConfirmJoinUserGeneratedServer_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ConfirmJoinUserGeneratedServer_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmJoinUserGeneratedServer_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ConfirmJoinUserGeneratedServer.WB_ConfirmJoinUserGeneratedServer_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ConfirmJoinUserGeneratedServer_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmJoinUserGeneratedServer_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ConfirmJoinUserGeneratedServer.WB_ConfirmJoinUserGeneratedServer_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_ConfirmJoinUserGeneratedServer_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmJoinUserGeneratedServer_C", "OnPreviewKeyDown");

	Params::WB_ConfirmJoinUserGeneratedServer_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ConfirmJoinUserGeneratedServer.WB_ConfirmJoinUserGeneratedServer_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ConfirmJoinUserGeneratedServer_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ConfirmJoinUserGeneratedServer_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}

}
