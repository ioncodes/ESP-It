#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ManaBar

#include "Basic.hpp"

#include "WB_ManaBar_classes.hpp"
#include "WB_ManaBar_parameters.hpp"


namespace SDK
{

// Function WB_ManaBar.WB_ManaBar_C.SetOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_ManaBar_C::SetOwner(class AActor* Owner_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ManaBar_C", "SetOwner");

	Params::WB_ManaBar_C_SetOwner Parms{};

	Parms.Owner_0 = Owner_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ManaBar.WB_ManaBar_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_ManaBar_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ManaBar_C", "GetVisibility_0");

	Params::WB_ManaBar_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ManaBar.WB_ManaBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ManaBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ManaBar_C", "Tick");

	Params::WB_ManaBar_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ManaBar.WB_ManaBar_C.ExecuteUbergraph_WB_ManaBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ManaBar_C::ExecuteUbergraph_WB_ManaBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ManaBar_C", "ExecuteUbergraph_WB_ManaBar");

	Params::WB_ManaBar_C_ExecuteUbergraph_WB_ManaBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

