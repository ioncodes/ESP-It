#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HunterBlockingDoor

#include "Basic.hpp"

#include "BP_UtilityDoor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HunterBlockingDoor.BP_HunterBlockingDoor_C
// 0x0000 (0x0398 - 0x0398)
class ABP_HunterBlockingDoor_C final : public ABP_UtilityDoor_C
{
public:
	void OpenDoor(bool Fast);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HunterBlockingDoor_C">();
	}
	static class ABP_HunterBlockingDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HunterBlockingDoor_C>();
	}
};
static_assert(alignof(ABP_HunterBlockingDoor_C) == 0x000008, "Wrong alignment on ABP_HunterBlockingDoor_C");
static_assert(sizeof(ABP_HunterBlockingDoor_C) == 0x000398, "Wrong size on ABP_HunterBlockingDoor_C");

}

