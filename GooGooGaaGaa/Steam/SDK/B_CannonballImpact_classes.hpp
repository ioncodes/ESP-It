#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CannonballImpact

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CannonballImpact.B_CannonballImpact_C
// 0x0030 (0x02C0 - 0x0290)
class AB_CannonballImpact_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Damage;                                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Strength;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Size;                                              // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_B_CannonballImpact(int32 EntryPoint);
	void HandleHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp);
	void ReceiveTick(float DeltaSeconds);
	void ServerOnStomped(class APlayerState* PlayerOwner);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CannonballImpact_C">();
	}
	static class AB_CannonballImpact_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CannonballImpact_C>();
	}
};
static_assert(alignof(AB_CannonballImpact_C) == 0x000008, "Wrong alignment on AB_CannonballImpact_C");
static_assert(sizeof(AB_CannonballImpact_C) == 0x0002C0, "Wrong size on AB_CannonballImpact_C");
static_assert(offsetof(AB_CannonballImpact_C, UberGraphFrame) == 0x000290, "Member 'AB_CannonballImpact_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_CannonballImpact_C, Sphere) == 0x000298, "Member 'AB_CannonballImpact_C::Sphere' has a wrong offset!");
static_assert(offsetof(AB_CannonballImpact_C, DefaultSceneRoot) == 0x0002A0, "Member 'AB_CannonballImpact_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_CannonballImpact_C, Damage) == 0x0002A8, "Member 'AB_CannonballImpact_C::Damage' has a wrong offset!");
static_assert(offsetof(AB_CannonballImpact_C, Strength) == 0x0002B0, "Member 'AB_CannonballImpact_C::Strength' has a wrong offset!");
static_assert(offsetof(AB_CannonballImpact_C, Size) == 0x0002B8, "Member 'AB_CannonballImpact_C::Size' has a wrong offset!");

}

