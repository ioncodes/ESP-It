#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PhysicalSound

#include "Basic.hpp"

#include "B_PhysicalSound_classes.hpp"
#include "B_PhysicalSound_parameters.hpp"


namespace SDK
{

// Function B_PhysicalSound.B_PhysicalSound_C.ExecuteUbergraph_B_PhysicalSound
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_PhysicalSound_C::ExecuteUbergraph_B_PhysicalSound(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PhysicalSound_C", "ExecuteUbergraph_B_PhysicalSound");

	Params::B_PhysicalSound_C_ExecuteUbergraph_B_PhysicalSound Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_PhysicalSound.B_PhysicalSound_C.OnDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_PhysicalSound_C::OnDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PhysicalSound_C", "OnDestroyed");

	Params::B_PhysicalSound_C_OnDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_PhysicalSound.B_PhysicalSound_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UB_PhysicalSound_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PhysicalSound_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_PhysicalSound.B_PhysicalSound_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_PhysicalSound_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PhysicalSound_C", "ReceiveEndPlay");

	Params::B_PhysicalSound_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}
