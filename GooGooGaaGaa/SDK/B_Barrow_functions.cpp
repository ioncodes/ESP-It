#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Barrow

#include "Basic.hpp"

#include "B_Barrow_classes.hpp"
#include "B_Barrow_parameters.hpp"


namespace SDK
{

// Function B_Barrow.B_Barrow_C.ExecuteUbergraph_B_Barrow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Barrow_C::ExecuteUbergraph_B_Barrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Barrow_C", "ExecuteUbergraph_B_Barrow");

	Params::B_Barrow_C_ExecuteUbergraph_B_Barrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Barrow.B_Barrow_C.PostProccedTeleport
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Barrow_C::PostProccedTeleport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Barrow_C", "PostProccedTeleport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Barrow.B_Barrow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Barrow_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Barrow_C", "ReceiveTick");

	Params::B_Barrow_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Barrow.B_Barrow_C.SelectForEditing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     EditingPlayerState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    KeepOtherPropsSleep                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Barrow_C::SelectForEditing(class APlayerState* EditingPlayerState, bool KeepOtherPropsSleep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Barrow_C", "SelectForEditing");

	Params::B_Barrow_C_SelectForEditing Parms{};

	Parms.EditingPlayerState = EditingPlayerState;
	Parms.KeepOtherPropsSleep = KeepOtherPropsSleep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Barrow.B_Barrow_C.UnselectFromEditing
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Barrow_C::UnselectFromEditing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Barrow_C", "UnselectFromEditing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Barrow.B_Barrow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Barrow_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Barrow_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
