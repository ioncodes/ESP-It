#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CreativePropPawnPhysics

#include "Basic.hpp"

#include "B_CreativePropPawnPhysics_classes.hpp"
#include "B_CreativePropPawnPhysics_parameters.hpp"


namespace SDK
{

// Function B_CreativePropPawnPhysics.B_CreativePropPawnPhysics_C.ClientPossessed
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void AB_CreativePropPawnPhysics_C::ClientPossessed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativePropPawnPhysics_C", "ClientPossessed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CreativePropPawnPhysics.B_CreativePropPawnPhysics_C.ExecuteUbergraph_B_CreativePropPawnPhysics
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CreativePropPawnPhysics_C::ExecuteUbergraph_B_CreativePropPawnPhysics(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativePropPawnPhysics_C", "ExecuteUbergraph_B_CreativePropPawnPhysics");

	Params::B_CreativePropPawnPhysics_C_ExecuteUbergraph_B_CreativePropPawnPhysics Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CreativePropPawnPhysics.B_CreativePropPawnPhysics_C.ReceiveUnpossessed
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      OldController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_CreativePropPawnPhysics_C::ReceiveUnpossessed(class AController* OldController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativePropPawnPhysics_C", "ReceiveUnpossessed");

	Params::B_CreativePropPawnPhysics_C_ReceiveUnpossessed Parms{};

	Parms.OldController = OldController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CreativePropPawnPhysics.B_CreativePropPawnPhysics_C.SetCameraSettings
// (Public, BlueprintCallable, BlueprintEvent)

void AB_CreativePropPawnPhysics_C::SetCameraSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativePropPawnPhysics_C", "SetCameraSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CreativePropPawnPhysics.B_CreativePropPawnPhysics_C.SetSpringArmProperties
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    FirstPerson                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CreativePropPawnPhysics_C::SetSpringArmProperties(bool FirstPerson)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativePropPawnPhysics_C", "SetSpringArmProperties");

	Params::B_CreativePropPawnPhysics_C_SetSpringArmProperties Parms{};

	Parms.FirstPerson = FirstPerson;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CreativePropPawnPhysics.B_CreativePropPawnPhysics_C.SetupHealthAndMana
// (Public, BlueprintCallable, BlueprintEvent)

void AB_CreativePropPawnPhysics_C::SetupHealthAndMana()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativePropPawnPhysics_C", "SetupHealthAndMana");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CreativePropPawnPhysics.B_CreativePropPawnPhysics_C.SetWitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CreativePropPawnPhysics_C::SetWitch(const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativePropPawnPhysics_C", "SetWitch");

	Params::B_CreativePropPawnPhysics_C_SetWitch Parms{};

	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CreativePropPawnPhysics.B_CreativePropPawnPhysics_C.TickVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void AB_CreativePropPawnPhysics_C::TickVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativePropPawnPhysics_C", "TickVisuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CreativePropPawnPhysics.B_CreativePropPawnPhysics_C.TransformEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSRuntimePropData                LastRuntimePropData                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSRuntimePropData                CurrentRuntimePropData                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CreativePropPawnPhysics_C::TransformEffect(const struct FSRuntimePropData& LastRuntimePropData, const struct FSRuntimePropData& CurrentRuntimePropData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativePropPawnPhysics_C", "TransformEffect");

	Params::B_CreativePropPawnPhysics_C_TransformEffect Parms{};

	Parms.LastRuntimePropData = std::move(LastRuntimePropData);
	Parms.CurrentRuntimePropData = std::move(CurrentRuntimePropData);

	UObject::ProcessEvent(Func, &Parms);
}

}

