#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerPropCollection

#include "Basic.hpp"

#include "E_PropCategory_structs.hpp"
#include "E_PropSet_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PlayerPropCollection.B_PlayerPropCollection_C
// 0x0118 (0x0140 - 0x0028)
class UB_PlayerPropCollection_C final : public UObject
{
public:
	class UGameInstance*                          GameInstance;                                      // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           PlayerState;                                       // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CollectedPropsStatList;                            // 0x0038(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<int32>                                   OwnedPropIds;                                      // 0x0048(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         PropStatCount;                                     // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239F[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_PropCategory, int32>                   OwnedPropsInCategory;                              // 0x00A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<E_PropSet, int32>                        OwnedPropsInSet;                                   // 0x00F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void CheckAndSetOwnedPropsCount(TArray<struct FS_PropData>& PropDatas, const TMap<E_PropCategory, class FName>& PropCategoryStats, const TMap<E_PropSet, class FName>& PropSetStats);
	void CollectProp(int32 PropId, bool Local, bool* IsNewProp);
	void CountCollectedPropsPerCategory(TArray<struct FS_PropData>& PropDatas, const TMap<E_PropCategory, class FName>& PropCategoryStats, const TMap<E_PropSet, class FName>& PropSetStats);
	void HandleNewPropCategoryAndSets(int32 NewPropId, const TMap<int32, struct FS_PropData>& PropDatas, const TMap<E_PropCategory, class FName>& PropCategoryStats, const TMap<E_PropSet, class FName>& PropSetStats, bool Local, int32* CountInCategory, int32* CountInSet, int32* TotalCategory, int32* TotalSet);
	void Initialize(class UGameInstance* Param_GameInstance);
	void InitializeGS(class UGameInstance* Param_GameInstance, class APlayerState* Param_PlayerState);
	void LoadOwnedPropIds();

	void GetStatsAndAchievementsManager(class UB_NewStatsAndAchievementsManager_C** Result) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PlayerPropCollection_C">();
	}
	static class UB_PlayerPropCollection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_PlayerPropCollection_C>();
	}
};
static_assert(alignof(UB_PlayerPropCollection_C) == 0x000008, "Wrong alignment on UB_PlayerPropCollection_C");
static_assert(sizeof(UB_PlayerPropCollection_C) == 0x000140, "Wrong size on UB_PlayerPropCollection_C");
static_assert(offsetof(UB_PlayerPropCollection_C, GameInstance) == 0x000028, "Member 'UB_PlayerPropCollection_C::GameInstance' has a wrong offset!");
static_assert(offsetof(UB_PlayerPropCollection_C, PlayerState) == 0x000030, "Member 'UB_PlayerPropCollection_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UB_PlayerPropCollection_C, CollectedPropsStatList) == 0x000038, "Member 'UB_PlayerPropCollection_C::CollectedPropsStatList' has a wrong offset!");
static_assert(offsetof(UB_PlayerPropCollection_C, OwnedPropIds) == 0x000048, "Member 'UB_PlayerPropCollection_C::OwnedPropIds' has a wrong offset!");
static_assert(offsetof(UB_PlayerPropCollection_C, PropStatCount) == 0x000098, "Member 'UB_PlayerPropCollection_C::PropStatCount' has a wrong offset!");
static_assert(offsetof(UB_PlayerPropCollection_C, OwnedPropsInCategory) == 0x0000A0, "Member 'UB_PlayerPropCollection_C::OwnedPropsInCategory' has a wrong offset!");
static_assert(offsetof(UB_PlayerPropCollection_C, OwnedPropsInSet) == 0x0000F0, "Member 'UB_PlayerPropCollection_C::OwnedPropsInSet' has a wrong offset!");

}
