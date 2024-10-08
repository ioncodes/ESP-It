#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_DataPrivacy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_DataPrivacy.WB_DataPrivacy_C
// 0x0020 (0x0300 - 0x02E0)
class UWB_DataPrivacy_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           CloseBtn;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_215;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WB_DataPrivacy_CloseBtn_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void ExecuteUbergraph_WB_DataPrivacy(int32 EntryPoint);
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void OnApply();
	void OnBack();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnSpecialAction();
	void Scroll(double Offset);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_DataPrivacy_C">();
	}
	static class UWB_DataPrivacy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_DataPrivacy_C>();
	}
};
static_assert(alignof(UWB_DataPrivacy_C) == 0x000008, "Wrong alignment on UWB_DataPrivacy_C");
static_assert(sizeof(UWB_DataPrivacy_C) == 0x000300, "Wrong size on UWB_DataPrivacy_C");
static_assert(offsetof(UWB_DataPrivacy_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_DataPrivacy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_DataPrivacy_C, CloseBtn) == 0x0002E8, "Member 'UWB_DataPrivacy_C::CloseBtn' has a wrong offset!");
static_assert(offsetof(UWB_DataPrivacy_C, RichTextBlock_215) == 0x0002F0, "Member 'UWB_DataPrivacy_C::RichTextBlock_215' has a wrong offset!");
static_assert(offsetof(UWB_DataPrivacy_C, ScrollBox) == 0x0002F8, "Member 'UWB_DataPrivacy_C::ScrollBox' has a wrong offset!");

}

