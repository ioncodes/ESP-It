#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CameraScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ETeamID_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CameraScreen.WB_CameraScreen_C
// 0x0040 (0x0320 - 0x02E0)
class UWB_CameraScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Title;                                             // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_WinAnimationLogic_C*                WB_WinAnimationLogic;                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class AB_HunterSkinedMesh_C*>          SkinedMeshes;                                      // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AB_ImpostorGameState_C*                 GameState;                                         // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CloseScreen();
	void Construct();
	void ExecuteUbergraph_WB_CameraScreen(int32 EntryPoint);
	class FText Get_Title_Text_0();
	ESlateVisibility Get_Title_Visibility_0();
	void StartVoteOutSequence();
	void VoteOutSequenceFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CameraScreen_C">();
	}
	static class UWB_CameraScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CameraScreen_C>();
	}
};
static_assert(alignof(UWB_CameraScreen_C) == 0x000008, "Wrong alignment on UWB_CameraScreen_C");
static_assert(sizeof(UWB_CameraScreen_C) == 0x000320, "Wrong size on UWB_CameraScreen_C");
static_assert(offsetof(UWB_CameraScreen_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_CameraScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_CameraScreen_C, FadeIn) == 0x0002E8, "Member 'UWB_CameraScreen_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWB_CameraScreen_C, FadeOut) == 0x0002F0, "Member 'UWB_CameraScreen_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UWB_CameraScreen_C, Title) == 0x0002F8, "Member 'UWB_CameraScreen_C::Title' has a wrong offset!");
static_assert(offsetof(UWB_CameraScreen_C, WB_WinAnimationLogic) == 0x000300, "Member 'UWB_CameraScreen_C::WB_WinAnimationLogic' has a wrong offset!");
static_assert(offsetof(UWB_CameraScreen_C, SkinedMeshes) == 0x000308, "Member 'UWB_CameraScreen_C::SkinedMeshes' has a wrong offset!");
static_assert(offsetof(UWB_CameraScreen_C, GameState) == 0x000318, "Member 'UWB_CameraScreen_C::GameState' has a wrong offset!");

}
