#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Candle01

#include "Basic.hpp"

#include "B_StaticMeshFireProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Candle01.B_Candle01_C
// 0x0000 (0x0660 - 0x0660)
class AB_Candle01_C : public AB_StaticMeshFireProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Candle01_C">();
	}
	static class AB_Candle01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Candle01_C>();
	}
};
static_assert(alignof(AB_Candle01_C) == 0x000010, "Wrong alignment on AB_Candle01_C");
static_assert(sizeof(AB_Candle01_C) == 0x000660, "Wrong size on AB_Candle01_C");

}
