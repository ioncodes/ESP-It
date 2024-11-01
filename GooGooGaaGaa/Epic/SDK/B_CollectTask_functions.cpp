#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CollectTask

#include "Basic.hpp"

#include "B_CollectTask_classes.hpp"
#include "B_CollectTask_parameters.hpp"


namespace SDK
{

// Function B_CollectTask.B_CollectTask_C.CheckCompletionConditions
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReadyForCompletion                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CollectTask_C::CheckCompletionConditions(bool* ReadyForCompletion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CollectTask_C", "CheckCompletionConditions");

	Params::B_CollectTask_C_CheckCompletionConditions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ReadyForCompletion != nullptr)
		*ReadyForCompletion = Parms.ReadyForCompletion;
}


// Function B_CollectTask.B_CollectTask_C.InitializeIndividualTaskParameters
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_CollectTask_C::InitializeIndividualTaskParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CollectTask_C", "InitializeIndividualTaskParameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CollectTask.B_CollectTask_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CollectTask_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CollectTask_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CollectTask.B_CollectTask_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CollectTask_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CollectTask_C", "ReceiveTick");

	Params::B_CollectTask_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CollectTask.B_CollectTask_C.SpawnTargets
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_CollectTask_C::SpawnTargets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CollectTask_C", "SpawnTargets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CollectTask.B_CollectTask_C.ExecuteUbergraph_B_CollectTask
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CollectTask_C::ExecuteUbergraph_B_CollectTask(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CollectTask_C", "ExecuteUbergraph_B_CollectTask");

	Params::B_CollectTask_C_ExecuteUbergraph_B_CollectTask Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CollectTask.B_CollectTask_C.CompleteTask
// (Public, BlueprintCallable, BlueprintEvent)

void AB_CollectTask_C::CompleteTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CollectTask_C", "CompleteTask");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CollectTask.B_CollectTask_C.StopTask
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_CollectTask_C::StopTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CollectTask_C", "StopTask");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CollectTask.B_CollectTask_C.Initialize
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_CollectTask_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CollectTask_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CollectTask.B_CollectTask_C.BndEvt__TaskArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CollectTask_C::BndEvt__TaskArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CollectTask_C", "BndEvt__TaskArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	Params::B_CollectTask_C_BndEvt__TaskArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

