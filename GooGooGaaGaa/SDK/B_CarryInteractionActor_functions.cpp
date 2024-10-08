#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CarryInteractionActor

#include "Basic.hpp"

#include "B_CarryInteractionActor_classes.hpp"
#include "B_CarryInteractionActor_parameters.hpp"


namespace SDK
{

// Function B_CarryInteractionActor.B_CarryInteractionActor_C.Act
// (Public, BlueprintCallable, BlueprintEvent)

void AB_CarryInteractionActor_C::Act()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CarryInteractionActor_C", "Act");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CarryInteractionActor.B_CarryInteractionActor_C.ExecuteUbergraph_B_CarryInteractionActor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CarryInteractionActor_C::ExecuteUbergraph_B_CarryInteractionActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CarryInteractionActor_C", "ExecuteUbergraph_B_CarryInteractionActor");

	Params::B_CarryInteractionActor_C_ExecuteUbergraph_B_CarryInteractionActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CarryInteractionActor.B_CarryInteractionActor_C.React
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_CarryInteractionActor_C::React()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CarryInteractionActor_C", "React");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CarryInteractionActor.B_CarryInteractionActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CarryInteractionActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CarryInteractionActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CarryInteractionActor.B_CarryInteractionActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CarryInteractionActor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CarryInteractionActor_C", "ReceiveTick");

	Params::B_CarryInteractionActor_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

