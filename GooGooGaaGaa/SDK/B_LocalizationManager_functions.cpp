#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_LocalizationManager

#include "Basic.hpp"

#include "B_LocalizationManager_classes.hpp"
#include "B_LocalizationManager_parameters.hpp"


namespace SDK
{

// Function B_LocalizationManager.B_LocalizationManager_C.ExecuteUbergraph_B_LocalizationManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_LocalizationManager_C::ExecuteUbergraph_B_LocalizationManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LocalizationManager_C", "ExecuteUbergraph_B_LocalizationManager");

	Params::B_LocalizationManager_C_ExecuteUbergraph_B_LocalizationManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_LocalizationManager.B_LocalizationManager_C.GetButtonLocalization
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                             Key                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FSButtonLocalization             ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// bool                                    bKeyFound                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FSButtonLocalization UB_LocalizationManager_C::GetButtonLocalization(const struct FKey& Key, bool* bKeyFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LocalizationManager_C", "GetButtonLocalization");

	Params::B_LocalizationManager_C_GetButtonLocalization Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	if (bKeyFound != nullptr)
		*bKeyFound = Parms.bKeyFound;

	return Parms.ReturnValue;
}


// Function B_LocalizationManager.B_LocalizationManager_C.GetKeyForAction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// bool                                    bKeyFound                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FKey UB_LocalizationManager_C::GetKeyForAction(class FName ActionName, bool* bKeyFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LocalizationManager_C", "GetKeyForAction");

	Params::B_LocalizationManager_C_GetKeyForAction Parms{};

	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);

	if (bKeyFound != nullptr)
		*bKeyFound = Parms.bKeyFound;

	return Parms.ReturnValue;
}


// Function B_LocalizationManager.B_LocalizationManager_C.GetKeyForAxis
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             AxisName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// bool                                    bKeyFound                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FKey UB_LocalizationManager_C::GetKeyForAxis(class FName AxisName, double Scale, bool* bKeyFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LocalizationManager_C", "GetKeyForAxis");

	Params::B_LocalizationManager_C_GetKeyForAxis Parms{};

	Parms.AxisName = AxisName;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

	if (bKeyFound != nullptr)
		*bKeyFound = Parms.bKeyFound;

	return Parms.ReturnValue;
}


// Function B_LocalizationManager.B_LocalizationManager_C.GetMenuUIManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UB_MenuUIManager_C*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UB_MenuUIManager_C* UB_LocalizationManager_C::GetMenuUIManager()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LocalizationManager_C", "GetMenuUIManager");

	Params::B_LocalizationManager_C_GetMenuUIManager Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_LocalizationManager.B_LocalizationManager_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*                    InGameInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_LocalizationManager_C::Initialize(class UGameInstance* InGameInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LocalizationManager_C", "Initialize");

	Params::B_LocalizationManager_C_Initialize Parms{};

	Parms.InGameInstance = InGameInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_LocalizationManager.B_LocalizationManager_C.IsLanguageSupported
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_LocalizationManager_C::IsLanguageSupported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LocalizationManager_C", "IsLanguageSupported");

	Params::B_LocalizationManager_C_IsLanguageSupported Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_LocalizationManager.B_LocalizationManager_C.NintendoSwitchSwapAcceptBackButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                             ActionKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FKey                             FixedKey                                               (Parm, OutParm, HasGetValueTypeHash)

void UB_LocalizationManager_C::NintendoSwitchSwapAcceptBackButton(const struct FKey& ActionKey, struct FKey* FixedKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LocalizationManager_C", "NintendoSwitchSwapAcceptBackButton");

	Params::B_LocalizationManager_C_NintendoSwitchSwapAcceptBackButton Parms{};

	Parms.ActionKey = std::move(ActionKey);

	UObject::ProcessEvent(Func, &Parms);

	if (FixedKey != nullptr)
		*FixedKey = std::move(Parms.FixedKey);
}

}

