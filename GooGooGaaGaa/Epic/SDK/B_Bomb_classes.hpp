#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Bomb

#include "Basic.hpp"

#include "B_ExplosionProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Bomb.B_Bomb_C
// 0x0000 (0x0620 - 0x0620)
class AB_Bomb_C final : public AB_ExplosionProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Bomb_C">();
	}
	static class AB_Bomb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Bomb_C>();
	}
};
static_assert(alignof(AB_Bomb_C) == 0x000010, "Wrong alignment on AB_Bomb_C");
static_assert(sizeof(AB_Bomb_C) == 0x000620, "Wrong size on AB_Bomb_C");

}

