#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HuntAHagGameMode

#include "Basic.hpp"

#include "B_HuntAHagGameMode_classes.hpp"
#include "B_HuntAHagGameMode_parameters.hpp"


namespace SDK
{

// Function B_HuntAHagGameMode.B_HuntAHagGameMode_C.ExecuteUbergraph_B_HuntAHagGameMode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_HuntAHagGameMode_C::ExecuteUbergraph_B_HuntAHagGameMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HuntAHagGameMode_C", "ExecuteUbergraph_B_HuntAHagGameMode");

	Params::B_HuntAHagGameMode_C_ExecuteUbergraph_B_HuntAHagGameMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_HuntAHagGameMode.B_HuntAHagGameMode_C.HandleEndMatchByTime
// (Public, BlueprintCallable, BlueprintEvent)

void AB_HuntAHagGameMode_C::HandleEndMatchByTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HuntAHagGameMode_C", "HandleEndMatchByTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HuntAHagGameMode.B_HuntAHagGameMode_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void AB_HuntAHagGameMode_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HuntAHagGameMode_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_HuntAHagGameMode.B_HuntAHagGameMode_C.GetPlayObjectiveId
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int64                                   ObjectiveId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_HuntAHagGameMode_C::GetPlayObjectiveId(int64* ObjectiveId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HuntAHagGameMode_C", "GetPlayObjectiveId");

	Params::B_HuntAHagGameMode_C_GetPlayObjectiveId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ObjectiveId != nullptr)
		*ObjectiveId = Parms.ObjectiveId;
}


// Function B_HuntAHagGameMode.B_HuntAHagGameMode_C.GetWinObjectiveId
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int64                                   ObjectiveId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_HuntAHagGameMode_C::GetWinObjectiveId(int64* ObjectiveId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HuntAHagGameMode_C", "GetWinObjectiveId");

	Params::B_HuntAHagGameMode_C_GetWinObjectiveId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ObjectiveId != nullptr)
		*ObjectiveId = Parms.ObjectiveId;
}

}

