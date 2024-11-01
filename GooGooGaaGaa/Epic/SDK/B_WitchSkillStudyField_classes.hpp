#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WitchSkillStudyField

#include "Basic.hpp"

#include "B_TaskField_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_WitchSkillStudyField.B_WitchSkillStudyField_C
// 0x00C0 (0x03F8 - 0x0338)
class AB_WitchSkillStudyField_C final : public AB_TaskField_C
{
public:
	class USceneComponent*                        CameraFocusPoint;                                  // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Book1;                                             // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FieldBlockage2;                                    // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FieldBlockage1;                                    // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Eye2;                                              // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Eye1;                                              // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Luaq1;                                             // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FieldBlockage;                                     // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Luaq;                                              // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cage1;                                             // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Witch;                                             // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Stool;                                             // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BigShroom;                                         // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Shroom;                                            // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Eye;                                               // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Bowl;                                              // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Book;                                              // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Broom;                                             // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cage;                                              // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Desk;                                              // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           ExtraEyeHighlights;                                // 0x03D8(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>           ExtraLuaqHighlights;                               // 0x03E8(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, ContainsInstancedReference)

public:
	void InitializeTaskField();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_WitchSkillStudyField_C">();
	}
	static class AB_WitchSkillStudyField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_WitchSkillStudyField_C>();
	}
};
static_assert(alignof(AB_WitchSkillStudyField_C) == 0x000008, "Wrong alignment on AB_WitchSkillStudyField_C");
static_assert(sizeof(AB_WitchSkillStudyField_C) == 0x0003F8, "Wrong size on AB_WitchSkillStudyField_C");
static_assert(offsetof(AB_WitchSkillStudyField_C, CameraFocusPoint) == 0x000338, "Member 'AB_WitchSkillStudyField_C::CameraFocusPoint' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Book1) == 0x000340, "Member 'AB_WitchSkillStudyField_C::Book1' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, FieldBlockage2) == 0x000348, "Member 'AB_WitchSkillStudyField_C::FieldBlockage2' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, FieldBlockage1) == 0x000350, "Member 'AB_WitchSkillStudyField_C::FieldBlockage1' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Eye2) == 0x000358, "Member 'AB_WitchSkillStudyField_C::Eye2' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Eye1) == 0x000360, "Member 'AB_WitchSkillStudyField_C::Eye1' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Luaq1) == 0x000368, "Member 'AB_WitchSkillStudyField_C::Luaq1' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, FieldBlockage) == 0x000370, "Member 'AB_WitchSkillStudyField_C::FieldBlockage' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Luaq) == 0x000378, "Member 'AB_WitchSkillStudyField_C::Luaq' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Cage1) == 0x000380, "Member 'AB_WitchSkillStudyField_C::Cage1' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Witch) == 0x000388, "Member 'AB_WitchSkillStudyField_C::Witch' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Stool) == 0x000390, "Member 'AB_WitchSkillStudyField_C::Stool' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, BigShroom) == 0x000398, "Member 'AB_WitchSkillStudyField_C::BigShroom' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Shroom) == 0x0003A0, "Member 'AB_WitchSkillStudyField_C::Shroom' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Eye) == 0x0003A8, "Member 'AB_WitchSkillStudyField_C::Eye' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Bowl) == 0x0003B0, "Member 'AB_WitchSkillStudyField_C::Bowl' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Book) == 0x0003B8, "Member 'AB_WitchSkillStudyField_C::Book' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Broom) == 0x0003C0, "Member 'AB_WitchSkillStudyField_C::Broom' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Cage) == 0x0003C8, "Member 'AB_WitchSkillStudyField_C::Cage' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, Desk) == 0x0003D0, "Member 'AB_WitchSkillStudyField_C::Desk' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, ExtraEyeHighlights) == 0x0003D8, "Member 'AB_WitchSkillStudyField_C::ExtraEyeHighlights' has a wrong offset!");
static_assert(offsetof(AB_WitchSkillStudyField_C, ExtraLuaqHighlights) == 0x0003E8, "Member 'AB_WitchSkillStudyField_C::ExtraLuaqHighlights' has a wrong offset!");

}

