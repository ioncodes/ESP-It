#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ObjectiveWin

#include "Basic.hpp"

#include "WB_ObjectiveWin_classes.hpp"
#include "WB_ObjectiveWin_parameters.hpp"


namespace SDK
{

// Function WB_ObjectiveWin.WB_ObjectiveWin_C.Get_Defeat_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_ObjectiveWin_C::Get_Defeat_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ObjectiveWin_C", "Get_Defeat_Visibility_0");

	Params::WB_ObjectiveWin_C_Get_Defeat_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ObjectiveWin.WB_ObjectiveWin_C.Get_Draw_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_ObjectiveWin_C::Get_Draw_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ObjectiveWin_C", "Get_Draw_Visibility_0");

	Params::WB_ObjectiveWin_C_Get_Draw_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ObjectiveWin.WB_ObjectiveWin_C.Get_Victory_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_ObjectiveWin_C::Get_Victory_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ObjectiveWin_C", "Get_Victory_Visibility_0");

	Params::WB_ObjectiveWin_C_Get_Victory_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
