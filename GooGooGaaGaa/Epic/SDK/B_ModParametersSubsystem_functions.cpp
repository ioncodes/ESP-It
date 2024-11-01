#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ModParametersSubsystem

#include "Basic.hpp"

#include "B_ModParametersSubsystem_classes.hpp"
#include "B_ModParametersSubsystem_parameters.hpp"


namespace SDK
{

// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.ModRulesUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UB_ModParametersSubsystem_C::ModRulesUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "ModRulesUpdated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.ApplyModRules
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_GameModifier>          ModRules                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UB_ModParametersSubsystem_C::ApplyModRules(TArray<struct FS_GameModifier>& ModRules)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "ApplyModRules");

	Params::B_ModParametersSubsystem_C_ApplyModRules Parms{};

	Parms.ModRules = std::move(ModRules);

	UObject::ProcessEvent(Func, &Parms);

	ModRules = std::move(Parms.ModRules);
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.ExecuteUbergraph_B_ModParametersSubsystem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ModParametersSubsystem_C::ExecuteUbergraph_B_ModParametersSubsystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "ExecuteUbergraph_B_ModParametersSubsystem");

	Params::B_ModParametersSubsystem_C_ExecuteUbergraph_B_ModParametersSubsystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.GetDefaultModParameterValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_GameModifierType                      SkillType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUIParameterData                 UIPameter                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FUIParam                         DefaultValue                                           (Parm, OutParm, NoDestructor)

void UB_ModParametersSubsystem_C::GetDefaultModParameterValue(E_GameModifierType SkillType, const struct FUIParameterData& UIPameter, struct FUIParam* DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "GetDefaultModParameterValue");

	Params::B_ModParametersSubsystem_C_GetDefaultModParameterValue Parms{};

	Parms.SkillType = SkillType;
	Parms.UIPameter = std::move(UIPameter);

	UObject::ProcessEvent(Func, &Parms);

	if (DefaultValue != nullptr)
		*DefaultValue = std::move(Parms.DefaultValue);
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.GetDefaultModParameterValues
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FUIParameterData>         UIParameters                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// E_GameModifierType                      ModType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUIParam>                 ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FUIParam> UB_ModParametersSubsystem_C::GetDefaultModParameterValues(TArray<struct FUIParameterData>& UIParameters, E_GameModifierType ModType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "GetDefaultModParameterValues");

	Params::B_ModParametersSubsystem_C_GetDefaultModParameterValues Parms{};

	Parms.UIParameters = std::move(UIParameters);
	Parms.ModType = ModType;

	UObject::ProcessEvent(Func, &Parms);

	UIParameters = std::move(Parms.UIParameters);

	return Parms.ReturnValue;
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.GetModParameters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_GameModifierType                      ModType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UModParameters*                   ModParameter                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_ModParametersSubsystem_C::GetModParameters(E_GameModifierType ModType, class UModParameters** ModParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "GetModParameters");

	Params::B_ModParametersSubsystem_C_GetModParameters Parms{};

	Parms.ModType = ModType;

	UObject::ProcessEvent(Func, &Parms);

	if (ModParameter != nullptr)
		*ModParameter = Parms.ModParameter;
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.GetUIParameters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_GameModifierType                      ModType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUIParameterData>         UIParameters                                           (Parm, OutParm)

void UB_ModParametersSubsystem_C::GetUIParameters(E_GameModifierType ModType, TArray<struct FUIParameterData>* UIParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "GetUIParameters");

	Params::B_ModParametersSubsystem_C_GetUIParameters Parms{};

	Parms.ModType = ModType;

	UObject::ProcessEvent(Func, &Parms);

	if (UIParameters != nullptr)
		*UIParameters = std::move(Parms.UIParameters);
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.InitializeDefaultModParameters
// (Public, BlueprintCallable, BlueprintEvent)

void UB_ModParametersSubsystem_C::InitializeDefaultModParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "InitializeDefaultModParameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.InitializeDissolvingProps
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UB_ModParametersSubsystem_C::InitializeDissolvingProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "InitializeDissolvingProps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.InitializeMods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UB_ModParametersSubsystem_C::InitializeMods()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "InitializeMods");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.InitializeMoveOrDamageActor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UB_ModParametersSubsystem_C::InitializeMoveOrDamageActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "InitializeMoveOrDamageActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.InitializePropRetaliation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UB_ModParametersSubsystem_C::InitializePropRetaliation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "InitializePropRetaliation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.InitializeSubsystem
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UB_ModParametersSubsystem_C::InitializeSubsystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "InitializeSubsystem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.IsModUsingRules
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_GameModifierType                      SkillType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUsingRules                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ModParametersSubsystem_C::IsModUsingRules(E_GameModifierType SkillType, bool* IsUsingRules)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "IsModUsingRules");

	Params::B_ModParametersSubsystem_C_IsModUsingRules Parms{};

	Parms.SkillType = SkillType;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUsingRules != nullptr)
		*IsUsingRules = Parms.IsUsingRules;
}


// Function B_ModParametersSubsystem.B_ModParametersSubsystem_C.IsUsingCustomRules
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CustomRules                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ModParametersSubsystem_C::IsUsingCustomRules(bool* CustomRules)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ModParametersSubsystem_C", "IsUsingCustomRules");

	Params::B_ModParametersSubsystem_C_IsUsingCustomRules Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CustomRules != nullptr)
		*CustomRules = Parms.CustomRules;
}

}

