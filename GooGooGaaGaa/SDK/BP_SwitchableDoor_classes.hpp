#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SwitchableDoor

#include "Basic.hpp"

#include "BP_UtilityDoor_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SwitchableDoor.BP_SwitchableDoor_C
// 0x0030 (0x03D0 - 0x03A0)
class ABP_SwitchableDoor_C final : public ABP_UtilityDoor_C
{
public:
	class UStaticMeshComponent*                   Door;                                              // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DoorRotationPoint;                                 // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               TargetRotation;                                    // 0x03B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                   RealActorDoor;                                     // 0x03C8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void CloseDoor(bool Fast);
	void OpenDoor(bool Fast);
	void UpdateForPlayTestStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SwitchableDoor_C">();
	}
	static class ABP_SwitchableDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SwitchableDoor_C>();
	}
};
static_assert(alignof(ABP_SwitchableDoor_C) == 0x000008, "Wrong alignment on ABP_SwitchableDoor_C");
static_assert(sizeof(ABP_SwitchableDoor_C) == 0x0003D0, "Wrong size on ABP_SwitchableDoor_C");
static_assert(offsetof(ABP_SwitchableDoor_C, Door) == 0x0003A0, "Member 'ABP_SwitchableDoor_C::Door' has a wrong offset!");
static_assert(offsetof(ABP_SwitchableDoor_C, DoorRotationPoint) == 0x0003A8, "Member 'ABP_SwitchableDoor_C::DoorRotationPoint' has a wrong offset!");
static_assert(offsetof(ABP_SwitchableDoor_C, TargetRotation) == 0x0003B0, "Member 'ABP_SwitchableDoor_C::TargetRotation' has a wrong offset!");
static_assert(offsetof(ABP_SwitchableDoor_C, RealActorDoor) == 0x0003C8, "Member 'ABP_SwitchableDoor_C::RealActorDoor' has a wrong offset!");

}
