#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ServerQuestInterface

#include "Basic.hpp"

#include "B_ServerQuestInterface_classes.hpp"
#include "B_ServerQuestInterface_parameters.hpp"


namespace SDK
{

// Function B_ServerQuestInterface.B_ServerQuestInterface_C.BuildGetUserIdRequest
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ProductUserId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           AccountType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           NativePlatformId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UVaRestRequestJSON*               Request                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_ServerQuestInterface_C::BuildGetUserIdRequest(const class FString& ProductUserId, const class FString& AccountType, const class FString& NativePlatformId, class UVaRestRequestJSON** Request)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ServerQuestInterface_C", "BuildGetUserIdRequest");

	Params::B_ServerQuestInterface_C_BuildGetUserIdRequest Parms{};

	Parms.ProductUserId = std::move(ProductUserId);
	Parms.AccountType = std::move(AccountType);
	Parms.NativePlatformId = std::move(NativePlatformId);

	UObject::ProcessEvent(Func, &Parms);

	if (Request != nullptr)
		*Request = Parms.Request;
}


// Function B_ServerQuestInterface.B_ServerQuestInterface_C.BuildQuestProgressJsonString
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AccountId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   ObjectiveId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           JsonString                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UB_ServerQuestInterface_C::BuildQuestProgressJsonString(int32 AccountId, int64 ObjectiveId, const class FString& Value, class FString* JsonString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ServerQuestInterface_C", "BuildQuestProgressJsonString");

	Params::B_ServerQuestInterface_C_BuildQuestProgressJsonString Parms{};

	Parms.AccountId = AccountId;
	Parms.ObjectiveId = ObjectiveId;
	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);

	if (JsonString != nullptr)
		*JsonString = std::move(Parms.JsonString);
}


// Function B_ServerQuestInterface.B_ServerQuestInterface_C.ExecuteUbergraph_B_ServerQuestInterface
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ServerQuestInterface_C::ExecuteUbergraph_B_ServerQuestInterface(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ServerQuestInterface_C", "ExecuteUbergraph_B_ServerQuestInterface");

	Params::B_ServerQuestInterface_C_ExecuteUbergraph_B_ServerQuestInterface Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ServerQuestInterface.B_ServerQuestInterface_C.GetObjectiveIdFromName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   ObjectiveId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ServerQuestInterface_C::GetObjectiveIdFromName(class FName Name_0, int64* ObjectiveId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ServerQuestInterface_C", "GetObjectiveIdFromName");

	Params::B_ServerQuestInterface_C_GetObjectiveIdFromName Parms{};

	Parms.Name_0 = Name_0;

	UObject::ProcessEvent(Func, &Parms);

	if (ObjectiveId != nullptr)
		*ObjectiveId = Parms.ObjectiveId;
}


// Function B_ServerQuestInterface.B_ServerQuestInterface_C.HandleUserIdCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*               Response                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_ServerQuestInterface_C::HandleUserIdCompleted(class UVaRestRequestJSON* Response)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ServerQuestInterface_C", "HandleUserIdCompleted");

	Params::B_ServerQuestInterface_C_HandleUserIdCompleted Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ServerQuestInterface.B_ServerQuestInterface_C.Init
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UB_NewMasterServerManager_C*      NewMasterServerManager_0                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UB_ServerQuestInterface_C::Init(const class UB_NewMasterServerManager_C*& NewMasterServerManager_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ServerQuestInterface_C", "Init");

	Params::B_ServerQuestInterface_C_Init Parms{};

	Parms.NewMasterServerManager_0 = NewMasterServerManager_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ServerQuestInterface.B_ServerQuestInterface_C.OnGetUserIdCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*               Response                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_ServerQuestInterface_C::OnGetUserIdCompleted(class UVaRestRequestJSON* Response)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ServerQuestInterface_C", "OnGetUserIdCompleted");

	Params::B_ServerQuestInterface_C_OnGetUserIdCompleted Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ServerQuestInterface.B_ServerQuestInterface_C.OnPostQuestRequestFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*               Request                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_ServerQuestInterface_C::OnPostQuestRequestFailed(class UVaRestRequestJSON* Request)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ServerQuestInterface_C", "OnPostQuestRequestFailed");

	Params::B_ServerQuestInterface_C_OnPostQuestRequestFailed Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ServerQuestInterface.B_ServerQuestInterface_C.OnPostQuestUpdateCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*               Request                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_ServerQuestInterface_C::OnPostQuestUpdateCompleted(class UVaRestRequestJSON* Request)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ServerQuestInterface_C", "OnPostQuestUpdateCompleted");

	Params::B_ServerQuestInterface_C_OnPostQuestUpdateCompleted Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ServerQuestInterface.B_ServerQuestInterface_C.OnReceivedAccountIdForAccountName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AccountId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           RequestedAccountName                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UB_ServerClientConfig_C*          ClientConfig                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   AccountState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ServerQuestInterface_C::OnReceivedAccountIdForAccountName__DelegateSignature(int32 AccountId, const class FString& RequestedAccountName, class UB_ServerClientConfig_C* ClientConfig, int32 AccountState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ServerQuestInterface_C", "OnReceivedAccountIdForAccountName__DelegateSignature");

	Params::B_ServerQuestInterface_C_OnReceivedAccountIdForAccountName__DelegateSignature Parms{};

	Parms.AccountId = AccountId;
	Parms.RequestedAccountName = std::move(RequestedAccountName);
	Parms.ClientConfig = ClientConfig;
	Parms.AccountState = AccountState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ServerQuestInterface.B_ServerQuestInterface_C.PostQuestProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ForAccount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   ObjectiveId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UB_ServerQuestInterface_C::PostQuestProgress(int32 ForAccount, int64 ObjectiveId, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ServerQuestInterface_C", "PostQuestProgress");

	Params::B_ServerQuestInterface_C_PostQuestProgress Parms{};

	Parms.ForAccount = ForAccount;
	Parms.ObjectiveId = ObjectiveId;
	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ServerQuestInterface.B_ServerQuestInterface_C.RequestUserIdForAccount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ProductUserId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           AccountType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           NativePlatformId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UB_ServerQuestInterface_C::RequestUserIdForAccount(const class FString& ProductUserId, const class FString& AccountType, const class FString& NativePlatformId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ServerQuestInterface_C", "RequestUserIdForAccount");

	Params::B_ServerQuestInterface_C_RequestUserIdForAccount Parms{};

	Parms.ProductUserId = std::move(ProductUserId);
	Parms.AccountType = std::move(AccountType);
	Parms.NativePlatformId = std::move(NativePlatformId);

	UObject::ProcessEvent(Func, &Parms);
}

}
