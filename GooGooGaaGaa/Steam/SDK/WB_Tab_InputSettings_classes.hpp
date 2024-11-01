#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Tab_InputSettings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Tab_InputSettings.WB_Tab_InputSettings_C
// 0x00B8 (0x0398 - 0x02E0)
class UWB_Tab_InputSettings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_CheckBoxWithLabel_C*                CheckBox_InvertControllerYAxis;                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CheckBoxWithLabel_C*                CheckBox_InvertMouseYAxis;                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CheckBoxWithLabel_C*                CheckBox_UseAimAssist;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CheckBoxWithLabel_C*                CheckBox_UseToggleCrouch;                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CheckBoxWithLabel_C*                CheckBox_UseToggleStabilize;                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           EditBindings;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Restore;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SliderWithLabel_C*                  Slider_ControllerSensitivity;                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SliderWithLabel_C*                  Slider_CoyoteTransform;                            // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SliderWithLabel_C*                  Slider_MouseSensitivity;                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SliderWithLabel_C*                  Slider_ScopeModeSensitivity;                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        MouseSensitivityMin;                               // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MouseSensitivityMax;                               // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ControllerSensitivityMin;                          // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ControllerSensitivityMax;                          // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOriginalMouseInvert;                              // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOriginalControllerInvert;                         // 0x0369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOriginalUseToggleStabilizeOnController;           // 0x036A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36B[0x5];                                      // 0x036B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_SettingsSave_C*                      SettingsSave;                                      // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UB_InputMappingsManager_C*              InputMappingsManager;                              // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        OriginalCoyoteTransformTime;                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OriginalScopeModeSensitivity;                      // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OriginalUseToggleCrouch;                           // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OriginalUseAimAssist;                              // 0x0391(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__CheckBox_InvertControllerYAxis_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(class UWB_CheckBoxWithLabel_C* Sender, bool IsChecked);
	void BndEvt__CheckBox_InvertMouseYAxis_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(class UWB_CheckBoxWithLabel_C* Sender, bool IsChecked);
	void BndEvt__CheckBox_UseToggleStabilize_K2Node_ComponentBoundEvent_86_OnCheckStateChanged__DelegateSignature(class UWB_CheckBoxWithLabel_C* Sender, bool IsChecked);
	void BndEvt__EditBindings_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature();
	void BndEvt__Restore_K2Node_ComponentBoundEvent_79_Clicked__DelegateSignature();
	void BndEvt__WB_Tab_InputSettings_CheckBox_UseAimAssist_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(class UWB_CheckBoxWithLabel_C* Sender, bool IsChecked);
	void BndEvt__WB_Tab_InputSettings_CheckBox_UseToggleCrouch_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(class UWB_CheckBoxWithLabel_C* Sender, bool IsChecked);
	void BndEvt__WB_Tab_InputSettings_Slider_CoyoteTransform_K2Node_ComponentBoundEvent_2_OnRealValueChanged__DelegateSignature(double RealValue);
	void BndEvt__WB_Tab_InputSettings_Slider_ScopeModeSensitivity_K2Node_ComponentBoundEvent_3_OnRealValueChanged__DelegateSignature(double RealValue);
	void ConfirmAction();
	void Construct();
	void ControllerToSlider(double In, double* Out);
	void Destruct();
	void DiscardChanges();
	void ExecuteUbergraph_WB_Tab_InputSettings(int32 EntryPoint);
	class UUserWidget* GetInitialFocusWidget();
	class UPanelWidget* GetPanelWidget();
	void Init();
	void Initialize();
	void IsDirty(bool* bDirty);
	void MouseToSlider(double In, double* Out);
	class UWidget* NavigateList(EUINavigation Navigation_0);
	void RequestConfirmableAction();
	void RevertChanges();
	void SaveChanges();
	void SetSettingsLabelsForPlatform();
	void SetSettingsVisibilityForPlatform();
	void SliderToController(double In, double* Out);
	double SliderToMouse(double RealValue);
	void StoreReferences();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Tab_InputSettings_C">();
	}
	static class UWB_Tab_InputSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Tab_InputSettings_C>();
	}
};
static_assert(alignof(UWB_Tab_InputSettings_C) == 0x000008, "Wrong alignment on UWB_Tab_InputSettings_C");
static_assert(sizeof(UWB_Tab_InputSettings_C) == 0x000398, "Wrong size on UWB_Tab_InputSettings_C");
static_assert(offsetof(UWB_Tab_InputSettings_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_Tab_InputSettings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, CheckBox_InvertControllerYAxis) == 0x0002E8, "Member 'UWB_Tab_InputSettings_C::CheckBox_InvertControllerYAxis' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, CheckBox_InvertMouseYAxis) == 0x0002F0, "Member 'UWB_Tab_InputSettings_C::CheckBox_InvertMouseYAxis' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, CheckBox_UseAimAssist) == 0x0002F8, "Member 'UWB_Tab_InputSettings_C::CheckBox_UseAimAssist' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, CheckBox_UseToggleCrouch) == 0x000300, "Member 'UWB_Tab_InputSettings_C::CheckBox_UseToggleCrouch' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, CheckBox_UseToggleStabilize) == 0x000308, "Member 'UWB_Tab_InputSettings_C::CheckBox_UseToggleStabilize' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, EditBindings) == 0x000310, "Member 'UWB_Tab_InputSettings_C::EditBindings' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, Restore) == 0x000318, "Member 'UWB_Tab_InputSettings_C::Restore' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, ScrollBox_0) == 0x000320, "Member 'UWB_Tab_InputSettings_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, Slider_ControllerSensitivity) == 0x000328, "Member 'UWB_Tab_InputSettings_C::Slider_ControllerSensitivity' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, Slider_CoyoteTransform) == 0x000330, "Member 'UWB_Tab_InputSettings_C::Slider_CoyoteTransform' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, Slider_MouseSensitivity) == 0x000338, "Member 'UWB_Tab_InputSettings_C::Slider_MouseSensitivity' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, Slider_ScopeModeSensitivity) == 0x000340, "Member 'UWB_Tab_InputSettings_C::Slider_ScopeModeSensitivity' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, MouseSensitivityMin) == 0x000348, "Member 'UWB_Tab_InputSettings_C::MouseSensitivityMin' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, MouseSensitivityMax) == 0x000350, "Member 'UWB_Tab_InputSettings_C::MouseSensitivityMax' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, ControllerSensitivityMin) == 0x000358, "Member 'UWB_Tab_InputSettings_C::ControllerSensitivityMin' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, ControllerSensitivityMax) == 0x000360, "Member 'UWB_Tab_InputSettings_C::ControllerSensitivityMax' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, bOriginalMouseInvert) == 0x000368, "Member 'UWB_Tab_InputSettings_C::bOriginalMouseInvert' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, bOriginalControllerInvert) == 0x000369, "Member 'UWB_Tab_InputSettings_C::bOriginalControllerInvert' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, bOriginalUseToggleStabilizeOnController) == 0x00036A, "Member 'UWB_Tab_InputSettings_C::bOriginalUseToggleStabilizeOnController' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, SettingsSave) == 0x000370, "Member 'UWB_Tab_InputSettings_C::SettingsSave' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, InputMappingsManager) == 0x000378, "Member 'UWB_Tab_InputSettings_C::InputMappingsManager' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, OriginalCoyoteTransformTime) == 0x000380, "Member 'UWB_Tab_InputSettings_C::OriginalCoyoteTransformTime' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, OriginalScopeModeSensitivity) == 0x000388, "Member 'UWB_Tab_InputSettings_C::OriginalScopeModeSensitivity' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, OriginalUseToggleCrouch) == 0x000390, "Member 'UWB_Tab_InputSettings_C::OriginalUseToggleCrouch' has a wrong offset!");
static_assert(offsetof(UWB_Tab_InputSettings_C, OriginalUseAimAssist) == 0x000391, "Member 'UWB_Tab_InputSettings_C::OriginalUseAimAssist' has a wrong offset!");

}

