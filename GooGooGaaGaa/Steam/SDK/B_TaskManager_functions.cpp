#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TaskManager

#include "Basic.hpp"

#include "B_TaskManager_classes.hpp"
#include "B_TaskManager_parameters.hpp"


namespace SDK
{

// Function B_TaskManager.B_TaskManager_C.GetTask
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_TaskType                              Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Task                          Task                                                   (Parm, OutParm, HasGetValueTypeHash)

void UB_TaskManager_C::GetTask(E_TaskType Type, struct FS_Task* Task)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskManager_C", "GetTask");

	Params::B_TaskManager_C_GetTask Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Task != nullptr)
		*Task = std::move(Parms.Task);
}


// Function B_TaskManager.B_TaskManager_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UB_TaskManager_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskManager_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TaskManager.B_TaskManager_C.SetPrerequisiteTasks
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UB_TaskManager_C::SetPrerequisiteTasks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskManager_C", "SetPrerequisiteTasks");

	UObject::ProcessEvent(Func, nullptr);
}

}
