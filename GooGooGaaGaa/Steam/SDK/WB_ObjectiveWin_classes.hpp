#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ObjectiveWin

#include "Basic.hpp"

#include "E_ObjectiveResult_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ObjectiveWin.WB_ObjectiveWin_C
// 0x0028 (0x0308 - 0x02E0)
class UWB_ObjectiveWin_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       WinAnimation;                                      // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               Defeat;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Draw;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Victory;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_ObjectiveResult                             Condition;                                         // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	ESlateVisibility Get_Defeat_Visibility_0();
	ESlateVisibility Get_Draw_Visibility_0();
	ESlateVisibility Get_Victory_Visibility_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ObjectiveWin_C">();
	}
	static class UWB_ObjectiveWin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ObjectiveWin_C>();
	}
};
static_assert(alignof(UWB_ObjectiveWin_C) == 0x000008, "Wrong alignment on UWB_ObjectiveWin_C");
static_assert(sizeof(UWB_ObjectiveWin_C) == 0x000308, "Wrong size on UWB_ObjectiveWin_C");
static_assert(offsetof(UWB_ObjectiveWin_C, WinAnimation) == 0x0002E0, "Member 'UWB_ObjectiveWin_C::WinAnimation' has a wrong offset!");
static_assert(offsetof(UWB_ObjectiveWin_C, Defeat) == 0x0002E8, "Member 'UWB_ObjectiveWin_C::Defeat' has a wrong offset!");
static_assert(offsetof(UWB_ObjectiveWin_C, Draw) == 0x0002F0, "Member 'UWB_ObjectiveWin_C::Draw' has a wrong offset!");
static_assert(offsetof(UWB_ObjectiveWin_C, Victory) == 0x0002F8, "Member 'UWB_ObjectiveWin_C::Victory' has a wrong offset!");
static_assert(offsetof(UWB_ObjectiveWin_C, Condition) == 0x000300, "Member 'UWB_ObjectiveWin_C::Condition' has a wrong offset!");

}
