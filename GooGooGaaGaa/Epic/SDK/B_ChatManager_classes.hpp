#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ChatManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EChatRelationship_structs.hpp"
#include "PropWitchHuntModule_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ChatManager.B_ChatManager_C
// 0x0088 (0x00B8 - 0x0030)
class UB_ChatManager_C final : public UBaseManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class FString, int32>                    ChatRelationships;                                 // 0x0038(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UB_SaveGameManager_C*                   SaveGameManager;                                   // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bVoiceChatEnabled;                                 // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PlayerState_C*                       MyPlayerState;                                     // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UB_UserControllerManager_C*             UserControllerManager;                             // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           SanityTimer;                                       // 0x00A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              LastPTT_Time;                                      // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeChatRelationship(class APlayerState* OtherPlayerState, EChatRelationship ChatRelationship, bool New_Value);
	void DelayedReinitialization();
	void EnforcePTT_State();
	void ExecuteUbergraph_B_ChatManager(int32 EntryPoint);
	void HandleBeginPlay();
	void HandlePlayerJoined(class APlayerState* PlayerState);
	void HandlePlayerLeft(class APlayerState* PlayerState);
	void HandlePushToTalkChanged(bool bIsTalking);
	void Initialize(class UGameInstance* InGameInstance);
	void InitialRelationshipCheck(class APlayerState* OtherPlayerState);
	void InitPlayerRelationship(class APlayerState* PlayerState);
	void InitPlayerRelationships();
	bool IsPushToTalkKeyDown();
	void OnLoadedAllSaveGames_Event();
	void OnPlayerJoined(class APlayerState* PlayerState);
	void OnPlayerLeft(class APlayerState* PlayerState);
	void OnPlayerStateInitialized(class APlayerState* PlayerState);
	void OnPushToTalkChanged_Event(bool bIsTalking);
	void OnVoiceChatToggled(bool bVoiceChatEnabled_0);
	bool ReceiveGameChat(class APlayerState* PlayerState);
	bool ReceiveVoiceChat(class APlayerState* PlayerState);
	void SanityCheckPushToTalk();
	void SetMyPlayerState(class APlayerState* PlayerState);
	void SetVoiceChatStatus(bool bVoiceChatEnabled_0);
	bool ShouldBeGameplayMuted(class APlayerState* MyPlayer, class APlayerState* OtherPlayer);
	void ToggleManualMute(class APlayerState* PlayerState);
	void UpdateChatStatus(class APlayerState* PlayerState);
	void UpdateGameChatStatus(class APlayerState* PlayerState);
	void UpdateGameplayMuteRelationship(class APlayerState* OtherPlayer);
	void UpdateManualMuteRelationship(class APlayerState* Player_State);
	void UpdateSystemBlockRelationship(class APlayerState* OtherPlayerState);
	void UpdateSystemMuteRelationship(class APlayerState* OtherPlayerState);
	void UpdateTeamVoice();
	void UpdateTeamVoiceStatus();
	void UpdateVoiceChatStatus(class APlayerState* PlayerState);
	void UpdateVoiceChatStatusFromSavegame();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ChatManager_C">();
	}
	static class UB_ChatManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_ChatManager_C>();
	}
};
static_assert(alignof(UB_ChatManager_C) == 0x000008, "Wrong alignment on UB_ChatManager_C");
static_assert(sizeof(UB_ChatManager_C) == 0x0000B8, "Wrong size on UB_ChatManager_C");
static_assert(offsetof(UB_ChatManager_C, UberGraphFrame) == 0x000030, "Member 'UB_ChatManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UB_ChatManager_C, ChatRelationships) == 0x000038, "Member 'UB_ChatManager_C::ChatRelationships' has a wrong offset!");
static_assert(offsetof(UB_ChatManager_C, SaveGameManager) == 0x000088, "Member 'UB_ChatManager_C::SaveGameManager' has a wrong offset!");
static_assert(offsetof(UB_ChatManager_C, bVoiceChatEnabled) == 0x000090, "Member 'UB_ChatManager_C::bVoiceChatEnabled' has a wrong offset!");
static_assert(offsetof(UB_ChatManager_C, MyPlayerState) == 0x000098, "Member 'UB_ChatManager_C::MyPlayerState' has a wrong offset!");
static_assert(offsetof(UB_ChatManager_C, UserControllerManager) == 0x0000A0, "Member 'UB_ChatManager_C::UserControllerManager' has a wrong offset!");
static_assert(offsetof(UB_ChatManager_C, SanityTimer) == 0x0000A8, "Member 'UB_ChatManager_C::SanityTimer' has a wrong offset!");
static_assert(offsetof(UB_ChatManager_C, LastPTT_Time) == 0x0000B0, "Member 'UB_ChatManager_C::LastPTT_Time' has a wrong offset!");

}

