#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TradeWithPlayer

#include "Basic.hpp"

#include "E_QuestionAnswer_structs.hpp"
#include "S_ItemInfo_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "S_RecipeInfo_structs.hpp"
#include "MasterServerPlugin_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_TradeWithPlayer.WB_TradeWithPlayer_C
// 0x0138 (0x0418 - 0x02E0)
class UWB_TradeWithPlayer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Amount;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           CountAccept;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           CountBack;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CountCanvas;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        GamepadSwitcher;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       InputField;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TradePreview_C*                     ReceivePreview;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TradePreview_C*                     SendPreview;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           SendTradeOffer;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TradeWith;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                ValueSlider;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Inventory_C*                        WB_Inventory;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOnlineFriendRef*                       FriendInfo;                                        // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_ItemInfo>                    SkinItems;                                         // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_RecipeInfo>                  RecipeItems;                                       // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, int32>                            ItemQuantities;                                    // 0x0370(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTradingItem>                   SendingItems;                                      // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTradingItem>                   ReceivingItems;                                    // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTradingItem                           PendingTradeItem;                                  // 0x03E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsCheckingForCount;                                // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OtherPlayerInventoryIsPrivate;                     // 0x03E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RequestInventoryComplete;                          // 0x03EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EB[0x5];                                      // 0x03EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRequestInventoryCompleted;                       // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         OwnSelectedItemId;                                 // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OwnSelectedRecipeId;                               // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TheirSelectedRecipeId;                             // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TheirSelectedItemId;                               // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AnalogSliderOnCooldown;                            // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddTradeItem(int32 ItemId, int32 CountToTrade);
	void AnalogCooldownComplete();
	void AnalogSliderCooldown();
	void AskForItemCount();
	void BndEvt__WB_TradeWithPlayer_CountAccept_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void BndEvt__WB_TradeWithPlayer_CountBack_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void BndEvt__WB_TradeWithPlayer_InputField_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__WB_TradeWithPlayer_SendTradeOffer_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void BndEvt__WB_TradeWithPlayer_ValueSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ClearTradeData();
	void ConfirmCountChoice();
	void ExecuteUbergraph_WB_TradeWithPlayer(int32 EntryPoint);
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	void GetReceivingItems(TArray<struct FTradingItem>* ReceivingItems_0);
	void GetSelectedIndex(class UWB_TradePreview_C* PreviewTIleView, int32* SelectedIndex);
	void GetSendingItems(TArray<struct FTradingItem>* SendingItems_0);
	void InitializeTrade(class UOnlineFriendRef* Friend);
	void InitOtherPlayerItemsAndRecipes(TArray<struct FTradingItem>& Inventory);
	void NavigateToInventory(class UWB_TradePreview_C* SourcePreview);
	void NavigateToInventoryFromReceive(EUINavigation Navigation_0);
	void NavigateToInventoryFromSend(EUINavigation Navigation_0);
	void NavigateToPreview(EUINavigation Navigation_0);
	void NavigateToReceivePreview(EUINavigation Navigation_0);
	void NavigateToSendPreview(EUINavigation Navigation_0);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnApply();
	void OnBack();
	void OnFailure_5DF3E9CD40CABD8B423A32B8094E724E(const TArray<struct FTradingItem>& Inventory);
	void OnFailure_806832754C15A443C42EEBB216F0E706();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnRequestInventoryCompleted__DelegateSignature();
	void OnSpecialAction();
	void OnSuccess_5DF3E9CD40CABD8B423A32B8094E724E(const TArray<struct FTradingItem>& Inventory);
	void OnSuccess_806832754C15A443C42EEBB216F0E706();
	void RemoveFromTrade(const struct FTradingItem& TradingItem, bool IsReceivingItem);
	void SendTradeAnswer(E_QuestionAnswer Answer);
	void SetItemQuantity(const struct FTradingItem& Item);
	void TryAddTradeItem(const struct FTradingItem& TradeItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_TradeWithPlayer_C">();
	}
	static class UWB_TradeWithPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_TradeWithPlayer_C>();
	}
};
static_assert(alignof(UWB_TradeWithPlayer_C) == 0x000008, "Wrong alignment on UWB_TradeWithPlayer_C");
static_assert(sizeof(UWB_TradeWithPlayer_C) == 0x000418, "Wrong size on UWB_TradeWithPlayer_C");
static_assert(offsetof(UWB_TradeWithPlayer_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_TradeWithPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, Amount) == 0x0002E8, "Member 'UWB_TradeWithPlayer_C::Amount' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, CountAccept) == 0x0002F0, "Member 'UWB_TradeWithPlayer_C::CountAccept' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, CountBack) == 0x0002F8, "Member 'UWB_TradeWithPlayer_C::CountBack' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, CountCanvas) == 0x000300, "Member 'UWB_TradeWithPlayer_C::CountCanvas' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, GamepadSwitcher) == 0x000308, "Member 'UWB_TradeWithPlayer_C::GamepadSwitcher' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, InputField) == 0x000310, "Member 'UWB_TradeWithPlayer_C::InputField' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, ReceivePreview) == 0x000318, "Member 'UWB_TradeWithPlayer_C::ReceivePreview' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, SendPreview) == 0x000320, "Member 'UWB_TradeWithPlayer_C::SendPreview' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, SendTradeOffer) == 0x000328, "Member 'UWB_TradeWithPlayer_C::SendTradeOffer' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, TradeWith) == 0x000330, "Member 'UWB_TradeWithPlayer_C::TradeWith' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, ValueSlider) == 0x000338, "Member 'UWB_TradeWithPlayer_C::ValueSlider' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, WB_Inventory) == 0x000340, "Member 'UWB_TradeWithPlayer_C::WB_Inventory' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, FriendInfo) == 0x000348, "Member 'UWB_TradeWithPlayer_C::FriendInfo' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, SkinItems) == 0x000350, "Member 'UWB_TradeWithPlayer_C::SkinItems' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, RecipeItems) == 0x000360, "Member 'UWB_TradeWithPlayer_C::RecipeItems' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, ItemQuantities) == 0x000370, "Member 'UWB_TradeWithPlayer_C::ItemQuantities' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, SendingItems) == 0x0003C0, "Member 'UWB_TradeWithPlayer_C::SendingItems' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, ReceivingItems) == 0x0003D0, "Member 'UWB_TradeWithPlayer_C::ReceivingItems' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, PendingTradeItem) == 0x0003E0, "Member 'UWB_TradeWithPlayer_C::PendingTradeItem' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, IsCheckingForCount) == 0x0003E8, "Member 'UWB_TradeWithPlayer_C::IsCheckingForCount' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, OtherPlayerInventoryIsPrivate) == 0x0003E9, "Member 'UWB_TradeWithPlayer_C::OtherPlayerInventoryIsPrivate' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, RequestInventoryComplete) == 0x0003EA, "Member 'UWB_TradeWithPlayer_C::RequestInventoryComplete' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, OnRequestInventoryCompleted) == 0x0003F0, "Member 'UWB_TradeWithPlayer_C::OnRequestInventoryCompleted' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, OwnSelectedItemId) == 0x000400, "Member 'UWB_TradeWithPlayer_C::OwnSelectedItemId' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, OwnSelectedRecipeId) == 0x000404, "Member 'UWB_TradeWithPlayer_C::OwnSelectedRecipeId' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, TheirSelectedRecipeId) == 0x000408, "Member 'UWB_TradeWithPlayer_C::TheirSelectedRecipeId' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, TheirSelectedItemId) == 0x00040C, "Member 'UWB_TradeWithPlayer_C::TheirSelectedItemId' has a wrong offset!");
static_assert(offsetof(UWB_TradeWithPlayer_C, AnalogSliderOnCooldown) == 0x000410, "Member 'UWB_TradeWithPlayer_C::AnalogSliderOnCooldown' has a wrong offset!");

}
