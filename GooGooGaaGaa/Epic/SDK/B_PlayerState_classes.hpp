#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerState

#include "Basic.hpp"

#include "ESkillCategory_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PropWitchHuntModule_structs.hpp"
#include "PropWitchHuntModule_classes.hpp"
#include "ETeamID_structs.hpp"
#include "SClientItemUnlock_structs.hpp"
#include "SSelectedSkills_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PlayerState.B_PlayerState_C
// 0x02E8 (0x0630 - 0x0348)
class AB_PlayerState_C : public AWitchItPlayerState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETeamID                                       Team;                                              // 0x0358(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	ETeamID                                       SelectedTeam;                                      // 0x0359(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsReady;                                      // 0x035A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReady;                                           // 0x035B(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDead;                                            // 0x035C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasCup;                                            // 0x035D(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35E[0x2];                                      // 0x035E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_ScoreStatManager_C*                  ScoreStatManager;                                  // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UB_CheckedPropsManager_C*               CheckedPropsManager;                               // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPendingDisconnect;                               // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StartExpTime;                                      // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalXP;                                           // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GrantExpForThisRound;                              // 0x0384(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_385[0x3];                                      // 0x0385(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LevelUps;                                          // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WantsToUpdateUnlocks;                              // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WantsToCollectUnlockedSkins;                       // 0x038D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38E[0x2];                                      // 0x038E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 SkinUnlocks;                                       // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWitchSkin                             WitchSkinNew;                                      // 0x03A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          HasVotedToKick;                                    // 0x03C8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UsedKickVote;                                      // 0x03C9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsVotingForKick;                                   // 0x03CA(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB[0x5];                                      // 0x03CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHunterSkin                            HunterSkinNew;                                     // 0x03D0(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AB_PlayerController_C*                  PlayerController;                                  // 0x0408(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHost;                                            // 0x0410(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411[0x3];                                      // 0x0411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayerLevel;                                       // 0x0414(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrestigeLevel;                                     // 0x0418(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41C[0x4];                                      // 0x041C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 PlayerIcon;                                        // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                        PlayerIconAssetId;                                 // 0x0428(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitialized;                                     // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439[0x7];                                      // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSClientItemUnlock>             CauldronUnlocks;                                   // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSClientItemUnlock>             ExtraUnlocks;                                      // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDateTime                              StartExpDate;                                      // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 ProductUserId;                                     // 0x0468(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 PlatformType;                                      // 0x0478(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 OnlineSystemAccountName;                           // 0x0488(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          HasLeftStartingZone;                               // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_499[0x3];                                      // 0x0499(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BaseXP;                                            // 0x049C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWitchTeam;                                       // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A1[0x3];                                      // 0x04A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         VotedMapIndex;                                     // 0x04A4(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ServerStatsInitialized;                            // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ServerStatsSaved;                                  // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AA[0x6];                                      // 0x04AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CollectedPropIdsToSave;                            // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SavingServerStatsFailures;                         // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoadingServerStats;                              // 0x04C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C5[0x3];                                      // 0x04C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RemainingServerStatsLoadingTime;                   // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSavingServerStats;                               // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D1[0x7];                                      // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RemainingServerStatsSavingTime;                    // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WantsToSpectate;                                   // 0x04E0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFirstPersonCamera;                              // 0x04E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsChatBanned;                                      // 0x04E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E3[0x5];                                      // 0x04E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AB_Buff_C*>                      BuffList;                                          // 0x04E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AController*>                    DamagingControllers;                               // 0x04F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         CatchXP;                                           // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C[0x4];                                      // 0x050C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSSelectedSkills                       SelectedStandardSkills;                            // 0x0510(0x0020)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSSelectedSkills                       SelectedObjectiveSkills;                           // 0x0530(0x0020)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 BotName;                                           // 0x0550(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	double                                        WitchHealthPercental;                              // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsTalking;                                        // 0x0568(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_569[0x7];                                      // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDateTime>                      LastKillTimestamps;                                // 0x0570(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                          IsPrestigeLevelOnDedicatedServerInitialized;       // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_581[0x7];                                      // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UB_Achievement_C*>               ValidAchievements;                                 // 0x0588(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                CurrentInputAxisVector;                            // 0x0598(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControllingCustomPawn;                             // 0x05B0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalTransformCount;                               // 0x05B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BC[0x4];                                      // 0x05BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              WitchKillTime;                                     // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         LastWitchXP;                                       // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WinBonusXP;                                        // 0x05CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartDropExp;                                      // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxDropExp;                                        // 0x05D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TournamentScore;                                   // 0x05D8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WitchItAccountId;                                  // 0x05DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         PhotographedActors;                                // 0x05E0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         WitchItAccountState;                               // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F4[0x4];                                      // 0x05F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_ServerClientConfig_C*                ClientConfig;                                      // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPrefabToSave>                  Prefabs;                                           // 0x0600(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                          JoinedAfterRoundEnd;                               // 0x0610(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InitialCameraSet;                                  // 0x0611(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_612[0x6];                                      // 0x0612(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPropChecked;                                     // 0x0618(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          HasMovedPropSinceSleep;                            // 0x0628(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class UClass* GetHunterMovementSkill();
	class UClass* GetHunterUtilitySkill();
	class UClass* GetWitchMovementSkill();
	class UClass* GetWitchUtilitySkill();
	void SetHunterMovementSkill(class UClass* Skill);
	void SetHunterUtilitySkill(class UClass* Skill);
	void SetWitchMovementSkill(class UClass* Skill);
	void SetWitchUtilitySkill(class UClass* Skill);
	void OnRep_PlayerIconAssetId();
	void HandleGrantedExtraItems(TArray<struct FSGrantedItem>& GrantedItems);
	void IsLocalReady(bool* IsLocalReady_0);
	void HandleIsReady();
	bool IsObjectiveGameMode();
	void GetSelectedSkillForTeam(ETeamID Team_0, ESkillCategory SkillCategory, class UClass** Skill);
	void HandleGrantXP(int32 TotalXP_0, int32 TimeXP, int32 WinBonusXP_0, int32 CatchXP_0, int32 LastWitchXP_0);
	class AB_Buff_C* GetFirstActiveBuff(class UClass* Buff);
	bool IsBuffAlreadyActive(class UClass* Buff);
	void HandleGrantedCauldronItems(TArray<struct FSGrantedItem>& GrantedItems);
	void StartSavingServerStats();
	void StartLoadingServerStats();
	void CheckServerStatsSaved();
	void Check_Server_Stats_Initialization();
	void ProceedIdleKick();
	void OnRep_Team();
	void ResetKickVoteState();
	void StartKickVote();
	void GetSelectedSkill(ESkillCategory SkillCategory, class UClass** Skill);
	void OnRep_SelectedTeam();
	void OnRep_IsReady();
	void OnMessageProcessed_703E44154BB0099B9D98CAA5EE6DF034(bool bSuccess, const class FString& SanitizedMessage);
	void OnCallFailed_703E44154BB0099B9D98CAA5EE6DF034(bool bSuccess, const class FString& SanitizedMessage);
	void ReceiveBeginPlay();
	void AddPropChecked(class AActor* Actor, double Damage, class UClass* DamageType);
	void AddPropCheckedOwningClient(class AActor* Actor);
	void GrantExp(int32 TotalAmount, int32 TimeExp, int32 WinBonusXP_0, int32 CatchXP_0, int32 LastWitchXP_0);
	void ReceiveTick(float DeltaSeconds);
	void ReplicateIconAndLevel(int32 Level, int32 PrestigeLevel_0, const struct FPrimaryAssetId& SkinIcon, const struct FSSelectedSkills& StandardSkills, const struct FSSelectedSkills& ObjectiveSkills);
	void GrantCauldronItems(const TArray<struct FSGrantedItem>& GrantedItems);
	void GrantDropExp(int32 StartAmount, int32 MaxAmount);
	void AddBuff(class UClass* Buff);
	void RemoveAllBuffs();
	void GrantExtraItems(const TArray<struct FSGrantedItem>& GrantedItems);
	void SetPlayerData(int32 Level, int32 PrestigeLevel_0, class UClass* Icon, const struct FSSelectedSkills& StandardSkills, const struct FSSelectedSkills& ObjectiveSkills);
	void SERVER_SetIsTalking(bool bIsTalking_0);
	void SetPrestigeLevelOwningClient(int32 PrestigeLevel_0, int32 PrestigeExperience);
	void RequestUserAccountId(const class FString& ProductUserId_0, const class FString& AccountType, const class FString& NativePlatformId);
	void PostOnRepPlayerName(const class FString& NewPlayerName);
	void OnPropChecked__DelegateSignature(class AB_PlayerState_C* Player, class AActor* Prop, double Damage, class UClass* DamageType);
	void ExecuteUbergraph_B_PlayerState(int32 EntryPoint);

	void GetProductUserId(class FString* ProductUserId_0, class FString* PlatformType_0) const;
	void GetNativeOnlineSystemName(bool UseRedpointSystem, class FString* Out, class FString* PlatformType_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PlayerState_C">();
	}
	static class AB_PlayerState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PlayerState_C>();
	}
};
static_assert(alignof(AB_PlayerState_C) == 0x000008, "Wrong alignment on AB_PlayerState_C");
static_assert(sizeof(AB_PlayerState_C) == 0x000630, "Wrong size on AB_PlayerState_C");
static_assert(offsetof(AB_PlayerState_C, UberGraphFrame) == 0x000348, "Member 'AB_PlayerState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, DefaultSceneRoot) == 0x000350, "Member 'AB_PlayerState_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, Team) == 0x000358, "Member 'AB_PlayerState_C::Team' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, SelectedTeam) == 0x000359, "Member 'AB_PlayerState_C::SelectedTeam' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, LocalIsReady) == 0x00035A, "Member 'AB_PlayerState_C::LocalIsReady' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, IsReady) == 0x00035B, "Member 'AB_PlayerState_C::IsReady' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, IsDead) == 0x00035C, "Member 'AB_PlayerState_C::IsDead' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, HasCup) == 0x00035D, "Member 'AB_PlayerState_C::HasCup' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, ScoreStatManager) == 0x000360, "Member 'AB_PlayerState_C::ScoreStatManager' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, CheckedPropsManager) == 0x000368, "Member 'AB_PlayerState_C::CheckedPropsManager' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, IsPendingDisconnect) == 0x000370, "Member 'AB_PlayerState_C::IsPendingDisconnect' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, StartExpTime) == 0x000378, "Member 'AB_PlayerState_C::StartExpTime' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, TotalXP) == 0x000380, "Member 'AB_PlayerState_C::TotalXP' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, GrantExpForThisRound) == 0x000384, "Member 'AB_PlayerState_C::GrantExpForThisRound' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, LevelUps) == 0x000388, "Member 'AB_PlayerState_C::LevelUps' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, WantsToUpdateUnlocks) == 0x00038C, "Member 'AB_PlayerState_C::WantsToUpdateUnlocks' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, WantsToCollectUnlockedSkins) == 0x00038D, "Member 'AB_PlayerState_C::WantsToCollectUnlockedSkins' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, SkinUnlocks) == 0x000390, "Member 'AB_PlayerState_C::SkinUnlocks' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, WitchSkinNew) == 0x0003A0, "Member 'AB_PlayerState_C::WitchSkinNew' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, HasVotedToKick) == 0x0003C8, "Member 'AB_PlayerState_C::HasVotedToKick' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, UsedKickVote) == 0x0003C9, "Member 'AB_PlayerState_C::UsedKickVote' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, IsVotingForKick) == 0x0003CA, "Member 'AB_PlayerState_C::IsVotingForKick' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, HunterSkinNew) == 0x0003D0, "Member 'AB_PlayerState_C::HunterSkinNew' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, PlayerController) == 0x000408, "Member 'AB_PlayerState_C::PlayerController' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, IsHost) == 0x000410, "Member 'AB_PlayerState_C::IsHost' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, PlayerLevel) == 0x000414, "Member 'AB_PlayerState_C::PlayerLevel' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, PrestigeLevel) == 0x000418, "Member 'AB_PlayerState_C::PrestigeLevel' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, PlayerIcon) == 0x000420, "Member 'AB_PlayerState_C::PlayerIcon' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, PlayerIconAssetId) == 0x000428, "Member 'AB_PlayerState_C::PlayerIconAssetId' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, IsInitialized) == 0x000438, "Member 'AB_PlayerState_C::IsInitialized' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, CauldronUnlocks) == 0x000440, "Member 'AB_PlayerState_C::CauldronUnlocks' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, ExtraUnlocks) == 0x000450, "Member 'AB_PlayerState_C::ExtraUnlocks' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, StartExpDate) == 0x000460, "Member 'AB_PlayerState_C::StartExpDate' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, ProductUserId) == 0x000468, "Member 'AB_PlayerState_C::ProductUserId' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, PlatformType) == 0x000478, "Member 'AB_PlayerState_C::PlatformType' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, OnlineSystemAccountName) == 0x000488, "Member 'AB_PlayerState_C::OnlineSystemAccountName' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, HasLeftStartingZone) == 0x000498, "Member 'AB_PlayerState_C::HasLeftStartingZone' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, BaseXP) == 0x00049C, "Member 'AB_PlayerState_C::BaseXP' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, IsWitchTeam) == 0x0004A0, "Member 'AB_PlayerState_C::IsWitchTeam' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, VotedMapIndex) == 0x0004A4, "Member 'AB_PlayerState_C::VotedMapIndex' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, ServerStatsInitialized) == 0x0004A8, "Member 'AB_PlayerState_C::ServerStatsInitialized' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, ServerStatsSaved) == 0x0004A9, "Member 'AB_PlayerState_C::ServerStatsSaved' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, CollectedPropIdsToSave) == 0x0004B0, "Member 'AB_PlayerState_C::CollectedPropIdsToSave' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, SavingServerStatsFailures) == 0x0004C0, "Member 'AB_PlayerState_C::SavingServerStatsFailures' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, IsLoadingServerStats) == 0x0004C4, "Member 'AB_PlayerState_C::IsLoadingServerStats' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, RemainingServerStatsLoadingTime) == 0x0004C8, "Member 'AB_PlayerState_C::RemainingServerStatsLoadingTime' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, IsSavingServerStats) == 0x0004D0, "Member 'AB_PlayerState_C::IsSavingServerStats' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, RemainingServerStatsSavingTime) == 0x0004D8, "Member 'AB_PlayerState_C::RemainingServerStatsSavingTime' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, WantsToSpectate) == 0x0004E0, "Member 'AB_PlayerState_C::WantsToSpectate' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, UseFirstPersonCamera) == 0x0004E1, "Member 'AB_PlayerState_C::UseFirstPersonCamera' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, IsChatBanned) == 0x0004E2, "Member 'AB_PlayerState_C::IsChatBanned' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, BuffList) == 0x0004E8, "Member 'AB_PlayerState_C::BuffList' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, DamagingControllers) == 0x0004F8, "Member 'AB_PlayerState_C::DamagingControllers' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, CatchXP) == 0x000508, "Member 'AB_PlayerState_C::CatchXP' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, SelectedStandardSkills) == 0x000510, "Member 'AB_PlayerState_C::SelectedStandardSkills' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, SelectedObjectiveSkills) == 0x000530, "Member 'AB_PlayerState_C::SelectedObjectiveSkills' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, BotName) == 0x000550, "Member 'AB_PlayerState_C::BotName' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, WitchHealthPercental) == 0x000560, "Member 'AB_PlayerState_C::WitchHealthPercental' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, bIsTalking) == 0x000568, "Member 'AB_PlayerState_C::bIsTalking' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, LastKillTimestamps) == 0x000570, "Member 'AB_PlayerState_C::LastKillTimestamps' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, IsPrestigeLevelOnDedicatedServerInitialized) == 0x000580, "Member 'AB_PlayerState_C::IsPrestigeLevelOnDedicatedServerInitialized' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, ValidAchievements) == 0x000588, "Member 'AB_PlayerState_C::ValidAchievements' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, CurrentInputAxisVector) == 0x000598, "Member 'AB_PlayerState_C::CurrentInputAxisVector' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, ControllingCustomPawn) == 0x0005B0, "Member 'AB_PlayerState_C::ControllingCustomPawn' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, TotalTransformCount) == 0x0005B8, "Member 'AB_PlayerState_C::TotalTransformCount' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, WitchKillTime) == 0x0005C0, "Member 'AB_PlayerState_C::WitchKillTime' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, LastWitchXP) == 0x0005C8, "Member 'AB_PlayerState_C::LastWitchXP' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, WinBonusXP) == 0x0005CC, "Member 'AB_PlayerState_C::WinBonusXP' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, StartDropExp) == 0x0005D0, "Member 'AB_PlayerState_C::StartDropExp' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, MaxDropExp) == 0x0005D4, "Member 'AB_PlayerState_C::MaxDropExp' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, TournamentScore) == 0x0005D8, "Member 'AB_PlayerState_C::TournamentScore' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, WitchItAccountId) == 0x0005DC, "Member 'AB_PlayerState_C::WitchItAccountId' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, PhotographedActors) == 0x0005E0, "Member 'AB_PlayerState_C::PhotographedActors' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, WitchItAccountState) == 0x0005F0, "Member 'AB_PlayerState_C::WitchItAccountState' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, ClientConfig) == 0x0005F8, "Member 'AB_PlayerState_C::ClientConfig' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, Prefabs) == 0x000600, "Member 'AB_PlayerState_C::Prefabs' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, JoinedAfterRoundEnd) == 0x000610, "Member 'AB_PlayerState_C::JoinedAfterRoundEnd' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, InitialCameraSet) == 0x000611, "Member 'AB_PlayerState_C::InitialCameraSet' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, OnPropChecked) == 0x000618, "Member 'AB_PlayerState_C::OnPropChecked' has a wrong offset!");
static_assert(offsetof(AB_PlayerState_C, HasMovedPropSinceSleep) == 0x000628, "Member 'AB_PlayerState_C::HasMovedPropSinceSleep' has a wrong offset!");

}
