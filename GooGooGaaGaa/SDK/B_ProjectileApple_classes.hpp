#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ProjectileApple

#include "Basic.hpp"

#include "B_Potato_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ProjectileApple.B_ProjectileApple_C
// 0x0000 (0x0390 - 0x0390)
class AB_ProjectileApple_C final : public AB_Potato_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ProjectileApple_C">();
	}
	static class AB_ProjectileApple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ProjectileApple_C>();
	}
};
static_assert(alignof(AB_ProjectileApple_C) == 0x000010, "Wrong alignment on AB_ProjectileApple_C");
static_assert(sizeof(AB_ProjectileApple_C) == 0x000390, "Wrong size on AB_ProjectileApple_C");

}

