#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_FlyingEyeSpectator

#include "Basic.hpp"

#include "AB_FlyingEye_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_FlyingEyeSpectator.AB_FlyingEyeSpectator_C
// 0x0000 (0x0EF0 - 0x0EF0)
class UAB_FlyingEyeSpectator_C final : public UAB_FlyingEye_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_FlyingEyeSpectator_C">();
	}
	static class UAB_FlyingEyeSpectator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_FlyingEyeSpectator_C>();
	}
};
static_assert(alignof(UAB_FlyingEyeSpectator_C) == 0x000010, "Wrong alignment on UAB_FlyingEyeSpectator_C");
static_assert(sizeof(UAB_FlyingEyeSpectator_C) == 0x000EF0, "Wrong size on UAB_FlyingEyeSpectator_C");

}
