#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ShootingRangeField

#include "Basic.hpp"

#include "B_TaskField_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ShootingRangeField.B_ShootingRangeField_C
// 0x0008 (0x0340 - 0x0338)
class AB_ShootingRangeField_C final : public AB_TaskField_C
{
public:
	int32                                         Rounds;                                            // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActOnSpawnTransform(const struct FTransform& Spawn_Transform, bool IsPossibleTargetIndex);
	void GetHeight(int32 Width_Index, double* Spawn_Height);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ShootingRangeField_C">();
	}
	static class AB_ShootingRangeField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ShootingRangeField_C>();
	}
};
static_assert(alignof(AB_ShootingRangeField_C) == 0x000008, "Wrong alignment on AB_ShootingRangeField_C");
static_assert(sizeof(AB_ShootingRangeField_C) == 0x000340, "Wrong size on AB_ShootingRangeField_C");
static_assert(offsetof(AB_ShootingRangeField_C, Rounds) == 0x000338, "Member 'AB_ShootingRangeField_C::Rounds' has a wrong offset!");

}
