#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_StartPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_StartPopup.WB_StartPopup_C
// 0x0020 (0x0300 - 0x02E0)
class UWB_StartPopup_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           Button_Back;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Button_DataPrivacy;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         LatestDataPrivacy;                                 // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_55_Clicked__DelegateSignature();
	void BndEvt__WB_StartPopup_Button_DataPrivacy_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
	void Close();
	void Construct();
	void ExecuteUbergraph_WB_StartPopup(int32 EntryPoint);
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void GetMainMenuWhatsNewButton(class UWB_Button_C** WhatsNew);
	void OnApply();
	void OnBack();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnSpecialAction();
	void ShowDataPrivacy();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_StartPopup_C">();
	}
	static class UWB_StartPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_StartPopup_C>();
	}
};
static_assert(alignof(UWB_StartPopup_C) == 0x000008, "Wrong alignment on UWB_StartPopup_C");
static_assert(sizeof(UWB_StartPopup_C) == 0x000300, "Wrong size on UWB_StartPopup_C");
static_assert(offsetof(UWB_StartPopup_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_StartPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_StartPopup_C, Button_Back) == 0x0002E8, "Member 'UWB_StartPopup_C::Button_Back' has a wrong offset!");
static_assert(offsetof(UWB_StartPopup_C, Button_DataPrivacy) == 0x0002F0, "Member 'UWB_StartPopup_C::Button_DataPrivacy' has a wrong offset!");
static_assert(offsetof(UWB_StartPopup_C, LatestDataPrivacy) == 0x0002F8, "Member 'UWB_StartPopup_C::LatestDataPrivacy' has a wrong offset!");

}
