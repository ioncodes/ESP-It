#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_House

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_House.B_House_C
// 0x0000 (0x0590 - 0x0590)
class AB_House_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_House_C">();
	}
	static class AB_House_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_House_C>();
	}
};
static_assert(alignof(AB_House_C) == 0x000010, "Wrong alignment on AB_House_C");
static_assert(sizeof(AB_House_C) == 0x000590, "Wrong size on AB_House_C");

}
