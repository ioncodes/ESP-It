#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PowerupParametersSubsystem

#include "Basic.hpp"

#include "B_PowerupParametersSubsystem_classes.hpp"
#include "B_PowerupParametersSubsystem_parameters.hpp"


namespace SDK
{

// Function B_PowerupParametersSubsystem.B_PowerupParametersSubsystem_C.ApplyPowerupRuleParameters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PowerupRules>          PowerupRules                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UB_PowerupParametersSubsystem_C::ApplyPowerupRuleParameters(TArray<struct FS_PowerupRules>& PowerupRules)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PowerupParametersSubsystem_C", "ApplyPowerupRuleParameters");

	Params::B_PowerupParametersSubsystem_C_ApplyPowerupRuleParameters Parms{};

	Parms.PowerupRules = std::move(PowerupRules);

	UObject::ProcessEvent(Func, &Parms);

	PowerupRules = std::move(Parms.PowerupRules);
}


// Function B_PowerupParametersSubsystem.B_PowerupParametersSubsystem_C.ExecuteUbergraph_B_PowerupParametersSubsystem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_PowerupParametersSubsystem_C::ExecuteUbergraph_B_PowerupParametersSubsystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PowerupParametersSubsystem_C", "ExecuteUbergraph_B_PowerupParametersSubsystem");

	Params::B_PowerupParametersSubsystem_C_ExecuteUbergraph_B_PowerupParametersSubsystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_PowerupParametersSubsystem.B_PowerupParametersSubsystem_C.GetDefaultPowerupParameterValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_PowerupRuleType                       PowerupType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUIParameterData                 UIParameter                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FUIParam                         DefaultValue                                           (Parm, OutParm, NoDestructor)

void UB_PowerupParametersSubsystem_C::GetDefaultPowerupParameterValue(E_PowerupRuleType PowerupType, const struct FUIParameterData& UIParameter, struct FUIParam* DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PowerupParametersSubsystem_C", "GetDefaultPowerupParameterValue");

	Params::B_PowerupParametersSubsystem_C_GetDefaultPowerupParameterValue Parms{};

	Parms.PowerupType = PowerupType;
	Parms.UIParameter = std::move(UIParameter);

	UObject::ProcessEvent(Func, &Parms);

	if (DefaultValue != nullptr)
		*DefaultValue = std::move(Parms.DefaultValue);
}


// Function B_PowerupParametersSubsystem.B_PowerupParametersSubsystem_C.GetDefaultPowerupParameterValues
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FUIParameterData>         UIParameters                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// E_PowerupRuleType                       PowerupType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUIParam>                 ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FUIParam> UB_PowerupParametersSubsystem_C::GetDefaultPowerupParameterValues(TArray<struct FUIParameterData>& UIParameters, E_PowerupRuleType PowerupType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PowerupParametersSubsystem_C", "GetDefaultPowerupParameterValues");

	Params::B_PowerupParametersSubsystem_C_GetDefaultPowerupParameterValues Parms{};

	Parms.UIParameters = std::move(UIParameters);
	Parms.PowerupType = PowerupType;

	UObject::ProcessEvent(Func, &Parms);

	UIParameters = std::move(Parms.UIParameters);

	return Parms.ReturnValue;
}


// Function B_PowerupParametersSubsystem.B_PowerupParametersSubsystem_C.GetPowerupParameters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_PowerupRuleType                       Powerup                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPowerupParameters*               PowerupParameters_0                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_PowerupParametersSubsystem_C::GetPowerupParameters(E_PowerupRuleType Powerup, class UPowerupParameters** PowerupParameters_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PowerupParametersSubsystem_C", "GetPowerupParameters");

	Params::B_PowerupParametersSubsystem_C_GetPowerupParameters Parms{};

	Parms.Powerup = Powerup;

	UObject::ProcessEvent(Func, &Parms);

	if (PowerupParameters_0 != nullptr)
		*PowerupParameters_0 = Parms.PowerupParameters_0;
}


// Function B_PowerupParametersSubsystem.B_PowerupParametersSubsystem_C.GetUIParameters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_PowerupRuleType                       PowerupType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUIParameterData>         UIParameters                                           (Parm, OutParm)

void UB_PowerupParametersSubsystem_C::GetUIParameters(E_PowerupRuleType PowerupType, TArray<struct FUIParameterData>* UIParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PowerupParametersSubsystem_C", "GetUIParameters");

	Params::B_PowerupParametersSubsystem_C_GetUIParameters Parms{};

	Parms.PowerupType = PowerupType;

	UObject::ProcessEvent(Func, &Parms);

	if (UIParameters != nullptr)
		*UIParameters = std::move(Parms.UIParameters);
}


// Function B_PowerupParametersSubsystem.B_PowerupParametersSubsystem_C.InitializeDefaultPowerups
// (Public, BlueprintCallable, BlueprintEvent)

void UB_PowerupParametersSubsystem_C::InitializeDefaultPowerups()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PowerupParametersSubsystem_C", "InitializeDefaultPowerups");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_PowerupParametersSubsystem.B_PowerupParametersSubsystem_C.InitializeSubsystem
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UB_PowerupParametersSubsystem_C::InitializeSubsystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PowerupParametersSubsystem_C", "InitializeSubsystem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_PowerupParametersSubsystem.B_PowerupParametersSubsystem_C.IsPowerupUsingRules
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_PowerupRuleType                       PowerupType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUsingRules                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_PowerupParametersSubsystem_C::IsPowerupUsingRules(E_PowerupRuleType PowerupType, bool* IsUsingRules)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PowerupParametersSubsystem_C", "IsPowerupUsingRules");

	Params::B_PowerupParametersSubsystem_C_IsPowerupUsingRules Parms{};

	Parms.PowerupType = PowerupType;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUsingRules != nullptr)
		*IsUsingRules = Parms.IsUsingRules;
}


// Function B_PowerupParametersSubsystem.B_PowerupParametersSubsystem_C.IsUsingCustomRules
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CustomRules                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_PowerupParametersSubsystem_C::IsUsingCustomRules(bool* CustomRules)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PowerupParametersSubsystem_C", "IsUsingCustomRules");

	Params::B_PowerupParametersSubsystem_C_IsUsingCustomRules Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CustomRules != nullptr)
		*CustomRules = Parms.CustomRules;
}


// Function B_PowerupParametersSubsystem.B_PowerupParametersSubsystem_C.PowerupRulesUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UB_PowerupParametersSubsystem_C::PowerupRulesUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_PowerupParametersSubsystem_C", "PowerupRulesUpdated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

