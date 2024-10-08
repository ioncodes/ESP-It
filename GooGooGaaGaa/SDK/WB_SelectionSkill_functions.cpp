#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SelectionSkill

#include "Basic.hpp"

#include "WB_SelectionSkill_classes.hpp"
#include "WB_SelectionSkill_parameters.hpp"


namespace SDK
{

// Function WB_SelectionSkill.WB_SelectionSkill_C.GetGridButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_GridButton_C*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWB_GridButton_C* UWB_SelectionSkill_C::GetGridButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "GetGridButton");

	Params::WB_SelectionSkill_C_GetGridButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_SelectionSkill_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "OnFocusReceived");

	Params::WB_SelectionSkill_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.SetGridButtonValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_SelectionSkill_C::SetGridButtonValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "SetGridButtonValues");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.IsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_SelectionSkill_C::IsSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "IsSelected");

	Params::WB_SelectionSkill_C_IsSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.GetTooltip
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_SkillTooltipContent_C*        ToolTip                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_SelectionSkill_C::GetTooltip(class UWB_SkillTooltipContent_C** ToolTip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "GetTooltip");

	Params::WB_SelectionSkill_C_GetTooltip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ToolTip != nullptr)
		*ToolTip = Parms.ToolTip;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.GetSkillTooltipText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWB_SelectionSkill_C::GetSkillTooltipText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "GetSkillTooltipText");

	Params::WB_SelectionSkill_C_GetSkillTooltipText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.GetSkillImage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UObject>           ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

TSoftObjectPtr<class UObject> UWB_SelectionSkill_C::GetSkillImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "GetSkillImage");

	Params::WB_SelectionSkill_C_GetSkillImage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.GetTeamColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ETeamID                                 Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWB_SelectionSkill_C::GetTeamColor(ETeamID Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "GetTeamColor");

	Params::WB_SelectionSkill_C_GetTeamColor Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.GetSkillTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           SkillClass_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ETeamID                                 SkillTeam_0                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SelectionSkill_C::GetSkillTeam(class UClass* SkillClass_0, ETeamID* SkillTeam_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "GetSkillTeam");

	Params::WB_SelectionSkill_C_GetSkillTeam Parms{};

	Parms.SkillClass_0 = SkillClass_0;

	UObject::ProcessEvent(Func, &Parms);

	if (SkillTeam_0 != nullptr)
		*SkillTeam_0 = Parms.SkillTeam_0;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.IsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_SelectionSkill_C::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "IsEnabled");

	Params::WB_SelectionSkill_C_IsEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.SelectSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Skill                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_SelectionSkill_C::SelectSkill(class UClass* Skill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "SelectSkill");

	Params::WB_SelectionSkill_C_SelectSkill Parms{};

	Parms.Skill = Skill;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.GetSelectedSkill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AB_PlayerState_C*                 PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Skill                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_SelectionSkill_C::GetSelectedSkill(class AB_PlayerState_C* PlayerState, class UClass** Skill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "GetSelectedSkill");

	Params::WB_SelectionSkill_C_GetSelectedSkill Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (Skill != nullptr)
		*Skill = Parms.Skill;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.Get_SkillSelected_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_SelectionSkill_C::Get_SkillSelected_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "Get_SkillSelected_Visibility_0");

	Params::WB_SelectionSkill_C_Get_SkillSelected_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_SelectionSkill_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "GetVisibility_0");

	Params::WB_SelectionSkill_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.Get_ChickenText_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWB_SelectionSkill_C::Get_ChickenText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "Get_ChickenText_Text_0");

	Params::WB_SelectionSkill_C_Get_ChickenText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SelectionSkill_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "Tick");

	Params::WB_SelectionSkill_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_SelectionSkill_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.BndEvt__WB_GridButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_SelectionSkill_C::BndEvt__WB_GridButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "BndEvt__WB_GridButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.CheckIfSkillUnlocked
// (BlueprintCallable, BlueprintEvent)

void UWB_SelectionSkill_C::CheckIfSkillUnlocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "CheckIfSkillUnlocked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_SelectionSkill_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_SelectionSkill_C*             SelectionSkill                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_SelectionSkill_C::Clicked__DelegateSignature(class UWB_SelectionSkill_C* SelectionSkill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "Clicked__DelegateSignature");

	Params::WB_SelectionSkill_C_Clicked__DelegateSignature Parms{};

	Parms.SelectionSkill = SelectionSkill;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.ExecuteUbergraph_WB_SelectionSkill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SelectionSkill_C::ExecuteUbergraph_WB_SelectionSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "ExecuteUbergraph_WB_SelectionSkill");

	Params::WB_SelectionSkill_C_ExecuteUbergraph_WB_SelectionSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SelectionSkill.WB_SelectionSkill_C.GetStatsAndAchievementsManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UB_NewStatsAndAchievementsManager_C*Result                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_SelectionSkill_C::GetStatsAndAchievementsManager(class UB_NewStatsAndAchievementsManager_C** Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SelectionSkill_C", "GetStatsAndAchievementsManager");

	Params::WB_SelectionSkill_C_GetStatsAndAchievementsManager Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

