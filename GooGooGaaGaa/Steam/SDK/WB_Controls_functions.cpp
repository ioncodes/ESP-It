#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Controls

#include "Basic.hpp"

#include "WB_Controls_classes.hpp"
#include "WB_Controls_parameters.hpp"


namespace SDK
{

// Function WB_Controls.WB_Controls_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Controls_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Controls_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Controls.WB_Controls_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Controls_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Controls_C", "Tick");

	Params::WB_Controls_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Controls.WB_Controls_C.ExecuteUbergraph_WB_Controls
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Controls_C::ExecuteUbergraph_WB_Controls(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Controls_C", "ExecuteUbergraph_WB_Controls");

	Params::WB_Controls_C_ExecuteUbergraph_WB_Controls Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

