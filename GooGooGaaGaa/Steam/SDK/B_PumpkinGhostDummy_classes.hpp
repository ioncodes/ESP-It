#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PumpkinGhostDummy

#include "Basic.hpp"

#include "B_Dummy_classes.hpp"
#include "LowEntryExtendedStandardLibrary_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PumpkinGhostDummy.B_PumpkinGhostDummy_C
// 0x0018 (0x0310 - 0x02F8)
class AB_PumpkinGhostDummy_C final : public AB_Dummy_C
{
public:
	double                                        SmallOffset;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NormalOffset;                                      // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BigOffset;                                         // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PickMesh(class UStaticMesh** Static_Mesh);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PumpkinGhostDummy_C">();
	}
	static class AB_PumpkinGhostDummy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PumpkinGhostDummy_C>();
	}
};
static_assert(alignof(AB_PumpkinGhostDummy_C) == 0x000008, "Wrong alignment on AB_PumpkinGhostDummy_C");
static_assert(sizeof(AB_PumpkinGhostDummy_C) == 0x000310, "Wrong size on AB_PumpkinGhostDummy_C");
static_assert(offsetof(AB_PumpkinGhostDummy_C, SmallOffset) == 0x0002F8, "Member 'AB_PumpkinGhostDummy_C::SmallOffset' has a wrong offset!");
static_assert(offsetof(AB_PumpkinGhostDummy_C, NormalOffset) == 0x000300, "Member 'AB_PumpkinGhostDummy_C::NormalOffset' has a wrong offset!");
static_assert(offsetof(AB_PumpkinGhostDummy_C, BigOffset) == 0x000308, "Member 'AB_PumpkinGhostDummy_C::BigOffset' has a wrong offset!");

}
