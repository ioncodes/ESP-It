#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_WinAnimationLogic

#include "Basic.hpp"

#include "WB_WinAnimationLogic_classes.hpp"
#include "WB_WinAnimationLogic_parameters.hpp"


namespace SDK
{

// Function WB_WinAnimationLogic.WB_WinAnimationLogic_C.Get_AnimationArea_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_WinAnimationLogic_C::Get_AnimationArea_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_WinAnimationLogic_C", "Get_AnimationArea_Visibility_0");

	Params::WB_WinAnimationLogic_C_Get_AnimationArea_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_WinAnimationLogic.WB_WinAnimationLogic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_WinAnimationLogic_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_WinAnimationLogic_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_WinAnimationLogic.WB_WinAnimationLogic_C.ExecuteUbergraph_WB_WinAnimationLogic
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_WinAnimationLogic_C::ExecuteUbergraph_WB_WinAnimationLogic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_WinAnimationLogic_C", "ExecuteUbergraph_WB_WinAnimationLogic");

	Params::WB_WinAnimationLogic_C_ExecuteUbergraph_WB_WinAnimationLogic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

