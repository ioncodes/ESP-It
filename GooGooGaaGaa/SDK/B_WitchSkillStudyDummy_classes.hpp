#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WitchSkillStudyDummy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Dummy_classes.hpp"
#include "LowEntryExtendedStandardLibrary_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_WitchSkillStudyDummy.B_WitchSkillStudyDummy_C
// 0x0050 (0x0350 - 0x0300)
class AB_WitchSkillStudyDummy_C final : public AB_Dummy_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_WitchSkillStudyDummy_C;           // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   MushroomStaticMesh;                                // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BookStaticMesh;                                    // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BroomStaticMesh;                                   // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WitchStaticMesh;                                   // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   EyeStaticMesh;                                     // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 BunnySkeletalMesh;                                 // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Pivot;                                             // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            InitiatorMesh;                                     // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2D*                             SkillImageTexture;                                 // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_WitchSkillStudyDummy(int32 EntryPoint);
	void Highlight();
	void ReceiveBeginPlay();
	void UpdateMesh();
	void UpdateSkillImageTexture();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_WitchSkillStudyDummy_C">();
	}
	static class AB_WitchSkillStudyDummy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_WitchSkillStudyDummy_C>();
	}
};
static_assert(alignof(AB_WitchSkillStudyDummy_C) == 0x000008, "Wrong alignment on AB_WitchSkillStudyDummy_C");
static_assert(sizeof(AB_WitchSkillStudyDummy_C) == 0x000350, "Wrong size on AB_WitchSkillStudyDummy_C");
static_assert(offsetof(AB_WitchSkillStudyDummy_C, UberGraphFrame_B_WitchSkillStudyDummy_C) == 0x000300, "Member 'AB_WitchSkillStudyDummy_C::UberGraphFrame_B_WitchSkillStudyDummy_C' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyDummy_C, MushroomStaticMesh) == 0x000308, "Member 'AB_WitchSkillStudyDummy_C::MushroomStaticMesh' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyDummy_C, BookStaticMesh) == 0x000310, "Member 'AB_WitchSkillStudyDummy_C::BookStaticMesh' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyDummy_C, BroomStaticMesh) == 0x000318, "Member 'AB_WitchSkillStudyDummy_C::BroomStaticMesh' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyDummy_C, WitchStaticMesh) == 0x000320, "Member 'AB_WitchSkillStudyDummy_C::WitchStaticMesh' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyDummy_C, EyeStaticMesh) == 0x000328, "Member 'AB_WitchSkillStudyDummy_C::EyeStaticMesh' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyDummy_C, BunnySkeletalMesh) == 0x000330, "Member 'AB_WitchSkillStudyDummy_C::BunnySkeletalMesh' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyDummy_C, Pivot) == 0x000338, "Member 'AB_WitchSkillStudyDummy_C::Pivot' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyDummy_C, InitiatorMesh) == 0x000340, "Member 'AB_WitchSkillStudyDummy_C::InitiatorMesh' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyDummy_C, SkillImageTexture) == 0x000348, "Member 'AB_WitchSkillStudyDummy_C::SkillImageTexture' has a wrong offset!");

}
