#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SelectLayoutEntry

#include "Basic.hpp"

#include "WB_SelectLayoutEntry_classes.hpp"
#include "WB_SelectLayoutEntry_parameters.hpp"


namespace SDK
{

// Function WB_SelectLayoutEntry.WB_SelectLayoutEntry_C.BndEvt__WB_CheckBoxWithLabel_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_CheckBoxWithLabel_C*          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SelectLayoutEntry_C::BndEvt__WB_CheckBoxWithLabel_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(class UWB_CheckBoxWithLabel_C* Sender, bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectLayoutEntry_C", "BndEvt__WB_CheckBoxWithLabel_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	Params::WB_SelectLayoutEntry_C_BndEvt__WB_CheckBoxWithLabel_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SelectLayoutEntry.WB_SelectLayoutEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_SelectLayoutEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectLayoutEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SelectLayoutEntry.WB_SelectLayoutEntry_C.ExecuteUbergraph_WB_SelectLayoutEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SelectLayoutEntry_C::ExecuteUbergraph_WB_SelectLayoutEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectLayoutEntry_C", "ExecuteUbergraph_WB_SelectLayoutEntry");

	Params::WB_SelectLayoutEntry_C_ExecuteUbergraph_WB_SelectLayoutEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

