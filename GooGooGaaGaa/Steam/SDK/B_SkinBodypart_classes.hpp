#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinBodypart

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_SkinItem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SkinBodypart.B_SkinBodypart_C
// 0x0020 (0x02C8 - 0x02A8)
class AB_SkinBodypart_C : public AB_SkinItem_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_SkinBodypart_C;                   // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 ParentMesh;                                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SelfShadowOnly;                                    // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_SkinBodypart(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SkinBodypart_C">();
	}
	static class AB_SkinBodypart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SkinBodypart_C>();
	}
};
static_assert(alignof(AB_SkinBodypart_C) == 0x000008, "Wrong alignment on AB_SkinBodypart_C");
static_assert(sizeof(AB_SkinBodypart_C) == 0x0002C8, "Wrong size on AB_SkinBodypart_C");
static_assert(offsetof(AB_SkinBodypart_C, UberGraphFrame_B_SkinBodypart_C) == 0x0002A8, "Member 'AB_SkinBodypart_C::UberGraphFrame_B_SkinBodypart_C' has a wrong offset!");
static_assert(offsetof(AB_SkinBodypart_C, SkeletalMesh) == 0x0002B0, "Member 'AB_SkinBodypart_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(AB_SkinBodypart_C, ParentMesh) == 0x0002B8, "Member 'AB_SkinBodypart_C::ParentMesh' has a wrong offset!");
static_assert(offsetof(AB_SkinBodypart_C, SelfShadowOnly) == 0x0002C0, "Member 'AB_SkinBodypart_C::SelfShadowOnly' has a wrong offset!");

}
