#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ControllerHelp

#include "Basic.hpp"

#include "WB_ControllerHelp_classes.hpp"
#include "WB_ControllerHelp_parameters.hpp"


namespace SDK
{

// Function WB_ControllerHelp.WB_ControllerHelp_C.SetControllerImage
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_ControllerHelp_C::SetControllerImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerHelp_C", "SetControllerImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ControllerHelp.WB_ControllerHelp_C.UpdateScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_ControllerHelp_C::UpdateScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerHelp_C", "UpdateScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ControllerHelp.WB_ControllerHelp_C.GetInputActions
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     Actions                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_ControllerHelp_C::GetInputActions(TArray<class FName>& Actions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerHelp_C", "GetInputActions");

	Params::WB_ControllerHelp_C_GetInputActions Parms{};

	Parms.Actions = std::move(Actions);

	UObject::ProcessEvent(Func, &Parms);

	Actions = std::move(Parms.Actions);
}


// Function WB_ControllerHelp.WB_ControllerHelp_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ControllerHelp_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerHelp_C", "PreConstruct");

	Params::WB_ControllerHelp_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ControllerHelp.WB_ControllerHelp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ControllerHelp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerHelp_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ControllerHelp.WB_ControllerHelp_C.ExecuteUbergraph_WB_ControllerHelp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ControllerHelp_C::ExecuteUbergraph_WB_ControllerHelp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerHelp_C", "ExecuteUbergraph_WB_ControllerHelp");

	Params::WB_ControllerHelp_C_ExecuteUbergraph_WB_ControllerHelp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
