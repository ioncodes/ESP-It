#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CauldronBombTaskEntry

#include "Basic.hpp"

#include "WB_CauldronBombTaskEntry_classes.hpp"
#include "WB_CauldronBombTaskEntry_parameters.hpp"


namespace SDK
{

// Function WB_CauldronBombTaskEntry.WB_CauldronBombTaskEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_CauldronBombTaskEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CauldronBombTaskEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CauldronBombTaskEntry.WB_CauldronBombTaskEntry_C.ExecuteUbergraph_WB_CauldronBombTaskEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CauldronBombTaskEntry_C::ExecuteUbergraph_WB_CauldronBombTaskEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CauldronBombTaskEntry_C", "ExecuteUbergraph_WB_CauldronBombTaskEntry");

	Params::WB_CauldronBombTaskEntry_C_ExecuteUbergraph_WB_CauldronBombTaskEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CauldronBombTaskEntry.WB_CauldronBombTaskEntry_C.GetExplodeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ExplodeText                                            (Parm, OutParm)

void UWB_CauldronBombTaskEntry_C::GetExplodeText(class FText* ExplodeText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CauldronBombTaskEntry_C", "GetExplodeText");

	Params::WB_CauldronBombTaskEntry_C_GetExplodeText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ExplodeText != nullptr)
		*ExplodeText = std::move(Parms.ExplodeText);
}


// Function WB_CauldronBombTaskEntry.WB_CauldronBombTaskEntry_C.GetExplodeTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ExplodeTime                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CauldronBombTaskEntry_C::GetExplodeTime(int32* ExplodeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CauldronBombTaskEntry_C", "GetExplodeTime");

	Params::WB_CauldronBombTaskEntry_C_GetExplodeTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ExplodeTime != nullptr)
		*ExplodeTime = Parms.ExplodeTime;
}


// Function WB_CauldronBombTaskEntry.WB_CauldronBombTaskEntry_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_CauldronBombTaskEntry_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CauldronBombTaskEntry_C", "GetVisibility_0");

	Params::WB_CauldronBombTaskEntry_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_CauldronBombTaskEntry.WB_CauldronBombTaskEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CauldronBombTaskEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CauldronBombTaskEntry_C", "Tick");

	Params::WB_CauldronBombTaskEntry_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
