#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MeleeAttack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_MeleeAttack.B_MeleeAttack_C
// 0x0068 (0x02F8 - 0x0290)
class AB_MeleeAttack_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cone;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Damage;                                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Force;                                             // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Scale;                                             // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         HitActors;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UPrimitiveComponent*>            HitComponent;                                      // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        HitSoundVolumeMultiplier;                          // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddHitActor(class AActor* Actor);
	void AddHitComponent(class UPrimitiveComponent* Component);
	void BndEvt__Cone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor_0, class UPrimitiveComponent* OtherComp_0, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_B_MeleeAttack(int32 EntryPoint);
	void HandleHit(class AActor* OtherActor_0, class UPrimitiveComponent* OtherComp_0);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MeleeAttack_C">();
	}
	static class AB_MeleeAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_MeleeAttack_C>();
	}
};
static_assert(alignof(AB_MeleeAttack_C) == 0x000008, "Wrong alignment on AB_MeleeAttack_C");
static_assert(sizeof(AB_MeleeAttack_C) == 0x0002F8, "Wrong size on AB_MeleeAttack_C");
static_assert(offsetof(AB_MeleeAttack_C, UberGraphFrame) == 0x000290, "Member 'AB_MeleeAttack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_MeleeAttack_C, Cone) == 0x000298, "Member 'AB_MeleeAttack_C::Cone' has a wrong offset!");
static_assert(offsetof(AB_MeleeAttack_C, DefaultSceneRoot) == 0x0002A0, "Member 'AB_MeleeAttack_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_MeleeAttack_C, Damage) == 0x0002A8, "Member 'AB_MeleeAttack_C::Damage' has a wrong offset!");
static_assert(offsetof(AB_MeleeAttack_C, Force) == 0x0002B0, "Member 'AB_MeleeAttack_C::Force' has a wrong offset!");
static_assert(offsetof(AB_MeleeAttack_C, Scale) == 0x0002B8, "Member 'AB_MeleeAttack_C::Scale' has a wrong offset!");
static_assert(offsetof(AB_MeleeAttack_C, OtherActor) == 0x0002C0, "Member 'AB_MeleeAttack_C::OtherActor' has a wrong offset!");
static_assert(offsetof(AB_MeleeAttack_C, OtherComp) == 0x0002C8, "Member 'AB_MeleeAttack_C::OtherComp' has a wrong offset!");
static_assert(offsetof(AB_MeleeAttack_C, HitActors) == 0x0002D0, "Member 'AB_MeleeAttack_C::HitActors' has a wrong offset!");
static_assert(offsetof(AB_MeleeAttack_C, HitComponent) == 0x0002E0, "Member 'AB_MeleeAttack_C::HitComponent' has a wrong offset!");
static_assert(offsetof(AB_MeleeAttack_C, HitSoundVolumeMultiplier) == 0x0002F0, "Member 'AB_MeleeAttack_C::HitSoundVolumeMultiplier' has a wrong offset!");

}

