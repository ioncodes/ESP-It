#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ItemManager

#include "Basic.hpp"

#include "B_ItemManager_classes.hpp"
#include "B_ItemManager_parameters.hpp"


namespace SDK
{

// Function B_ItemManager.B_ItemManager_C.ConsolidateIngredientItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     TargetPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_ItemManager_C::ConsolidateIngredientItems(class APlayerState* TargetPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ItemManager_C", "ConsolidateIngredientItems");

	Params::B_ItemManager_C_ConsolidateIngredientItems Parms{};

	Parms.TargetPlayer = TargetPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ItemManager.B_ItemManager_C.ExecuteUbergraph_B_ItemManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ItemManager_C::ExecuteUbergraph_B_ItemManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ItemManager_C", "ExecuteUbergraph_B_ItemManager");

	Params::B_ItemManager_C_ExecuteUbergraph_B_ItemManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ItemManager.B_ItemManager_C.FixSteamJsonString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           JsonString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           FixedJsonString                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UB_ItemManager_C::FixSteamJsonString(const class FString& JsonString, class FString* FixedJsonString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ItemManager_C", "FixSteamJsonString");

	Params::B_ItemManager_C_FixSteamJsonString Parms{};

	Parms.JsonString = std::move(JsonString);

	UObject::ProcessEvent(Func, &Parms);

	if (FixedJsonString != nullptr)
		*FixedJsonString = std::move(Parms.FixedJsonString);
}


// Function B_ItemManager.B_ItemManager_C.GrantItems
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     TargetPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Notify                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           ItemDefIds                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsDrop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExtraItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ItemManager_C::GrantItems(class APlayerState* TargetPlayer, bool Notify, const TArray<int32>& ItemDefIds, bool IsDrop, bool IsExtraItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ItemManager_C", "GrantItems");

	Params::B_ItemManager_C_GrantItems Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.Notify = Notify;
	Parms.ItemDefIds = std::move(ItemDefIds);
	Parms.IsDrop = IsDrop;
	Parms.IsExtraItem = IsExtraItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ItemManager.B_ItemManager_C.GrantItemsBRG
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_PlayerState_C*                 TargetPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           ItemDefIds                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Notify                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDrop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExtraItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ItemManager_C::GrantItemsBRG(class AB_PlayerState_C* TargetPlayer, const TArray<int32>& ItemDefIds, bool Notify, bool IsDrop, bool IsExtraItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ItemManager_C", "GrantItemsBRG");

	Params::B_ItemManager_C_GrantItemsBRG Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.ItemDefIds = std::move(ItemDefIds);
	Parms.Notify = Notify;
	Parms.IsDrop = IsDrop;
	Parms.IsExtraItem = IsExtraItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ItemManager.B_ItemManager_C.GrantItemsSteam
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     TargetPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Notify                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           ItemDefIds                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsDrop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExtraItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ItemManager_C::GrantItemsSteam(class APlayerState* TargetPlayer, bool Notify, const TArray<int32>& ItemDefIds, bool IsDrop, bool IsExtraItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ItemManager_C", "GrantItemsSteam");

	Params::B_ItemManager_C_GrantItemsSteam Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.Notify = Notify;
	Parms.ItemDefIds = std::move(ItemDefIds);
	Parms.IsDrop = IsDrop;
	Parms.IsExtraItem = IsExtraItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ItemManager.B_ItemManager_C.HandleItemsAddedBRG
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_PlayerState_C*                 PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGrantItemResultEntry>    Items                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bNotify                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsDrop                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsExtraItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ItemManager_C::HandleItemsAddedBRG(class AB_PlayerState_C* PlayerState, TArray<struct FGrantItemResultEntry>& Items, bool bNotify, bool bIsDrop, bool bIsExtraItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ItemManager_C", "HandleItemsAddedBRG");

	Params::B_ItemManager_C_HandleItemsAddedBRG Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Items = std::move(Items);
	Parms.bNotify = bNotify;
	Parms.bIsDrop = bIsDrop;
	Parms.bIsExtraItem = bIsExtraItem;

	UObject::ProcessEvent(Func, &Parms);

	Items = std::move(Parms.Items);
}


// Function B_ItemManager.B_ItemManager_C.HandleItemsAddedSteam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           DownloadedString                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UB_AddItemQuery_C*                Query                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Failed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ItemManager_C::HandleItemsAddedSteam(const class FString& DownloadedString, class UB_AddItemQuery_C* Query, bool Failed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ItemManager_C", "HandleItemsAddedSteam");

	Params::B_ItemManager_C_HandleItemsAddedSteam Parms{};

	Parms.DownloadedString = std::move(DownloadedString);
	Parms.Query = Query;
	Parms.Failed = Failed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ItemManager.B_ItemManager_C.OnFailure_0E02496B446FDA893CF135AD7FA3391D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AccountId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGrantItemResultEntry>    Items                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bNotify                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsDrop                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsExtraItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                     PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_ItemManager_C::OnFailure_0E02496B446FDA893CF135AD7FA3391D(int32 AccountId, const TArray<struct FGrantItemResultEntry>& Items, bool bNotify, bool bIsDrop, bool bIsExtraItem, class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ItemManager_C", "OnFailure_0E02496B446FDA893CF135AD7FA3391D");

	Params::B_ItemManager_C_OnFailure_0E02496B446FDA893CF135AD7FA3391D Parms{};

	Parms.AccountId = AccountId;
	Parms.Items = std::move(Items);
	Parms.bNotify = bNotify;
	Parms.bIsDrop = bIsDrop;
	Parms.bIsExtraItem = bIsExtraItem;
	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ItemManager.B_ItemManager_C.OnSuccess_0E02496B446FDA893CF135AD7FA3391D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AccountId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGrantItemResultEntry>    Items                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bNotify                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsDrop                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsExtraItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                     PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_ItemManager_C::OnSuccess_0E02496B446FDA893CF135AD7FA3391D(int32 AccountId, const TArray<struct FGrantItemResultEntry>& Items, bool bNotify, bool bIsDrop, bool bIsExtraItem, class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ItemManager_C", "OnSuccess_0E02496B446FDA893CF135AD7FA3391D");

	Params::B_ItemManager_C_OnSuccess_0E02496B446FDA893CF135AD7FA3391D Parms{};

	Parms.AccountId = AccountId;
	Parms.Items = std::move(Items);
	Parms.bNotify = bNotify;
	Parms.bIsDrop = bIsDrop;
	Parms.bIsExtraItem = bIsExtraItem;
	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}

}

