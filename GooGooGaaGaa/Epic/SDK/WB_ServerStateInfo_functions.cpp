#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ServerStateInfo

#include "Basic.hpp"

#include "WB_ServerStateInfo_classes.hpp"
#include "WB_ServerStateInfo_parameters.hpp"


namespace SDK
{

// Function WB_ServerStateInfo.WB_ServerStateInfo_C.AddIfNotConnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ConnectivityType                      Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ServerStateInfo_C::AddIfNotConnected(E_ConnectivityType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ServerStateInfo_C", "AddIfNotConnected");

	Params::WB_ServerStateInfo_C_AddIfNotConnected Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ServerStateInfo.WB_ServerStateInfo_C.BndEvt__WB_ServerStateInfo_MoreInfoButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_ServerStateInfo_C::BndEvt__WB_ServerStateInfo_MoreInfoButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ServerStateInfo_C", "BndEvt__WB_ServerStateInfo_MoreInfoButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ServerStateInfo.WB_ServerStateInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ServerStateInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ServerStateInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ServerStateInfo.WB_ServerStateInfo_C.ExecuteUbergraph_WB_ServerStateInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ServerStateInfo_C::ExecuteUbergraph_WB_ServerStateInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ServerStateInfo_C", "ExecuteUbergraph_WB_ServerStateInfo");

	Params::WB_ServerStateInfo_C_ExecuteUbergraph_WB_ServerStateInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ServerStateInfo.WB_ServerStateInfo_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_ServerStateInfo_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ServerStateInfo_C", "GetVisibility_0");

	Params::WB_ServerStateInfo_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ServerStateInfo.WB_ServerStateInfo_C.GetVisibility_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_ServerStateInfo_C::GetVisibility_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ServerStateInfo_C", "GetVisibility_1");

	Params::WB_ServerStateInfo_C_GetVisibility_1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ServerStateInfo.WB_ServerStateInfo_C.IsAnyNotConnected
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_ServerStateInfo_C::IsAnyNotConnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ServerStateInfo_C", "IsAnyNotConnected");

	Params::WB_ServerStateInfo_C_IsAnyNotConnected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ServerStateInfo.WB_ServerStateInfo_C.OnConnectivityChangedHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ConnectivityType                      Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_ConnectivityState                     OldState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_ConnectivityState                     NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ServerStateInfo_C::OnConnectivityChangedHandler(E_ConnectivityType Type, E_ConnectivityState OldState, E_ConnectivityState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ServerStateInfo_C", "OnConnectivityChangedHandler");

	Params::WB_ServerStateInfo_C_OnConnectivityChangedHandler Parms{};

	Parms.Type = Type;
	Parms.OldState = OldState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ServerStateInfo.WB_ServerStateInfo_C.OnHandleLoginCompleted
// (BlueprintCallable, BlueprintEvent)

void UWB_ServerStateInfo_C::OnHandleLoginCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ServerStateInfo_C", "OnHandleLoginCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ServerStateInfo.WB_ServerStateInfo_C.OnHandleLoginFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ServerStateInfo_C::OnHandleLoginFailed(int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ServerStateInfo_C", "OnHandleLoginFailed");

	Params::WB_ServerStateInfo_C_OnHandleLoginFailed Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ServerStateInfo.WB_ServerStateInfo_C.UpdateState
// (BlueprintCallable, BlueprintEvent)

void UWB_ServerStateInfo_C::UpdateState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ServerStateInfo_C", "UpdateState");

	UObject::ProcessEvent(Func, nullptr);
}

}
