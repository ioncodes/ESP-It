#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_GameState

#include "Basic.hpp"

#include "SMapData_structs.hpp"
#include "S_GameModifier_structs.hpp"
#include "SCalculatedScoreStat_structs.hpp"
#include "Engine_structs.hpp"
#include "S_MatchRules_structs.hpp"
#include "ETeamID_structs.hpp"
#include "SlateCore_structs.hpp"
#include "S_SkillRules_structs.hpp"
#include "S_PowerupRules_structs.hpp"
#include "PropWitchHuntModule_classes.hpp"
#include "EChatType_structs.hpp"
#include "EGameMessageType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_GameState.B_GameState_C
// 0x0298 (0x05A0 - 0x0308)
class AB_GameState_C : public AWitchItGameState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UB_AnnouncerSystem_C*                   B_AnnouncerSystem;                                 // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UB_InstrumentManager_C*                 B_InstrumentManager;                               // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         RemainingSeconds;                                  // 0x0328(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NumberOfWitches;                                   // 0x032C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeamID                                       WinnerTeam;                                        // 0x032D(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32E[0x2];                                      // 0x032E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            HunterColor;                                       // 0x0330(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            WitchColor;                                        // 0x0344(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsTeamChoiceRandom;                                // 0x0358(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359[0x3];                                      // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   GamemodeDisplayName;                               // 0x035C(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowAllyWitches;                                   // 0x0364(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_365[0x3];                                      // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         SleepingProps;                                     // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         WakedProps;                                        // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         CollectedPropsForSleep;                            // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         CollectedPropsForWake;                             // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         WitchActors;                                       // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         HunterActors;                                      // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FSCalculatedScoreStat>          ScoreStatMedals;                                   // 0x03C8(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                          LastMatch;                                         // 0x03D8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsKickVoteActive;                                  // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DA[0x2];                                      // 0x03DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   PlayerNameToKick;                                  // 0x03DC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4[0x4];                                      // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RemainingKickVoteTime;                             // 0x03E8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReasonToKick;                                      // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerController*                      PlayerToKick;                                      // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      LastKickVoter;                                     // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        LastKickVoterCooldown;                             // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowWitchesForSpectators;                          // 0x0418(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419[0x3];                                      // 0x0419(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   PlayerNameStartedKickVote;                         // 0x041C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDedicatedServerGame;                             // 0x0424(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_425[0x3];                                      // 0x0425(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 GameName;                                          // 0x0428(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         MaxPlayers;                                        // 0x0438(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableIdleKick;                                    // 0x043C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43D[0x3];                                      // 0x043D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCapsuleComponent*                      TestCapsule;                                       // 0x0440(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          SaveServerStats;                                   // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AreSkillsEnabled;                                  // 0x0449(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44A[0x6];                                      // 0x044A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         SnowDrawingActors;                                 // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UClass*>                         AllowedHunterSkills;                               // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         AllowedWitchSkills;                                // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnMatchStarted;                                    // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsTournamentMode;                                  // 0x0490(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, int32>                    TournamentScores;                                  // 0x0498(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, class UB_TournamentPlayer_C*> TournamentPlayers;                                 // 0x04E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_SkillRules>                  SkillRules;                                        // 0x0538(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	TArray<class UClass*>                         UnlistedSkills;                                    // 0x0548(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<struct FS_MatchRules>                  MatchRules;                                        // 0x0558(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	TArray<struct FS_GameModifier>                GameModifiers;                                     // 0x0568(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	TArray<struct FSMapData>                      MapsToVote;                                        // 0x0578(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<struct FS_PowerupRules>                PowerupRules;                                      // 0x0588(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	bool                                          HuntersCanTakeDamage;                              // 0x0598(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnabledPropSleepManager;                           // 0x0599(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59A[0x2];                                      // 0x059A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TargetClientTickRate;                              // 0x059C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void OnMatchStarted__DelegateSignature();
	void HasRoundStarted(bool* RoundHasStarted);
	void HasTrackingStarted(bool* HasTrackingStarted_0);
	bool IsPhysicsEnabled();
	void IsRoundEnd(bool* RoundIsEnd);
	void DetermineTickRates();
	void ApplyClientTickRate();
	void OnRep_TargetClientTickRate();
	void SetIdleKickEnabled(bool bIsEnabled);
	void ResetAllRules();
	void UpdatePowerupRules();
	void GetUnlistedSkills(TArray<class UClass*>* Unlisted_Skills);
	void OnRep_PowerupRules();
	void OnRep_GameModifiers();
	void OnRep_MatchRules();
	void OnRep_SkillRules();
	void UpdateModRules();
	void UpdateMatchRules();
	void UpdateSkillRules();
	void InitializeGameRules();
	class AB_PlayerState_C* GetPlayerStateById(const class FString& NetId);
	void InitializeTournamentPlayers(TArray<class FString>& PlayerIds, TArray<struct FS_TournamentPlayer>& TournamentPlayers_0);
	bool ShouldTeamVoiceBeEnabled();
	void TeamCheck(class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, bool* bSameTeam);
	void InitializeGameName();
	void OnRep_PlayerNameToKick();
	void UnregisterHunterActor(class AActor* HunterActor);
	void RegisterHunterActor(class AActor* HunterActor);
	void UnregisterWitchActor(class AActor* WitchActor);
	void RegisterWitchActor(class AActor* WitchActor);
	void TickCollectedPropsForWake();
	void CollectAllSleepingProps();
	void TickCollectedPropsForSleep();
	void SendChatMessageMulticast(const class FText& ChatMessage, class AB_PlayerState_C* Player, EChatType ChatType);
	void ReceiveBeginPlay();
	void SendGameMessageMulticast(const class FText& SourcePlayerName, const class FText& TargetPlayerName, EGameMessageType MessageType);
	void PutPropsToSleep(const TArray<class AActor*>& Actors, const TArray<struct FVector>& SleepLocation, const TArray<struct FRotator>& SleepRotation);
	void ReceiveTick(float DeltaSeconds);
	void PutPropsToWake(const TArray<class AActor*>& Actors);
	void CollectSleepProp(class AActor* Actor);
	void CollectWakeProp(class AActor* Actor);
	void AddSleepProp(class AActor* Actor);
	void RemoveSleepProp(class AActor* Actor);
	void StartKickVote(class FName PlayerNameToKick_0, const class FText& ReasonToKick_0, class FName PlayerNameStartedKickVote_0);
	void EndKickVote();
	void OnPlayerJoinedMulti(class APlayerState* PlayerState);
	void OnMatchStartedMulti();
	void OnMatchEndedMulti();
	void OnPlayerChangedTeamServer();
	void OnPlayerChangedTeamMulti();
	void OnPlayerLeftMulti(class APlayerState* PlayerState);
	void SendTournamentScoresMulti(const TArray<class FString>& PlayerNames, const TArray<int32>& Scores);
	void InitializeTournamentPlayersMulti(const TArray<class FString>& PlayerIds, const TArray<struct FS_TournamentPlayer>& TournamentPlayers_0);
	void UpdateTournamentPlayerScoreMulti(const class FString& PlayerId, int32 NewScore);
	void SkillsUpdated();
	void UpdateGameNameSanitized();
	void ExecuteUbergraph_B_GameState(int32 EntryPoint);

	void IsIdleKickEnabled(bool* bIsEnabled) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_GameState_C">();
	}
	static class AB_GameState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_GameState_C>();
	}
};
static_assert(alignof(AB_GameState_C) == 0x000008, "Wrong alignment on AB_GameState_C");
static_assert(sizeof(AB_GameState_C) == 0x0005A0, "Wrong size on AB_GameState_C");
static_assert(offsetof(AB_GameState_C, UberGraphFrame) == 0x000308, "Member 'AB_GameState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, B_AnnouncerSystem) == 0x000310, "Member 'AB_GameState_C::B_AnnouncerSystem' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, B_InstrumentManager) == 0x000318, "Member 'AB_GameState_C::B_InstrumentManager' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, DefaultSceneRoot) == 0x000320, "Member 'AB_GameState_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, RemainingSeconds) == 0x000328, "Member 'AB_GameState_C::RemainingSeconds' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, NumberOfWitches) == 0x00032C, "Member 'AB_GameState_C::NumberOfWitches' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, WinnerTeam) == 0x00032D, "Member 'AB_GameState_C::WinnerTeam' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, HunterColor) == 0x000330, "Member 'AB_GameState_C::HunterColor' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, WitchColor) == 0x000344, "Member 'AB_GameState_C::WitchColor' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, IsTeamChoiceRandom) == 0x000358, "Member 'AB_GameState_C::IsTeamChoiceRandom' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, GamemodeDisplayName) == 0x00035C, "Member 'AB_GameState_C::GamemodeDisplayName' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, ShowAllyWitches) == 0x000364, "Member 'AB_GameState_C::ShowAllyWitches' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, SleepingProps) == 0x000368, "Member 'AB_GameState_C::SleepingProps' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, WakedProps) == 0x000378, "Member 'AB_GameState_C::WakedProps' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, CollectedPropsForSleep) == 0x000388, "Member 'AB_GameState_C::CollectedPropsForSleep' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, CollectedPropsForWake) == 0x000398, "Member 'AB_GameState_C::CollectedPropsForWake' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, WitchActors) == 0x0003A8, "Member 'AB_GameState_C::WitchActors' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, HunterActors) == 0x0003B8, "Member 'AB_GameState_C::HunterActors' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, ScoreStatMedals) == 0x0003C8, "Member 'AB_GameState_C::ScoreStatMedals' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, LastMatch) == 0x0003D8, "Member 'AB_GameState_C::LastMatch' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, IsKickVoteActive) == 0x0003D9, "Member 'AB_GameState_C::IsKickVoteActive' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, PlayerNameToKick) == 0x0003DC, "Member 'AB_GameState_C::PlayerNameToKick' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, RemainingKickVoteTime) == 0x0003E8, "Member 'AB_GameState_C::RemainingKickVoteTime' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, ReasonToKick) == 0x0003F0, "Member 'AB_GameState_C::ReasonToKick' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, PlayerToKick) == 0x000400, "Member 'AB_GameState_C::PlayerToKick' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, LastKickVoter) == 0x000408, "Member 'AB_GameState_C::LastKickVoter' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, LastKickVoterCooldown) == 0x000410, "Member 'AB_GameState_C::LastKickVoterCooldown' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, ShowWitchesForSpectators) == 0x000418, "Member 'AB_GameState_C::ShowWitchesForSpectators' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, PlayerNameStartedKickVote) == 0x00041C, "Member 'AB_GameState_C::PlayerNameStartedKickVote' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, IsDedicatedServerGame) == 0x000424, "Member 'AB_GameState_C::IsDedicatedServerGame' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, GameName) == 0x000428, "Member 'AB_GameState_C::GameName' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, MaxPlayers) == 0x000438, "Member 'AB_GameState_C::MaxPlayers' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, EnableIdleKick) == 0x00043C, "Member 'AB_GameState_C::EnableIdleKick' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, TestCapsule) == 0x000440, "Member 'AB_GameState_C::TestCapsule' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, SaveServerStats) == 0x000448, "Member 'AB_GameState_C::SaveServerStats' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, AreSkillsEnabled) == 0x000449, "Member 'AB_GameState_C::AreSkillsEnabled' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, SnowDrawingActors) == 0x000450, "Member 'AB_GameState_C::SnowDrawingActors' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, AllowedHunterSkills) == 0x000460, "Member 'AB_GameState_C::AllowedHunterSkills' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, AllowedWitchSkills) == 0x000470, "Member 'AB_GameState_C::AllowedWitchSkills' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, OnMatchStarted) == 0x000480, "Member 'AB_GameState_C::OnMatchStarted' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, IsTournamentMode) == 0x000490, "Member 'AB_GameState_C::IsTournamentMode' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, TournamentScores) == 0x000498, "Member 'AB_GameState_C::TournamentScores' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, TournamentPlayers) == 0x0004E8, "Member 'AB_GameState_C::TournamentPlayers' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, SkillRules) == 0x000538, "Member 'AB_GameState_C::SkillRules' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, UnlistedSkills) == 0x000548, "Member 'AB_GameState_C::UnlistedSkills' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, MatchRules) == 0x000558, "Member 'AB_GameState_C::MatchRules' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, GameModifiers) == 0x000568, "Member 'AB_GameState_C::GameModifiers' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, MapsToVote) == 0x000578, "Member 'AB_GameState_C::MapsToVote' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, PowerupRules) == 0x000588, "Member 'AB_GameState_C::PowerupRules' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, HuntersCanTakeDamage) == 0x000598, "Member 'AB_GameState_C::HuntersCanTakeDamage' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, EnabledPropSleepManager) == 0x000599, "Member 'AB_GameState_C::EnabledPropSleepManager' has a wrong offset!");
static_assert(offsetof(AB_GameState_C, TargetClientTickRate) == 0x00059C, "Member 'AB_GameState_C::TargetClientTickRate' has a wrong offset!");

}
