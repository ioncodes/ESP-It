#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BaseWitchSkill

#include "Basic.hpp"

#include "B_BaseWitchSkill_classes.hpp"
#include "B_BaseWitchSkill_parameters.hpp"


namespace SDK
{

// Function B_BaseWitchSkill.B_BaseWitchSkill_C.CanActivate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_BaseWitchSkill_C::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseWitchSkill_C", "CanActivate");

	Params::B_BaseWitchSkill_C_CanActivate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_BaseWitchSkill.B_BaseWitchSkill_C.GetOwnerIsTrapped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsTrapped                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_BaseWitchSkill_C::GetOwnerIsTrapped(bool* IsTrapped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseWitchSkill_C", "GetOwnerIsTrapped");

	Params::B_BaseWitchSkill_C_GetOwnerIsTrapped Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsTrapped != nullptr)
		*IsTrapped = Parms.IsTrapped;
}


// Function B_BaseWitchSkill.B_BaseWitchSkill_C.GetOwnerIsDispel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsDispel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_BaseWitchSkill_C::GetOwnerIsDispel(bool* IsDispel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseWitchSkill_C", "GetOwnerIsDispel");

	Params::B_BaseWitchSkill_C_GetOwnerIsDispel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDispel != nullptr)
		*IsDispel = Parms.IsDispel;
}


// Function B_BaseWitchSkill.B_BaseWitchSkill_C.Kill
// (Public, BlueprintCallable, BlueprintEvent)

void UB_BaseWitchSkill_C::Kill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseWitchSkill_C", "Kill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BaseWitchSkill.B_BaseWitchSkill_C.GetOwnersMana
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Mana                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_BaseWitchSkill_C::GetOwnersMana(double* Mana)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseWitchSkill_C", "GetOwnersMana");

	Params::B_BaseWitchSkill_C_GetOwnersMana Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mana != nullptr)
		*Mana = Parms.Mana;
}


// Function B_BaseWitchSkill.B_BaseWitchSkill_C.ConsumeOwnersMana
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_BaseWitchSkill_C::ConsumeOwnersMana(double Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseWitchSkill_C", "ConsumeOwnersMana");

	Params::B_BaseWitchSkill_C_ConsumeOwnersMana Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}

}

