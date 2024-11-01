#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_FlyingEye

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_FlyingEye.B_FlyingEye_C
// 0x0058 (0x0370 - 0x0318)
class AB_FlyingEye_C final : public APawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SK_FlyingEye;                                      // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CommunicationSound;                                // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFloatingPawnMovement*                  FloatingPawnMovement;                              // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AB_PlayerState_C*                       OwningPlayerState;                                 // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  OwningControlledPawn;                              // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 OwningControllingProp;                             // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UB_FlyingEyeSkill_C*                    Skill;                                             // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DestroyEye();
	void ExecuteUbergraph_B_FlyingEye(int32 EntryPoint);
	void InitializeRules();
	void OnOwnerDestroyed(class AActor* DestroyedActor);
	void OnOwnerTakeAnyDamageEvent(class AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_FlyingEye_C">();
	}
	static class AB_FlyingEye_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_FlyingEye_C>();
	}
};
static_assert(alignof(AB_FlyingEye_C) == 0x000008, "Wrong alignment on AB_FlyingEye_C");
static_assert(sizeof(AB_FlyingEye_C) == 0x000370, "Wrong size on AB_FlyingEye_C");
static_assert(offsetof(AB_FlyingEye_C, UberGraphFrame) == 0x000318, "Member 'AB_FlyingEye_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_FlyingEye_C, SK_FlyingEye) == 0x000320, "Member 'AB_FlyingEye_C::SK_FlyingEye' has a wrong offset!");
static_assert(offsetof(AB_FlyingEye_C, Camera) == 0x000328, "Member 'AB_FlyingEye_C::Camera' has a wrong offset!");
static_assert(offsetof(AB_FlyingEye_C, CommunicationSound) == 0x000330, "Member 'AB_FlyingEye_C::CommunicationSound' has a wrong offset!");
static_assert(offsetof(AB_FlyingEye_C, SpringArm) == 0x000338, "Member 'AB_FlyingEye_C::SpringArm' has a wrong offset!");
static_assert(offsetof(AB_FlyingEye_C, Sphere) == 0x000340, "Member 'AB_FlyingEye_C::Sphere' has a wrong offset!");
static_assert(offsetof(AB_FlyingEye_C, FloatingPawnMovement) == 0x000348, "Member 'AB_FlyingEye_C::FloatingPawnMovement' has a wrong offset!");
static_assert(offsetof(AB_FlyingEye_C, OwningPlayerState) == 0x000350, "Member 'AB_FlyingEye_C::OwningPlayerState' has a wrong offset!");
static_assert(offsetof(AB_FlyingEye_C, OwningControlledPawn) == 0x000358, "Member 'AB_FlyingEye_C::OwningControlledPawn' has a wrong offset!");
static_assert(offsetof(AB_FlyingEye_C, OwningControllingProp) == 0x000360, "Member 'AB_FlyingEye_C::OwningControllingProp' has a wrong offset!");
static_assert(offsetof(AB_FlyingEye_C, Skill) == 0x000368, "Member 'AB_FlyingEye_C::Skill' has a wrong offset!");

}

