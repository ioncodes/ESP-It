#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BreadPit

#include "Basic.hpp"

#include "B_Bread_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_BreadPit.B_BreadPit_C
// 0x0000 (0x0590 - 0x0590)
class AB_BreadPit_C final : public AB_Bread_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_BreadPit_C">();
	}
	static class AB_BreadPit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_BreadPit_C>();
	}
};
static_assert(alignof(AB_BreadPit_C) == 0x000010, "Wrong alignment on AB_BreadPit_C");
static_assert(sizeof(AB_BreadPit_C) == 0x000590, "Wrong size on AB_BreadPit_C");

}
