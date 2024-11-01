#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AchievementTestVolume

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_AchievementTestVolume.B_AchievementTestVolume_C
// 0x0010 (0x02A0 - 0x0290)
class AB_AchievementTestVolume_C final : public AActor
{
public:
	class UBoxComponent*                          TestBox;                                           // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_AchievementTestVolume_C">();
	}
	static class AB_AchievementTestVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_AchievementTestVolume_C>();
	}
};
static_assert(alignof(AB_AchievementTestVolume_C) == 0x000008, "Wrong alignment on AB_AchievementTestVolume_C");
static_assert(sizeof(AB_AchievementTestVolume_C) == 0x0002A0, "Wrong size on AB_AchievementTestVolume_C");
static_assert(offsetof(AB_AchievementTestVolume_C, TestBox) == 0x000290, "Member 'AB_AchievementTestVolume_C::TestBox' has a wrong offset!");
static_assert(offsetof(AB_AchievementTestVolume_C, DefaultSceneRoot) == 0x000298, "Member 'AB_AchievementTestVolume_C::DefaultSceneRoot' has a wrong offset!");

}

