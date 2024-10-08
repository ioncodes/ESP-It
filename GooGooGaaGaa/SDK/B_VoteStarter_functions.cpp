#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_VoteStarter

#include "Basic.hpp"

#include "B_VoteStarter_classes.hpp"
#include "B_VoteStarter_parameters.hpp"


namespace SDK
{

// Function B_VoteStarter.B_VoteStarter_C.ExecuteUbergraph_B_VoteStarter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_VoteStarter_C::ExecuteUbergraph_B_VoteStarter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_VoteStarter_C", "ExecuteUbergraph_B_VoteStarter");

	Params::B_VoteStarter_C_ExecuteUbergraph_B_VoteStarter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_VoteStarter.B_VoteStarter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_VoteStarter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_VoteStarter_C", "ReceiveTick");

	Params::B_VoteStarter_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

