#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalaceDoor

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PalaceDoor.BP_PalaceDoor_C.OpenDoor
// 0x0001 (0x0001 - 0x0000)
struct BP_PalaceDoor_C_OpenDoor final
{
public:
	bool                                          Fast;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalaceDoor_C_OpenDoor) == 0x000001, "Wrong alignment on BP_PalaceDoor_C_OpenDoor");
static_assert(sizeof(BP_PalaceDoor_C_OpenDoor) == 0x000001, "Wrong size on BP_PalaceDoor_C_OpenDoor");
static_assert(offsetof(BP_PalaceDoor_C_OpenDoor, Fast) == 0x000000, "Member 'BP_PalaceDoor_C_OpenDoor::Fast' has a wrong offset!");

}
