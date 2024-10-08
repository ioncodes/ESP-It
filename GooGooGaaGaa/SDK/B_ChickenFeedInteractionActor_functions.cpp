#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ChickenFeedInteractionActor

#include "Basic.hpp"

#include "B_ChickenFeedInteractionActor_classes.hpp"
#include "B_ChickenFeedInteractionActor_parameters.hpp"


namespace SDK
{

// Function B_ChickenFeedInteractionActor.B_ChickenFeedInteractionActor_C.Act
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ChickenFeedInteractionActor_C::Act()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ChickenFeedInteractionActor_C", "Act");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ChickenFeedInteractionActor.B_ChickenFeedInteractionActor_C.AddBlockedLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          BlockedLocation                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ChickenFeedInteractionActor_C::AddBlockedLocation(const struct FVector& BlockedLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ChickenFeedInteractionActor_C", "AddBlockedLocation");

	Params::B_ChickenFeedInteractionActor_C_AddBlockedLocation Parms{};

	Parms.BlockedLocation = std::move(BlockedLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ChickenFeedInteractionActor.B_ChickenFeedInteractionActor_C.ExecuteUbergraph_B_ChickenFeedInteractionActor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ChickenFeedInteractionActor_C::ExecuteUbergraph_B_ChickenFeedInteractionActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ChickenFeedInteractionActor_C", "ExecuteUbergraph_B_ChickenFeedInteractionActor");

	Params::B_ChickenFeedInteractionActor_C_ExecuteUbergraph_B_ChickenFeedInteractionActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ChickenFeedInteractionActor.B_ChickenFeedInteractionActor_C.InitializePossibleChickenLocations
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_ChickenFeedInteractionActor_C::InitializePossibleChickenLocations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ChickenFeedInteractionActor_C", "InitializePossibleChickenLocations");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ChickenFeedInteractionActor.B_ChickenFeedInteractionActor_C.PlaceChicken
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ChickenFeedInteractionActor_C::PlaceChicken(const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ChickenFeedInteractionActor_C", "PlaceChicken");

	Params::B_ChickenFeedInteractionActor_C_PlaceChicken Parms{};

	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ChickenFeedInteractionActor.B_ChickenFeedInteractionActor_C.React
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ChickenFeedInteractionActor_C::React()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ChickenFeedInteractionActor_C", "React");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ChickenFeedInteractionActor.B_ChickenFeedInteractionActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_ChickenFeedInteractionActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ChickenFeedInteractionActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ChickenFeedInteractionActor.B_ChickenFeedInteractionActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ChickenFeedInteractionActor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ChickenFeedInteractionActor_C", "ReceiveTick");

	Params::B_ChickenFeedInteractionActor_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ChickenFeedInteractionActor.B_ChickenFeedInteractionActor_C.Toggle Chicken Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Set_To_Idle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ChickenFeedInteractionActor_C::Toggle_Chicken_Audio(bool Set_To_Idle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ChickenFeedInteractionActor_C", "Toggle Chicken Audio");

	Params::B_ChickenFeedInteractionActor_C_Toggle_Chicken_Audio Parms{};

	Parms.Set_To_Idle = Set_To_Idle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ChickenFeedInteractionActor.B_ChickenFeedInteractionActor_C.TryToAddPossibleChickenLocation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBoxComponent*                    PositionBox                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AB_ChickenFeedInteractionActor_C::TryToAddPossibleChickenLocation(class UBoxComponent* PositionBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ChickenFeedInteractionActor_C", "TryToAddPossibleChickenLocation");

	Params::B_ChickenFeedInteractionActor_C_TryToAddPossibleChickenLocation Parms{};

	Parms.PositionBox = PositionBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ChickenFeedInteractionActor.B_ChickenFeedInteractionActor_C.TryToPlaceChickens
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ChickenFeedInteractionActor_C::TryToPlaceChickens()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ChickenFeedInteractionActor_C", "TryToPlaceChickens");

	UObject::ProcessEvent(Func, nullptr);
}

}

