#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MirrorHandheld

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_MirrorHandheld.B_MirrorHandheld_C
// 0x0000 (0x0590 - 0x0590)
class AB_MirrorHandheld_C final : public AB_StaticMeshProp_C
{
public:
	class UStaticMeshComponent*                   SM_MirrorHandheldRays;                             // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MirrorHandheld_C">();
	}
	static class AB_MirrorHandheld_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_MirrorHandheld_C>();
	}
};
static_assert(alignof(AB_MirrorHandheld_C) == 0x000010, "Wrong alignment on AB_MirrorHandheld_C");
static_assert(sizeof(AB_MirrorHandheld_C) == 0x000590, "Wrong size on AB_MirrorHandheld_C");
static_assert(offsetof(AB_MirrorHandheld_C, SM_MirrorHandheldRays) == 0x000588, "Member 'AB_MirrorHandheld_C::SM_MirrorHandheldRays' has a wrong offset!");

}

