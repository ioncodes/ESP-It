#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SelectLayouts

#include "Basic.hpp"

#include "WB_SelectLayouts_classes.hpp"
#include "WB_SelectLayouts_parameters.hpp"


namespace SDK
{

// Function WB_SelectLayouts.WB_SelectLayouts_C.AddLayouts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SelectLayouts_C::AddLayouts(const class FString& LevelName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectLayouts_C", "AddLayouts");

	Params::WB_SelectLayouts_C_AddLayouts Parms{};

	Parms.LevelName = std::move(LevelName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SelectLayouts.WB_SelectLayouts_C.BndEvt__Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_SelectLayouts_C::BndEvt__Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectLayouts_C", "BndEvt__Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SelectLayouts.WB_SelectLayouts_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_SelectLayouts_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectLayouts_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SelectLayouts.WB_SelectLayouts_C.ExecuteUbergraph_WB_SelectLayouts
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SelectLayouts_C::ExecuteUbergraph_WB_SelectLayouts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectLayouts_C", "ExecuteUbergraph_WB_SelectLayouts");

	Params::WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SelectLayouts.WB_SelectLayouts_C.RefreshLayoutList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_SelectLayouts_C::RefreshLayoutList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectLayouts_C", "RefreshLayoutList");

	UObject::ProcessEvent(Func, nullptr);
}

}

