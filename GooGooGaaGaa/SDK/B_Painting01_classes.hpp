#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Painting01

#include "Basic.hpp"

#include "B_Plank_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Painting01.B_Painting01_C
// 0x0000 (0x0590 - 0x0590)
class AB_Painting01_C : public AB_Plank_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Painting01_C">();
	}
	static class AB_Painting01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Painting01_C>();
	}
};
static_assert(alignof(AB_Painting01_C) == 0x000010, "Wrong alignment on AB_Painting01_C");
static_assert(sizeof(AB_Painting01_C) == 0x000590, "Wrong size on AB_Painting01_C");

}
