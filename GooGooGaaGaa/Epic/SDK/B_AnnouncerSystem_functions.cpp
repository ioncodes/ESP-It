#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AnnouncerSystem

#include "Basic.hpp"

#include "B_AnnouncerSystem_classes.hpp"
#include "B_AnnouncerSystem_parameters.hpp"


namespace SDK
{

// Function B_AnnouncerSystem.B_AnnouncerSystem_C.On30SecondsLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UB_AnnouncerSystem_C::On30SecondsLeft__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "On30SecondsLeft__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AnnouncerSystem.B_AnnouncerSystem_C.On60SecondsLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UB_AnnouncerSystem_C::On60SecondsLeft__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "On60SecondsLeft__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AnnouncerSystem.B_AnnouncerSystem_C.CheckForLastWitch
// (Public, BlueprintCallable, BlueprintEvent)

void UB_AnnouncerSystem_C::CheckForLastWitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "CheckForLastWitch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AnnouncerSystem.B_AnnouncerSystem_C.AreKillsInTimeRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                        CurrentKill                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        PreviousKill                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_AnnouncerSystem_C::AreKillsInTimeRange(const struct FDateTime& CurrentKill, const struct FDateTime& PreviousKill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "AreKillsInTimeRange");

	Params::B_AnnouncerSystem_C_AreKillsInTimeRange Parms{};

	Parms.CurrentKill = std::move(CurrentKill);
	Parms.PreviousKill = std::move(PreviousKill);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_AnnouncerSystem.B_AnnouncerSystem_C.RegisterKillAndCheckForMultiKill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_PlayerState_C*                 Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_AnnouncerSystem_C::RegisterKillAndCheckForMultiKill(class AB_PlayerState_C* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "RegisterKillAndCheckForMultiKill");

	Params::B_AnnouncerSystem_C_RegisterKillAndCheckForMultiKill Parms{};

	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AnnouncerSystem.B_AnnouncerSystem_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UB_AnnouncerSystem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AnnouncerSystem.B_AnnouncerSystem_C.MULTI_On60_SecondsLeft
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UB_AnnouncerSystem_C::MULTI_On60_SecondsLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "MULTI_On60_SecondsLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AnnouncerSystem.B_AnnouncerSystem_C.MULTI_On30_SecondsLeft
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UB_AnnouncerSystem_C::MULTI_On30_SecondsLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "MULTI_On30_SecondsLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AnnouncerSystem.B_AnnouncerSystem_C.SERVER_OnKill
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_PlayerState_C*                 Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_AnnouncerSystem_C::SERVER_OnKill(class AB_PlayerState_C* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "SERVER_OnKill");

	Params::B_AnnouncerSystem_C_SERVER_OnKill Parms{};

	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AnnouncerSystem.B_AnnouncerSystem_C.SERVER_OnWitchHooked
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Hooker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UB_AnnouncerSystem_C::SERVER_OnWitchHooked(const class FString& Hooker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "SERVER_OnWitchHooked");

	Params::B_AnnouncerSystem_C_SERVER_OnWitchHooked Parms{};

	Parms.Hooker = std::move(Hooker);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AnnouncerSystem.B_AnnouncerSystem_C.MULTI_OnLastWitch
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LastWitchName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UB_AnnouncerSystem_C::MULTI_OnLastWitch(const class FString& LastWitchName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "MULTI_OnLastWitch");

	Params::B_AnnouncerSystem_C_MULTI_OnLastWitch Parms{};

	Parms.LastWitchName = std::move(LastWitchName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AnnouncerSystem.B_AnnouncerSystem_C.OnLastWitch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LastWitchName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UB_AnnouncerSystem_C::OnLastWitch__DelegateSignature(const class FString& LastWitchName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "OnLastWitch__DelegateSignature");

	Params::B_AnnouncerSystem_C_OnLastWitch__DelegateSignature Parms{};

	Parms.LastWitchName = std::move(LastWitchName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AnnouncerSystem.B_AnnouncerSystem_C.ExecuteUbergraph_B_AnnouncerSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_AnnouncerSystem_C::ExecuteUbergraph_B_AnnouncerSystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnnouncerSystem_C", "ExecuteUbergraph_B_AnnouncerSystem");

	Params::B_AnnouncerSystem_C_ExecuteUbergraph_B_AnnouncerSystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
