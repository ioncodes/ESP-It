#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SkillTileButton

#include "Basic.hpp"

#include "E_SkillRuleType_structs.hpp"
#include "WB_TileViewButton_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SkillTileButton.WB_SkillTileButton_C
// 0x0030 (0x0340 - 0x0310)
class UWB_SkillTileButton_C final : public UWB_TileViewButton_C
{
public:
	class UClass*                                 SkillClass;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	E_SkillRuleType                               SkillType;                                         // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_319[0x3];                                      // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           NoRuleActiveColor;                                 // 0x031C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ActiveRuleColor;                                   // 0x032C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Clicked();
	void GetBorderColor(struct FLinearColor* Color);
	TSoftObjectPtr<class UObject> GetIcon();
	void GetIsButtonEnabled(bool* IsEnabled);
	void GetTooltip(class UUserWidget** ToolTip_0);
	void SetIndividualParameters();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SkillTileButton_C">();
	}
	static class UWB_SkillTileButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SkillTileButton_C>();
	}
};
static_assert(alignof(UWB_SkillTileButton_C) == 0x000008, "Wrong alignment on UWB_SkillTileButton_C");
static_assert(sizeof(UWB_SkillTileButton_C) == 0x000340, "Wrong size on UWB_SkillTileButton_C");
static_assert(offsetof(UWB_SkillTileButton_C, SkillClass) == 0x000310, "Member 'UWB_SkillTileButton_C::SkillClass' has a wrong offset!");
static_assert(offsetof(UWB_SkillTileButton_C, SkillType) == 0x000318, "Member 'UWB_SkillTileButton_C::SkillType' has a wrong offset!");
static_assert(offsetof(UWB_SkillTileButton_C, NoRuleActiveColor) == 0x00031C, "Member 'UWB_SkillTileButton_C::NoRuleActiveColor' has a wrong offset!");
static_assert(offsetof(UWB_SkillTileButton_C, ActiveRuleColor) == 0x00032C, "Member 'UWB_SkillTileButton_C::ActiveRuleColor' has a wrong offset!");

}

