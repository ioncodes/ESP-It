#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ExplosionProp

#include "Basic.hpp"

#include "B_ExplosionProp_classes.hpp"
#include "B_ExplosionProp_parameters.hpp"


namespace SDK
{

// Function B_ExplosionProp.B_ExplosionProp_C.InitDissolve
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ExplosionProp_C::InitDissolve()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosionProp_C", "InitDissolve");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosionProp.B_ExplosionProp_C.ApplyExplosion
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_ExplosionProp_C::ApplyExplosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosionProp_C", "ApplyExplosion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosionProp.B_ExplosionProp_C.ActivateActionProp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Override                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosionProp_C::ActivateActionProp(bool Override)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosionProp_C", "ActivateActionProp");

	Params::B_ExplosionProp_C_ActivateActionProp Parms{};

	Parms.Override = Override;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ExplosionProp.B_ExplosionProp_C.StartExplosion
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       ExplosionTransform                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosionProp_C::StartExplosion(const struct FTransform& ExplosionTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosionProp_C", "StartExplosion");

	Params::B_ExplosionProp_C_StartExplosion Parms{};

	Parms.ExplosionTransform = std::move(ExplosionTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ExplosionProp.B_ExplosionProp_C.Explode
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ExplosionProp_C::Explode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosionProp_C", "Explode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosionProp.B_ExplosionProp_C.StartFuse
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_ExplosionProp_C::StartFuse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosionProp_C", "StartFuse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosionProp.B_ExplosionProp_C.ExplodeMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       ExplosionTransform                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosionProp_C::ExplodeMulti(const struct FTransform& ExplosionTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosionProp_C", "ExplodeMulti");

	Params::B_ExplosionProp_C_ExplodeMulti Parms{};

	Parms.ExplosionTransform = std::move(ExplosionTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ExplosionProp.B_ExplosionProp_C.StartFuseMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_ExplosionProp_C::StartFuseMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosionProp_C", "StartFuseMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosionProp.B_ExplosionProp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_ExplosionProp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosionProp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ExplosionProp.B_ExplosionProp_C.ExecuteUbergraph_B_ExplosionProp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosionProp_C::ExecuteUbergraph_B_ExplosionProp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ExplosionProp_C", "ExecuteUbergraph_B_ExplosionProp");

	Params::B_ExplosionProp_C_ExecuteUbergraph_B_ExplosionProp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
