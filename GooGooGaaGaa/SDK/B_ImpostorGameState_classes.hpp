#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ImpostorGameState

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "E_ImpostorState_structs.hpp"
#include "E_MeetingState_structs.hpp"
#include "B_GameState_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ImpostorGameState.B_ImpostorGameState_C
// 0x0110 (0x06C0 - 0x05B0)
class AB_ImpostorGameState_C final : public AB_GameState_C
{
public:
	uint8                                         Pad_514D[0x7];                                     // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_B_ImpostorGameState_C;              // 0x05B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	E_ImpostorState                               State;                                             // 0x05B8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	E_MeetingState                                MeetingState;                                      // 0x05B9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514E[0x6];                                     // 0x05BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_TaskManager_C*                       TaskManager;                                       // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         VotedCards;                                        // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastMeetingSkippedVotes;                           // 0x05CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastMeetingNotVoted;                               // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514F[0x4];                                     // 0x05D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class APlayerState*, int32>              LastMeetingVotedPlayers;                           // 0x05D8(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class APlayerState*                           PlayerToVoteOut;                                   // 0x0628(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentShownMeetingVoteCardNumber;                 // 0x0630(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5150[0x4];                                     // 0x0634(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_VoteStarterSpawnPoint_C*             VoteStarterSpawnPoint;                             // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           MeetingReporterPlayer;                             // 0x0640(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           MeetingFoundPlayer;                                // 0x0648(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomSeed;                                        // 0x0650(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5151[0x4];                                     // 0x0654(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 SabotageCode;                                      // 0x0658(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<class UB_EnteredPortalCode_C*>         EnteredPortalCode;                                 // 0x0668(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UB_SabotageManager_C*                   SabotageManager;                                   // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowingTeamCamera;                               // 0x0680(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5152[0x7];                                     // 0x0681(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FColor>                         PlayerColors;                                      // 0x0688(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MeetingCooldown;                                   // 0x0698(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxMeetingCooldown;                                // 0x069C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowMeetingResultSequence;                         // 0x06A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5153[0x7];                                     // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PlayerNameVisibleDistance;                         // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalTasksToDo;                                    // 0x06B0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DoneTasks;                                         // 0x06B4(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WitchCount;                                        // 0x06B8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinimumPlayersNeeded;                              // 0x06BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvaluateMeetingVotes();
	void ExecuteUbergraph_B_ImpostorGameState(int32 EntryPoint);
	void FadeIntoMeetingSequence();
	void FadeIntoTeamCamera();
	void FinishMeetingSequence();
	void GetHunterSkin(class AB_ImpostorPlayerState_C* PlayerState, struct FHunterSkin* HunterSkin);
	struct FVector GetPlayerColor(int32 Param_Index);
	void GetPlayerToVoteOut(class APlayerState** PlayerState);
	void HandleSpawnVoteCard(class AB_PlayerState_C* PlayerState);
	void HasRoundStarted(bool* RoundHasStarted);
	void IsRoundEnd(bool* RoundIsEnd);
	void IsTickingCooldowns(bool* TickingCooldowns);
	void OnRep_MeetingState();
	void OnRep_State();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetHuntersAndCorpsesVisibility(bool Visible);
	void ShowMeetingSequence();
	void ShowTeamCamera();
	void ShowTeamCameraMulti();
	void StopAllSabotages();
	void StopAllTasks();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ImpostorGameState_C">();
	}
	static class AB_ImpostorGameState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ImpostorGameState_C>();
	}
};
static_assert(alignof(AB_ImpostorGameState_C) == 0x000008, "Wrong alignment on AB_ImpostorGameState_C");
static_assert(sizeof(AB_ImpostorGameState_C) == 0x0006C0, "Wrong size on AB_ImpostorGameState_C");
static_assert(offsetof(AB_ImpostorGameState_C, UberGraphFrame_B_ImpostorGameState_C) == 0x0005B0, "Member 'AB_ImpostorGameState_C::UberGraphFrame_B_ImpostorGameState_C' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, State) == 0x0005B8, "Member 'AB_ImpostorGameState_C::State' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, MeetingState) == 0x0005B9, "Member 'AB_ImpostorGameState_C::MeetingState' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, TaskManager) == 0x0005C0, "Member 'AB_ImpostorGameState_C::TaskManager' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, VotedCards) == 0x0005C8, "Member 'AB_ImpostorGameState_C::VotedCards' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, LastMeetingSkippedVotes) == 0x0005CC, "Member 'AB_ImpostorGameState_C::LastMeetingSkippedVotes' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, LastMeetingNotVoted) == 0x0005D0, "Member 'AB_ImpostorGameState_C::LastMeetingNotVoted' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, LastMeetingVotedPlayers) == 0x0005D8, "Member 'AB_ImpostorGameState_C::LastMeetingVotedPlayers' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, PlayerToVoteOut) == 0x000628, "Member 'AB_ImpostorGameState_C::PlayerToVoteOut' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, CurrentShownMeetingVoteCardNumber) == 0x000630, "Member 'AB_ImpostorGameState_C::CurrentShownMeetingVoteCardNumber' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, VoteStarterSpawnPoint) == 0x000638, "Member 'AB_ImpostorGameState_C::VoteStarterSpawnPoint' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, MeetingReporterPlayer) == 0x000640, "Member 'AB_ImpostorGameState_C::MeetingReporterPlayer' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, MeetingFoundPlayer) == 0x000648, "Member 'AB_ImpostorGameState_C::MeetingFoundPlayer' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, RandomSeed) == 0x000650, "Member 'AB_ImpostorGameState_C::RandomSeed' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, SabotageCode) == 0x000658, "Member 'AB_ImpostorGameState_C::SabotageCode' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, EnteredPortalCode) == 0x000668, "Member 'AB_ImpostorGameState_C::EnteredPortalCode' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, SabotageManager) == 0x000678, "Member 'AB_ImpostorGameState_C::SabotageManager' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, IsShowingTeamCamera) == 0x000680, "Member 'AB_ImpostorGameState_C::IsShowingTeamCamera' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, PlayerColors) == 0x000688, "Member 'AB_ImpostorGameState_C::PlayerColors' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, MeetingCooldown) == 0x000698, "Member 'AB_ImpostorGameState_C::MeetingCooldown' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, MaxMeetingCooldown) == 0x00069C, "Member 'AB_ImpostorGameState_C::MaxMeetingCooldown' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, ShowMeetingResultSequence) == 0x0006A0, "Member 'AB_ImpostorGameState_C::ShowMeetingResultSequence' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, PlayerNameVisibleDistance) == 0x0006A8, "Member 'AB_ImpostorGameState_C::PlayerNameVisibleDistance' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, TotalTasksToDo) == 0x0006B0, "Member 'AB_ImpostorGameState_C::TotalTasksToDo' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, DoneTasks) == 0x0006B4, "Member 'AB_ImpostorGameState_C::DoneTasks' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, WitchCount) == 0x0006B8, "Member 'AB_ImpostorGameState_C::WitchCount' has a wrong offset!");
static_assert(offsetof(AB_ImpostorGameState_C, MinimumPlayersNeeded) == 0x0006BC, "Member 'AB_ImpostorGameState_C::MinimumPlayersNeeded' has a wrong offset!");

}
