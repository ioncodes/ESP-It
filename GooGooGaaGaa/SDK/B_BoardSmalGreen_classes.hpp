#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BoardSmalGreen

#include "Basic.hpp"

#include "B_Board_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_BoardSmalGreen.B_BoardSmalGreen_C
// 0x0000 (0x0590 - 0x0590)
class AB_BoardSmalGreen_C final : public AB_Board_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_BoardSmalGreen_C">();
	}
	static class AB_BoardSmalGreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_BoardSmalGreen_C>();
	}
};
static_assert(alignof(AB_BoardSmalGreen_C) == 0x000010, "Wrong alignment on AB_BoardSmalGreen_C");
static_assert(sizeof(AB_BoardSmalGreen_C) == 0x000590, "Wrong size on AB_BoardSmalGreen_C");

}

