#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MaterialChangeTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WB_PlaceAndEditUITab_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MaterialChangeTab.WB_MaterialChangeTab_C
// 0x0038 (0x0330 - 0x02F8)
class UWB_MaterialChangeTab_C final : public UWB_PlaceAndEditUITab_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WB_MaterialChangeTab_C;             // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BorderLine;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         MaterialBox;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GroupPreviewInfo_C*                 MaterialGroupPreviewInfo;                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTileView*                              MaterialOptionsTileview;                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MaterialPatternChangeButton;                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_WorldSettingsTab_C*                 WorldsettingsTabParent;                            // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WB_MaterialChangeTab_MaterialPatternChangeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WB_MaterialChangeTab(int32 EntryPoint);
	void UpdateGroupPreviewContentAndVisibility();
	void UpdateMaterialOptions(class UB_MenuTileViewManager_C* TileViewManager, const TArray<class UB_TileViewData_C*>& DataArray, const TArray<bool>& FocusArray);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MaterialChangeTab_C">();
	}
	static class UWB_MaterialChangeTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MaterialChangeTab_C>();
	}
};
static_assert(alignof(UWB_MaterialChangeTab_C) == 0x000008, "Wrong alignment on UWB_MaterialChangeTab_C");
static_assert(sizeof(UWB_MaterialChangeTab_C) == 0x000330, "Wrong size on UWB_MaterialChangeTab_C");
static_assert(offsetof(UWB_MaterialChangeTab_C, UberGraphFrame_WB_MaterialChangeTab_C) == 0x0002F8, "Member 'UWB_MaterialChangeTab_C::UberGraphFrame_WB_MaterialChangeTab_C' has a wrong offset!");
static_assert(offsetof(UWB_MaterialChangeTab_C, BorderLine) == 0x000300, "Member 'UWB_MaterialChangeTab_C::BorderLine' has a wrong offset!");
static_assert(offsetof(UWB_MaterialChangeTab_C, MaterialBox) == 0x000308, "Member 'UWB_MaterialChangeTab_C::MaterialBox' has a wrong offset!");
static_assert(offsetof(UWB_MaterialChangeTab_C, MaterialGroupPreviewInfo) == 0x000310, "Member 'UWB_MaterialChangeTab_C::MaterialGroupPreviewInfo' has a wrong offset!");
static_assert(offsetof(UWB_MaterialChangeTab_C, MaterialOptionsTileview) == 0x000318, "Member 'UWB_MaterialChangeTab_C::MaterialOptionsTileview' has a wrong offset!");
static_assert(offsetof(UWB_MaterialChangeTab_C, MaterialPatternChangeButton) == 0x000320, "Member 'UWB_MaterialChangeTab_C::MaterialPatternChangeButton' has a wrong offset!");
static_assert(offsetof(UWB_MaterialChangeTab_C, WorldsettingsTabParent) == 0x000328, "Member 'UWB_MaterialChangeTab_C::WorldsettingsTabParent' has a wrong offset!");

}

