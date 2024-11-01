#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_HUDObjectiveModeHelp

#include "Basic.hpp"

#include "WB_HUDObjectiveModeHelp_classes.hpp"
#include "WB_HUDObjectiveModeHelp_parameters.hpp"


namespace SDK
{

// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_HUDObjectiveModeHelp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.ExecuteUbergraph_WB_HUDObjectiveModeHelp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_HUDObjectiveModeHelp_C::ExecuteUbergraph_WB_HUDObjectiveModeHelp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "ExecuteUbergraph_WB_HUDObjectiveModeHelp");

	Params::WB_HUDObjectiveModeHelp_C_ExecuteUbergraph_WB_HUDObjectiveModeHelp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.GetHelpVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_HUDObjectiveModeHelp_C::GetHelpVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "GetHelpVisibility");

	Params::WB_HUDObjectiveModeHelp_C_GetHelpVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.On30SecondsLeft_Event
// (BlueprintCallable, BlueprintEvent)

void UWB_HUDObjectiveModeHelp_C::On30SecondsLeft_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "On30SecondsLeft_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.On60SecondsLeft_Event
// (BlueprintCallable, BlueprintEvent)

void UWB_HUDObjectiveModeHelp_C::On60SecondsLeft_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "On60SecondsLeft_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.OnCauldronFilled_Event
// (BlueprintCallable, BlueprintEvent)

void UWB_HUDObjectiveModeHelp_C::OnCauldronFilled_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "OnCauldronFilled_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.OnGameStarted_Event
// (BlueprintCallable, BlueprintEvent)

void UWB_HUDObjectiveModeHelp_C::OnGameStarted_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "OnGameStarted_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.OnOverTimeStarted_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           WantedPropClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_HUDObjectiveModeHelp_C::OnOverTimeStarted_Event(class UClass* WantedPropClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "OnOverTimeStarted_Event");

	Params::WB_HUDObjectiveModeHelp_C_OnOverTimeStarted_Event Parms{};

	Parms.WantedPropClass = WantedPropClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.OnPropMovedToInactiveCauldron_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_HUDObjectiveModeHelp_C::OnPropMovedToInactiveCauldron_Event(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "OnPropMovedToInactiveCauldron_Event");

	Params::WB_HUDObjectiveModeHelp_C_OnPropMovedToInactiveCauldron_Event Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.OnPropMovedToReviveCircle_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_HUDObjectiveModeHelp_C::OnPropMovedToReviveCircle_Event(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "OnPropMovedToReviveCircle_Event");

	Params::WB_HUDObjectiveModeHelp_C_OnPropMovedToReviveCircle_Event Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.OnRevivePossible_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     KilledPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_HUDObjectiveModeHelp_C::OnRevivePossible_Event(class APlayerState* KilledPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "OnRevivePossible_Event");

	Params::WB_HUDObjectiveModeHelp_C_OnRevivePossible_Event Parms{};

	Parms.KilledPlayer = KilledPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.OnTransformedIntoWantedProp_Event
// (BlueprintCallable, BlueprintEvent)

void UWB_HUDObjectiveModeHelp_C::OnTransformedIntoWantedProp_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "OnTransformedIntoWantedProp_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.SetLocalShowHelpFromSave
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_HUDObjectiveModeHelp_C::SetLocalShowHelpFromSave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "SetLocalShowHelpFromSave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.ShowObjective
// (BlueprintCallable, BlueprintEvent)

void UWB_HUDObjectiveModeHelp_C::ShowObjective()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "ShowObjective");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.SpawnHelpEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             HelpText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// double                                  ShowDuration                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_ObjectiveHelpEntry_C*         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWB_ObjectiveHelpEntry_C* UWB_HUDObjectiveModeHelp_C::SpawnHelpEntry(const class FText& HelpText, double ShowDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "SpawnHelpEntry");

	Params::WB_HUDObjectiveModeHelp_C_SpawnHelpEntry Parms{};

	Parms.HelpText = std::move(HelpText);
	Parms.ShowDuration = ShowDuration;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_HUDObjectiveModeHelp_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "Tick");

	Params::WB_HUDObjectiveModeHelp_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_HUDObjectiveModeHelp.WB_HUDObjectiveModeHelp_C.WitchIsWantedProp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_HUDObjectiveModeHelp_C::WitchIsWantedProp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HUDObjectiveModeHelp_C", "WitchIsWantedProp");

	Params::WB_HUDObjectiveModeHelp_C_WitchIsWantedProp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

