#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SkillRuleButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "E_SkillRuleType_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SkillRuleButton.WB_SkillRuleButton_C
// 0x0048 (0x0308 - 0x02C0)
class UWB_SkillRuleButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_GridButton_C*                       WB_GridButton;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 SkillClassHard;                                    // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	E_SkillRuleType                               SkillOverrideType;                                 // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371B[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_SkillTooltipContent_C*              TooltipContent;                                    // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NoRuleActiveColor;                                 // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ActiveRuleColor;                                   // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WB_SkillRuleButton_WB_GridButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WB_SkillRuleButton(int32 EntryPoint);
	class UWB_GridButton_C* GetGridButton();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SkillRuleButton_C">();
	}
	static class UWB_SkillRuleButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SkillRuleButton_C>();
	}
};
static_assert(alignof(UWB_SkillRuleButton_C) == 0x000008, "Wrong alignment on UWB_SkillRuleButton_C");
static_assert(sizeof(UWB_SkillRuleButton_C) == 0x000308, "Wrong size on UWB_SkillRuleButton_C");
static_assert(offsetof(UWB_SkillRuleButton_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_SkillRuleButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_SkillRuleButton_C, WB_GridButton) == 0x0002C8, "Member 'UWB_SkillRuleButton_C::WB_GridButton' has a wrong offset!");
static_assert(offsetof(UWB_SkillRuleButton_C, SkillClassHard) == 0x0002D0, "Member 'UWB_SkillRuleButton_C::SkillClassHard' has a wrong offset!");
static_assert(offsetof(UWB_SkillRuleButton_C, SkillOverrideType) == 0x0002D8, "Member 'UWB_SkillRuleButton_C::SkillOverrideType' has a wrong offset!");
static_assert(offsetof(UWB_SkillRuleButton_C, TooltipContent) == 0x0002E0, "Member 'UWB_SkillRuleButton_C::TooltipContent' has a wrong offset!");
static_assert(offsetof(UWB_SkillRuleButton_C, NoRuleActiveColor) == 0x0002E8, "Member 'UWB_SkillRuleButton_C::NoRuleActiveColor' has a wrong offset!");
static_assert(offsetof(UWB_SkillRuleButton_C, ActiveRuleColor) == 0x0002F8, "Member 'UWB_SkillRuleButton_C::ActiveRuleColor' has a wrong offset!");

}
