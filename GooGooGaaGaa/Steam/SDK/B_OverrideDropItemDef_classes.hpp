#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_OverrideDropItemDef

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_OverrideDropItemDef.B_OverrideDropItemDef_C
// 0x0020 (0x02B0 - 0x0290)
class AB_OverrideDropItemDef_C final : public AActor
{
public:
	class UTextRenderComponent*                   TextRender;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 OverrideDropItemDefs;                              // 0x02A0(0x0010)(Edit, BlueprintVisible)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_OverrideDropItemDef_C">();
	}
	static class AB_OverrideDropItemDef_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_OverrideDropItemDef_C>();
	}
};
static_assert(alignof(AB_OverrideDropItemDef_C) == 0x000008, "Wrong alignment on AB_OverrideDropItemDef_C");
static_assert(sizeof(AB_OverrideDropItemDef_C) == 0x0002B0, "Wrong size on AB_OverrideDropItemDef_C");
static_assert(offsetof(AB_OverrideDropItemDef_C, TextRender) == 0x000290, "Member 'AB_OverrideDropItemDef_C::TextRender' has a wrong offset!");
static_assert(offsetof(AB_OverrideDropItemDef_C, DefaultSceneRoot) == 0x000298, "Member 'AB_OverrideDropItemDef_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_OverrideDropItemDef_C, OverrideDropItemDefs) == 0x0002A0, "Member 'AB_OverrideDropItemDef_C::OverrideDropItemDefs' has a wrong offset!");

}
