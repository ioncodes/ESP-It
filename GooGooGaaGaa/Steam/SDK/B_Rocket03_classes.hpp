#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Rocket03

#include "Basic.hpp"

#include "B_Rocket_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Rocket03.B_Rocket03_C
// 0x0000 (0x0690 - 0x0690)
class AB_Rocket03_C final : public AB_Rocket_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Rocket03_C">();
	}
	static class AB_Rocket03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Rocket03_C>();
	}
};
static_assert(alignof(AB_Rocket03_C) == 0x000010, "Wrong alignment on AB_Rocket03_C");
static_assert(sizeof(AB_Rocket03_C) == 0x000690, "Wrong size on AB_Rocket03_C");

}

