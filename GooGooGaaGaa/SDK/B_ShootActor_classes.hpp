#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ShootActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_TaskTargetActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ShootActor.B_ShootActor_C
// 0x0008 (0x0300 - 0x02F8)
class AB_ShootActor_C : public AB_TaskTargetActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_ShootActor_C;                     // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void CheckIfShot(class AActor* InActor);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_B_ShootActor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ShootActor_C">();
	}
	static class AB_ShootActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ShootActor_C>();
	}
};
static_assert(alignof(AB_ShootActor_C) == 0x000008, "Wrong alignment on AB_ShootActor_C");
static_assert(sizeof(AB_ShootActor_C) == 0x000300, "Wrong size on AB_ShootActor_C");
static_assert(offsetof(AB_ShootActor_C, UberGraphFrame_B_ShootActor_C) == 0x0002F8, "Member 'AB_ShootActor_C::UberGraphFrame_B_ShootActor_C' has a wrong offset!");

}
