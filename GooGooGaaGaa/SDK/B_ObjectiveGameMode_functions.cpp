#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ObjectiveGameMode

#include "Basic.hpp"

#include "B_ObjectiveGameMode_classes.hpp"
#include "B_ObjectiveGameMode_parameters.hpp"


namespace SDK
{

// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.AreAllPlayersReadyWithTeamSelection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    AreReady                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::AreAllPlayersReadyWithTeamSelection(bool* AreReady)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "AreAllPlayersReadyWithTeamSelection");

	Params::B_ObjectiveGameMode_C_AreAllPlayersReadyWithTeamSelection Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AreReady != nullptr)
		*AreReady = Parms.AreReady;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.CheckEndMatchWitchesDead
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::CheckEndMatchWitchesDead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "CheckEndMatchWitchesDead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.CheckForOverTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_OverTime                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::CheckForOverTime(bool* Param_OverTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "CheckForOverTime");

	Params::B_ObjectiveGameMode_C_CheckForOverTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_OverTime != nullptr)
		*Param_OverTime = Parms.Param_OverTime;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.CheckTimerForMatchStart
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::CheckTimerForMatchStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "CheckTimerForMatchStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.CheckWitchesAlive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    WitchAlive                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::CheckWitchesAlive(bool* WitchAlive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "CheckWitchesAlive");

	Params::B_ObjectiveGameMode_C_CheckWitchesAlive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WitchAlive != nullptr)
		*WitchAlive = Parms.WitchAlive;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.EnsureInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::EnsureInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "EnsureInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.EqualizeTeamSizes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::EqualizeTeamSizes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "EqualizeTeamSizes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.ExecuteUbergraph_B_ObjectiveGameMode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::ExecuteUbergraph_B_ObjectiveGameMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "ExecuteUbergraph_B_ObjectiveGameMode");

	Params::B_ObjectiveGameMode_C_ExecuteUbergraph_B_ObjectiveGameMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.GetBaseXPNumerator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Numerator                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::GetBaseXPNumerator(double* Numerator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "GetBaseXPNumerator");

	Params::B_ObjectiveGameMode_C_GetBaseXPNumerator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Numerator != nullptr)
		*Numerator = Parms.Numerator;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.GetPlayerPlayTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AB_PlayerState_C*                 PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Playtime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::GetPlayerPlayTime(class AB_PlayerState_C* PlayerState, int32* Playtime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "GetPlayerPlayTime");

	Params::B_ObjectiveGameMode_C_GetPlayerPlayTime Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (Playtime != nullptr)
		*Playtime = Parms.Playtime;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.GetPlayerScoreStatManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AB_PlayerState_C*                 PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_ScoreStatManager_C*            ScoreStatManager                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::GetPlayerScoreStatManager(class AB_PlayerState_C* PlayerState, class UB_ScoreStatManager_C** ScoreStatManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "GetPlayerScoreStatManager");

	Params::B_ObjectiveGameMode_C_GetPlayerScoreStatManager Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (ScoreStatManager != nullptr)
		*ScoreStatManager = Parms.ScoreStatManager;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.GetRoundEndTimerUntilRestart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Seconds                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::GetRoundEndTimerUntilRestart(int32* Seconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "GetRoundEndTimerUntilRestart");

	Params::B_ObjectiveGameMode_C_GetRoundEndTimerUntilRestart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Seconds != nullptr)
		*Seconds = Parms.Seconds;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.GetTeamFromObjectiveTeamForThisRound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_ObjectiveTeam                         ObjectiveTeam                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETeamID                                 Team                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::GetTeamFromObjectiveTeamForThisRound(E_ObjectiveTeam ObjectiveTeam, ETeamID* Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "GetTeamFromObjectiveTeamForThisRound");

	Params::B_ObjectiveGameMode_C_GetTeamFromObjectiveTeamForThisRound Parms{};

	Parms.ObjectiveTeam = ObjectiveTeam;

	UObject::ProcessEvent(Func, &Parms);

	if (Team != nullptr)
		*Team = Parms.Team;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.GetTotalWitchesLives
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   TotalWitchLives                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::GetTotalWitchesLives(int32* TotalWitchLives)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "GetTotalWitchesLives");

	Params::B_ObjectiveGameMode_C_GetTotalWitchesLives Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TotalWitchLives != nullptr)
		*TotalWitchLives = Parms.TotalWitchLives;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.GetWinningObjectiveTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ETeamID                                 WinnerTeam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_ObjectiveTeam                         WinnerObjectiveTeam                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::GetWinningObjectiveTeam(ETeamID WinnerTeam, E_ObjectiveTeam* WinnerObjectiveTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "GetWinningObjectiveTeam");

	Params::B_ObjectiveGameMode_C_GetWinningObjectiveTeam Parms{};

	Parms.WinnerTeam = WinnerTeam;

	UObject::ProcessEvent(Func, &Parms);

	if (WinnerObjectiveTeam != nullptr)
		*WinnerObjectiveTeam = Parms.WinnerObjectiveTeam;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.HandleEndMatch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETeamID                                 WinnerTeam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForceRegardlessOfEnd                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::HandleEndMatch(ETeamID WinnerTeam, bool ForceRegardlessOfEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "HandleEndMatch");

	Params::B_ObjectiveGameMode_C_HandleEndMatch Parms{};

	Parms.WinnerTeam = WinnerTeam;
	Parms.ForceRegardlessOfEnd = ForceRegardlessOfEnd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.HandleEndMatchByTime
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::HandleEndMatchByTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "HandleEndMatchByTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.HandleEndMatchOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETeamID                                 WinnerTeam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForceRegardlessOfEnd                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::HandleEndMatchOverride(ETeamID WinnerTeam, bool ForceRegardlessOfEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "HandleEndMatchOverride");

	Params::B_ObjectiveGameMode_C_HandleEndMatchOverride Parms{};

	Parms.WinnerTeam = WinnerTeam;
	Parms.ForceRegardlessOfEnd = ForceRegardlessOfEnd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.HandleGrantExp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_PlayerState_C*                 CurrentPlayerState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalGrantedXp                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::HandleGrantExp(class AB_PlayerState_C* CurrentPlayerState, int32* TotalGrantedXp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "HandleGrantExp");

	Params::B_ObjectiveGameMode_C_HandleGrantExp Parms{};

	Parms.CurrentPlayerState = CurrentPlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalGrantedXp != nullptr)
		*TotalGrantedXp = Parms.TotalGrantedXp;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.HandleStartFirstRound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ForceStartFirstRound                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::HandleStartFirstRound(bool ForceStartFirstRound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "HandleStartFirstRound");

	Params::B_ObjectiveGameMode_C_HandleStartFirstRound Parms{};

	Parms.ForceStartFirstRound = ForceStartFirstRound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.HandleStartMatch
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::HandleStartMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "HandleStartMatch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.HandleStartMatchOverride
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::HandleStartMatchOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "HandleStartMatchOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.HandleStartSeek
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::HandleStartSeek()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "HandleStartSeek");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.HandleStartSeekOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::HandleStartSeekOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "HandleStartSeekOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.InitializeOverride
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::InitializeOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "InitializeOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.IsPlayerInWinnerTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AB_PlayerState_C*                 PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    InWinnerTeam                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::IsPlayerInWinnerTeam(class AB_PlayerState_C* PlayerState, bool* InWinnerTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "IsPlayerInWinnerTeam");

	Params::B_ObjectiveGameMode_C_IsPlayerInWinnerTeam Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (InWinnerTeam != nullptr)
		*InWinnerTeam = Parms.InWinnerTeam;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.IsPlayerTeamSelectionBalanced
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   RequiredPlayersPerTeam                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Balanced                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::IsPlayerTeamSelectionBalanced(int32 RequiredPlayersPerTeam, bool* Balanced)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "IsPlayerTeamSelectionBalanced");

	Params::B_ObjectiveGameMode_C_IsPlayerTeamSelectionBalanced Parms{};

	Parms.RequiredPlayersPerTeam = RequiredPlayersPerTeam;

	UObject::ProcessEvent(Func, &Parms);

	if (Balanced != nullptr)
		*Balanced = Parms.Balanced;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      ExitingController                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::K2_OnLogout(class AController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "K2_OnLogout");

	Params::B_ObjectiveGameMode_C_K2_OnLogout Parms{};

	Parms.ExitingController = ExitingController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*                NewPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "K2_PostLogin");

	Params::B_ObjectiveGameMode_C_K2_PostLogin Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_ObjectiveGameMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "ReceiveTick");

	Params::B_ObjectiveGameMode_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.RespawnWitch
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      AffectedController                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    InitializeHealthFromPlayerState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::RespawnWitch(class AController* AffectedController, bool InitializeHealthFromPlayerState, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "RespawnWitch");

	Params::B_ObjectiveGameMode_C_RespawnWitch Parms{};

	Parms.AffectedController = AffectedController;
	Parms.InitializeHealthFromPlayerState = InitializeHealthFromPlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.SpawnReviveTotem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::SpawnReviveTotem(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "SpawnReviveTotem");

	Params::B_ObjectiveGameMode_C_SpawnReviveTotem Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.StartFirstRound
// (BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::StartFirstRound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "StartFirstRound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.StartGame
// (BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::StartGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "StartGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.StartNewGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    RestartByPlayerJoin                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::StartNewGame(bool RestartByPlayerJoin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "StartNewGame");

	Params::B_ObjectiveGameMode_C_StartNewGame Parms{};

	Parms.RestartByPlayerJoin = RestartByPlayerJoin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.StartNewGameOverride
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    RestartByPlayerJoin                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_StartNewGame                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::StartNewGameOverride(bool RestartByPlayerJoin, bool* Param_StartNewGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "StartNewGameOverride");

	Params::B_ObjectiveGameMode_C_StartNewGameOverride Parms{};

	Parms.RestartByPlayerJoin = RestartByPlayerJoin;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_StartNewGame != nullptr)
		*Param_StartNewGame = Parms.Param_StartNewGame;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.SurrenderTeam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ObjectiveTeam                         SurrenderObjectiveTeam                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETeamID                                 Param_SurrenderTeam                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::SurrenderTeam(E_ObjectiveTeam SurrenderObjectiveTeam, ETeamID Param_SurrenderTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "SurrenderTeam");

	Params::B_ObjectiveGameMode_C_SurrenderTeam Parms{};

	Parms.SurrenderObjectiveTeam = SurrenderObjectiveTeam;
	Parms.Param_SurrenderTeam = Param_SurrenderTeam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.TimerFinished
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::TimerFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "TimerFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.TimerSecondElapsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  RemainingSeconds                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::TimerSecondElapsed(double RemainingSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "TimerSecondElapsed");

	Params::B_ObjectiveGameMode_C_TimerSecondElapsed Parms{};

	Parms.RemainingSeconds = RemainingSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.UnregisterPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::UnregisterPlayer(class AController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "UnregisterPlayer");

	Params::B_ObjectiveGameMode_C_UnregisterPlayer Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.UnregisterPlayerOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      LeavingPlayerController                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::UnregisterPlayerOverride(class AController* LeavingPlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "UnregisterPlayerOverride");

	Params::B_ObjectiveGameMode_C_UnregisterPlayerOverride Parms{};

	Parms.LeavingPlayerController = LeavingPlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.UpdateCustomGameMatchOptions
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_ObjectiveGameMode_C::UpdateCustomGameMatchOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "UpdateCustomGameMatchOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.GetPlayObjectiveId
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int64                                   ObjectiveId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::GetPlayObjectiveId(int64* ObjectiveId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "GetPlayObjectiveId");

	Params::B_ObjectiveGameMode_C_GetPlayObjectiveId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ObjectiveId != nullptr)
		*ObjectiveId = Parms.ObjectiveId;
}


// Function B_ObjectiveGameMode.B_ObjectiveGameMode_C.GetWinObjectiveId
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int64                                   ObjectiveId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ObjectiveGameMode_C::GetWinObjectiveId(int64* ObjectiveId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ObjectiveGameMode_C", "GetWinObjectiveId");

	Params::B_ObjectiveGameMode_C_GetWinObjectiveId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ObjectiveId != nullptr)
		*ObjectiveId = Parms.ObjectiveId;
}

}
