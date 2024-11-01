#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ETeamID_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PropWitchHuntModule_classes.hpp"
#include "S_ServerStat_structs.hpp"
#include "ESleepPropSendState_structs.hpp"
#include "EChatType_structs.hpp"
#include "MasterServerPlugin_structs.hpp"
#include "ESkillCategory_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PlayerController.B_PlayerController_C
// 0x02C0 (0x0B18 - 0x0858)
class AB_PlayerController_C : public AWitchItPlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0858(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UB_AimAssistComponent_C*                B_AimAssistComponent;                              // 0x0860(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUserInterfaceHidden;                             // 0x0868(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_869[0x7];                                      // 0x0869(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         TrackingUIClasses;                                 // 0x0870(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        ChatMessagesPerSecond;                             // 0x0880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChatBlockCooldown;                                 // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChatCooldownPerViolation;                          // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxChatMessagesPerSecond;                          // 0x0898(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CollectedPropsForSleep;                            // 0x08A0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          IsInventoryDebug;                                  // 0x08B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B1[0x7];                                      // 0x08B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AB_PlayerState_C*>               PendingPlayerTeamChoice;                           // 0x08B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         CollectedPropsForWake;                             // 0x08C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         CollectedPropsForScale;                            // 0x08D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         SendingProps;                                      // 0x08E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FVector>                        SendingPropLocations;                              // 0x08F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                       SendingPropRotations;                              // 0x0908(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                         SendingWakeProps;                                  // 0x0918(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         SendingScaleProps;                                 // 0x0928(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FVector>                        SendingPropScales;                                 // 0x0938(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  SendingStartAwakeProps;                            // 0x0948(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  SendingFreezedProps;                               // 0x0958(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESleepPropSendState                           SleepPropSendState;                                // 0x0968(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESleepPropSendState                           WakePropSendState;                                 // 0x0969(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESleepPropSendState                           ScalePropSendState;                                // 0x096A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96B[0x1];                                      // 0x096B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SleepPropSendTries;                                // 0x096C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WakePropSendTries;                                 // 0x0970(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRequesting;                                      // 0x0974(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_975[0x3];                                      // 0x0975(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APlayerState*>                   RemainingPlayers;                                  // 0x0978(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         TestBitValue;                                      // 0x0988(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TestBitIndex;                                      // 0x098C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CurrentControlRotation;                            // 0x0990(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class APawn*                                  CurrentControlledPawn;                             // 0x09A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ControlledPawnIsWitch;                             // 0x09B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B1[0x7];                                      // 0x09B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_ServerStat>                  CurrentServerStats;                                // 0x09B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AB_StaticMeshProp_C*>            Proplist;                                          // 0x09C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AB_Witch_C*>                     WitchList;                                         // 0x09D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          WitchPropJiggleMode;                               // 0x09E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E9[0x7];                                      // 0x09E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         WitchPropList;                                     // 0x09F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                JiggleVector;                                      // 0x0A00(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         JiggleForce;                                       // 0x0A18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ScalePropSendTries;                                // 0x0A1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TransformRange;                                    // 0x0A20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetProp;                                        // 0x0A28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentEyeMovementDirection;                       // 0x0A30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentEyeMovementAxisValue;                       // 0x0A31(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A32[0x6];                                      // 0x0A32(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CurrentClientForwadAxisVector;                     // 0x0A38(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentClientRightAxisVector;                      // 0x0A50(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentClientUpAxisVector;                         // 0x0A68(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentPressedMoveUpAxisValue;                     // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InitializeTournament;                              // 0x0A88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A89[0x7];                                      // 0x0A89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class UWB_BaseModWidget_C*> HUDExtensions;                                     // 0x0A90(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWB_NewItemPopup_C*                     NewItemPopupWidget;                                // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             AchievementsTable;                                 // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        KeepTargetPropTime;                                // 0x0AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InScopeMode;                                       // 0x0AF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AF9[0x7];                                      // 0x0AF9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_FieldOfViewComponent_C*              FOVComponent;                                      // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         ControllerSensivity;                               // 0x0B08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultYawScale;                                   // 0x0B0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultPitchScale;                                 // 0x0B10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_B_PlayerController(int32 EntryPoint);
	void CollectLocalAchievement(class FName AchievementID);
	void CheckForDormant();
	void CheckForTickingComps();
	void CheckForSleepingProps();
	void SetScopeMode(bool Active);
	void TickScopeMode();
	void AddNewPropToCollection(int32 PropID, int32 CategoryCount, int32 SetCount, int32 TotalCategory, int32 TotalSet);
	void HandleStatChangeNotificationReceived(EStatChangeReason Reason, const class FString& StatApiName, int64 NewValue);
	void CreateItemPopupWidget();
	void QuestUpdated(const struct FClientQuest& Quest);
	void RefreshPawn();
	void ConditionalShowSvnVersionWarning(int32 ServerVersion, int32 ClientVersion);
	void SelectPlayerTeam(ETeamID SelectedTeam);
	void TickTournamentInitialization();
	void TypeChatMessage(EChatType ChatType);
	void GetPlayerControllerThirdPersonTraceDirection(double Range, struct FVector* Start, struct FVector* End);
	class APawn* GetCurrentControlledWitchPawn();
	struct FRotator GetControlRotationForMovementInput();
	bool IsUsingPlayerControllerMovementInput();
	void HandleMoveUp(double AxisValue);
	void HandleMoveRight(double AxisValue);
	void HandleMoveForward(double AxisValue);
	void ReplicateAxisVector(const struct FVector& NewForwardVector, const struct FVector& NewRightVector, const struct FVector& NewUpVector);
	void TickVisuals();
	void RemoveAllReplicationProps();
	void TickCollectedPropsForScale();
	void VoteForKickFunc(bool Kick);
	void StartKickVoteServerFunc(class APlayerState* PlayerToKick, const class FText& ReasonToKick);
	void SendChatMessageServerFunc(EChatType ChatType, const class FText& InText);
	void CreateAndSendServerInfo();
	void GetSkillWithName(const class FString& ClassName, ESkillCategory Skill_Category, class UClass** Skill);
	void TestRemoveItem();
	void TestOutputCraftedItems(TArray<struct FBlueprintOnlineItem>& Incrediants, TArray<struct FBlueprintOnlineItem>& CraftedItems);
	void TestExchangeCommonItem(TArray<struct FBlueprintOnlineItem>& AllItems, TArray<struct FBlueprintOnlineItem>* Incredients);
	void RefreshJiggleProps();
	void TickCollectedPropsForWake();
	void TryResetIdleTime();
	void TickPlayerStateInitialization();
	void ShowPlayerListMenu(bool WasRelease);
	void TickCollectedPropsForSleep();
	void AddChatMessagesSent();
	void UpdateChatBlocking();
	void UpdateChatViolation();
	void UpdateChatMessagesPerSecond();
	bool MaxChatMessagesPerSecondSent();
	void InpActEvt_Alt_M_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Alt_V_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void OnFailure_8EEBFB5E40DA48B300341CB094C09B40(const TArray<struct FBlueprintOnlineItem>& Items);
	void OnSuccess_8EEBFB5E40DA48B300341CB094C09B40(const TArray<struct FBlueprintOnlineItem>& Items);
	void OnFailure_E115D7FB4CB46569B723769816421735(const TArray<struct FBlueprintOnlineItem>& Items);
	void OnSuccess_E115D7FB4CB46569B723769816421735(const TArray<struct FBlueprintOnlineItem>& Items);
	void InpActEvt_Five_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Menu_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_HideUserInterface_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_PlayerList_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_PlayerList_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_TakeScreenshoot_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_ToggleHelp_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_TypeChatMessage_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_F4_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_F5_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_TypeTeamChatMessage_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_ChatScrollUp_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_ChatScrollDown_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_ActivateScopeMode_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_ActivateScopeMode_K2Node_InputActionEvent_0(const struct FKey& Key);
	void OnMessageProcessed_0FC174CF4F2A67E518FD869CEBC63EA6(bool bSuccess, const class FString& SanitizedMessage);
	void OnCallFailed_0FC174CF4F2A67E518FD869CEBC63EA6(bool bSuccess, const class FString& SanitizedMessage);
	void RequestGSStats();
	void GetGSStat();
	void TravelToMap(const class FString& MapName);
	void GrantItemServer(int32 Item);
	void GrantDropExpServer(int32 Exp);
	void ShowDropExpClient(int32 CurrentExp, int32 MaxExp);
	void ShowDropExpServer();
	void JumpAllWitches();
	void ToggleJiggleMode(int32 Force);
	void ExecuteConsoleCommandFromClient(const class FString& Command);
	void GrantPrestigeExp(int32 Exp);
	void ShowPrestigeExpServer();
	void SetReadyServer(bool WantsToSpectate, bool Ready);
	void SendChatMessageServer(const class FText& ChatMessage, EChatType ChatType);
	void ReceiveBeginPlay();
	void SelectHunterSkill(class UClass* Skill, ESkillCategory SkillCategory);
	void PutPropsToSleep(const TArray<class AActor*>& Actors, const TArray<struct FVector>& SleepLocation, const TArray<struct FRotator>& SleepRotation);
	void CollectSleepProp(class AActor* Actor);
	void SelectWitchSkill(class UClass* Skill, ESkillCategory SkillCategory);
	void StartKickVote(class APlayerState* PlayerToKick, const class FText& Reason);
	void VoteForKick(bool Kick);
	void SendWaitForNextKick(int32 WaitTime);
	void NotifyIdleKickOwningClient();
	void PutPropsToSleepSuccess();
	void PutPropsToSleepFailedUnkownProp();
	void CollectWakeProp(class AActor* Actor);
	void PutPropsToWake(const TArray<class AActor*>& Actors);
	void PutPropsToWakeSuccess();
	void PutPropsToWakeFailedUnkownProp();
	void AddNewPropToCollectionClient(int32 PropID, int32 CountCategory, int32 CountSet, int32 TotalCategory, int32 TotalSet);
	void RequestServerInfoServer();
	void RequestServerInfoClient(const TArray<struct FS_ServerStat>& ServerStats);
	void VoteMap(int32 Index_0);
	void ReportPlayerServer(class APlayerState* PlayerToReport, int32 ReasonIndex);
	void ReportPlayerClient(class APlayerState* ReportedPlayerState);
	void SetReady(bool WantsToSpectate, bool Ready);
	void PlayHitmarker();
	void UpdatePropScales(const TArray<class AActor*>& Actors, const TArray<struct FVector>& Scales, const TArray<bool>& StartAwakes, const TArray<bool>& Freezes);
	void CollectScaleProp(const class AActor* Actor);
	void ScalePropsUnkownProp();
	void ScalePropsSuccess();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue);
	void ServerSetCurrentAxisVector(const struct FVector& Location);
	void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0(float AxisValue);
	void ServerJump();
	void InitializeTournamentPlayers(const TArray<class FString>& PlayerIds, const TArray<struct FS_TournamentPlayer>& TournamentPlayers);
	void RequestTournamentPlayers();
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_0(float AxisValue);
	void ClientSetRevisionNumber(int32 RevisionNumber);
	void SelectPlayerTeamServer(ETeamID SelectedTeam);
	void ClientSetWasKicked();
	void ClientSetServerDevMode(bool IsRunningInDevMode);
	void CreateHUDExtension(class FName ExtensionName, class UClass* ExtensionClass);
	void UpdateHUDExtensionFloat(class FName ExtensionName, class FName ParameterName, double ParameterValue);
	void DestroyHUDExtension(class FName ExtensionName);
	void UpdateHUDExtensionInt(class FName ExtensionName, class FName ParameterName, int32 ParameterValue);
	void UpdateHUDExtensionText(class FName ExtensionName, class FName ParameterName, const class FText& ParameterValue);
	void RefreshPawnServer(bool FromWardrobe);
	void ToggleRefreshPawnInputClient(bool InputEnabled, class ABP_Wardrobe_C* Wardrobe);
	void ServerHandleLastHit();
	void UnregisterLocalEvents();
	void RegisterLocalEvents();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void HandleShowLocalMessage(const class FString& Message);
	void HandleDisconnectFromGameCommand(int32 Code, const class FString& Message);
	void SendSanitizedPlayerJoinedMessageToAll();
	void ServerHandlePostLogin();

	void ShouldShowSvnWarning(int32 ServerVersion, int32 ClientVersion, bool* Result) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PlayerController_C">();
	}
	static class AB_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PlayerController_C>();
	}
};
static_assert(alignof(AB_PlayerController_C) == 0x000008, "Wrong alignment on AB_PlayerController_C");
static_assert(sizeof(AB_PlayerController_C) == 0x000B18, "Wrong size on AB_PlayerController_C");
static_assert(offsetof(AB_PlayerController_C, UberGraphFrame) == 0x000858, "Member 'AB_PlayerController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, B_AimAssistComponent) == 0x000860, "Member 'AB_PlayerController_C::B_AimAssistComponent' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, IsUserInterfaceHidden) == 0x000868, "Member 'AB_PlayerController_C::IsUserInterfaceHidden' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, TrackingUIClasses) == 0x000870, "Member 'AB_PlayerController_C::TrackingUIClasses' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, ChatMessagesPerSecond) == 0x000880, "Member 'AB_PlayerController_C::ChatMessagesPerSecond' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, ChatBlockCooldown) == 0x000888, "Member 'AB_PlayerController_C::ChatBlockCooldown' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, ChatCooldownPerViolation) == 0x000890, "Member 'AB_PlayerController_C::ChatCooldownPerViolation' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, MaxChatMessagesPerSecond) == 0x000898, "Member 'AB_PlayerController_C::MaxChatMessagesPerSecond' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, CollectedPropsForSleep) == 0x0008A0, "Member 'AB_PlayerController_C::CollectedPropsForSleep' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, IsInventoryDebug) == 0x0008B0, "Member 'AB_PlayerController_C::IsInventoryDebug' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, PendingPlayerTeamChoice) == 0x0008B8, "Member 'AB_PlayerController_C::PendingPlayerTeamChoice' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, CollectedPropsForWake) == 0x0008C8, "Member 'AB_PlayerController_C::CollectedPropsForWake' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, CollectedPropsForScale) == 0x0008D8, "Member 'AB_PlayerController_C::CollectedPropsForScale' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, SendingProps) == 0x0008E8, "Member 'AB_PlayerController_C::SendingProps' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, SendingPropLocations) == 0x0008F8, "Member 'AB_PlayerController_C::SendingPropLocations' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, SendingPropRotations) == 0x000908, "Member 'AB_PlayerController_C::SendingPropRotations' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, SendingWakeProps) == 0x000918, "Member 'AB_PlayerController_C::SendingWakeProps' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, SendingScaleProps) == 0x000928, "Member 'AB_PlayerController_C::SendingScaleProps' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, SendingPropScales) == 0x000938, "Member 'AB_PlayerController_C::SendingPropScales' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, SendingStartAwakeProps) == 0x000948, "Member 'AB_PlayerController_C::SendingStartAwakeProps' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, SendingFreezedProps) == 0x000958, "Member 'AB_PlayerController_C::SendingFreezedProps' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, SleepPropSendState) == 0x000968, "Member 'AB_PlayerController_C::SleepPropSendState' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, WakePropSendState) == 0x000969, "Member 'AB_PlayerController_C::WakePropSendState' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, ScalePropSendState) == 0x00096A, "Member 'AB_PlayerController_C::ScalePropSendState' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, SleepPropSendTries) == 0x00096C, "Member 'AB_PlayerController_C::SleepPropSendTries' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, WakePropSendTries) == 0x000970, "Member 'AB_PlayerController_C::WakePropSendTries' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, IsRequesting) == 0x000974, "Member 'AB_PlayerController_C::IsRequesting' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, RemainingPlayers) == 0x000978, "Member 'AB_PlayerController_C::RemainingPlayers' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, TestBitValue) == 0x000988, "Member 'AB_PlayerController_C::TestBitValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, TestBitIndex) == 0x00098C, "Member 'AB_PlayerController_C::TestBitIndex' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, CurrentControlRotation) == 0x000990, "Member 'AB_PlayerController_C::CurrentControlRotation' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, CurrentControlledPawn) == 0x0009A8, "Member 'AB_PlayerController_C::CurrentControlledPawn' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, ControlledPawnIsWitch) == 0x0009B0, "Member 'AB_PlayerController_C::ControlledPawnIsWitch' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, CurrentServerStats) == 0x0009B8, "Member 'AB_PlayerController_C::CurrentServerStats' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, Proplist) == 0x0009C8, "Member 'AB_PlayerController_C::Proplist' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, WitchList) == 0x0009D8, "Member 'AB_PlayerController_C::WitchList' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, WitchPropJiggleMode) == 0x0009E8, "Member 'AB_PlayerController_C::WitchPropJiggleMode' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, WitchPropList) == 0x0009F0, "Member 'AB_PlayerController_C::WitchPropList' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, JiggleVector) == 0x000A00, "Member 'AB_PlayerController_C::JiggleVector' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, JiggleForce) == 0x000A18, "Member 'AB_PlayerController_C::JiggleForce' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, ScalePropSendTries) == 0x000A1C, "Member 'AB_PlayerController_C::ScalePropSendTries' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, TransformRange) == 0x000A20, "Member 'AB_PlayerController_C::TransformRange' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, TargetProp) == 0x000A28, "Member 'AB_PlayerController_C::TargetProp' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, CurrentEyeMovementDirection) == 0x000A30, "Member 'AB_PlayerController_C::CurrentEyeMovementDirection' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, CurrentEyeMovementAxisValue) == 0x000A31, "Member 'AB_PlayerController_C::CurrentEyeMovementAxisValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, CurrentClientForwadAxisVector) == 0x000A38, "Member 'AB_PlayerController_C::CurrentClientForwadAxisVector' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, CurrentClientRightAxisVector) == 0x000A50, "Member 'AB_PlayerController_C::CurrentClientRightAxisVector' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, CurrentClientUpAxisVector) == 0x000A68, "Member 'AB_PlayerController_C::CurrentClientUpAxisVector' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, CurrentPressedMoveUpAxisValue) == 0x000A80, "Member 'AB_PlayerController_C::CurrentPressedMoveUpAxisValue' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, InitializeTournament) == 0x000A88, "Member 'AB_PlayerController_C::InitializeTournament' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, HUDExtensions) == 0x000A90, "Member 'AB_PlayerController_C::HUDExtensions' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, NewItemPopupWidget) == 0x000AE0, "Member 'AB_PlayerController_C::NewItemPopupWidget' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, AchievementsTable) == 0x000AE8, "Member 'AB_PlayerController_C::AchievementsTable' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, KeepTargetPropTime) == 0x000AF0, "Member 'AB_PlayerController_C::KeepTargetPropTime' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, InScopeMode) == 0x000AF8, "Member 'AB_PlayerController_C::InScopeMode' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, FOVComponent) == 0x000B00, "Member 'AB_PlayerController_C::FOVComponent' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, ControllerSensivity) == 0x000B08, "Member 'AB_PlayerController_C::ControllerSensivity' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, DefaultYawScale) == 0x000B0C, "Member 'AB_PlayerController_C::DefaultYawScale' has a wrong offset!");
static_assert(offsetof(AB_PlayerController_C, DefaultPitchScale) == 0x000B10, "Member 'AB_PlayerController_C::DefaultPitchScale' has a wrong offset!");

}

