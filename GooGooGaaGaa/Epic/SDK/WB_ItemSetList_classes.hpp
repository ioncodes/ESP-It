#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ItemSetList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ItemSetList.WB_ItemSetList_C
// 0x0040 (0x0320 - 0x02E0)
class UWB_ItemSetList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             SetNameField;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTileView*                              SetTileView;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   SetName;                                           // 0x02F8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<int32>                                 SortedSetIds;                                      // 0x0308(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UB_MenuTileViewManager_C*               TileViewManager;                                   // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	struct FSlateColor Get_SetNameField_ColorAndOpacity_0();
	ESlateVisibility ItemSetListVisibility();
	void UpdateSetList(const class FText& SetName_0, TArray<int32>& SortedIds);
	void Construct();
	void ExecuteUbergraph_WB_ItemSetList(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ItemSetList_C">();
	}
	static class UWB_ItemSetList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ItemSetList_C>();
	}
};
static_assert(alignof(UWB_ItemSetList_C) == 0x000008, "Wrong alignment on UWB_ItemSetList_C");
static_assert(sizeof(UWB_ItemSetList_C) == 0x000320, "Wrong size on UWB_ItemSetList_C");
static_assert(offsetof(UWB_ItemSetList_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_ItemSetList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ItemSetList_C, SetNameField) == 0x0002E8, "Member 'UWB_ItemSetList_C::SetNameField' has a wrong offset!");
static_assert(offsetof(UWB_ItemSetList_C, SetTileView) == 0x0002F0, "Member 'UWB_ItemSetList_C::SetTileView' has a wrong offset!");
static_assert(offsetof(UWB_ItemSetList_C, SetName) == 0x0002F8, "Member 'UWB_ItemSetList_C::SetName' has a wrong offset!");
static_assert(offsetof(UWB_ItemSetList_C, SortedSetIds) == 0x000308, "Member 'UWB_ItemSetList_C::SortedSetIds' has a wrong offset!");
static_assert(offsetof(UWB_ItemSetList_C, TileViewManager) == 0x000318, "Member 'UWB_ItemSetList_C::TileViewManager' has a wrong offset!");

}
