#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SokeBarrel

#include "Basic.hpp"

#include "B_Smog_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SokeBarrel.B_SokeBarrel_C
// 0x0000 (0x05E0 - 0x05E0)
class AB_SokeBarrel_C : public AB_Smog_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SokeBarrel_C">();
	}
	static class AB_SokeBarrel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SokeBarrel_C>();
	}
};
static_assert(alignof(AB_SokeBarrel_C) == 0x000010, "Wrong alignment on AB_SokeBarrel_C");
static_assert(sizeof(AB_SokeBarrel_C) == 0x0005E0, "Wrong size on AB_SokeBarrel_C");

}

