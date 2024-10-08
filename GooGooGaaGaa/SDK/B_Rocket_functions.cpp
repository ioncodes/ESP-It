#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Rocket

#include "Basic.hpp"

#include "B_Rocket_classes.hpp"
#include "B_Rocket_parameters.hpp"


namespace SDK
{

// Function B_Rocket.B_Rocket_C.StartFuse
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Rocket_C::StartFuse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Rocket_C", "StartFuse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Rocket.B_Rocket_C.ApplyExplosion
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Rocket_C::ApplyExplosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Rocket_C", "ApplyExplosion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Rocket.B_Rocket_C.PushRocket
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_Rocket_C::PushRocket()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Rocket_C", "PushRocket");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Rocket.B_Rocket_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Rocket_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Rocket_C", "ReceiveTick");

	Params::B_Rocket_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Rocket.B_Rocket_C.ExecuteUbergraph_B_Rocket
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Rocket_C::ExecuteUbergraph_B_Rocket(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Rocket_C", "ExecuteUbergraph_B_Rocket");

	Params::B_Rocket_C_ExecuteUbergraph_B_Rocket Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

