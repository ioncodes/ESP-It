#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_VoodooShootActor

#include "Basic.hpp"

#include "B_ShootActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_VoodooShootActor.B_VoodooShootActor_C
// 0x0010 (0x0308 - 0x02F8)
class AB_VoodooShootActor_C final : public AB_ShootActor_C
{
public:
	class UAudioComponent*                        WitchSound;                                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Doll;                                              // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void Act();
	void Highlight();
	void React();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_VoodooShootActor_C">();
	}
	static class AB_VoodooShootActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_VoodooShootActor_C>();
	}
};
static_assert(alignof(AB_VoodooShootActor_C) == 0x000008, "Wrong alignment on AB_VoodooShootActor_C");
static_assert(sizeof(AB_VoodooShootActor_C) == 0x000308, "Wrong size on AB_VoodooShootActor_C");
static_assert(offsetof(AB_VoodooShootActor_C, WitchSound) == 0x0002F8, "Member 'AB_VoodooShootActor_C::WitchSound' has a wrong offset!");
static_assert(offsetof(AB_VoodooShootActor_C, Doll) == 0x000300, "Member 'AB_VoodooShootActor_C::Doll' has a wrong offset!");

}
