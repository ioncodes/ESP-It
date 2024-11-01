#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PendingTradePreview

#include "Basic.hpp"

#include "WB_PendingTradePreview_classes.hpp"
#include "WB_PendingTradePreview_parameters.hpp"


namespace SDK
{

// Function WB_PendingTradePreview.WB_PendingTradePreview_C.BndEvt__WB_PendingTradePreview_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_PendingTradePreview_C::BndEvt__WB_PendingTradePreview_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PendingTradePreview_C", "BndEvt__WB_PendingTradePreview_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PendingTradePreview.WB_PendingTradePreview_C.ExecuteUbergraph_WB_PendingTradePreview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PendingTradePreview_C::ExecuteUbergraph_WB_PendingTradePreview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PendingTradePreview_C", "ExecuteUbergraph_WB_PendingTradePreview");

	Params::WB_PendingTradePreview_C_ExecuteUbergraph_WB_PendingTradePreview Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PendingTradePreview.WB_PendingTradePreview_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_PendingTradePreview_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PendingTradePreview_C", "GetInitialFocusWidget");

	Params::WB_PendingTradePreview_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_PendingTradePreview.WB_PendingTradePreview_C.GetSelectedIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_TradePreview_C*               PreviewList                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   SelectedIndex                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PendingTradePreview_C::GetSelectedIndex(class UWB_TradePreview_C* PreviewList, int32* SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PendingTradePreview_C", "GetSelectedIndex");

	Params::WB_PendingTradePreview_C_GetSelectedIndex Parms{};

	Parms.PreviewList = PreviewList;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedIndex != nullptr)
		*SelectedIndex = Parms.SelectedIndex;
}


// Function WB_PendingTradePreview.WB_PendingTradePreview_C.InitializePreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTradeRequest                    Request                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsIncoming_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PendingTradePreview_C::InitializePreview(const struct FTradeRequest& Request, bool IsIncoming_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PendingTradePreview_C", "InitializePreview");

	Params::WB_PendingTradePreview_C_InitializePreview Parms{};

	Parms.Request = std::move(Request);
	Parms.IsIncoming_0 = IsIncoming_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PendingTradePreview.WB_PendingTradePreview_C.NavigateBetweenPreviews
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PendingTradePreview_C::NavigateBetweenPreviews(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PendingTradePreview_C", "NavigateBetweenPreviews");

	Params::WB_PendingTradePreview_C_NavigateBetweenPreviews Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PendingTradePreview.WB_PendingTradePreview_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PendingTradePreview_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PendingTradePreview_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PendingTradePreview.WB_PendingTradePreview_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PendingTradePreview_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PendingTradePreview_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PendingTradePreview.WB_PendingTradePreview_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PendingTradePreview_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PendingTradePreview_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PendingTradePreview.WB_PendingTradePreview_C.SetInitialSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PendingTradePreview_C::SetInitialSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PendingTradePreview_C", "SetInitialSelection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PendingTradePreview.WB_PendingTradePreview_C.UpdateItemLists
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_PendingTradePreview_C::UpdateItemLists()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PendingTradePreview_C", "UpdateItemLists");

	UObject::ProcessEvent(Func, nullptr);
}

}

