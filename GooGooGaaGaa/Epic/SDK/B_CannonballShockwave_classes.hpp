#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CannonballShockwave

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CannonballShockwave.B_CannonballShockwave_C
// 0x0058 (0x02E8 - 0x0290)
class AB_CannonballShockwave_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ShockWaveMaterialInstance;                         // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            ExplodeCurve;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            FadeCurve;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ShockwaveSize;                                     // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        CurrentActiveTime;                                 // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         HitProps;                                          // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                        Strength;                                          // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__B_CannonballShockwave_Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_B_CannonballShockwave(int32 EntryPoint);
	void HandleFadeAndSize();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CannonballShockwave_C">();
	}
	static class AB_CannonballShockwave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CannonballShockwave_C>();
	}
};
static_assert(alignof(AB_CannonballShockwave_C) == 0x000008, "Wrong alignment on AB_CannonballShockwave_C");
static_assert(sizeof(AB_CannonballShockwave_C) == 0x0002E8, "Wrong size on AB_CannonballShockwave_C");
static_assert(offsetof(AB_CannonballShockwave_C, UberGraphFrame) == 0x000290, "Member 'AB_CannonballShockwave_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_CannonballShockwave_C, Sphere) == 0x000298, "Member 'AB_CannonballShockwave_C::Sphere' has a wrong offset!");
static_assert(offsetof(AB_CannonballShockwave_C, DefaultSceneRoot) == 0x0002A0, "Member 'AB_CannonballShockwave_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_CannonballShockwave_C, ShockWaveMaterialInstance) == 0x0002A8, "Member 'AB_CannonballShockwave_C::ShockWaveMaterialInstance' has a wrong offset!");
static_assert(offsetof(AB_CannonballShockwave_C, ExplodeCurve) == 0x0002B0, "Member 'AB_CannonballShockwave_C::ExplodeCurve' has a wrong offset!");
static_assert(offsetof(AB_CannonballShockwave_C, FadeCurve) == 0x0002B8, "Member 'AB_CannonballShockwave_C::FadeCurve' has a wrong offset!");
static_assert(offsetof(AB_CannonballShockwave_C, ShockwaveSize) == 0x0002C0, "Member 'AB_CannonballShockwave_C::ShockwaveSize' has a wrong offset!");
static_assert(offsetof(AB_CannonballShockwave_C, CurrentActiveTime) == 0x0002C8, "Member 'AB_CannonballShockwave_C::CurrentActiveTime' has a wrong offset!");
static_assert(offsetof(AB_CannonballShockwave_C, HitProps) == 0x0002D0, "Member 'AB_CannonballShockwave_C::HitProps' has a wrong offset!");
static_assert(offsetof(AB_CannonballShockwave_C, Strength) == 0x0002E0, "Member 'AB_CannonballShockwave_C::Strength' has a wrong offset!");

}
