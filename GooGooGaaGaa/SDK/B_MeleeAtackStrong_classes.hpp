#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MeleeAtackStrong

#include "Basic.hpp"

#include "B_MeleeAttack_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_MeleeAtackStrong.B_MeleeAtackStrong_C
// 0x0000 (0x02F8 - 0x02F8)
class AB_MeleeAtackStrong_C final : public AB_MeleeAttack_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MeleeAtackStrong_C">();
	}
	static class AB_MeleeAtackStrong_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_MeleeAtackStrong_C>();
	}
};
static_assert(alignof(AB_MeleeAtackStrong_C) == 0x000008, "Wrong alignment on AB_MeleeAtackStrong_C");
static_assert(sizeof(AB_MeleeAtackStrong_C) == 0x0002F8, "Wrong size on AB_MeleeAtackStrong_C");

}

