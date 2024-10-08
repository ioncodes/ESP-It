#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TradeHistory

#include "Basic.hpp"

#include "WB_TradeHistory_classes.hpp"
#include "WB_TradeHistory_parameters.hpp"


namespace SDK
{

// Function WB_TradeHistory.WB_TradeHistory_C.BndEvt__WB_TradeHistory_Button_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_TradeHistory_C::BndEvt__WB_TradeHistory_Button_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "BndEvt__WB_TradeHistory_Button_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TradeHistory.WB_TradeHistory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_TradeHistory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TradeHistory.WB_TradeHistory_C.CreateListObjects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTradeRequest>            Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsIncoming                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TradeHistory_C::CreateListObjects(TArray<struct FTradeRequest>& Array, bool IsIncoming)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "CreateListObjects");

	Params::WB_TradeHistory_C_CreateListObjects Parms{};

	Parms.Array = std::move(Array);
	Parms.IsIncoming = IsIncoming;

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);
}


// Function WB_TradeHistory.WB_TradeHistory_C.ExecuteUbergraph_WB_TradeHistory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TradeHistory_C::ExecuteUbergraph_WB_TradeHistory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "ExecuteUbergraph_WB_TradeHistory");

	Params::WB_TradeHistory_C_ExecuteUbergraph_WB_TradeHistory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TradeHistory.WB_TradeHistory_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_TradeHistory_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "GetInitialFocusWidget");

	Params::WB_TradeHistory_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_TradeHistory.WB_TradeHistory_C.GetSelectedEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_TradeHistoryEntry_C*          HistoryEntry                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_TradeHistory_C::GetSelectedEntry(class UWB_TradeHistoryEntry_C** HistoryEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "GetSelectedEntry");

	Params::WB_TradeHistory_C_GetSelectedEntry Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HistoryEntry != nullptr)
		*HistoryEntry = Parms.HistoryEntry;
}


// Function WB_TradeHistory.WB_TradeHistory_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TradeHistory_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TradeHistory.WB_TradeHistory_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TradeHistory_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TradeHistory.WB_TradeHistory_C.OnFailure_60E1EA1C42F19A8DE8E14EBF7A442565
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTradeRequest>            Requests                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_TradeHistory_C::OnFailure_60E1EA1C42F19A8DE8E14EBF7A442565(const TArray<struct FTradeRequest>& Requests)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "OnFailure_60E1EA1C42F19A8DE8E14EBF7A442565");

	Params::WB_TradeHistory_C_OnFailure_60E1EA1C42F19A8DE8E14EBF7A442565 Parms{};

	Parms.Requests = std::move(Requests);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TradeHistory.WB_TradeHistory_C.OnFailure_C073B5F847832A162AE411AFD3A746D5
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTradeRequest>            Requests                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_TradeHistory_C::OnFailure_C073B5F847832A162AE411AFD3A746D5(const TArray<struct FTradeRequest>& Requests)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "OnFailure_C073B5F847832A162AE411AFD3A746D5");

	Params::WB_TradeHistory_C_OnFailure_C073B5F847832A162AE411AFD3A746D5 Parms{};

	Parms.Requests = std::move(Requests);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TradeHistory.WB_TradeHistory_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_TradeHistory_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "OnPreviewKeyDown");

	Params::WB_TradeHistory_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TradeHistory.WB_TradeHistory_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TradeHistory_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TradeHistory.WB_TradeHistory_C.OnSuccess_60E1EA1C42F19A8DE8E14EBF7A442565
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTradeRequest>            Requests                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_TradeHistory_C::OnSuccess_60E1EA1C42F19A8DE8E14EBF7A442565(const TArray<struct FTradeRequest>& Requests)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "OnSuccess_60E1EA1C42F19A8DE8E14EBF7A442565");

	Params::WB_TradeHistory_C_OnSuccess_60E1EA1C42F19A8DE8E14EBF7A442565 Parms{};

	Parms.Requests = std::move(Requests);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TradeHistory.WB_TradeHistory_C.OnSuccess_C073B5F847832A162AE411AFD3A746D5
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTradeRequest>            Requests                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_TradeHistory_C::OnSuccess_C073B5F847832A162AE411AFD3A746D5(const TArray<struct FTradeRequest>& Requests)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "OnSuccess_C073B5F847832A162AE411AFD3A746D5");

	Params::WB_TradeHistory_C_OnSuccess_C073B5F847832A162AE411AFD3A746D5 Parms{};

	Parms.Requests = std::move(Requests);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TradeHistory.WB_TradeHistory_C.PopulateList
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TradeHistory_C::PopulateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "PopulateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TradeHistory.WB_TradeHistory_C.SendAcceptToSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TradeHistory_C::SendAcceptToSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "SendAcceptToSelectedItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TradeHistory.WB_TradeHistory_C.SortTradeList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          ObjectA                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          ObjectB                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TradeHistory_C::SortTradeList(class UObject* ObjectA, class UObject* ObjectB, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TradeHistory_C", "SortTradeList");

	Params::WB_TradeHistory_C_SortTradeList Parms{};

	Parms.ObjectA = ObjectA;
	Parms.ObjectB = ObjectB;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

