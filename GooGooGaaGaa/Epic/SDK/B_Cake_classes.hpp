#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Cake

#include "Basic.hpp"

#include "B_Candle01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Cake.B_Cake_C
// 0x0010 (0x0680 - 0x0670)
class AB_Cake_C : public AB_Candle01_C
{
public:
	class UB_WindForce_C*                         B_WindForce;                                       // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Cake_C">();
	}
	static class AB_Cake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Cake_C>();
	}
};
static_assert(alignof(AB_Cake_C) == 0x000010, "Wrong alignment on AB_Cake_C");
static_assert(sizeof(AB_Cake_C) == 0x000680, "Wrong size on AB_Cake_C");
static_assert(offsetof(AB_Cake_C, B_WindForce) == 0x000670, "Member 'AB_Cake_C::B_WindForce' has a wrong offset!");

}
