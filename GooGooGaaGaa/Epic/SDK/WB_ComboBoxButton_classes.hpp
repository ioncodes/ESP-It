#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ComboBoxButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "WB_BaseControl_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ComboBoxButton.WB_ComboBoxButton_C
// 0x0450 (0x0750 - 0x0300)
class UWB_ComboBoxButton_C final : public UWB_BaseControl_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WB_ComboBoxButton_C;                // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Label;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MyButton;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            TextColor;                                         // 0x0318(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TextColorFocus;                                    // 0x032C(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           ButtonStyle;                                       // 0x0340(0x03F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text;                                              // 0x0730(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         Index_0;                                           // 0x0740(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__MyButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WB_ComboBoxButton(int32 EntryPoint);
	struct FSlateColor Get_Label_ColorAndOpacity_0();
	void OnClicked();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ComboBoxButton_C">();
	}
	static class UWB_ComboBoxButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ComboBoxButton_C>();
	}
};
static_assert(alignof(UWB_ComboBoxButton_C) == 0x000010, "Wrong alignment on UWB_ComboBoxButton_C");
static_assert(sizeof(UWB_ComboBoxButton_C) == 0x000750, "Wrong size on UWB_ComboBoxButton_C");
static_assert(offsetof(UWB_ComboBoxButton_C, UberGraphFrame_WB_ComboBoxButton_C) == 0x000300, "Member 'UWB_ComboBoxButton_C::UberGraphFrame_WB_ComboBoxButton_C' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxButton_C, Label) == 0x000308, "Member 'UWB_ComboBoxButton_C::Label' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxButton_C, MyButton) == 0x000310, "Member 'UWB_ComboBoxButton_C::MyButton' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxButton_C, TextColor) == 0x000318, "Member 'UWB_ComboBoxButton_C::TextColor' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxButton_C, TextColorFocus) == 0x00032C, "Member 'UWB_ComboBoxButton_C::TextColorFocus' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxButton_C, ButtonStyle) == 0x000340, "Member 'UWB_ComboBoxButton_C::ButtonStyle' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxButton_C, Text) == 0x000730, "Member 'UWB_ComboBoxButton_C::Text' has a wrong offset!");
static_assert(offsetof(UWB_ComboBoxButton_C, Index_0) == 0x000740, "Member 'UWB_ComboBoxButton_C::Index_0' has a wrong offset!");

}
