#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinHunterHeadBase

#include "Basic.hpp"

#include "B_SkinBodypart_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SkinHunterHeadBase.B_SkinHunterHeadBase_C
// 0x0018 (0x02E0 - 0x02C8)
class AB_SkinHunterHeadBase_C : public AB_SkinBodypart_C
{
public:
	struct FVector                                SocketOffset;                                      // 0x02C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SkinHunterHeadBase_C">();
	}
	static class AB_SkinHunterHeadBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SkinHunterHeadBase_C>();
	}
};
static_assert(alignof(AB_SkinHunterHeadBase_C) == 0x000008, "Wrong alignment on AB_SkinHunterHeadBase_C");
static_assert(sizeof(AB_SkinHunterHeadBase_C) == 0x0002E0, "Wrong size on AB_SkinHunterHeadBase_C");
static_assert(offsetof(AB_SkinHunterHeadBase_C, SocketOffset) == 0x0002C8, "Member 'AB_SkinHunterHeadBase_C::SocketOffset' has a wrong offset!");

}

