#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AchievementItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "S_AchievementData_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_AchievementItem.WB_AchievementItem_C
// 0x0190 (0x0470 - 0x02E0)
class UWB_AchievementItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Description;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Frame;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_0;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Progress;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ProgressBar;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ProgressText;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             UnlockDateTime;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Pad_328[0x8];                                      // 0x0328(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_AchievementData                     AchievementData;                                   // 0x0330(0x0110)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FSlateColor                            LockedColor;                                       // 0x0440(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            CompletedColor;                                    // 0x0454(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WB_AchievementItem(int32 EntryPoint);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void SetAchievementData(const struct FS_AchievementData& AchievementData_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_AchievementItem_C">();
	}
	static class UWB_AchievementItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_AchievementItem_C>();
	}
};
static_assert(alignof(UWB_AchievementItem_C) == 0x000010, "Wrong alignment on UWB_AchievementItem_C");
static_assert(sizeof(UWB_AchievementItem_C) == 0x000470, "Wrong size on UWB_AchievementItem_C");
static_assert(offsetof(UWB_AchievementItem_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_AchievementItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_AchievementItem_C, Description) == 0x0002E8, "Member 'UWB_AchievementItem_C::Description' has a wrong offset!");
static_assert(offsetof(UWB_AchievementItem_C, Frame) == 0x0002F0, "Member 'UWB_AchievementItem_C::Frame' has a wrong offset!");
static_assert(offsetof(UWB_AchievementItem_C, Icon) == 0x0002F8, "Member 'UWB_AchievementItem_C::Icon' has a wrong offset!");
static_assert(offsetof(UWB_AchievementItem_C, Name_0) == 0x000300, "Member 'UWB_AchievementItem_C::Name_0' has a wrong offset!");
static_assert(offsetof(UWB_AchievementItem_C, Progress) == 0x000308, "Member 'UWB_AchievementItem_C::Progress' has a wrong offset!");
static_assert(offsetof(UWB_AchievementItem_C, ProgressBar) == 0x000310, "Member 'UWB_AchievementItem_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UWB_AchievementItem_C, ProgressText) == 0x000318, "Member 'UWB_AchievementItem_C::ProgressText' has a wrong offset!");
static_assert(offsetof(UWB_AchievementItem_C, UnlockDateTime) == 0x000320, "Member 'UWB_AchievementItem_C::UnlockDateTime' has a wrong offset!");
static_assert(offsetof(UWB_AchievementItem_C, AchievementData) == 0x000330, "Member 'UWB_AchievementItem_C::AchievementData' has a wrong offset!");
static_assert(offsetof(UWB_AchievementItem_C, LockedColor) == 0x000440, "Member 'UWB_AchievementItem_C::LockedColor' has a wrong offset!");
static_assert(offsetof(UWB_AchievementItem_C, CompletedColor) == 0x000454, "Member 'UWB_AchievementItem_C::CompletedColor' has a wrong offset!");

}
