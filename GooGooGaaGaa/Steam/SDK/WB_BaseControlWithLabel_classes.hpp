#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BaseControlWithLabel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "WB_BaseControl_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BaseControlWithLabel.WB_BaseControlWithLabel_C
// 0x0068 (0x0368 - 0x0300)
class UWB_BaseControlWithLabel_C : public UWB_BaseControl_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WB_BaseControlWithLabel_C;          // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             DescriptiveLabelWidget;                            // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   DescriptiveLabel;                                  // 0x0310(0x0010)(Edit, BlueprintVisible)
	class UWidget*                                FocusableWidget;                                   // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     TextWidgetsToFocus;                                // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSlateColor                            TextFocusColor;                                    // 0x0338(0x0014)(Edit, BlueprintVisible)
	struct FSlateColor                            TextColor;                                         // 0x034C(0x0014)(Edit, BlueprintVisible)
	bool                                          HideOnConsoles;                                    // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CustomDown();
	void CustomUp();
	void CustomLeft();
	void CustomRight();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void ChangeTextColor(const struct FSlateColor& InColorAndOpacity);
	void ExecuteUbergraph_WB_BaseControlWithLabel(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BaseControlWithLabel_C">();
	}
	static class UWB_BaseControlWithLabel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BaseControlWithLabel_C>();
	}
};
static_assert(alignof(UWB_BaseControlWithLabel_C) == 0x000008, "Wrong alignment on UWB_BaseControlWithLabel_C");
static_assert(sizeof(UWB_BaseControlWithLabel_C) == 0x000368, "Wrong size on UWB_BaseControlWithLabel_C");
static_assert(offsetof(UWB_BaseControlWithLabel_C, UberGraphFrame_WB_BaseControlWithLabel_C) == 0x000300, "Member 'UWB_BaseControlWithLabel_C::UberGraphFrame_WB_BaseControlWithLabel_C' has a wrong offset!");
static_assert(offsetof(UWB_BaseControlWithLabel_C, DescriptiveLabelWidget) == 0x000308, "Member 'UWB_BaseControlWithLabel_C::DescriptiveLabelWidget' has a wrong offset!");
static_assert(offsetof(UWB_BaseControlWithLabel_C, DescriptiveLabel) == 0x000310, "Member 'UWB_BaseControlWithLabel_C::DescriptiveLabel' has a wrong offset!");
static_assert(offsetof(UWB_BaseControlWithLabel_C, FocusableWidget) == 0x000320, "Member 'UWB_BaseControlWithLabel_C::FocusableWidget' has a wrong offset!");
static_assert(offsetof(UWB_BaseControlWithLabel_C, TextWidgetsToFocus) == 0x000328, "Member 'UWB_BaseControlWithLabel_C::TextWidgetsToFocus' has a wrong offset!");
static_assert(offsetof(UWB_BaseControlWithLabel_C, TextFocusColor) == 0x000338, "Member 'UWB_BaseControlWithLabel_C::TextFocusColor' has a wrong offset!");
static_assert(offsetof(UWB_BaseControlWithLabel_C, TextColor) == 0x00034C, "Member 'UWB_BaseControlWithLabel_C::TextColor' has a wrong offset!");
static_assert(offsetof(UWB_BaseControlWithLabel_C, HideOnConsoles) == 0x000360, "Member 'UWB_BaseControlWithLabel_C::HideOnConsoles' has a wrong offset!");

}
