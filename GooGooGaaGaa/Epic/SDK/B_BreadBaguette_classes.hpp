#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BreadBaguette

#include "Basic.hpp"

#include "B_Bread_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_BreadBaguette.B_BreadBaguette_C
// 0x0000 (0x0590 - 0x0590)
class AB_BreadBaguette_C final : public AB_Bread_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_BreadBaguette_C">();
	}
	static class AB_BreadBaguette_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_BreadBaguette_C>();
	}
};
static_assert(alignof(AB_BreadBaguette_C) == 0x000010, "Wrong alignment on AB_BreadBaguette_C");
static_assert(sizeof(AB_BreadBaguette_C) == 0x000590, "Wrong size on AB_BreadBaguette_C");

}
