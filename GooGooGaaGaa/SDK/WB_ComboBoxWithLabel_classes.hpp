#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ComboBoxWithLabel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "WB_BaseControlWithLabel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ComboBoxWithLabel.WB_ComboBoxWithLabel_C
// 0x0098 (0x03D8 - 0x0340)
class UWB_ComboBoxWithLabel_C final : public UWB_BaseControlWithLabel_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WB_ComboBoxWithLabel_C;             // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FocusAnimation;                                    // 0x0348(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                ComboBoxButton;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ComboBoxButtonInsideScaleBox;                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ComboboxSizeSwitcher;                              // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DescriptiveLabelText;                              // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DropDownImage;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DropDownImage_1;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SelectedOptionLabel;                               // 0x0380(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SelectedOptionLabel_1;                             // 0x0388(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectionChanged;                                // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FText>                           Options;                                           // 0x03A0(0x0010)(Edit, BlueprintVisible)
	class FText                                   SelectedOption;                                    // 0x03B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectedOptionIndex;                               // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedWidgetIndex;                               // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                ActiveComboBox;                                    // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void SetOptionIndex(int32 OptionIndex);
	void GetOptionIndex(const class FString& Option, int32* Param_Index);
	class FText Get_SelectedOptionLabel_Text_0();
	void OpenComboBoxOverlay();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnClicked();
	void BndEvt__ComboBoxButton_K2Node_ComponentBoundEvent_212_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ComboBoxButton_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_ComboBoxWithLabel_ComboBoxButtonInsideScaleBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_ComboBoxWithLabel_ComboBoxButtonInsideScaleBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void ExecuteUbergraph_WB_ComboBoxWithLabel(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ComboBoxWithLabel_C">();
	}
	static class UWB_ComboBoxWithLabel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ComboBoxWithLabel_C>();
	}
};
static_assert(alignof(UWB_ComboBoxWithLabel_C) == 0x000008, "Wrong alignment on UWB_ComboBoxWithLabel_C");
static_assert(sizeof(UWB_ComboBoxWithLabel_C) == 0x0003D8, "Wrong size on UWB_ComboBoxWithLabel_C");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, UberGraphFrame_WB_ComboBoxWithLabel_C) == 0x000340, "Member 'UWB_ComboBoxWithLabel_C::UberGraphFrame_WB_ComboBoxWithLabel_C' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, FocusAnimation) == 0x000348, "Member 'UWB_ComboBoxWithLabel_C::FocusAnimation' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, ComboBoxButton) == 0x000350, "Member 'UWB_ComboBoxWithLabel_C::ComboBoxButton' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, ComboBoxButtonInsideScaleBox) == 0x000358, "Member 'UWB_ComboBoxWithLabel_C::ComboBoxButtonInsideScaleBox' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, ComboboxSizeSwitcher) == 0x000360, "Member 'UWB_ComboBoxWithLabel_C::ComboboxSizeSwitcher' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, DescriptiveLabelText) == 0x000368, "Member 'UWB_ComboBoxWithLabel_C::DescriptiveLabelText' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, DropDownImage) == 0x000370, "Member 'UWB_ComboBoxWithLabel_C::DropDownImage' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, DropDownImage_1) == 0x000378, "Member 'UWB_ComboBoxWithLabel_C::DropDownImage_1' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, SelectedOptionLabel) == 0x000380, "Member 'UWB_ComboBoxWithLabel_C::SelectedOptionLabel' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, SelectedOptionLabel_1) == 0x000388, "Member 'UWB_ComboBoxWithLabel_C::SelectedOptionLabel_1' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, OnSelectionChanged) == 0x000390, "Member 'UWB_ComboBoxWithLabel_C::OnSelectionChanged' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, Options) == 0x0003A0, "Member 'UWB_ComboBoxWithLabel_C::Options' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, SelectedOption) == 0x0003B0, "Member 'UWB_ComboBoxWithLabel_C::SelectedOption' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, SelectedOptionIndex) == 0x0003C8, "Member 'UWB_ComboBoxWithLabel_C::SelectedOptionIndex' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, SelectedWidgetIndex) == 0x0003CC, "Member 'UWB_ComboBoxWithLabel_C::SelectedWidgetIndex' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxWithLabel_C, ActiveComboBox) == 0x0003D0, "Member 'UWB_ComboBoxWithLabel_C::ActiveComboBox' has a wrong offset!");

}
