#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_RottenEggInteractionActor

#include "Basic.hpp"

#include "B_RottenEggInteractionActor_classes.hpp"
#include "B_RottenEggInteractionActor_parameters.hpp"


namespace SDK
{

// Function B_RottenEggInteractionActor.B_RottenEggInteractionActor_C.Act
// (Public, BlueprintCallable, BlueprintEvent)

void AB_RottenEggInteractionActor_C::Act()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RottenEggInteractionActor_C", "Act");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_RottenEggInteractionActor.B_RottenEggInteractionActor_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_RottenEggInteractionActor_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RottenEggInteractionActor_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_RottenEggInteractionActor_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_RottenEggInteractionActor.B_RottenEggInteractionActor_C.ExecuteUbergraph_B_RottenEggInteractionActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_RottenEggInteractionActor_C::ExecuteUbergraph_B_RottenEggInteractionActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RottenEggInteractionActor_C", "ExecuteUbergraph_B_RottenEggInteractionActor");

	Params::B_RottenEggInteractionActor_C_ExecuteUbergraph_B_RottenEggInteractionActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_RottenEggInteractionActor.B_RottenEggInteractionActor_C.LiftChicken
// (BlueprintCallable, BlueprintEvent)

void AB_RottenEggInteractionActor_C::LiftChicken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RottenEggInteractionActor_C", "LiftChicken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_RottenEggInteractionActor.B_RottenEggInteractionActor_C.React
// (Public, BlueprintCallable, BlueprintEvent)

void AB_RottenEggInteractionActor_C::React()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RottenEggInteractionActor_C", "React");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_RottenEggInteractionActor.B_RottenEggInteractionActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_RottenEggInteractionActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RottenEggInteractionActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_RottenEggInteractionActor.B_RottenEggInteractionActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_RottenEggInteractionActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RottenEggInteractionActor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
