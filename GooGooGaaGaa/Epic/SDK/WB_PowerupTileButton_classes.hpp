#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PowerupTileButton

#include "Basic.hpp"

#include "E_PowerupRuleType_structs.hpp"
#include "WB_TileViewButton_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_PowerupTileButton.WB_PowerupTileButton_C
// 0x0028 (0x0338 - 0x0310)
class UWB_PowerupTileButton_C final : public UWB_TileViewButton_C
{
public:
	struct FLinearColor                           NoRuleActiveColor;                                 // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ActiveRuleColor;                                   // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_PowerupRuleType                             Powerup;                                           // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
		return StaticBPGeneratedClassImpl<"WB_PowerupTileButton_C">();
	}
	static class UWB_PowerupTileButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_PowerupTileButton_C>();
	}
};
static_assert(alignof(UWB_PowerupTileButton_C) == 0x000008, "Wrong alignment on UWB_PowerupTileButton_C");
static_assert(sizeof(UWB_PowerupTileButton_C) == 0x000338, "Wrong size on UWB_PowerupTileButton_C");
static_assert(offsetof(UWB_PowerupTileButton_C, NoRuleActiveColor) == 0x000310, "Member 'UWB_PowerupTileButton_C::NoRuleActiveColor' has a wrong offset!");
static_assert(offsetof(UWB_PowerupTileButton_C, ActiveRuleColor) == 0x000320, "Member 'UWB_PowerupTileButton_C::ActiveRuleColor' has a wrong offset!");
static_assert(offsetof(UWB_PowerupTileButton_C, Powerup) == 0x000330, "Member 'UWB_PowerupTileButton_C::Powerup' has a wrong offset!");

}

