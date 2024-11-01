#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PendingTrades

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_PendingTrades.WB_PendingTrades_C
// 0x0058 (0x0338 - 0x02E0)
class UWB_PendingTrades_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           Button_Back;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      CircularThrobber;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ConfigureSkillText;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DescriptionBar;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ControllerIcon_C*                   LeftShoulderIcon;                                  // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ControllerIcon_C*                   RightShoulderIcon;                                 // 0x0310(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TabButton_C*                        TabButton_Incoming;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TabButton_C*                        TabButton_Outgoing;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              TradeList;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsInIncomingList;                                  // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AcceptKeyPressed();
	void BndEvt__WB_PendingTrades_Button_Back_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void BndEvt__WB_PendingTrades_TabButton_Incoming_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void BndEvt__WB_PendingTrades_TabButton_Outgoing_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WB_PendingTrades(int32 EntryPoint);
	ESlateVisibility Get_ShoulderIcon_Visibility();
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void GetSelectedEntry(class UWB_PendingTradeRequest_C** SelectedRequest);
	void GetTradeRequests(bool Incoming);
	void GoToIncoming();
	void GoToOutgoing();
	void InventoryUpdated();
	void OnApply();
	void OnBack();
	void OnFailure_07C387D64A181177E6DC79BDC208883E(const TArray<struct FTradeRequest>& Requests);
	void OnFailure_AEF6B7D24DBB72DE16FA2CB877898848(const TArray<struct FTradeRequest>& Requests);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnSpecialAction();
	void OnSuccess_07C387D64A181177E6DC79BDC208883E(const TArray<struct FTradeRequest>& Requests);
	void OnSuccess_AEF6B7D24DBB72DE16FA2CB877898848(const TArray<struct FTradeRequest>& Requests);
	void PopulateList(TArray<struct FTradeRequest>& Requests, bool IsIncoming);
	void RemovePendingRequest(class UB_PendingTradeRquestData_C* TradeRequestData);
	void SortByDate(class UObject* ObjectA, class UObject* ObjectB, bool* Result);
	void SpecialKeyPressed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_PendingTrades_C">();
	}
	static class UWB_PendingTrades_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_PendingTrades_C>();
	}
};
static_assert(alignof(UWB_PendingTrades_C) == 0x000008, "Wrong alignment on UWB_PendingTrades_C");
static_assert(sizeof(UWB_PendingTrades_C) == 0x000338, "Wrong size on UWB_PendingTrades_C");
static_assert(offsetof(UWB_PendingTrades_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_PendingTrades_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_PendingTrades_C, Button_Back) == 0x0002E8, "Member 'UWB_PendingTrades_C::Button_Back' has a wrong offset!");
static_assert(offsetof(UWB_PendingTrades_C, CircularThrobber) == 0x0002F0, "Member 'UWB_PendingTrades_C::CircularThrobber' has a wrong offset!");
static_assert(offsetof(UWB_PendingTrades_C, ConfigureSkillText) == 0x0002F8, "Member 'UWB_PendingTrades_C::ConfigureSkillText' has a wrong offset!");
static_assert(offsetof(UWB_PendingTrades_C, DescriptionBar) == 0x000300, "Member 'UWB_PendingTrades_C::DescriptionBar' has a wrong offset!");
static_assert(offsetof(UWB_PendingTrades_C, LeftShoulderIcon) == 0x000308, "Member 'UWB_PendingTrades_C::LeftShoulderIcon' has a wrong offset!");
static_assert(offsetof(UWB_PendingTrades_C, RightShoulderIcon) == 0x000310, "Member 'UWB_PendingTrades_C::RightShoulderIcon' has a wrong offset!");
static_assert(offsetof(UWB_PendingTrades_C, TabButton_Incoming) == 0x000318, "Member 'UWB_PendingTrades_C::TabButton_Incoming' has a wrong offset!");
static_assert(offsetof(UWB_PendingTrades_C, TabButton_Outgoing) == 0x000320, "Member 'UWB_PendingTrades_C::TabButton_Outgoing' has a wrong offset!");
static_assert(offsetof(UWB_PendingTrades_C, TradeList) == 0x000328, "Member 'UWB_PendingTrades_C::TradeList' has a wrong offset!");
static_assert(offsetof(UWB_PendingTrades_C, IsInIncomingList) == 0x000330, "Member 'UWB_PendingTrades_C::IsInIncomingList' has a wrong offset!");

}

