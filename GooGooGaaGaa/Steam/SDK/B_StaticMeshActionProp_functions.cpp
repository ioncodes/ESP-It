#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_StaticMeshActionProp

#include "Basic.hpp"

#include "B_StaticMeshActionProp_classes.hpp"
#include "B_StaticMeshActionProp_parameters.hpp"


namespace SDK
{

// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.DeactivateActionProp
// (Public, BlueprintCallable, BlueprintEvent)

void AB_StaticMeshActionProp_C::DeactivateActionProp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StaticMeshActionProp_C", "DeactivateActionProp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.ActivateActionProp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Override                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_StaticMeshActionProp_C::ActivateActionProp(bool Override)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StaticMeshActionProp_C", "ActivateActionProp");

	Params::B_StaticMeshActionProp_C_ActivateActionProp Parms{};

	Parms.Override = Override;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.InitializeActionProp
// (Public, BlueprintCallable, BlueprintEvent)

void AB_StaticMeshActionProp_C::InitializeActionProp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StaticMeshActionProp_C", "InitializeActionProp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.LeaveWater
// (Public, BlueprintCallable, BlueprintEvent)

void AB_StaticMeshActionProp_C::LeaveWater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StaticMeshActionProp_C", "LeaveWater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.EnterWater
// (Public, BlueprintCallable, BlueprintEvent)

void AB_StaticMeshActionProp_C::EnterWater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StaticMeshActionProp_C", "EnterWater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.ApplyTemplateData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Template                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ForcedBoolean                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_StaticMeshActionProp_C::ApplyTemplateData(class AActor* Template, bool* ForcedBoolean)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StaticMeshActionProp_C", "ApplyTemplateData");

	Params::B_StaticMeshActionProp_C_ApplyTemplateData Parms{};

	Parms.Template = Template;

	UObject::ProcessEvent(Func, &Parms);

	if (ForcedBoolean != nullptr)
		*ForcedBoolean = Parms.ForcedBoolean;
}


// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.OnRep_Activated
// (BlueprintCallable, BlueprintEvent)

void AB_StaticMeshActionProp_C::OnRep_Activated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StaticMeshActionProp_C", "OnRep_Activated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.UpdateActionProp
// (Public, BlueprintCallable, BlueprintEvent)

void AB_StaticMeshActionProp_C::UpdateActionProp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StaticMeshActionProp_C", "UpdateActionProp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.Action
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ForcedBoolean                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_StaticMeshActionProp_C::Action(bool* ForcedBoolean)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StaticMeshActionProp_C", "Action");

	Params::B_StaticMeshActionProp_C_Action Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ForcedBoolean != nullptr)
		*ForcedBoolean = Parms.ForcedBoolean;
}


// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_StaticMeshActionProp_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StaticMeshActionProp_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.ResetTriggerAfterWait
// (BlueprintCallable, BlueprintEvent)

void AB_StaticMeshActionProp_C::ResetTriggerAfterWait()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StaticMeshActionProp_C", "ResetTriggerAfterWait");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.ExecuteUbergraph_B_StaticMeshActionProp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_StaticMeshActionProp_C::ExecuteUbergraph_B_StaticMeshActionProp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StaticMeshActionProp_C", "ExecuteUbergraph_B_StaticMeshActionProp");

	Params::B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
