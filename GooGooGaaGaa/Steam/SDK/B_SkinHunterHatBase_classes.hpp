#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinHunterHatBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_SkinItem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SkinHunterHatBase.B_SkinHunterHatBase_C
// 0x0010 (0x02B8 - 0x02A8)
class AB_SkinHunterHatBase_C : public AB_SkinItem_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_SkinHunterHatBase_C;              // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        HeadOffset;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_SkinHunterHatBase(int32 EntryPoint);
	void UpdateOffset(const struct FVector& Offset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SkinHunterHatBase_C">();
	}
	static class AB_SkinHunterHatBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SkinHunterHatBase_C>();
	}
};
static_assert(alignof(AB_SkinHunterHatBase_C) == 0x000008, "Wrong alignment on AB_SkinHunterHatBase_C");
static_assert(sizeof(AB_SkinHunterHatBase_C) == 0x0002B8, "Wrong size on AB_SkinHunterHatBase_C");
static_assert(offsetof(AB_SkinHunterHatBase_C, UberGraphFrame_B_SkinHunterHatBase_C) == 0x0002A8, "Member 'AB_SkinHunterHatBase_C::UberGraphFrame_B_SkinHunterHatBase_C' has a wrong offset!");
static_assert(offsetof(AB_SkinHunterHatBase_C, HeadOffset) == 0x0002B0, "Member 'AB_SkinHunterHatBase_C::HeadOffset' has a wrong offset!");

}

