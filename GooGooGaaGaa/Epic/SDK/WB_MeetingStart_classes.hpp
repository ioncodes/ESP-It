#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MeetingStart

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MeetingStart.WB_MeetingStart_C
// 0x0048 (0x0328 - 0x02E0)
class UWB_MeetingStart_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CloseScreen;                                       // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StartMeeting;                                      // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                        Blur;                                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MeetingAnimationImage;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MeetingContextImage;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MeetingText;                                       // 0x0310(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AB_ImpostorPlayerState_C*               KilledPlayer;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AB_ImpostorPlayerState_C*               Reporter;                                          // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WB_MeetingStart(int32 EntryPoint);
	struct FSlateBrush Get_MeetingContextImage_Brush_0();
	class FText GetText_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MeetingStart_C">();
	}
	static class UWB_MeetingStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MeetingStart_C>();
	}
};
static_assert(alignof(UWB_MeetingStart_C) == 0x000008, "Wrong alignment on UWB_MeetingStart_C");
static_assert(sizeof(UWB_MeetingStart_C) == 0x000328, "Wrong size on UWB_MeetingStart_C");
static_assert(offsetof(UWB_MeetingStart_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_MeetingStart_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MeetingStart_C, CloseScreen) == 0x0002E8, "Member 'UWB_MeetingStart_C::CloseScreen' has a wrong offset!");
static_assert(offsetof(UWB_MeetingStart_C, StartMeeting) == 0x0002F0, "Member 'UWB_MeetingStart_C::StartMeeting' has a wrong offset!");
static_assert(offsetof(UWB_MeetingStart_C, Blur) == 0x0002F8, "Member 'UWB_MeetingStart_C::Blur' has a wrong offset!");
static_assert(offsetof(UWB_MeetingStart_C, MeetingAnimationImage) == 0x000300, "Member 'UWB_MeetingStart_C::MeetingAnimationImage' has a wrong offset!");
static_assert(offsetof(UWB_MeetingStart_C, MeetingContextImage) == 0x000308, "Member 'UWB_MeetingStart_C::MeetingContextImage' has a wrong offset!");
static_assert(offsetof(UWB_MeetingStart_C, MeetingText) == 0x000310, "Member 'UWB_MeetingStart_C::MeetingText' has a wrong offset!");
static_assert(offsetof(UWB_MeetingStart_C, KilledPlayer) == 0x000318, "Member 'UWB_MeetingStart_C::KilledPlayer' has a wrong offset!");
static_assert(offsetof(UWB_MeetingStart_C, Reporter) == 0x000320, "Member 'UWB_MeetingStart_C::Reporter' has a wrong offset!");

}

