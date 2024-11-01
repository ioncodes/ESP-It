#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BaseGameModifierActor

#include "Basic.hpp"

#include "B_BaseGameModifierActor_classes.hpp"
#include "B_BaseGameModifierActor_parameters.hpp"


namespace SDK
{

// Function B_BaseGameModifierActor.B_BaseGameModifierActor_C.CleanUpMod
// (Public, BlueprintCallable, BlueprintEvent)

void AB_BaseGameModifierActor_C::CleanUpMod()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseGameModifierActor_C", "CleanUpMod");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BaseGameModifierActor.B_BaseGameModifierActor_C.ExecuteUbergraph_B_BaseGameModifierActor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BaseGameModifierActor_C::ExecuteUbergraph_B_BaseGameModifierActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseGameModifierActor_C", "ExecuteUbergraph_B_BaseGameModifierActor");

	Params::B_BaseGameModifierActor_C_ExecuteUbergraph_B_BaseGameModifierActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BaseGameModifierActor.B_BaseGameModifierActor_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_BaseGameModifierActor_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseGameModifierActor_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

}

