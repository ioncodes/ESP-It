#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Apple

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Apple.B_Apple_C
// 0x0000 (0x0590 - 0x0590)
class AB_Apple_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Apple_C">();
	}
	static class AB_Apple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Apple_C>();
	}
};
static_assert(alignof(AB_Apple_C) == 0x000010, "Wrong alignment on AB_Apple_C");
static_assert(sizeof(AB_Apple_C) == 0x000590, "Wrong size on AB_Apple_C");

}
