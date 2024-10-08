#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BoardSmal

#include "Basic.hpp"

#include "B_Board_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_BoardSmal.B_BoardSmal_C
// 0x0000 (0x0590 - 0x0590)
class AB_BoardSmal_C final : public AB_Board_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_BoardSmal_C">();
	}
	static class AB_BoardSmal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_BoardSmal_C>();
	}
};
static_assert(alignof(AB_BoardSmal_C) == 0x000010, "Wrong alignment on AB_BoardSmal_C");
static_assert(sizeof(AB_BoardSmal_C) == 0x000590, "Wrong size on AB_BoardSmal_C");

}

