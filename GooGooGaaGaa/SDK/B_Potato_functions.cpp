#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Potato

#include "Basic.hpp"

#include "B_Potato_classes.hpp"
#include "B_Potato_parameters.hpp"


namespace SDK
{

// Function B_Potato.B_Potato_C.AddImpulseToHitComponent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::AddImpulseToHitComponent(class UPrimitiveComponent* HitComponent, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "AddImpulseToHitComponent");

	Params::B_Potato_C_AddImpulseToHitComponent Parms{};

	Parms.HitComponent = HitComponent;
	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.AddScoreStats
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_Potato_C::AddScoreStats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "AddScoreStats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Potato.B_Potato_C.ApplyPointDamage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           HitActor_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitFromDirection                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::ApplyPointDamage(class AActor* HitActor_0, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "ApplyPointDamage");

	Params::B_Potato_C_ApplyPointDamage Parms{};

	Parms.HitActor_0 = HitActor_0;
	Parms.HitFromDirection = std::move(HitFromDirection);
	Parms.HitInfo = std::move(HitInfo);
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.BeginPlaySetup
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Potato_C::BeginPlaySetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "BeginPlaySetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Potato.B_Potato_C.DestroyIfHPIsZeroOrWitchHit
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  HitAngle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::DestroyIfHPIsZeroOrWitchHit(double HitAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "DestroyIfHPIsZeroOrWitchHit");

	Params::B_Potato_C_DestroyIfHPIsZeroOrWitchHit Parms{};

	Parms.HitAngle = HitAngle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.ExecuteUbergraph_B_Potato
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::ExecuteUbergraph_B_Potato(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "ExecuteUbergraph_B_Potato");

	Params::B_Potato_C_ExecuteUbergraph_B_Potato Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.GetRippleEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*                   RippleEffectNiagara                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::GetRippleEffect(class UNiagaraSystem** RippleEffectNiagara)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "GetRippleEffect");

	Params::B_Potato_C_GetRippleEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RippleEffectNiagara != nullptr)
		*RippleEffectNiagara = Parms.RippleEffectNiagara;
}


// Function B_Potato.B_Potato_C.GetRippleScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Scale                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::GetRippleScale(struct FVector* Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "GetRippleScale");

	Params::B_Potato_C_GetRippleScale Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);
}


// Function B_Potato.B_Potato_C.GetSplashEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*                   SplashEffectNiagara                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::GetSplashEffect(class UNiagaraSystem** SplashEffectNiagara)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "GetSplashEffect");

	Params::B_Potato_C_GetSplashEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SplashEffectNiagara != nullptr)
		*SplashEffectNiagara = Parms.SplashEffectNiagara;
}


// Function B_Potato.B_Potato_C.GetSplashScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Scale                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::GetSplashScale(struct FVector* Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "GetSplashScale");

	Params::B_Potato_C_GetSplashScale Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);
}


// Function B_Potato.B_Potato_C.GetSplashSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue*                        Sound                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::GetSplashSound(class USoundCue** Sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "GetSplashSound");

	Params::B_Potato_C_GetSplashSound Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Sound != nullptr)
		*Sound = Parms.Sound;
}


// Function B_Potato.B_Potato_C.HandleHit
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::HandleHit(const struct FVector& HitNormal, class AActor* HitActor_0, const struct FHitResult& HitInfo, class UPrimitiveComponent* HitComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "HandleHit");

	Params::B_Potato_C_HandleHit Parms{};

	Parms.HitNormal = std::move(HitNormal);
	Parms.HitActor_0 = HitActor_0;
	Parms.HitInfo = std::move(HitInfo);
	Parms.HitComponent = HitComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.HighStaminaTearUp
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_Potato_C::HighStaminaTearUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "HighStaminaTearUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Potato.B_Potato_C.IncrementLifeSpanTimer
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_Potato_C::IncrementLifeSpanTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "IncrementLifeSpanTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Potato.B_Potato_C.InitializeRules
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_Potato_C::InitializeRules()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "InitializeRules");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Potato.B_Potato_C.LowStaminaTearUp
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Stamina_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::LowStaminaTearUp(double Stamina_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "LowStaminaTearUp");

	Params::B_Potato_C_LowStaminaTearUp Parms{};

	Parms.Stamina_0 = Stamina_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.Play Destroy Effects Multi
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::Play_Destroy_Effects_Multi(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "Play Destroy Effects Multi");

	Params::B_Potato_C_Play_Destroy_Effects_Multi Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.PlayDestroyEffects
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::PlayDestroyEffects(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "PlayDestroyEffects");

	Params::B_Potato_C_PlayDestroyEffects Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Potato_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Potato.B_Potato_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Potato_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Potato.B_Potato_C.ReceiveHit
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

void AB_Potato_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "ReceiveHit");

	Params::B_Potato_C_ReceiveHit Parms{};

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


// Function B_Potato.B_Potato_C.RotateMesh
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Potato_C::RotateMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "RotateMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Potato.B_Potato_C.SetNewValuesForTearUp
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       NewTransform_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           NewOwner_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            NewInstigator_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::SetNewValuesForTearUp(const struct FTransform& NewTransform_0, class AActor* NewOwner_0, class APawn* NewInstigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "SetNewValuesForTearUp");

	Params::B_Potato_C_SetNewValuesForTearUp Parms{};

	Parms.NewTransform_0 = std::move(NewTransform_0);
	Parms.NewOwner_0 = NewOwner_0;
	Parms.NewInstigator_0 = NewInstigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.TearDown
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_Potato_C::TearDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "TearDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Potato.B_Potato_C.TearDownMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Potato_C::TearDownMulticast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "TearDownMulticast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Potato.B_Potato_C.TearDownPoolObject
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Potato_C::TearDownPoolObject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "TearDownPoolObject");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Potato.B_Potato_C.TearUp
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::TearUp(const struct FTransform& SpawnTransform, class AActor* Owner_0, class APawn* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "TearUp");

	Params::B_Potato_C_TearUp Parms{};

	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.Owner_0 = Owner_0;
	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.TearUpByStamina
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Stamina_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::TearUpByStamina(double Stamina_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "TearUpByStamina");

	Params::B_Potato_C_TearUpByStamina Parms{};

	Parms.Stamina_0 = Stamina_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.TearUpMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::TearUpMulticast(const struct FTransform& SpawnTransform, class AActor* Owner_0, class APawn* Instigator_0, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "TearUpMulticast");

	Params::B_Potato_C_TearUpMulticast Parms{};

	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.Owner_0 = Owner_0;
	Parms.Instigator_0 = Instigator_0;
	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.TearUpPoolObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_Potato_C::TearUpPoolObject(const struct FTransform& SpawnTransform, class AActor* Owner_0, class APawn* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "TearUpPoolObject");

	Params::B_Potato_C_TearUpPoolObject Parms{};

	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.Owner_0 = Owner_0;
	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Potato.B_Potato_C.UnhidePotatoMesh
// (BlueprintCallable, BlueprintEvent)

void AB_Potato_C::UnhidePotatoMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "UnhidePotatoMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Potato.B_Potato_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Potato_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Potato_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

