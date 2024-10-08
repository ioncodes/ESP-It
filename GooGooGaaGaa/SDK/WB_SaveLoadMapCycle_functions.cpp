#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SaveLoadMapCycle

#include "Basic.hpp"

#include "WB_SaveLoadMapCycle_classes.hpp"
#include "WB_SaveLoadMapCycle_parameters.hpp"


namespace SDK
{

// Function WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C.ChangeMenuOnBack
// (Protected, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadMapCycle_C::ChangeMenuOnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadMapCycle_C", "ChangeMenuOnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_SaveLoadMapCycle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadMapCycle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C.ExecuteUbergraph_WB_SaveLoadMapCycle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadMapCycle_C::ExecuteUbergraph_WB_SaveLoadMapCycle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadMapCycle_C", "ExecuteUbergraph_WB_SaveLoadMapCycle");

	Params::WB_SaveLoadMapCycle_C_ExecuteUbergraph_WB_SaveLoadMapCycle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadMapCycle_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadMapCycle_C", "GetInitialFocusWidget");

	Params::WB_SaveLoadMapCycle_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadMapCycle_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadMapCycle_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadMapCycle_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadMapCycle_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadMapCycle_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadMapCycle_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C.SaveMapCycleNameOnFileSaved
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SaveLoadMapCycle_C::SaveMapCycleNameOnFileSaved(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadMapCycle_C", "SaveMapCycleNameOnFileSaved");

	Params::WB_SaveLoadMapCycle_C_SaveMapCycleNameOnFileSaved Parms{};

	Parms.Filename = std::move(Filename);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C.SetSelectedMapCycleOnFileSelected
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                        EntrySaveFile                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadMapCycle_C::SetSelectedMapCycleOnFileSelected(class USaveGame* EntrySaveFile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadMapCycle_C", "SetSelectedMapCycleOnFileSelected");

	Params::WB_SaveLoadMapCycle_C_SetSelectedMapCycleOnFileSelected Parms{};

	Parms.EntrySaveFile = EntrySaveFile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C.TryUpdateMapCycleOnFileDeleted
// (Protected, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadMapCycle_C::TryUpdateMapCycleOnFileDeleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadMapCycle_C", "TryUpdateMapCycleOnFileDeleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C.UpdateActiveMapCycleOnFileLoaded
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                        SaveFile                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadMapCycle_C::UpdateActiveMapCycleOnFileLoaded(const class FString& Filename, class USaveGame* SaveFile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadMapCycle_C", "UpdateActiveMapCycleOnFileLoaded");

	Params::WB_SaveLoadMapCycle_C_UpdateActiveMapCycleOnFileLoaded Parms{};

	Parms.Filename = std::move(Filename);
	Parms.SaveFile = SaveFile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadMapCycle.WB_SaveLoadMapCycle_C.UpdateSaveButtonEnabledState
// (Protected, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadMapCycle_C::UpdateSaveButtonEnabledState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadMapCycle_C", "UpdateSaveButtonEnabledState");

	UObject::ProcessEvent(Func, nullptr);
}

}

