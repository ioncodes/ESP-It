#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CreateTradeScreen

#include "Basic.hpp"

#include "WB_CreateTradeScreen_classes.hpp"
#include "WB_CreateTradeScreen_parameters.hpp"


namespace SDK
{

// Function WB_CreateTradeScreen.WB_CreateTradeScreen_C.AcceptKeyPressed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_CreateTradeScreen_C::AcceptKeyPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CreateTradeScreen_C", "AcceptKeyPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CreateTradeScreen.WB_CreateTradeScreen_C.BndEvt__WB_CreateTradeScreen_Button_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_CreateTradeScreen_C::BndEvt__WB_CreateTradeScreen_Button_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CreateTradeScreen_C", "BndEvt__WB_CreateTradeScreen_Button_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CreateTradeScreen.WB_CreateTradeScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_CreateTradeScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CreateTradeScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CreateTradeScreen.WB_CreateTradeScreen_C.ExecuteUbergraph_WB_CreateTradeScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CreateTradeScreen_C::ExecuteUbergraph_WB_CreateTradeScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CreateTradeScreen_C", "ExecuteUbergraph_WB_CreateTradeScreen");

	Params::WB_CreateTradeScreen_C_ExecuteUbergraph_WB_CreateTradeScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CreateTradeScreen.WB_CreateTradeScreen_C.FriendListReceived
// (BlueprintCallable, BlueprintEvent)

void UWB_CreateTradeScreen_C::FriendListReceived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CreateTradeScreen_C", "FriendListReceived");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CreateTradeScreen.WB_CreateTradeScreen_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_CreateTradeScreen_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CreateTradeScreen_C", "GetInitialFocusWidget");

	Params::WB_CreateTradeScreen_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_CreateTradeScreen.WB_CreateTradeScreen_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CreateTradeScreen_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CreateTradeScreen_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CreateTradeScreen.WB_CreateTradeScreen_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CreateTradeScreen_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CreateTradeScreen_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CreateTradeScreen.WB_CreateTradeScreen_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_CreateTradeScreen_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CreateTradeScreen_C", "OnPreviewKeyDown");

	Params::WB_CreateTradeScreen_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_CreateTradeScreen.WB_CreateTradeScreen_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CreateTradeScreen_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CreateTradeScreen_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CreateTradeScreen.WB_CreateTradeScreen_C.PopulateList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_CreateTradeScreen_C::PopulateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CreateTradeScreen_C", "PopulateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CreateTradeScreen.WB_CreateTradeScreen_C.SortByAscii
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          ObjectA                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          ObjectB                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CreateTradeScreen_C::SortByAscii(class UObject* ObjectA, class UObject* ObjectB, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CreateTradeScreen_C", "SortByAscii");

	Params::WB_CreateTradeScreen_C_SortByAscii Parms{};

	Parms.ObjectA = ObjectA;
	Parms.ObjectB = ObjectB;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}
