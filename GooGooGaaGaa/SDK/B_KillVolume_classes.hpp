#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_KillVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_KillVolume.B_KillVolume_C
// 0x0018 (0x02B0 - 0x0298)
class AB_KillVolume_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_B_KillVolume(int32 EntryPoint);
	void Handle_Kill_Hunter(class AActor* Actor);
	void HandleKillActor(class AActor* Actor);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_KillVolume_C">();
	}
	static class AB_KillVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_KillVolume_C>();
	}
};
static_assert(alignof(AB_KillVolume_C) == 0x000008, "Wrong alignment on AB_KillVolume_C");
static_assert(sizeof(AB_KillVolume_C) == 0x0002B0, "Wrong size on AB_KillVolume_C");
static_assert(offsetof(AB_KillVolume_C, UberGraphFrame) == 0x000298, "Member 'AB_KillVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_KillVolume_C, Box) == 0x0002A0, "Member 'AB_KillVolume_C::Box' has a wrong offset!");
static_assert(offsetof(AB_KillVolume_C, DefaultSceneRoot) == 0x0002A8, "Member 'AB_KillVolume_C::DefaultSceneRoot' has a wrong offset!");

}
