#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HookPull

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_HookPull.B_HookPull_C
// 0x0078 (0x0308 - 0x0290)
class AB_HookPull_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       ImpactSphereCollision;                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UB_FixedUpdate_C*                       B_FixedUpdate;                                     // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HookMesh;                                          // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CollisionComponent;                                // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          StoppedPulling;                                    // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Direction;                                         // 0x02C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             NewEventDispatcher_0;                              // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPrimitiveComponent*                    ParentAttached;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x02F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__B_FixedUpdate_K2Node_ComponentBoundEvent_0_FixedUpdate__DelegateSignature(double DeltaTime);
	void BndEvt__B_HookPull_Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_B_HookPull(int32 EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_HookPull_C">();
	}
	static class AB_HookPull_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_HookPull_C>();
	}
};
static_assert(alignof(AB_HookPull_C) == 0x000008, "Wrong alignment on AB_HookPull_C");
static_assert(sizeof(AB_HookPull_C) == 0x000308, "Wrong size on AB_HookPull_C");
static_assert(offsetof(AB_HookPull_C, UberGraphFrame) == 0x000290, "Member 'AB_HookPull_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_HookPull_C, ImpactSphereCollision) == 0x000298, "Member 'AB_HookPull_C::ImpactSphereCollision' has a wrong offset!");
static_assert(offsetof(AB_HookPull_C, B_FixedUpdate) == 0x0002A0, "Member 'AB_HookPull_C::B_FixedUpdate' has a wrong offset!");
static_assert(offsetof(AB_HookPull_C, HookMesh) == 0x0002A8, "Member 'AB_HookPull_C::HookMesh' has a wrong offset!");
static_assert(offsetof(AB_HookPull_C, CollisionComponent) == 0x0002B0, "Member 'AB_HookPull_C::CollisionComponent' has a wrong offset!");
static_assert(offsetof(AB_HookPull_C, StoppedPulling) == 0x0002B8, "Member 'AB_HookPull_C::StoppedPulling' has a wrong offset!");
static_assert(offsetof(AB_HookPull_C, Direction) == 0x0002C0, "Member 'AB_HookPull_C::Direction' has a wrong offset!");
static_assert(offsetof(AB_HookPull_C, NewEventDispatcher_0) == 0x0002D8, "Member 'AB_HookPull_C::NewEventDispatcher_0' has a wrong offset!");
static_assert(offsetof(AB_HookPull_C, ParentAttached) == 0x0002E8, "Member 'AB_HookPull_C::ParentAttached' has a wrong offset!");
static_assert(offsetof(AB_HookPull_C, StartLocation) == 0x0002F0, "Member 'AB_HookPull_C::StartLocation' has a wrong offset!");

}
