#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CageProp

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CageProp.B_CageProp_C
// 0x0000 (0x0590 - 0x0590)
class AB_CageProp_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CageProp_C">();
	}
	static class AB_CageProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CageProp_C>();
	}
};
static_assert(alignof(AB_CageProp_C) == 0x000010, "Wrong alignment on AB_CageProp_C");
static_assert(sizeof(AB_CageProp_C) == 0x000590, "Wrong size on AB_CageProp_C");

}

