#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HunterBlockingPhysicalDoor

#include "Basic.hpp"

#include "BP_BaseUtilityPlaceable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HunterBlockingPhysicalDoor.BP_HunterBlockingPhysicalDoor_C
// 0x0010 (0x0398 - 0x0388)
class ABP_HunterBlockingPhysicalDoor_C final : public ABP_BaseUtilityPlaceable_C
{
public:
	uint8                                         Pad_382[0x6];                                      // 0x0382(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   Door;                                              // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AB_IntDoor_C*                           RealActor;                                         // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)

public:
	void HandleSpawnedRealActor(class AActor* SpawnedActor_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HunterBlockingPhysicalDoor_C">();
	}
	static class ABP_HunterBlockingPhysicalDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HunterBlockingPhysicalDoor_C>();
	}
};
static_assert(alignof(ABP_HunterBlockingPhysicalDoor_C) == 0x000008, "Wrong alignment on ABP_HunterBlockingPhysicalDoor_C");
static_assert(sizeof(ABP_HunterBlockingPhysicalDoor_C) == 0x000398, "Wrong size on ABP_HunterBlockingPhysicalDoor_C");
static_assert(offsetof(ABP_HunterBlockingPhysicalDoor_C, Door) == 0x000388, "Member 'ABP_HunterBlockingPhysicalDoor_C::Door' has a wrong offset!");
static_assert(offsetof(ABP_HunterBlockingPhysicalDoor_C, RealActor) == 0x000390, "Member 'ABP_HunterBlockingPhysicalDoor_C::RealActor' has a wrong offset!");

}

