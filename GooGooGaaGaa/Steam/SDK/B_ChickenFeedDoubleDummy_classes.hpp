#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ChickenFeedDoubleDummy

#include "Basic.hpp"

#include "B_ChickenFeedDummy_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ChickenFeedDoubleDummy.B_ChickenFeedDoubleDummy_C
// 0x0008 (0x0300 - 0x02F8)
class AB_ChickenFeedDoubleDummy_C final : public AB_ChickenFeedDummy_C
{
public:
	class UStaticMeshComponent*                   UpperStraw;                                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ChickenFeedDoubleDummy_C">();
	}
	static class AB_ChickenFeedDoubleDummy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ChickenFeedDoubleDummy_C>();
	}
};
static_assert(alignof(AB_ChickenFeedDoubleDummy_C) == 0x000008, "Wrong alignment on AB_ChickenFeedDoubleDummy_C");
static_assert(sizeof(AB_ChickenFeedDoubleDummy_C) == 0x000300, "Wrong size on AB_ChickenFeedDoubleDummy_C");
static_assert(offsetof(AB_ChickenFeedDoubleDummy_C, UpperStraw) == 0x0002F8, "Member 'AB_ChickenFeedDoubleDummy_C::UpperStraw' has a wrong offset!");

}
