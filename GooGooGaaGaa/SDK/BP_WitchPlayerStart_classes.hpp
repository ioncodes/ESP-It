#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WitchPlayerStart

#include "Basic.hpp"

#include "BP_PlaceablePlayerStart_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WitchPlayerStart.BP_WitchPlayerStart_C
// 0x0000 (0x0378 - 0x0378)
class ABP_WitchPlayerStart_C final : public ABP_PlaceablePlayerStart_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WitchPlayerStart_C">();
	}
	static class ABP_WitchPlayerStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WitchPlayerStart_C>();
	}
};
static_assert(alignof(ABP_WitchPlayerStart_C) == 0x000008, "Wrong alignment on ABP_WitchPlayerStart_C");
static_assert(sizeof(ABP_WitchPlayerStart_C) == 0x000378, "Wrong size on ABP_WitchPlayerStart_C");

}
