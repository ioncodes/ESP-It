#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_KickPlayerEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_KickPlayerEntry.WB_KickPlayerEntry_C
// 0x0020 (0x0300 - 0x02E0)
class UWB_KickPlayerEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           Kick;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerNameText;                                    // 0x02F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerState*                           PlayerState;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature();
	void ExecuteUbergraph_WB_KickPlayerEntry(int32 EntryPoint);
	class FText Get_PlayerNameText_Text_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_KickPlayerEntry_C">();
	}
	static class UWB_KickPlayerEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_KickPlayerEntry_C>();
	}
};
static_assert(alignof(UWB_KickPlayerEntry_C) == 0x000008, "Wrong alignment on UWB_KickPlayerEntry_C");
static_assert(sizeof(UWB_KickPlayerEntry_C) == 0x000300, "Wrong size on UWB_KickPlayerEntry_C");
static_assert(offsetof(UWB_KickPlayerEntry_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_KickPlayerEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_KickPlayerEntry_C, Kick) == 0x0002E8, "Member 'UWB_KickPlayerEntry_C::Kick' has a wrong offset!");
static_assert(offsetof(UWB_KickPlayerEntry_C, PlayerNameText) == 0x0002F0, "Member 'UWB_KickPlayerEntry_C::PlayerNameText' has a wrong offset!");
static_assert(offsetof(UWB_KickPlayerEntry_C, PlayerState) == 0x0002F8, "Member 'UWB_KickPlayerEntry_C::PlayerState' has a wrong offset!");

}
