#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ObjectiveWitchRespawnPoint

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ObjectiveWitchRespawnPoint.B_ObjectiveWitchRespawnPoint_C
// 0x0010 (0x02A0 - 0x0290)
class AB_ObjectiveWitchRespawnPoint_C final : public AActor
{
public:
	class UCapsuleComponent*                      Capsule;                                           // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ObjectiveWitchRespawnPoint_C">();
	}
	static class AB_ObjectiveWitchRespawnPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ObjectiveWitchRespawnPoint_C>();
	}
};
static_assert(alignof(AB_ObjectiveWitchRespawnPoint_C) == 0x000008, "Wrong alignment on AB_ObjectiveWitchRespawnPoint_C");
static_assert(sizeof(AB_ObjectiveWitchRespawnPoint_C) == 0x0002A0, "Wrong size on AB_ObjectiveWitchRespawnPoint_C");
static_assert(offsetof(AB_ObjectiveWitchRespawnPoint_C, Capsule) == 0x000290, "Member 'AB_ObjectiveWitchRespawnPoint_C::Capsule' has a wrong offset!");
static_assert(offsetof(AB_ObjectiveWitchRespawnPoint_C, Arrow) == 0x000298, "Member 'AB_ObjectiveWitchRespawnPoint_C::Arrow' has a wrong offset!");

}

