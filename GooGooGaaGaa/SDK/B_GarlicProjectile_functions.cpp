#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_GarlicProjectile

#include "Basic.hpp"

#include "B_GarlicProjectile_classes.hpp"
#include "B_GarlicProjectile_parameters.hpp"


namespace SDK
{

// Function B_GarlicProjectile.B_GarlicProjectile_C.AttachGarlicClove
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AB_GarlicProjectile_C::AttachGarlicClove(class USceneComponent* Parent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "AttachGarlicClove");

	Params::B_GarlicProjectile_C_AttachGarlicClove Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.ExecuteUbergraph_B_GarlicProjectile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_GarlicProjectile_C::ExecuteUbergraph_B_GarlicProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "ExecuteUbergraph_B_GarlicProjectile");

	Params::B_GarlicProjectile_C_ExecuteUbergraph_B_GarlicProjectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.IncrementLifeSpanTimer
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_GarlicProjectile_C::IncrementLifeSpanTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "IncrementLifeSpanTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.PlayDestroyEffects
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_GarlicProjectile_C::PlayDestroyEffects(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "PlayDestroyEffects");

	Params::B_GarlicProjectile_C_PlayDestroyEffects Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.PlayDestroyEffectsMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_GarlicProjectile_C::PlayDestroyEffectsMulti(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "PlayDestroyEffectsMulti");

	Params::B_GarlicProjectile_C_PlayDestroyEffectsMulti Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_GarlicProjectile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_GarlicProjectile_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "ReceiveHit");

	Params::B_GarlicProjectile_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.TearDown
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_GarlicProjectile_C::TearDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "TearDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.TearDownMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_GarlicProjectile_C::TearDownMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "TearDownMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.TearDownPoolObject
// (Public, BlueprintCallable, BlueprintEvent)

void AB_GarlicProjectile_C::TearDownPoolObject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "TearDownPoolObject");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.TearUp
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_GarlicProjectile_C::TearUp(const struct FTransform& SpawnTransform, class AActor* Param_Owner, class APawn* Param_Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "TearUp");

	Params::B_GarlicProjectile_C_TearUp Parms{};

	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.Param_Owner = Param_Owner;
	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.TearUpMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_GarlicProjectile_C::TearUpMulti(const struct FTransform& Transform, class AActor* Param_Owner, class APawn* Param_Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "TearUpMulti");

	Params::B_GarlicProjectile_C_TearUpMulti Parms{};

	Parms.Transform = std::move(Transform);
	Parms.Param_Owner = Param_Owner;
	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.TearUpPoolObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_GarlicProjectile_C::TearUpPoolObject(const struct FTransform& SpawnTransform, class AActor* Param_Owner, class APawn* Param_Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "TearUpPoolObject");

	Params::B_GarlicProjectile_C_TearUpPoolObject Parms{};

	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.Param_Owner = Param_Owner;
	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_GarlicProjectile.B_GarlicProjectile_C.UpdateVelocityVector
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_GarlicProjectile_C::UpdateVelocityVector()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GarlicProjectile_C", "UpdateVelocityVector");

	UObject::ProcessEvent(Func, nullptr);
}

}
