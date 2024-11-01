#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SearchBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SearchBar.WB_SearchBar_C
// 0x0030 (0x0310 - 0x02E0)
class UWB_SearchBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                       TextField;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         MaxInputTextLength;                                // 0x02F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SearchText;                                        // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UWB_CategoryMenuScreen_C*               ParentCategorgyMenu;                               // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateShownContentAfterInput(const class FText& InputText);
	void GetItemName(class UB_TileViewData_C* ItemData, class FString* Item_Name);
	void ResetText();
	void CheckItemSearchValidity(class UB_TileViewData_C* Item, bool* IsValid);
	void BndEvt__TextField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void Construct();
	void ReturnUserFocusToSearchBar();
	void ExecuteUbergraph_WB_SearchBar(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SearchBar_C">();
	}
	static class UWB_SearchBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SearchBar_C>();
	}
};
static_assert(alignof(UWB_SearchBar_C) == 0x000008, "Wrong alignment on UWB_SearchBar_C");
static_assert(sizeof(UWB_SearchBar_C) == 0x000310, "Wrong size on UWB_SearchBar_C");
static_assert(offsetof(UWB_SearchBar_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_SearchBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_SearchBar_C, TextField) == 0x0002E8, "Member 'UWB_SearchBar_C::TextField' has a wrong offset!");
static_assert(offsetof(UWB_SearchBar_C, MaxInputTextLength) == 0x0002F0, "Member 'UWB_SearchBar_C::MaxInputTextLength' has a wrong offset!");
static_assert(offsetof(UWB_SearchBar_C, SearchText) == 0x0002F8, "Member 'UWB_SearchBar_C::SearchText' has a wrong offset!");
static_assert(offsetof(UWB_SearchBar_C, ParentCategorgyMenu) == 0x000308, "Member 'UWB_SearchBar_C::ParentCategorgyMenu' has a wrong offset!");

}

