#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ConfusionWave

#include "Basic.hpp"

#include "B_ConfusionWave_classes.hpp"
#include "B_ConfusionWave_parameters.hpp"


namespace SDK
{

// Function B_ConfusionWave.B_ConfusionWave_C.GetConfuseDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double AB_ConfusionWave_C::GetConfuseDuration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ConfusionWave_C", "GetConfuseDuration");

	Params::B_ConfusionWave_C_GetConfuseDuration Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_ConfusionWave.B_ConfusionWave_C.GetCurrentSphereRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double AB_ConfusionWave_C::GetCurrentSphereRadius()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ConfusionWave_C", "GetCurrentSphereRadius");

	Params::B_ConfusionWave_C_GetCurrentSphereRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_ConfusionWave.B_ConfusionWave_C.HandleFade
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_ConfusionWave_C::HandleFade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ConfusionWave_C", "HandleFade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ConfusionWave.B_ConfusionWave_C.TearUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_ConfusionWave_C::TearUp(const struct FTransform& SpawnTransform, class AActor* Owner_0, class APawn* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ConfusionWave_C", "TearUp");

	Params::B_ConfusionWave_C_TearUp Parms{};

	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.Owner_0 = Owner_0;
	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

