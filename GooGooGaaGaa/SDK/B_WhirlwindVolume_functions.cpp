#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WhirlwindVolume

#include "Basic.hpp"

#include "B_WhirlwindVolume_classes.hpp"
#include "B_WhirlwindVolume_parameters.hpp"


namespace SDK
{

// Function B_WhirlwindVolume.B_WhirlwindVolume_C.BndEvt__B_WhirlwindVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_WhirlwindVolume_C::BndEvt__B_WhirlwindVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_WhirlwindVolume_C", "BndEvt__B_WhirlwindVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_WhirlwindVolume_C_BndEvt__B_WhirlwindVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_WhirlwindVolume.B_WhirlwindVolume_C.BndEvt__B_WhirlwindVolume_InnerSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_WhirlwindVolume_C::BndEvt__B_WhirlwindVolume_InnerSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_WhirlwindVolume_C", "BndEvt__B_WhirlwindVolume_InnerSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_WhirlwindVolume_C_BndEvt__B_WhirlwindVolume_InnerSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_WhirlwindVolume.B_WhirlwindVolume_C.ExecuteUbergraph_B_WhirlwindVolume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_WhirlwindVolume_C::ExecuteUbergraph_B_WhirlwindVolume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_WhirlwindVolume_C", "ExecuteUbergraph_B_WhirlwindVolume");

	Params::B_WhirlwindVolume_C_ExecuteUbergraph_B_WhirlwindVolume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_WhirlwindVolume.B_WhirlwindVolume_C.HandleStartWhirling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_WhirlwindVolume_C::HandleStartWhirling(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_WhirlwindVolume_C", "HandleStartWhirling");

	Params::B_WhirlwindVolume_C_HandleStartWhirling Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_WhirlwindVolume.B_WhirlwindVolume_C.HandleStopWhirling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_WhirlwindVolume_C::HandleStopWhirling(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_WhirlwindVolume_C", "HandleStopWhirling");

	Params::B_WhirlwindVolume_C_HandleStopWhirling Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_WhirlwindVolume.B_WhirlwindVolume_C.PropTransformingIntoWitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_StaticMeshProp_C*              Prop                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AB_Witch_C*                       Witch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_WhirlwindVolume_C::PropTransformingIntoWitch(class AB_StaticMeshProp_C* Prop, class AB_Witch_C* Witch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_WhirlwindVolume_C", "PropTransformingIntoWitch");

	Params::B_WhirlwindVolume_C_PropTransformingIntoWitch Parms{};

	Parms.Prop = Prop;
	Parms.Witch = Witch;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_WhirlwindVolume.B_WhirlwindVolume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_WhirlwindVolume_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_WhirlwindVolume_C", "ReceiveTick");

	Params::B_WhirlwindVolume_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_WhirlwindVolume.B_WhirlwindVolume_C.StartWhirlingMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_WhirlwindVolume_C::StartWhirlingMulti(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_WhirlwindVolume_C", "StartWhirlingMulti");

	Params::B_WhirlwindVolume_C_StartWhirlingMulti Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_WhirlwindVolume.B_WhirlwindVolume_C.StopWhirlingMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_WhirlwindVolume_C::StopWhirlingMulti(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_WhirlwindVolume_C", "StopWhirlingMulti");

	Params::B_WhirlwindVolume_C_StopWhirlingMulti Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_WhirlwindVolume.B_WhirlwindVolume_C.TickActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_WhirlwindVolume_C::TickActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_WhirlwindVolume_C", "TickActor");

	Params::B_WhirlwindVolume_C_TickActor Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_WhirlwindVolume.B_WhirlwindVolume_C.TickFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_WhirlwindVolume_C::TickFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_WhirlwindVolume_C", "TickFunction");

	UObject::ProcessEvent(Func, nullptr);
}

}

