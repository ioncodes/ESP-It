#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Customize

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Customize.WB_Customize_C
// 0x0058 (0x0318 - 0x02C0)
class UWB_Customize_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           Achievements;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Back;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Craft;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           CustomizeHunter;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           CustomizeWitch;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           PlayerIcon;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           PropCollection;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Salvage;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          UpdatedFromSteam;                                  // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Back_K2Node_ComponentBoundEvent_154_Clicked__DelegateSignature();
	void BndEvt__Craft_K2Node_ComponentBoundEvent_34_Clicked__DelegateSignature();
	void BndEvt__CustomizeHunterBt_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature();
	void BndEvt__PropCollection_K2Node_ComponentBoundEvent_41_Clicked__DelegateSignature();
	void BndEvt__Salvage_K2Node_ComponentBoundEvent_24_Clicked__DelegateSignature();
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature();
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_82_Clicked__DelegateSignature();
	void BndEvt__WB_Customize_Achievements_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void CheckNotify();
	void Construct();
	void ExecuteUbergraph_WB_Customize(int32 EntryPoint);
	bool Get_Craft_bIsEnabled_0();
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void OnApply();
	void OnBack();
	void OnSpecialAction();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Customize_C">();
	}
	static class UWB_Customize_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Customize_C>();
	}
};
static_assert(alignof(UWB_Customize_C) == 0x000008, "Wrong alignment on UWB_Customize_C");
static_assert(sizeof(UWB_Customize_C) == 0x000318, "Wrong size on UWB_Customize_C");
static_assert(offsetof(UWB_Customize_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_Customize_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Customize_C, Achievements) == 0x0002C8, "Member 'UWB_Customize_C::Achievements' has a wrong offset!");
static_assert(offsetof(UWB_Customize_C, Back) == 0x0002D0, "Member 'UWB_Customize_C::Back' has a wrong offset!");
static_assert(offsetof(UWB_Customize_C, CanvasPanel_0) == 0x0002D8, "Member 'UWB_Customize_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWB_Customize_C, Craft) == 0x0002E0, "Member 'UWB_Customize_C::Craft' has a wrong offset!");
static_assert(offsetof(UWB_Customize_C, CustomizeHunter) == 0x0002E8, "Member 'UWB_Customize_C::CustomizeHunter' has a wrong offset!");
static_assert(offsetof(UWB_Customize_C, CustomizeWitch) == 0x0002F0, "Member 'UWB_Customize_C::CustomizeWitch' has a wrong offset!");
static_assert(offsetof(UWB_Customize_C, PlayerIcon) == 0x0002F8, "Member 'UWB_Customize_C::PlayerIcon' has a wrong offset!");
static_assert(offsetof(UWB_Customize_C, PropCollection) == 0x000300, "Member 'UWB_Customize_C::PropCollection' has a wrong offset!");
static_assert(offsetof(UWB_Customize_C, Salvage) == 0x000308, "Member 'UWB_Customize_C::Salvage' has a wrong offset!");
static_assert(offsetof(UWB_Customize_C, UpdatedFromSteam) == 0x000310, "Member 'UWB_Customize_C::UpdatedFromSteam' has a wrong offset!");

}
