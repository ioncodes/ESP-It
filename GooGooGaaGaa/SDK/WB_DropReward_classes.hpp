#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_DropReward

#include "Basic.hpp"

#include "SClientItemUnlock_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_DropReward.WB_DropReward_C
// 0x0088 (0x0348 - 0x02C0)
class UWB_DropReward_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       TransferToUnlock;                                  // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Border;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DropExpBox;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DropExpText;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressBarMat;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Unlock_C*                           WB_Unlock;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UB_DropExpProgressionCounter_C*         DropExpProgressionCounter;                         // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          InitializeExp;                                     // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35C3[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PlayerState_C*                       PlayerState;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          BaseExpGranted;                                    // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WinBonusExpGranted;                                // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AnimationPlayed;                                   // 0x0312(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WantToShowAnimation;                               // 0x0313(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CatchXPGranted;                                    // 0x0314(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LastWitchXPGranted;                                // 0x0315(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35C4[0x2];                                     // 0x0316(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TotalXP;                                           // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartDropExp;                                      // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxDropExp;                                        // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BaseXP;                                            // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSClientItemUnlock>             CauldronUnlocks;                                   // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         WinBonusXP;                                        // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastWitchXP;                                       // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CatchXP;                                           // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CauldronAnimationFinished();
	void ExecuteUbergraph_WB_DropReward(int32 EntryPoint);
	void GrantFinished(bool NoValueGranted);
	void InitializeByPlayerState(class AB_PlayerState_C* Param_PlayerState);
	void InitializeCounter();
	void InitializeValues(int32 SetTotalXP, int32 SetStartDropExp, int32 SetMaxDropExp, int32 SetBaseXP, TArray<struct FSClientItemUnlock>& SetCauldronUnlocks, int32 SetWinBonusXP, int32 SetLastWitchXP, int32 SetCatchXP);
	void SetupProgressionCounterEvents();
	void StartGranting();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateCurrentValue();
	void ValueExceedProgressionTarget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_DropReward_C">();
	}
	static class UWB_DropReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_DropReward_C>();
	}
};
static_assert(alignof(UWB_DropReward_C) == 0x000008, "Wrong alignment on UWB_DropReward_C");
static_assert(sizeof(UWB_DropReward_C) == 0x000348, "Wrong size on UWB_DropReward_C");
static_assert(offsetof(UWB_DropReward_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_DropReward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, TransferToUnlock) == 0x0002C8, "Member 'UWB_DropReward_C::TransferToUnlock' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, Border) == 0x0002D0, "Member 'UWB_DropReward_C::Border' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, DropExpBox) == 0x0002D8, "Member 'UWB_DropReward_C::DropExpBox' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, DropExpText) == 0x0002E0, "Member 'UWB_DropReward_C::DropExpText' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, ProgressBarMat) == 0x0002E8, "Member 'UWB_DropReward_C::ProgressBarMat' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, WB_Unlock) == 0x0002F0, "Member 'UWB_DropReward_C::WB_Unlock' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, DropExpProgressionCounter) == 0x0002F8, "Member 'UWB_DropReward_C::DropExpProgressionCounter' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, InitializeExp) == 0x000300, "Member 'UWB_DropReward_C::InitializeExp' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, PlayerState) == 0x000308, "Member 'UWB_DropReward_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, BaseExpGranted) == 0x000310, "Member 'UWB_DropReward_C::BaseExpGranted' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, WinBonusExpGranted) == 0x000311, "Member 'UWB_DropReward_C::WinBonusExpGranted' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, AnimationPlayed) == 0x000312, "Member 'UWB_DropReward_C::AnimationPlayed' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, WantToShowAnimation) == 0x000313, "Member 'UWB_DropReward_C::WantToShowAnimation' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, CatchXPGranted) == 0x000314, "Member 'UWB_DropReward_C::CatchXPGranted' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, LastWitchXPGranted) == 0x000315, "Member 'UWB_DropReward_C::LastWitchXPGranted' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, TotalXP) == 0x000318, "Member 'UWB_DropReward_C::TotalXP' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, StartDropExp) == 0x00031C, "Member 'UWB_DropReward_C::StartDropExp' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, MaxDropExp) == 0x000320, "Member 'UWB_DropReward_C::MaxDropExp' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, BaseXP) == 0x000324, "Member 'UWB_DropReward_C::BaseXP' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, CauldronUnlocks) == 0x000328, "Member 'UWB_DropReward_C::CauldronUnlocks' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, WinBonusXP) == 0x000338, "Member 'UWB_DropReward_C::WinBonusXP' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, LastWitchXP) == 0x00033C, "Member 'UWB_DropReward_C::LastWitchXP' has a wrong offset!");
static_assert(offsetof(UWB_DropReward_C, CatchXP) == 0x000340, "Member 'UWB_DropReward_C::CatchXP' has a wrong offset!");

}
