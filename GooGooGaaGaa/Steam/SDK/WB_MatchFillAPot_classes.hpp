#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MatchFillAPot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MatchFillAPot.WB_MatchFillAPot_C
// 0x0058 (0x0338 - 0x02E0)
class UWB_MatchFillAPot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           Back;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      CircularThrobber_69;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           MatchSolo;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                MatchState;                                        // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           MatchWithFriends;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ComboBoxWithLabel_C*                PreferedRegionComboBox;                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0320(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           WB_Button;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          PlayersFound;                                      // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void BndEvt__MatchSolo_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void BndEvt__MatchWithFriends_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WB_MatchFillAPot(int32 EntryPoint);
	bool Get_Back_bIsEnabled_0();
	bool Get_MatchSolo_bIsEnabled_0();
	ESlateVisibility Get_MatchState_Visibility_0();
	bool GetbIsEnabled_0();
	class FText GetText_0();
	ESlateVisibility GetVisibility_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MatchFillAPot_C">();
	}
	static class UWB_MatchFillAPot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MatchFillAPot_C>();
	}
};
static_assert(alignof(UWB_MatchFillAPot_C) == 0x000008, "Wrong alignment on UWB_MatchFillAPot_C");
static_assert(sizeof(UWB_MatchFillAPot_C) == 0x000338, "Wrong size on UWB_MatchFillAPot_C");
static_assert(offsetof(UWB_MatchFillAPot_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_MatchFillAPot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MatchFillAPot_C, Back) == 0x0002E8, "Member 'UWB_MatchFillAPot_C::Back' has a wrong offset!");
static_assert(offsetof(UWB_MatchFillAPot_C, CanvasPanel_0) == 0x0002F0, "Member 'UWB_MatchFillAPot_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWB_MatchFillAPot_C, CircularThrobber_69) == 0x0002F8, "Member 'UWB_MatchFillAPot_C::CircularThrobber_69' has a wrong offset!");
static_assert(offsetof(UWB_MatchFillAPot_C, MatchSolo) == 0x000300, "Member 'UWB_MatchFillAPot_C::MatchSolo' has a wrong offset!");
static_assert(offsetof(UWB_MatchFillAPot_C, MatchState) == 0x000308, "Member 'UWB_MatchFillAPot_C::MatchState' has a wrong offset!");
static_assert(offsetof(UWB_MatchFillAPot_C, MatchWithFriends) == 0x000310, "Member 'UWB_MatchFillAPot_C::MatchWithFriends' has a wrong offset!");
static_assert(offsetof(UWB_MatchFillAPot_C, PreferedRegionComboBox) == 0x000318, "Member 'UWB_MatchFillAPot_C::PreferedRegionComboBox' has a wrong offset!");
static_assert(offsetof(UWB_MatchFillAPot_C, TextBlock_1) == 0x000320, "Member 'UWB_MatchFillAPot_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWB_MatchFillAPot_C, WB_Button) == 0x000328, "Member 'UWB_MatchFillAPot_C::WB_Button' has a wrong offset!");
static_assert(offsetof(UWB_MatchFillAPot_C, PlayersFound) == 0x000330, "Member 'UWB_MatchFillAPot_C::PlayersFound' has a wrong offset!");

}

