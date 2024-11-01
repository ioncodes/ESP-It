#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MapSelection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WB_BaseControlWithLabel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MapSelection.WB_MapSelection_C
// 0x0048 (0x03B0 - 0x0368)
class UWB_MapSelection_C final : public UWB_BaseControlWithLabel_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WB_MapSelection_C;                  // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FocusAnimation;                                    // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             MapLabel;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MapNameLabel;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GridButton_C*                       WB_GridButton;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeButtonClicked;                             // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UB_MatchOptions_C*                      Match_Options;                                     // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CustomMapcycleImage;                               // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateDisplayedMapSelectionInfo();
	TSoftObjectPtr<class UTexture2D> GetMapImage();
	class FText GetMapName();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void BndEvt__WB_GridButton_K2Node_ComponentBoundEvent_28_Clicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnChangeButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WB_MapSelection(int32 EntryPoint);

	void UseMapCycleInfo(bool* UseMapCycleInfo_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MapSelection_C">();
	}
	static class UWB_MapSelection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MapSelection_C>();
	}
};
static_assert(alignof(UWB_MapSelection_C) == 0x000008, "Wrong alignment on UWB_MapSelection_C");
static_assert(sizeof(UWB_MapSelection_C) == 0x0003B0, "Wrong size on UWB_MapSelection_C");
static_assert(offsetof(UWB_MapSelection_C, UberGraphFrame_WB_MapSelection_C) == 0x000368, "Member 'UWB_MapSelection_C::UberGraphFrame_WB_MapSelection_C' has a wrong offset!");
static_assert(offsetof(UWB_MapSelection_C, FocusAnimation) == 0x000370, "Member 'UWB_MapSelection_C::FocusAnimation' has a wrong offset!");
static_assert(offsetof(UWB_MapSelection_C, MapLabel) == 0x000378, "Member 'UWB_MapSelection_C::MapLabel' has a wrong offset!");
static_assert(offsetof(UWB_MapSelection_C, MapNameLabel) == 0x000380, "Member 'UWB_MapSelection_C::MapNameLabel' has a wrong offset!");
static_assert(offsetof(UWB_MapSelection_C, WB_GridButton) == 0x000388, "Member 'UWB_MapSelection_C::WB_GridButton' has a wrong offset!");
static_assert(offsetof(UWB_MapSelection_C, OnChangeButtonClicked) == 0x000390, "Member 'UWB_MapSelection_C::OnChangeButtonClicked' has a wrong offset!");
static_assert(offsetof(UWB_MapSelection_C, Match_Options) == 0x0003A0, "Member 'UWB_MapSelection_C::Match_Options' has a wrong offset!");
static_assert(offsetof(UWB_MapSelection_C, CustomMapcycleImage) == 0x0003A8, "Member 'UWB_MapSelection_C::CustomMapcycleImage' has a wrong offset!");

}

