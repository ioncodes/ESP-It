#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Nutcracker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_StaticMeshActionProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Nutcracker.B_Nutcracker_C
// 0x0020 (0x0600 - 0x05E0)
class AB_Nutcracker_C : public AB_StaticMeshActionProp_C
{
public:
	uint8                                         Pad_5D1[0x7];                                      // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Nutcracker_C;                     // 0x05D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_NutLever;                                       // 0x05E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         CrackNutTimeline_Pitch_2D0A9CDC480181B8437CCBA1DC2DE08D; // 0x05E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CrackNutTimeline__Direction_2D0A9CDC480181B8437CCBA1DC2DE08D; // 0x05EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ED[0x3];                                      // 0x05ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CrackNutTimeline;                                  // 0x05F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateActionProp(bool Override);
	void GetVisualInterpolators(TArray<class AB_VisualIntepolator_C*>* VisualInterpolators);
	void CrackNutTimeline__FinishedFunc();
	void CrackNutTimeline__UpdateFunc();
	void CrackNut();
	void ExecuteUbergraph_B_Nutcracker(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Nutcracker_C">();
	}
	static class AB_Nutcracker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Nutcracker_C>();
	}
};
static_assert(alignof(AB_Nutcracker_C) == 0x000010, "Wrong alignment on AB_Nutcracker_C");
static_assert(sizeof(AB_Nutcracker_C) == 0x000600, "Wrong size on AB_Nutcracker_C");
static_assert(offsetof(AB_Nutcracker_C, UberGraphFrame_B_Nutcracker_C) == 0x0005D8, "Member 'AB_Nutcracker_C::UberGraphFrame_B_Nutcracker_C' has a wrong offset!");
static_assert(offsetof(AB_Nutcracker_C, SM_NutLever) == 0x0005E0, "Member 'AB_Nutcracker_C::SM_NutLever' has a wrong offset!");
static_assert(offsetof(AB_Nutcracker_C, CrackNutTimeline_Pitch_2D0A9CDC480181B8437CCBA1DC2DE08D) == 0x0005E8, "Member 'AB_Nutcracker_C::CrackNutTimeline_Pitch_2D0A9CDC480181B8437CCBA1DC2DE08D' has a wrong offset!");
static_assert(offsetof(AB_Nutcracker_C, CrackNutTimeline__Direction_2D0A9CDC480181B8437CCBA1DC2DE08D) == 0x0005EC, "Member 'AB_Nutcracker_C::CrackNutTimeline__Direction_2D0A9CDC480181B8437CCBA1DC2DE08D' has a wrong offset!");
static_assert(offsetof(AB_Nutcracker_C, CrackNutTimeline) == 0x0005F0, "Member 'AB_Nutcracker_C::CrackNutTimeline' has a wrong offset!");

}

