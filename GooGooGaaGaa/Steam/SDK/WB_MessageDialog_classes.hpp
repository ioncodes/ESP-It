#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MessageDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MessageDialog.WB_MessageDialog_C
// 0x0048 (0x0328 - 0x02E0)
class UWB_MessageDialog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Ok;                                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ResolutionTextBlock;                               // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleText;                                         // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Title;                                             // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Message;                                           // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature();
	void ExecuteUbergraph_WB_MessageDialog(int32 EntryPoint);
	class FText Get_ResolutionTextBlock_Text_0();
	class FText Get_TitleText_Text_0();
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void OnApply();
	void OnBack();
	void OnSpecialAction();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MessageDialog_C">();
	}
	static class UWB_MessageDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MessageDialog_C>();
	}
};
static_assert(alignof(UWB_MessageDialog_C) == 0x000008, "Wrong alignment on UWB_MessageDialog_C");
static_assert(sizeof(UWB_MessageDialog_C) == 0x000328, "Wrong size on UWB_MessageDialog_C");
static_assert(offsetof(UWB_MessageDialog_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_MessageDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MessageDialog_C, CanvasPanel_0) == 0x0002E8, "Member 'UWB_MessageDialog_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWB_MessageDialog_C, Ok) == 0x0002F0, "Member 'UWB_MessageDialog_C::Ok' has a wrong offset!");
static_assert(offsetof(UWB_MessageDialog_C, ResolutionTextBlock) == 0x0002F8, "Member 'UWB_MessageDialog_C::ResolutionTextBlock' has a wrong offset!");
static_assert(offsetof(UWB_MessageDialog_C, TitleText) == 0x000300, "Member 'UWB_MessageDialog_C::TitleText' has a wrong offset!");
static_assert(offsetof(UWB_MessageDialog_C, Title) == 0x000308, "Member 'UWB_MessageDialog_C::Title' has a wrong offset!");
static_assert(offsetof(UWB_MessageDialog_C, Message) == 0x000318, "Member 'UWB_MessageDialog_C::Message' has a wrong offset!");

}
