#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ServerList

#include "Basic.hpp"

#include "WB_ServerListBase_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "AdvancedSessions_structs.hpp"
#include "OnlineSubsystemUtils_structs.hpp"
#include "EServerFilter_structs.hpp"
#include "ESortMethod_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ServerList.WB_ServerList_C
// 0x02B8 (0x05B0 - 0x02F8)
class UWB_ServerList_C final : public UWB_ServerListBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           Back;                                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TabButton_C*                        Button_Filter_All;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TabButton_C*                        Button_Filter_Creative;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TabButton_C*                        Button_Filter_Custom;                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_TabButton_C*                        Button_Filter_Official;                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DurationSortImage;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GameModeSortImage;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GameModeText;                                      // 0x0340(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ControllerIcon_C*                   LeftShoulderIcon;                                  // 0x0348(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MapSortImage;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MapText;                                           // 0x0358(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MatchTimeText;                                     // 0x0360(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PingSortImage;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PingText;                                          // 0x0370(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayersSortImage;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayersText;                                       // 0x0380(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Refresh;                                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ControllerIcon_C*                   RightShoulderIcon;                                 // 0x0390(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SearchLockedOverlay;                               // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      SearchThrobber;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ServerListScroll;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ServerSortImage;                                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ServerText;                                        // 0x03B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SortByGameModeButton;                              // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SortByMapButton;                                   // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SortByMatchTime;                                   // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SortByPingButton;                                  // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SortByPlayersButton;                               // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SortByServerButton;                                // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SortByTournament;                                  // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Status;                                            // 0x03F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TournamentSortImage;                               // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TournamentText;                                    // 0x0408(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ServerRow_C*                        WB_ServerRow;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 StatusText;                                        // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bRefreshButtonEnabeled;                            // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53BF[0x7];                                     // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBlueprintSessionResult>        FoundServers;                                      // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSessionsSearchSetting>         CurrentSessionSearchSettings;                      // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         ListedServerNames_0;                               // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESortMethod                                   SortMode;                                          // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReverseSort;                                       // 0x0461(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EServerFilter                                 CurrentFilter;                                     // 0x0462(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53C0[0x5];                                     // 0x0463(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWB_TabButton_C*>                FilterButtons;                                     // 0x0468(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	EBPServerPresenceSearchType                   TempSearchType;                                    // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53C1[0x7];                                     // 0x0479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBlueprintSessionResult                TempCurrentServer;                                 // 0x0480(0x0120)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWB_ServerRow_C*                        NewServerTemp;                                     // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOnlineSessionSearch*                   SessionSearch;                                     // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddServerRow(const struct FBlueprintSessionResult& SearchResult, bool IsCustom, bool UserGeneratedContent, class UWB_ServerRow_C** ServerWidget);
	void AddServersSorted();
	void BndEvt__AllFilterButton_K2Node_ComponentBoundEvent_871_Clicked__DelegateSignature();
	void BndEvt__Button_Filter_Creative_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void BndEvt__CustomFilterButton_K2Node_ComponentBoundEvent_1045_Clicked__DelegateSignature();
	void BndEvt__OfficialFilterButton_K2Node_ComponentBoundEvent_1029_Clicked__DelegateSignature();
	void BndEvt__SortByGameModeButton_K2Node_ComponentBoundEvent_462_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByMapButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByMatchTime_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByPingButton_K2Node_ComponentBoundEvent_485_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByPlayersButton_K2Node_ComponentBoundEvent_509_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByServerButton_K2Node_ComponentBoundEvent_193_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByTournament_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_Button_57_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature();
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_69_Clicked__DelegateSignature();
	void ChangeFilter(EServerFilter NewFilter);
	void Construct();
	void ExecuteUbergraph_WB_ServerList(int32 EntryPoint);
	void FocusServerButton();
	ESlateVisibility Get_DurationSortImage_Visibility_0();
	class FText Get_DurationText_Text_0();
	ESlateVisibility Get_GameModeSortImage_Visibility_0();
	class FText Get_GameModeText_Text_0();
	ESlateVisibility Get_MapSortImage_Visibility_0();
	class FText Get_MapText_Text_0();
	ESlateVisibility Get_PingSortImage_Visibility_0();
	class FText Get_PingText_Text_0();
	ESlateVisibility Get_PlayersSortImage_Visibility_0();
	class FText Get_PlayersText_Text_0();
	bool Get_Refresh_bIsEnabled();
	ESlateVisibility Get_SearchLockedOverlay_Visibility();
	ESlateVisibility Get_SearchThrobber_Visibility_0();
	ESlateVisibility Get_ServerSort_Visibility_0();
	class FText Get_ServerText_Text_0();
	ESlateVisibility Get_TournamentSortImage_Visibility_0();
	class FText Get_TournamentText_Text_0();
	ESlateVisibility GetControllerIconVisibility();
	void GetInitialFocusWidget(class UUserWidget** InitialFocusWidget);
	class FText GetStatusMessage();
	void GetStatusMessageVisibility(ESlateVisibility* Param_Visibility);
	void HandleServerFound(const struct FBlueprintSessionResult& CurrentServer, EBPServerPresenceSearchType SearchType, class UWB_ServerRow_C** ServerWidget);
	void HandleServersFound(TArray<struct FBlueprintSessionResult>& Servers, EBPServerPresenceSearchType SearchType);
	void NextFilter(int32 Direction);
	void OnApply();
	void OnBack();
	void OnCallFailed_456AB2C74F07026000179C81AF6568D5(bool bWasSuccessful);
	void OnCallFailed_456AB2C74F07026000179C81BD4DC490(bool bWasSuccessful);
	void OnCallFailed_542E60C048C6474E739F6A86CFE54BE5(bool bWasSuccessful);
	void OnCallFailed_542E60C048C6474E739F6A86DDCDE7A0(bool bWasSuccessful);
	void OnCancelFindSessionsComplete_542E60C048C6474E739F6A86CFE54BE5(bool bWasSuccessful);
	void OnCancelFindSessionsComplete_542E60C048C6474E739F6A86DDCDE7A0(bool bWasSuccessful);
	void OnFindSessionsComplete_456AB2C74F07026000179C81AF6568D5(bool bWasSuccessful);
	void OnFindSessionsComplete_456AB2C74F07026000179C81BD4DC490(bool bWasSuccessful);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnSpecialAction();
	void PingCustomServer(const struct FBlueprintSessionResult& Server);
	void RemoveAllServers();
	void ServerPassesCurrentFilter(class UWB_ServerRow_C* ServerRow, bool* Pass);
	void SortBy(ESortMethod SortType);
	void SortServer(class UObject* A, class UObject* B, bool* Return);
	void UpdateTabButtonStyles();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ServerList_C">();
	}
	static class UWB_ServerList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ServerList_C>();
	}
};
static_assert(alignof(UWB_ServerList_C) == 0x000008, "Wrong alignment on UWB_ServerList_C");
static_assert(sizeof(UWB_ServerList_C) == 0x0005B0, "Wrong size on UWB_ServerList_C");
static_assert(offsetof(UWB_ServerList_C, UberGraphFrame) == 0x0002F8, "Member 'UWB_ServerList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, Back) == 0x000300, "Member 'UWB_ServerList_C::Back' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, Button_Filter_All) == 0x000308, "Member 'UWB_ServerList_C::Button_Filter_All' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, Button_Filter_Creative) == 0x000310, "Member 'UWB_ServerList_C::Button_Filter_Creative' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, Button_Filter_Custom) == 0x000318, "Member 'UWB_ServerList_C::Button_Filter_Custom' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, Button_Filter_Official) == 0x000320, "Member 'UWB_ServerList_C::Button_Filter_Official' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, CanvasPanel_0) == 0x000328, "Member 'UWB_ServerList_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, DurationSortImage) == 0x000330, "Member 'UWB_ServerList_C::DurationSortImage' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, GameModeSortImage) == 0x000338, "Member 'UWB_ServerList_C::GameModeSortImage' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, GameModeText) == 0x000340, "Member 'UWB_ServerList_C::GameModeText' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, LeftShoulderIcon) == 0x000348, "Member 'UWB_ServerList_C::LeftShoulderIcon' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, MapSortImage) == 0x000350, "Member 'UWB_ServerList_C::MapSortImage' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, MapText) == 0x000358, "Member 'UWB_ServerList_C::MapText' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, MatchTimeText) == 0x000360, "Member 'UWB_ServerList_C::MatchTimeText' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, PingSortImage) == 0x000368, "Member 'UWB_ServerList_C::PingSortImage' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, PingText) == 0x000370, "Member 'UWB_ServerList_C::PingText' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, PlayersSortImage) == 0x000378, "Member 'UWB_ServerList_C::PlayersSortImage' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, PlayersText) == 0x000380, "Member 'UWB_ServerList_C::PlayersText' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, Refresh) == 0x000388, "Member 'UWB_ServerList_C::Refresh' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, RightShoulderIcon) == 0x000390, "Member 'UWB_ServerList_C::RightShoulderIcon' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, SearchLockedOverlay) == 0x000398, "Member 'UWB_ServerList_C::SearchLockedOverlay' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, SearchThrobber) == 0x0003A0, "Member 'UWB_ServerList_C::SearchThrobber' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, ServerListScroll) == 0x0003A8, "Member 'UWB_ServerList_C::ServerListScroll' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, ServerSortImage) == 0x0003B0, "Member 'UWB_ServerList_C::ServerSortImage' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, ServerText) == 0x0003B8, "Member 'UWB_ServerList_C::ServerText' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, SortByGameModeButton) == 0x0003C0, "Member 'UWB_ServerList_C::SortByGameModeButton' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, SortByMapButton) == 0x0003C8, "Member 'UWB_ServerList_C::SortByMapButton' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, SortByMatchTime) == 0x0003D0, "Member 'UWB_ServerList_C::SortByMatchTime' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, SortByPingButton) == 0x0003D8, "Member 'UWB_ServerList_C::SortByPingButton' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, SortByPlayersButton) == 0x0003E0, "Member 'UWB_ServerList_C::SortByPlayersButton' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, SortByServerButton) == 0x0003E8, "Member 'UWB_ServerList_C::SortByServerButton' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, SortByTournament) == 0x0003F0, "Member 'UWB_ServerList_C::SortByTournament' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, Status) == 0x0003F8, "Member 'UWB_ServerList_C::Status' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, TournamentSortImage) == 0x000400, "Member 'UWB_ServerList_C::TournamentSortImage' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, TournamentText) == 0x000408, "Member 'UWB_ServerList_C::TournamentText' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, WB_ServerRow) == 0x000410, "Member 'UWB_ServerList_C::WB_ServerRow' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, StatusText) == 0x000418, "Member 'UWB_ServerList_C::StatusText' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, bRefreshButtonEnabeled) == 0x000428, "Member 'UWB_ServerList_C::bRefreshButtonEnabeled' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, FoundServers) == 0x000430, "Member 'UWB_ServerList_C::FoundServers' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, CurrentSessionSearchSettings) == 0x000440, "Member 'UWB_ServerList_C::CurrentSessionSearchSettings' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, ListedServerNames_0) == 0x000450, "Member 'UWB_ServerList_C::ListedServerNames_0' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, SortMode) == 0x000460, "Member 'UWB_ServerList_C::SortMode' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, ReverseSort) == 0x000461, "Member 'UWB_ServerList_C::ReverseSort' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, CurrentFilter) == 0x000462, "Member 'UWB_ServerList_C::CurrentFilter' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, FilterButtons) == 0x000468, "Member 'UWB_ServerList_C::FilterButtons' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, TempSearchType) == 0x000478, "Member 'UWB_ServerList_C::TempSearchType' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, TempCurrentServer) == 0x000480, "Member 'UWB_ServerList_C::TempCurrentServer' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, NewServerTemp) == 0x0005A0, "Member 'UWB_ServerList_C::NewServerTemp' has a wrong offset!");
static_assert(offsetof(UWB_ServerList_C, SessionSearch) == 0x0005A8, "Member 'UWB_ServerList_C::SessionSearch' has a wrong offset!");

}
