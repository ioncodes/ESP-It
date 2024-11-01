#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SpringPad

#include "Basic.hpp"

#include "B_SpringPad_classes.hpp"
#include "B_SpringPad_parameters.hpp"


namespace SDK
{

// Function B_SpringPad.B_SpringPad_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              SleepingComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature");

	Params::B_SpringPad_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature Parms{};

	Parms.SleepingComponent = SleepingComponent;
	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              WakingComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature");

	Params::B_SpringPad_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature Parms{};

	Parms.WakingComponent = WakingComponent;
	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_SpringPad_C::BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_SpringPad_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.ExecuteUbergraph_B_SpringPad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::ExecuteUbergraph_B_SpringPad(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "ExecuteUbergraph_B_SpringPad");

	Params::B_SpringPad_C_ExecuteUbergraph_B_SpringPad Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.FireMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    HitByPotato_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::FireMulticast(class AActor* Actor, class UPrimitiveComponent* Component, bool HitByPotato_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "FireMulticast");

	Params::B_SpringPad_C_FireMulticast Parms{};

	Parms.Actor = Actor;
	Parms.Component = Component;
	Parms.HitByPotato_0 = HitByPotato_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.HandleSpringPadTriggered
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TriggerActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              TriggerComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::HandleSpringPadTriggered(class AActor* TriggerActor, class UPrimitiveComponent* TriggerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "HandleSpringPadTriggered");

	Params::B_SpringPad_C_HandleSpringPadTriggered Parms{};

	Parms.TriggerActor = TriggerActor;
	Parms.TriggerComponent = TriggerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.LogicAfterFire
// (BlueprintCallable, BlueprintEvent)

void AB_SpringPad_C::LogicAfterFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "LogicAfterFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SpringPad.B_SpringPad_C.MoveTriggerActorAndPlaySound
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TriggerActor                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              TriggerComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    HitByPotato_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::MoveTriggerActorAndPlaySound(const class AActor* TriggerActor, class UPrimitiveComponent* TriggerComponent, bool HitByPotato_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "MoveTriggerActorAndPlaySound");

	Params::B_SpringPad_C_MoveTriggerActorAndPlaySound Parms{};

	Parms.TriggerActor = TriggerActor;
	Parms.TriggerComponent = TriggerComponent;
	Parms.HitByPotato_0 = HitByPotato_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.OnBlendOut_716B379C4EDA7279FD1A55B5BEB22BED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::OnBlendOut_716B379C4EDA7279FD1A55B5BEB22BED(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "OnBlendOut_716B379C4EDA7279FD1A55B5BEB22BED");

	Params::B_SpringPad_C_OnBlendOut_716B379C4EDA7279FD1A55B5BEB22BED Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.OnBlendOut_D927F1014627CF8392DB37AFF3C1C437
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::OnBlendOut_D927F1014627CF8392DB37AFF3C1C437(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "OnBlendOut_D927F1014627CF8392DB37AFF3C1C437");

	Params::B_SpringPad_C_OnBlendOut_D927F1014627CF8392DB37AFF3C1C437 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.OnCompleted_716B379C4EDA7279FD1A55B5BEB22BED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::OnCompleted_716B379C4EDA7279FD1A55B5BEB22BED(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "OnCompleted_716B379C4EDA7279FD1A55B5BEB22BED");

	Params::B_SpringPad_C_OnCompleted_716B379C4EDA7279FD1A55B5BEB22BED Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.OnCompleted_D927F1014627CF8392DB37AFF3C1C437
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::OnCompleted_D927F1014627CF8392DB37AFF3C1C437(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "OnCompleted_D927F1014627CF8392DB37AFF3C1C437");

	Params::B_SpringPad_C_OnCompleted_D927F1014627CF8392DB37AFF3C1C437 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.OnInterrupted_716B379C4EDA7279FD1A55B5BEB22BED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::OnInterrupted_716B379C4EDA7279FD1A55B5BEB22BED(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "OnInterrupted_716B379C4EDA7279FD1A55B5BEB22BED");

	Params::B_SpringPad_C_OnInterrupted_716B379C4EDA7279FD1A55B5BEB22BED Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.OnInterrupted_D927F1014627CF8392DB37AFF3C1C437
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::OnInterrupted_D927F1014627CF8392DB37AFF3C1C437(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "OnInterrupted_D927F1014627CF8392DB37AFF3C1C437");

	Params::B_SpringPad_C_OnInterrupted_D927F1014627CF8392DB37AFF3C1C437 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.OnNotifyBegin_716B379C4EDA7279FD1A55B5BEB22BED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::OnNotifyBegin_716B379C4EDA7279FD1A55B5BEB22BED(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "OnNotifyBegin_716B379C4EDA7279FD1A55B5BEB22BED");

	Params::B_SpringPad_C_OnNotifyBegin_716B379C4EDA7279FD1A55B5BEB22BED Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.OnNotifyBegin_D927F1014627CF8392DB37AFF3C1C437
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::OnNotifyBegin_D927F1014627CF8392DB37AFF3C1C437(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "OnNotifyBegin_D927F1014627CF8392DB37AFF3C1C437");

	Params::B_SpringPad_C_OnNotifyBegin_D927F1014627CF8392DB37AFF3C1C437 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.OnNotifyEnd_716B379C4EDA7279FD1A55B5BEB22BED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::OnNotifyEnd_716B379C4EDA7279FD1A55B5BEB22BED(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "OnNotifyEnd_716B379C4EDA7279FD1A55B5BEB22BED");

	Params::B_SpringPad_C_OnNotifyEnd_716B379C4EDA7279FD1A55B5BEB22BED Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.OnNotifyEnd_D927F1014627CF8392DB37AFF3C1C437
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpringPad_C::OnNotifyEnd_D927F1014627CF8392DB37AFF3C1C437(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "OnNotifyEnd_D927F1014627CF8392DB37AFF3C1C437");

	Params::B_SpringPad_C_OnNotifyEnd_D927F1014627CF8392DB37AFF3C1C437 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SpringPad.B_SpringPad_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_SpringPad_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SpringPad_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

