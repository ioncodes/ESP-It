#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PouchMoney

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PouchMoney.B_PouchMoney_C
// 0x0000 (0x0590 - 0x0590)
class AB_PouchMoney_C final : public AB_StaticMeshProp_C
{
public:
	class UNiagaraComponent*                      CoinTrail;                                         // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PouchMoney_C">();
	}
	static class AB_PouchMoney_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PouchMoney_C>();
	}
};
static_assert(alignof(AB_PouchMoney_C) == 0x000010, "Wrong alignment on AB_PouchMoney_C");
static_assert(sizeof(AB_PouchMoney_C) == 0x000590, "Wrong size on AB_PouchMoney_C");
static_assert(offsetof(AB_PouchMoney_C, CoinTrail) == 0x000588, "Member 'AB_PouchMoney_C::CoinTrail' has a wrong offset!");

}

