#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BigCheese

#include "Basic.hpp"

#include "B_Cheese_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_BigCheese.B_BigCheese_C
// 0x0000 (0x0590 - 0x0590)
class AB_BigCheese_C final : public AB_Cheese_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_BigCheese_C">();
	}
	static class AB_BigCheese_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_BigCheese_C>();
	}
};
static_assert(alignof(AB_BigCheese_C) == 0x000010, "Wrong alignment on AB_BigCheese_C");
static_assert(sizeof(AB_BigCheese_C) == 0x000590, "Wrong size on AB_BigCheese_C");

}

