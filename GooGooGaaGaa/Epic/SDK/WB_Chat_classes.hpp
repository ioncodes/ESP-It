#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Chat

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "EChatType_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ETeamID_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Chat.WB_Chat_C
// 0x0090 (0x0370 - 0x02E0)
class UWB_Chat_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         AllChatRow;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ChatBorder;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ChatEntryList;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       ChatTextBoxAll;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ChatTextBoxSwitcher;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       ChatTextBoxTeam;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TeamChatRow;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0320(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0328(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x0330(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_ChatEntry_C*>                ChatEntries;                                       // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsDirty;                                           // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChatIsOpen;                                        // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34A[0x2];                                      // 0x034A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxChatMessages;                                   // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EChatType                                     CurrentChatType;                                   // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x3];                                      // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FocusedChatEntryIndex;                             // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeInput;                                         // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeSpeed;                                         // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScrollSpeed;                                       // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddChatMessage(const class FText& PlayerName, const class FText& ChatMessage, EChatType ChatType, ETeamID Team, const struct FLinearColor& PlayerColor);
	void AddPlayerChatMessage(class AB_PlayerState_C* PlayerState, const class FText& ChatMessage, EChatType ChatType);
	void BndEvt__ChatTextBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__ChatTextBoxAll_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	double CalculateMaxScrollOffset();
	void ClampChatMessages();
	int32 ClampChatOffset(int32 Value);
	void ClearChat();
	void ClearChatBoxesText();
	void CloseChat();
	void Construct();
	void ExecuteUbergraph_WB_Chat(int32 EntryPoint);
	void FadeOutScrollBar();
	void GetChatTextBox(class UEditableTextBox** ChatTextBox);
	class FText GetTextToAll();
	class FText GetTextToTeam();
	ESlateVisibility GetVisibility_0();
	bool IsChatOpenButNotFocused();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnTextChanged(const class FText& InText, class UEditableTextBox* ChatBox);
	void OpenChat(EChatType ChatType);
	void Scroll(EScrollDirection ScrollDirection);
	void ScrollDown();
	void ScrollUp();
	void SetScrollBarOpacity(double Opacity);
	void SetupByGameState();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateScrollBarVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Chat_C">();
	}
	static class UWB_Chat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Chat_C>();
	}
};
static_assert(alignof(UWB_Chat_C) == 0x000008, "Wrong alignment on UWB_Chat_C");
static_assert(sizeof(UWB_Chat_C) == 0x000370, "Wrong size on UWB_Chat_C");
static_assert(offsetof(UWB_Chat_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_Chat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, AllChatRow) == 0x0002E8, "Member 'UWB_Chat_C::AllChatRow' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, ChatBorder) == 0x0002F0, "Member 'UWB_Chat_C::ChatBorder' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, ChatEntryList) == 0x0002F8, "Member 'UWB_Chat_C::ChatEntryList' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, ChatTextBoxAll) == 0x000300, "Member 'UWB_Chat_C::ChatTextBoxAll' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, ChatTextBoxSwitcher) == 0x000308, "Member 'UWB_Chat_C::ChatTextBoxSwitcher' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, ChatTextBoxTeam) == 0x000310, "Member 'UWB_Chat_C::ChatTextBoxTeam' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, TeamChatRow) == 0x000318, "Member 'UWB_Chat_C::TeamChatRow' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, TextBlock_0) == 0x000320, "Member 'UWB_Chat_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, TextBlock_1) == 0x000328, "Member 'UWB_Chat_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, VerticalBox_0) == 0x000330, "Member 'UWB_Chat_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, ChatEntries) == 0x000338, "Member 'UWB_Chat_C::ChatEntries' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, IsDirty) == 0x000348, "Member 'UWB_Chat_C::IsDirty' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, ChatIsOpen) == 0x000349, "Member 'UWB_Chat_C::ChatIsOpen' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, MaxChatMessages) == 0x00034C, "Member 'UWB_Chat_C::MaxChatMessages' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, CurrentChatType) == 0x000350, "Member 'UWB_Chat_C::CurrentChatType' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, FocusedChatEntryIndex) == 0x000354, "Member 'UWB_Chat_C::FocusedChatEntryIndex' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, FadeInput) == 0x000358, "Member 'UWB_Chat_C::FadeInput' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, FadeSpeed) == 0x000360, "Member 'UWB_Chat_C::FadeSpeed' has a wrong offset!");
static_assert(offsetof(UWB_Chat_C, ScrollSpeed) == 0x000368, "Member 'UWB_Chat_C::ScrollSpeed' has a wrong offset!");

}
