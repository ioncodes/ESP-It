#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SurveyButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SurveyButton.WB_SurveyButton_C
// 0x0018 (0x02F8 - 0x02E0)
class UWB_SurveyButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_C*                           WB_Button;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         LatestVersion;                                     // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WB_SurveyButton_WB_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WB_SurveyButton(int32 EntryPoint);
	void ShowSurvey();
	void UpdateNotify();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SurveyButton_C">();
	}
	static class UWB_SurveyButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SurveyButton_C>();
	}
};
static_assert(alignof(UWB_SurveyButton_C) == 0x000008, "Wrong alignment on UWB_SurveyButton_C");
static_assert(sizeof(UWB_SurveyButton_C) == 0x0002F8, "Wrong size on UWB_SurveyButton_C");
static_assert(offsetof(UWB_SurveyButton_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_SurveyButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_SurveyButton_C, WB_Button) == 0x0002E8, "Member 'UWB_SurveyButton_C::WB_Button' has a wrong offset!");
static_assert(offsetof(UWB_SurveyButton_C, LatestVersion) == 0x0002F0, "Member 'UWB_SurveyButton_C::LatestVersion' has a wrong offset!");

}
