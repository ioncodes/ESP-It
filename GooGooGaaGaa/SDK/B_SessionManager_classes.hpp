#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SessionManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OnlineSubsystemBlueprints_structs.hpp"
#include "PropWitchHuntModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SessionManager.B_SessionManager_C
// 0x0080 (0x00B0 - 0x0030)
class UB_SessionManager_C final : public UBaseManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class FName, struct FOnlineSessionSettingBP> SessionPropertiesForUpdate;                        // 0x0038(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          SessionIsDirty;                                    // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SessionIsCurrentlyUpdating;                        // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpdateSessionAfterCurrentUpdate;                   // 0x008A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RegisterPlayersIsRunning;                          // 0x008B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UnregisterPlayersIsRunning;                        // 0x008C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5068[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FUniqueNetIdRepl>               PlayersToRegister;                                 // 0x0090(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FUniqueNetIdRepl>               PlayersToUnregister;                               // 0x00A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AddMatchStartedFlagForUpdate(bool MatchStarted, const class FString& StartTime);
	void AddMatchTimeForUpdate(int32 MatchTime);
	void AddObjectiveMatchGUIDForUpdate(const class FString& Guid);
	void AddObjectiveMatchStartedFlagForUpdate(bool ObjectiveMatchStarted);
	void AddPlayerCountForUpdate(int32 PlayerCount);
	void AddUpdatedPropertiesToSessionSettings(const TMap<class FName, struct FOnlineSessionSettingBP>& SessionSettings, TMap<class FName, struct FOnlineSessionSettingBP>* UpdatedSessionSettings);
	void AddUsingGameRulesForUpdate(bool UsingCustomRules, bool LiveTweakingAllowed);
	void DestroyOnlineSession();
	void EndOnlineSession();
	void ExecuteUbergraph_B_SessionManager(int32 EntryPoint);
	void OnCallFailed_3A9EE90449D09BFAC83E6C9F99AC1DE8(class FName SessionName, bool bWasSuccessful);
	void OnCallFailed_64CE9DA44A206F0283C61FB45E0662EB(class FName SessionName, bool bWasSuccessful);
	void OnCallFailed_826D75FB4D5254C3DBF6FB9F75F4A431(class FName SessionName, bool bWasSuccessful);
	void OnCallFailed_C27C1E6742775B044DB1C796B3FD536C(class FName SessionName, const TArray<struct FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful);
	void OnCallFailed_D646C4F343728FB964A45EA8EB46F8A9(class FName SessionName, bool bWasSuccessful);
	void OnCallFailed_FABFFE04433974AAC85D7A87CED7392B(class FName SessionName, const TArray<struct FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful);
	void OnDestroySessionComplete_3A9EE90449D09BFAC83E6C9F99AC1DE8(class FName SessionName, bool bWasSuccessful);
	void OnEndSessionComplete_64CE9DA44A206F0283C61FB45E0662EB(class FName SessionName, bool bWasSuccessful);
	void OnRegisterPlayersComplete_C27C1E6742775B044DB1C796B3FD536C(class FName SessionName, const TArray<struct FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful);
	void OnStartSessionComplete_D646C4F343728FB964A45EA8EB46F8A9(class FName SessionName, bool bWasSuccessful);
	void OnUnregisterPlayersComplete_FABFFE04433974AAC85D7A87CED7392B(class FName SessionName, const TArray<struct FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful);
	void OnUpdateSessionComplete_826D75FB4D5254C3DBF6FB9F75F4A431(class FName SessionName, bool bWasSuccessful);
	void RegisterPlayerToSession(const struct FUniqueNetIdRepl& PlayerNetId);
	void RegisterQueuedPlayersToSession();
	void SendCurrentSessionInfo();
	void SendGameServerKeepAlive();
	void StartOnlineSession();
	void UnregisterPlayerFromSession(const struct FUniqueNetIdRepl& PlayerNetId);
	void UnregisterQueuedPlayersFromSession();
	void UpdateSessionProperties();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SessionManager_C">();
	}
	static class UB_SessionManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_SessionManager_C>();
	}
};
static_assert(alignof(UB_SessionManager_C) == 0x000008, "Wrong alignment on UB_SessionManager_C");
static_assert(sizeof(UB_SessionManager_C) == 0x0000B0, "Wrong size on UB_SessionManager_C");
static_assert(offsetof(UB_SessionManager_C, UberGraphFrame) == 0x000030, "Member 'UB_SessionManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UB_SessionManager_C, SessionPropertiesForUpdate) == 0x000038, "Member 'UB_SessionManager_C::SessionPropertiesForUpdate' has a wrong offset!");
static_assert(offsetof(UB_SessionManager_C, SessionIsDirty) == 0x000088, "Member 'UB_SessionManager_C::SessionIsDirty' has a wrong offset!");
static_assert(offsetof(UB_SessionManager_C, SessionIsCurrentlyUpdating) == 0x000089, "Member 'UB_SessionManager_C::SessionIsCurrentlyUpdating' has a wrong offset!");
static_assert(offsetof(UB_SessionManager_C, UpdateSessionAfterCurrentUpdate) == 0x00008A, "Member 'UB_SessionManager_C::UpdateSessionAfterCurrentUpdate' has a wrong offset!");
static_assert(offsetof(UB_SessionManager_C, RegisterPlayersIsRunning) == 0x00008B, "Member 'UB_SessionManager_C::RegisterPlayersIsRunning' has a wrong offset!");
static_assert(offsetof(UB_SessionManager_C, UnregisterPlayersIsRunning) == 0x00008C, "Member 'UB_SessionManager_C::UnregisterPlayersIsRunning' has a wrong offset!");
static_assert(offsetof(UB_SessionManager_C, PlayersToRegister) == 0x000090, "Member 'UB_SessionManager_C::PlayersToRegister' has a wrong offset!");
static_assert(offsetof(UB_SessionManager_C, PlayersToUnregister) == 0x0000A0, "Member 'UB_SessionManager_C::PlayersToUnregister' has a wrong offset!");

}
