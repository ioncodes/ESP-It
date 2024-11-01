#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CollisionWall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlaceableStaticProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CollisionWall.BP_CollisionWall_C
// 0x0020 (0x0380 - 0x0360)
class ABP_CollisionWall_C final : public ABP_PlaceableStaticProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CollisionWall_C;                 // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              DefaultMaterial;                                   // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              OpaqueMaterial;                                    // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CollisionWall(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SelectForEditing(class APlayerState* EditingPlayerState);
	void UnselectFromEditing();
	void UpdateMaterialAndDrawDistance(bool NeedsToBeSeen);
	void UpdateMaxDrawDistance(bool AlwaysDraw);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CollisionWall_C">();
	}
	static class ABP_CollisionWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CollisionWall_C>();
	}
};
static_assert(alignof(ABP_CollisionWall_C) == 0x000008, "Wrong alignment on ABP_CollisionWall_C");
static_assert(sizeof(ABP_CollisionWall_C) == 0x000380, "Wrong size on ABP_CollisionWall_C");
static_assert(offsetof(ABP_CollisionWall_C, UberGraphFrame_BP_CollisionWall_C) == 0x000360, "Member 'ABP_CollisionWall_C::UberGraphFrame_BP_CollisionWall_C' has a wrong offset!");
static_assert(offsetof(ABP_CollisionWall_C, Box) == 0x000368, "Member 'ABP_CollisionWall_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_CollisionWall_C, DefaultMaterial) == 0x000370, "Member 'ABP_CollisionWall_C::DefaultMaterial' has a wrong offset!");
static_assert(offsetof(ABP_CollisionWall_C, OpaqueMaterial) == 0x000378, "Member 'ABP_CollisionWall_C::OpaqueMaterial' has a wrong offset!");

}

