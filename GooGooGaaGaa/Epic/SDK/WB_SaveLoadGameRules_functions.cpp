#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SaveLoadGameRules

#include "Basic.hpp"

#include "WB_SaveLoadGameRules_classes.hpp"
#include "WB_SaveLoadGameRules_parameters.hpp"


namespace SDK
{

// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.ActivateLoadedRules
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadGameRules_C::ActivateLoadedRules()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadGameRules_C", "ActivateLoadedRules");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_SaveLoadGameRules_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadGameRules_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.ExecuteUbergraph_WB_SaveLoadGameRules
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadGameRules_C::ExecuteUbergraph_WB_SaveLoadGameRules(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadGameRules_C", "ExecuteUbergraph_WB_SaveLoadGameRules");

	Params::WB_SaveLoadGameRules_C_ExecuteUbergraph_WB_SaveLoadGameRules Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadGameRules_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadGameRules_C", "GetInitialFocusWidget");

	Params::WB_SaveLoadGameRules_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadGameRules_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadGameRules_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadGameRules_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadGameRules_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.OnBackPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadGameRules_C::OnBackPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadGameRules_C", "OnBackPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.OnSaved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SaveLoadGameRules_C::OnSaved(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadGameRules_C", "OnSaved");

	Params::WB_SaveLoadGameRules_C_OnSaved Parms{};

	Parms.Filename = std::move(Filename);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadGameRules_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadGameRules_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.ResetRules
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadGameRules_C::ResetRules()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadGameRules_C", "ResetRules");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadGameRules.WB_SaveLoadGameRules_C.SaveFileLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                        SaveFile                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadGameRules_C::SaveFileLoaded(const class FString& Filename, class USaveGame* SaveFile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadGameRules_C", "SaveFileLoaded");

	Params::WB_SaveLoadGameRules_C_SaveFileLoaded Parms{};

	Parms.Filename = std::move(Filename);
	Parms.SaveFile = SaveFile;

	UObject::ProcessEvent(Func, &Parms);
}

}
