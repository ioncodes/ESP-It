#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ClientPotatoSkill

#include "Basic.hpp"

#include "B_ClientPotatoSkill_classes.hpp"
#include "B_ClientPotatoSkill_parameters.hpp"


namespace SDK
{

// Function B_ClientPotatoSkill.B_ClientPotatoSkill_C.ExecuteUbergraph_B_ClientPotatoSkill
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ClientPotatoSkill_C::ExecuteUbergraph_B_ClientPotatoSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ClientPotatoSkill_C", "ExecuteUbergraph_B_ClientPotatoSkill");

	Params::B_ClientPotatoSkill_C_ExecuteUbergraph_B_ClientPotatoSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ClientPotatoSkill.B_ClientPotatoSkill_C.HandleSkillActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UB_ClientPotatoSkill_C::HandleSkillActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ClientPotatoSkill_C", "HandleSkillActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ClientPotatoSkill.B_ClientPotatoSkill_C.InitializeRules
// (Public, BlueprintCallable, BlueprintEvent)

void UB_ClientPotatoSkill_C::InitializeRules()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ClientPotatoSkill_C", "InitializeRules");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ClientPotatoSkill.B_ClientPotatoSkill_C.OnSkillUpMulti
// (Event, Public, BlueprintEvent)

void UB_ClientPotatoSkill_C::OnSkillUpMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ClientPotatoSkill_C", "OnSkillUpMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ClientPotatoSkill.B_ClientPotatoSkill_C.Release
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UB_ClientPotatoSkill_C::Release()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ClientPotatoSkill_C", "Release");

	UObject::ProcessEvent(Func, nullptr);
}

}

