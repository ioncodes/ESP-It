#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_GameMessages

#include "Basic.hpp"

#include "WB_GameMessages_classes.hpp"
#include "WB_GameMessages_parameters.hpp"


namespace SDK
{

// Function WB_GameMessages.WB_GameMessages_C.AddGameMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             SourcePlayerName                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             TargetPlayerName                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EGameMessageType                        MessageType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GameMessages_C::AddGameMessage(const class FText& SourcePlayerName, const class FText& TargetPlayerName, EGameMessageType MessageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameMessages_C", "AddGameMessage");

	Params::WB_GameMessages_C_AddGameMessage Parms{};

	Parms.SourcePlayerName = std::move(SourcePlayerName);
	Parms.TargetPlayerName = std::move(TargetPlayerName);
	Parms.MessageType = MessageType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_GameMessages.WB_GameMessages_C.ClampGameMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_GameMessages_C::ClampGameMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameMessages_C", "ClampGameMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_GameMessages.WB_GameMessages_C.ClearGameMessages
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_GameMessages_C::ClearGameMessages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameMessages_C", "ClearGameMessages");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_GameMessages.WB_GameMessages_C.ExecuteUbergraph_WB_GameMessages
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GameMessages_C::ExecuteUbergraph_WB_GameMessages(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameMessages_C", "ExecuteUbergraph_WB_GameMessages");

	Params::WB_GameMessages_C_ExecuteUbergraph_WB_GameMessages Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_GameMessages.WB_GameMessages_C.Get_VerticalBox_1_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_GameMessages_C::Get_VerticalBox_1_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameMessages_C", "Get_VerticalBox_1_Visibility_0");

	Params::WB_GameMessages_C_Get_VerticalBox_1_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_GameMessages.WB_GameMessages_C.InternalAddGameMessage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             SourcePlayerName                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             TargetPlayerName                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EGameMessageType                        MessageType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GameMessages_C::InternalAddGameMessage(const class FText& SourcePlayerName, const class FText& TargetPlayerName, EGameMessageType MessageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameMessages_C", "InternalAddGameMessage");

	Params::WB_GameMessages_C_InternalAddGameMessage Parms{};

	Parms.SourcePlayerName = std::move(SourcePlayerName);
	Parms.TargetPlayerName = std::move(TargetPlayerName);
	Parms.MessageType = MessageType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_GameMessages.WB_GameMessages_C.OnCallFailed_22122CDE4C9301009E76EEB1F17098EF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   SanitizedMessages                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_GameMessages_C::OnCallFailed_22122CDE4C9301009E76EEB1F17098EF(bool bSuccess, const TArray<class FString>& SanitizedMessages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameMessages_C", "OnCallFailed_22122CDE4C9301009E76EEB1F17098EF");

	Params::WB_GameMessages_C_OnCallFailed_22122CDE4C9301009E76EEB1F17098EF Parms{};

	Parms.bSuccess = bSuccess;
	Parms.SanitizedMessages = std::move(SanitizedMessages);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_GameMessages.WB_GameMessages_C.OnMessageArrayProcessed_22122CDE4C9301009E76EEB1F17098EF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   SanitizedMessages                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_GameMessages_C::OnMessageArrayProcessed_22122CDE4C9301009E76EEB1F17098EF(bool bSuccess, const TArray<class FString>& SanitizedMessages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameMessages_C", "OnMessageArrayProcessed_22122CDE4C9301009E76EEB1F17098EF");

	Params::WB_GameMessages_C_OnMessageArrayProcessed_22122CDE4C9301009E76EEB1F17098EF Parms{};

	Parms.bSuccess = bSuccess;
	Parms.SanitizedMessages = std::move(SanitizedMessages);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_GameMessages.WB_GameMessages_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GameMessages_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameMessages_C", "Tick");

	Params::WB_GameMessages_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

