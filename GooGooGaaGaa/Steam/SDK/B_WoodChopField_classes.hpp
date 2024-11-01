#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WoodChopField

#include "Basic.hpp"

#include "B_TaskField_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_WoodChopField.B_WoodChopField_C
// 0x0010 (0x0348 - 0x0338)
class AB_WoodChopField_C final : public AB_TaskField_C
{
public:
	class USceneComponent*                        CameraFocusPoint;                                  // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TreeTrunk;                                         // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GetSpawnTransformByIndices(int32 LengthIndex, int32 WidthIndex, struct FTransform* Spawn_Transform);
	void InitializeTaskField();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_WoodChopField_C">();
	}
	static class AB_WoodChopField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_WoodChopField_C>();
	}
};
static_assert(alignof(AB_WoodChopField_C) == 0x000008, "Wrong alignment on AB_WoodChopField_C");
static_assert(sizeof(AB_WoodChopField_C) == 0x000348, "Wrong size on AB_WoodChopField_C");
static_assert(offsetof(AB_WoodChopField_C, CameraFocusPoint) == 0x000338, "Member 'AB_WoodChopField_C::CameraFocusPoint' has a wrong offset!");
static_assert(offsetof(AB_WoodChopField_C, TreeTrunk) == 0x000340, "Member 'AB_WoodChopField_C::TreeTrunk' has a wrong offset!");

}

