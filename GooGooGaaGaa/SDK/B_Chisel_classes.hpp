#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Chisel

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Chisel.B_Chisel_C
// 0x0000 (0x0590 - 0x0590)
class AB_Chisel_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Chisel_C">();
	}
	static class AB_Chisel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Chisel_C>();
	}
};
static_assert(alignof(AB_Chisel_C) == 0x000010, "Wrong alignment on AB_Chisel_C");
static_assert(sizeof(AB_Chisel_C) == 0x000590, "Wrong size on AB_Chisel_C");

}

