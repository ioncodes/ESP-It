#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TradeHistoryEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MasterServerPlugin_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_TradeHistoryEntry.WB_TradeHistoryEntry_C
// 0x00D8 (0x03B8 - 0x02E0)
class UWB_TradeHistoryEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Background;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CreationTime;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             IncomeOutgoingText;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                              LoadingThrobber;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                OpenTradeButton;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_PlayerIconAndName_C*                PlayerIconAndName;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             StatusText;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTradeRequest                          TradeRequest;                                      // 0x0320(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsIncoming;                                        // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x3];                                      // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           SelectedColor;                                     // 0x0374(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_384[0x4];                                      // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       TargetPlayerNetId;                                 // 0x0388(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void BndEvt__WB_TradeHistoryEntry_OpenTradeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_TradeHistoryEntry_OpenTradeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_TradeHistoryEntry_OpenTradeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WB_TradeHistoryEntry(int32 EntryPoint);
	void FriendListReceived();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void SetUserInfos();
	void ShowTradePreview();
	void UserInfosReceived(TArray<struct FUniqueNetIdRepl>& UserIds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_TradeHistoryEntry_C">();
	}
	static class UWB_TradeHistoryEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_TradeHistoryEntry_C>();
	}
};
static_assert(alignof(UWB_TradeHistoryEntry_C) == 0x000008, "Wrong alignment on UWB_TradeHistoryEntry_C");
static_assert(sizeof(UWB_TradeHistoryEntry_C) == 0x0003B8, "Wrong size on UWB_TradeHistoryEntry_C");
static_assert(offsetof(UWB_TradeHistoryEntry_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_TradeHistoryEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_TradeHistoryEntry_C, Background) == 0x0002E8, "Member 'UWB_TradeHistoryEntry_C::Background' has a wrong offset!");
static_assert(offsetof(UWB_TradeHistoryEntry_C, CreationTime) == 0x0002F0, "Member 'UWB_TradeHistoryEntry_C::CreationTime' has a wrong offset!");
static_assert(offsetof(UWB_TradeHistoryEntry_C, IncomeOutgoingText) == 0x0002F8, "Member 'UWB_TradeHistoryEntry_C::IncomeOutgoingText' has a wrong offset!");
static_assert(offsetof(UWB_TradeHistoryEntry_C, LoadingThrobber) == 0x000300, "Member 'UWB_TradeHistoryEntry_C::LoadingThrobber' has a wrong offset!");
static_assert(offsetof(UWB_TradeHistoryEntry_C, OpenTradeButton) == 0x000308, "Member 'UWB_TradeHistoryEntry_C::OpenTradeButton' has a wrong offset!");
static_assert(offsetof(UWB_TradeHistoryEntry_C, PlayerIconAndName) == 0x000310, "Member 'UWB_TradeHistoryEntry_C::PlayerIconAndName' has a wrong offset!");
static_assert(offsetof(UWB_TradeHistoryEntry_C, StatusText) == 0x000318, "Member 'UWB_TradeHistoryEntry_C::StatusText' has a wrong offset!");
static_assert(offsetof(UWB_TradeHistoryEntry_C, TradeRequest) == 0x000320, "Member 'UWB_TradeHistoryEntry_C::TradeRequest' has a wrong offset!");
static_assert(offsetof(UWB_TradeHistoryEntry_C, IsIncoming) == 0x000370, "Member 'UWB_TradeHistoryEntry_C::IsIncoming' has a wrong offset!");
static_assert(offsetof(UWB_TradeHistoryEntry_C, SelectedColor) == 0x000374, "Member 'UWB_TradeHistoryEntry_C::SelectedColor' has a wrong offset!");
static_assert(offsetof(UWB_TradeHistoryEntry_C, TargetPlayerNetId) == 0x000388, "Member 'UWB_TradeHistoryEntry_C::TargetPlayerNetId' has a wrong offset!");

}

