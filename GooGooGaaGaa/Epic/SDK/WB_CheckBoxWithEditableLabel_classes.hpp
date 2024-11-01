#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CheckBoxWithEditableLabel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PropWitchHuntModule_structs.hpp"
#include "WB_BaseControlWithLabel_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CheckBoxWithEditableLabel.WB_CheckBoxWithEditableLabel_C
// 0x00A8 (0x0410 - 0x0368)
class UWB_CheckBoxWithEditableLabel_C final : public UWB_BaseControlWithLabel_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WB_CheckBoxWithEditableLabel_C;     // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FocusAnimation;                                    // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCheckBox*                              CheckBox;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DescriptiveLabelText;                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_0;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ResetButton;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCheckStateChanged;                               // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FUIParameterData                       BoolParameter;                                     // 0x03A8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Index_0;                                           // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DefaultBoolValue;                                  // 0x040C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCheckStateChanged__DelegateSignature(class UWB_CheckBoxWithEditableLabel_C* Sender, bool IsChecked);
	void BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__WB_CheckBoxWithEditableLabel_ResetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void CheckDefaultToUpdateUI();
	void CreateTooltip();
	void ExecuteUbergraph_WB_CheckBoxWithEditableLabel(int32 EntryPoint);
	void GetIsChecked(bool* IsChecked);
	void InitializeBoolParam(const struct FUIParameterData& BoolParam, const struct FUIParam& DefaultValue);
	void OnClickedEvent();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void SetIsChecked(bool InIsChecked);
	void SetIsCheckedWithoutEvent(bool InIsChecked);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CheckBoxWithEditableLabel_C">();
	}
	static class UWB_CheckBoxWithEditableLabel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CheckBoxWithEditableLabel_C>();
	}
};
static_assert(alignof(UWB_CheckBoxWithEditableLabel_C) == 0x000008, "Wrong alignment on UWB_CheckBoxWithEditableLabel_C");
static_assert(sizeof(UWB_CheckBoxWithEditableLabel_C) == 0x000410, "Wrong size on UWB_CheckBoxWithEditableLabel_C");
static_assert(offsetof(UWB_CheckBoxWithEditableLabel_C, UberGraphFrame_WB_CheckBoxWithEditableLabel_C) == 0x000368, "Member 'UWB_CheckBoxWithEditableLabel_C::UberGraphFrame_WB_CheckBoxWithEditableLabel_C' has a wrong offset!");
static_assert(offsetof(UWB_CheckBoxWithEditableLabel_C, FocusAnimation) == 0x000370, "Member 'UWB_CheckBoxWithEditableLabel_C::FocusAnimation' has a wrong offset!");
static_assert(offsetof(UWB_CheckBoxWithEditableLabel_C, CheckBox) == 0x000378, "Member 'UWB_CheckBoxWithEditableLabel_C::CheckBox' has a wrong offset!");
static_assert(offsetof(UWB_CheckBoxWithEditableLabel_C, DescriptiveLabelText) == 0x000380, "Member 'UWB_CheckBoxWithEditableLabel_C::DescriptiveLabelText' has a wrong offset!");
static_assert(offsetof(UWB_CheckBoxWithEditableLabel_C, GridPanel_0) == 0x000388, "Member 'UWB_CheckBoxWithEditableLabel_C::GridPanel_0' has a wrong offset!");
static_assert(offsetof(UWB_CheckBoxWithEditableLabel_C, ResetButton) == 0x000390, "Member 'UWB_CheckBoxWithEditableLabel_C::ResetButton' has a wrong offset!");
static_assert(offsetof(UWB_CheckBoxWithEditableLabel_C, OnCheckStateChanged) == 0x000398, "Member 'UWB_CheckBoxWithEditableLabel_C::OnCheckStateChanged' has a wrong offset!");
static_assert(offsetof(UWB_CheckBoxWithEditableLabel_C, BoolParameter) == 0x0003A8, "Member 'UWB_CheckBoxWithEditableLabel_C::BoolParameter' has a wrong offset!");
static_assert(offsetof(UWB_CheckBoxWithEditableLabel_C, Index_0) == 0x000408, "Member 'UWB_CheckBoxWithEditableLabel_C::Index_0' has a wrong offset!");
static_assert(offsetof(UWB_CheckBoxWithEditableLabel_C, DefaultBoolValue) == 0x00040C, "Member 'UWB_CheckBoxWithEditableLabel_C::DefaultBoolValue' has a wrong offset!");

}

