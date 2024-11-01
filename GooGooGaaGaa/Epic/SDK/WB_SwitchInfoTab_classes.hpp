#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SwitchInfoTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "E_ActionPropType_structs.hpp"
#include "WB_PlaceAndEditUITab_classes.hpp"
#include "E_CreativePlayerMode_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SwitchInfoTab.WB_SwitchInfoTab_C
// 0x0048 (0x0340 - 0x02F8)
class UWB_SwitchInfoTab_C final : public UWB_PlaceAndEditUITab_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WB_SwitchInfoTab_C;                 // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ActionTypeText;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BorderLine;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeaderTitle;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SIngleUseCheckboxAreaButton_C*      SIngleUseCheckboxAreaButton;                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GroupPreviewInfo_C*                 SwitchInfoGroupPreviewInfo;                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TypeBox;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_WorldSettingsTab_C*                 WorldsettingsTabParent;                            // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	E_ActionPropType                              ActionType;                                        // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasMixedActionTypes;                               // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateBreaksAfterUseForAllSwitches();
	void BndEvt__WB_SwitchInfoTab_SIngleUseCheckboxAreaButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void DeactivateBreaksAfterUseForAllSwitches();
	void ExecuteUbergraph_WB_SwitchInfoTab(int32 EntryPoint);
	void Initialize();
	void ResetSwitchTypeTest();
	void UpdateAllSwitchBreaksAfterUseStates();
	void UpdateContent(class ABP_Switch_C* SwitchToTest, bool Added);
	void UpdateGroupPreviewContentAndVisibility();

	void GetAnchorActor(TArray<class AActor*>& ActorGroup__Optionalt_, class AActor** AnchorActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SwitchInfoTab_C">();
	}
	static class UWB_SwitchInfoTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SwitchInfoTab_C>();
	}
};
static_assert(alignof(UWB_SwitchInfoTab_C) == 0x000008, "Wrong alignment on UWB_SwitchInfoTab_C");
static_assert(sizeof(UWB_SwitchInfoTab_C) == 0x000340, "Wrong size on UWB_SwitchInfoTab_C");
static_assert(offsetof(UWB_SwitchInfoTab_C, UberGraphFrame_WB_SwitchInfoTab_C) == 0x0002F8, "Member 'UWB_SwitchInfoTab_C::UberGraphFrame_WB_SwitchInfoTab_C' has a wrong offset!");
static_assert(offsetof(UWB_SwitchInfoTab_C, ActionTypeText) == 0x000300, "Member 'UWB_SwitchInfoTab_C::ActionTypeText' has a wrong offset!");
static_assert(offsetof(UWB_SwitchInfoTab_C, BorderLine) == 0x000308, "Member 'UWB_SwitchInfoTab_C::BorderLine' has a wrong offset!");
static_assert(offsetof(UWB_SwitchInfoTab_C, HeaderTitle) == 0x000310, "Member 'UWB_SwitchInfoTab_C::HeaderTitle' has a wrong offset!");
static_assert(offsetof(UWB_SwitchInfoTab_C, SIngleUseCheckboxAreaButton) == 0x000318, "Member 'UWB_SwitchInfoTab_C::SIngleUseCheckboxAreaButton' has a wrong offset!");
static_assert(offsetof(UWB_SwitchInfoTab_C, SwitchInfoGroupPreviewInfo) == 0x000320, "Member 'UWB_SwitchInfoTab_C::SwitchInfoGroupPreviewInfo' has a wrong offset!");
static_assert(offsetof(UWB_SwitchInfoTab_C, TypeBox) == 0x000328, "Member 'UWB_SwitchInfoTab_C::TypeBox' has a wrong offset!");
static_assert(offsetof(UWB_SwitchInfoTab_C, WorldsettingsTabParent) == 0x000330, "Member 'UWB_SwitchInfoTab_C::WorldsettingsTabParent' has a wrong offset!");
static_assert(offsetof(UWB_SwitchInfoTab_C, ActionType) == 0x000338, "Member 'UWB_SwitchInfoTab_C::ActionType' has a wrong offset!");
static_assert(offsetof(UWB_SwitchInfoTab_C, HasMixedActionTypes) == 0x000339, "Member 'UWB_SwitchInfoTab_C::HasMixedActionTypes' has a wrong offset!");

}

