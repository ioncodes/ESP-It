#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WP_FriendEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WP_FriendEntry.WP_FriendEntry_C
// 0x0020 (0x02E0 - 0x02C0)
class UWP_FriendEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           Invite;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x02D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOnlineFriendRef*                       FriendInfo;                                        // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature();
	void ExecuteUbergraph_WP_FriendEntry(int32 EntryPoint);
	class FText GetFriendName();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WP_FriendEntry_C">();
	}
	static class UWP_FriendEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWP_FriendEntry_C>();
	}
};
static_assert(alignof(UWP_FriendEntry_C) == 0x000008, "Wrong alignment on UWP_FriendEntry_C");
static_assert(sizeof(UWP_FriendEntry_C) == 0x0002E0, "Wrong size on UWP_FriendEntry_C");
static_assert(offsetof(UWP_FriendEntry_C, UberGraphFrame) == 0x0002C0, "Member 'UWP_FriendEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWP_FriendEntry_C, Invite) == 0x0002C8, "Member 'UWP_FriendEntry_C::Invite' has a wrong offset!");
static_assert(offsetof(UWP_FriendEntry_C, TextBlock_2) == 0x0002D0, "Member 'UWP_FriendEntry_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UWP_FriendEntry_C, FriendInfo) == 0x0002D8, "Member 'UWP_FriendEntry_C::FriendInfo' has a wrong offset!");

}
