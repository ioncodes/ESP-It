#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IMapLayoutLoading

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IMapLayoutLoading.IMapLayoutLoading_C
// 0x0000 (0x0028 - 0x0028)
class IIMapLayoutLoading_C final : public IInterface
{
public:
	void SpawnActionPlaceableStatic(class UClass* Class_0, const struct FTransform& Transform, bool Activated, TArray<uint8>& MaterialIndices, class ABP_PlaceableStaticProp_C** SpawnedActor);
	void SpawnActionProp(class UClass* Class_0, const struct FTransform& Transform, bool StartAwake, bool IsFrozen, bool Activated, class AB_StaticMeshProp_C** SpawnedActor);
	void SpawnPlaceableLight(class UClass* Class_0, const struct FTransform& Transform, const struct FVector& Color, bool Activated, class ABP_PlaceableLight_C** SpawnedActor);
	void SpawnPlaceableStatic(class UClass* Class_0, const struct FTransform& Transform, TArray<uint8>& MaterialIndices, class ABP_PlaceableStaticProp_C** SpawnedActor);
	void SpawnProp(class UClass* Class_0, const struct FTransform& Transform, bool StartAwake, bool IsFrozen, class AB_StaticMeshProp_C** SpawnedActor);
	void SpawnSwitch(class UClass* Class_0, const struct FTransform& Transform, bool BreaksAfterUse, class ABP_Switch_C** SpawnedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IMapLayoutLoading_C">();
	}
	static class IIMapLayoutLoading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IIMapLayoutLoading_C>();
	}
};
static_assert(alignof(IIMapLayoutLoading_C) == 0x000008, "Wrong alignment on IIMapLayoutLoading_C");
static_assert(sizeof(IIMapLayoutLoading_C) == 0x000028, "Wrong size on IIMapLayoutLoading_C");

}
