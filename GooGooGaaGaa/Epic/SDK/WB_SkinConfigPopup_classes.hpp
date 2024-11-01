#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SkinConfigPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SkinConfigPopup.WB_SkinConfigPopup_C
// 0x0030 (0x0310 - 0x02E0)
class UWB_SkinConfigPopup_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           Back;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTileView*                              ConfigTileView;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         RetryCounter;                                      // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_IngameSkinConfigMenu_C*             Parent;                                            // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UB_MenuTileViewManager_C*               TileViewManager;                                   // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddSkinConfigButton(int32 ConfigNr, int32 ActiveConfigNr);
	void BndEvt__Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void CloseAndRefreshMainScreen();
	void ExecuteUbergraph_WB_SkinConfigPopup(int32 EntryPoint);
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void OnApply();
	void OnBack();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnSpecialAction();
	void RetryUpdateSkinConfigTileView();
	void UpdateMainScreenFocusWidget();
	void UpdateSkinConfigTileView();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SkinConfigPopup_C">();
	}
	static class UWB_SkinConfigPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SkinConfigPopup_C>();
	}
};
static_assert(alignof(UWB_SkinConfigPopup_C) == 0x000008, "Wrong alignment on UWB_SkinConfigPopup_C");
static_assert(sizeof(UWB_SkinConfigPopup_C) == 0x000310, "Wrong size on UWB_SkinConfigPopup_C");
static_assert(offsetof(UWB_SkinConfigPopup_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_SkinConfigPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_SkinConfigPopup_C, Back) == 0x0002E8, "Member 'UWB_SkinConfigPopup_C::Back' has a wrong offset!");
static_assert(offsetof(UWB_SkinConfigPopup_C, ConfigTileView) == 0x0002F0, "Member 'UWB_SkinConfigPopup_C::ConfigTileView' has a wrong offset!");
static_assert(offsetof(UWB_SkinConfigPopup_C, RetryCounter) == 0x0002F8, "Member 'UWB_SkinConfigPopup_C::RetryCounter' has a wrong offset!");
static_assert(offsetof(UWB_SkinConfigPopup_C, Parent) == 0x000300, "Member 'UWB_SkinConfigPopup_C::Parent' has a wrong offset!");
static_assert(offsetof(UWB_SkinConfigPopup_C, TileViewManager) == 0x000308, "Member 'UWB_SkinConfigPopup_C::TileViewManager' has a wrong offset!");

}

