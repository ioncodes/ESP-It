#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ModifierButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_GameModifierType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ModifierButton.WB_ModifierButton_C
// 0x0040 (0x0320 - 0x02E0)
class UWB_ModifierButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_GridButton_C*                       WB_GridButton;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_GameModifierType                            Modifier;                                          // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2F1[0x7];                                      // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_TooltipTextContent_C*               ToolTipContent;                                    // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NoRuleActiveColor;                                 // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ActiveRuleColor;                                   // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WB_SkillRuleButton_WB_GridButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WB_ModifierButton(int32 EntryPoint);
	class UWB_GridButton_C* GetGridButton();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ModifierButton_C">();
	}
	static class UWB_ModifierButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ModifierButton_C>();
	}
};
static_assert(alignof(UWB_ModifierButton_C) == 0x000008, "Wrong alignment on UWB_ModifierButton_C");
static_assert(sizeof(UWB_ModifierButton_C) == 0x000320, "Wrong size on UWB_ModifierButton_C");
static_assert(offsetof(UWB_ModifierButton_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_ModifierButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ModifierButton_C, WB_GridButton) == 0x0002E8, "Member 'UWB_ModifierButton_C::WB_GridButton' has a wrong offset!");
static_assert(offsetof(UWB_ModifierButton_C, Modifier) == 0x0002F0, "Member 'UWB_ModifierButton_C::Modifier' has a wrong offset!");
static_assert(offsetof(UWB_ModifierButton_C, ToolTipContent) == 0x0002F8, "Member 'UWB_ModifierButton_C::ToolTipContent' has a wrong offset!");
static_assert(offsetof(UWB_ModifierButton_C, NoRuleActiveColor) == 0x000300, "Member 'UWB_ModifierButton_C::NoRuleActiveColor' has a wrong offset!");
static_assert(offsetof(UWB_ModifierButton_C, ActiveRuleColor) == 0x000310, "Member 'UWB_ModifierButton_C::ActiveRuleColor' has a wrong offset!");

}
