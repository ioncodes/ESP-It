#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Task

#include "Basic.hpp"

#include "B_Task_classes.hpp"
#include "B_Task_parameters.hpp"


namespace SDK
{

// Function B_Task.B_Task_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Task_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Task_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Task.B_Task_C.ExecuteUbergraph_B_Task
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Task_C::ExecuteUbergraph_B_Task(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Task_C", "ExecuteUbergraph_B_Task");

	Params::B_Task_C_ExecuteUbergraph_B_Task Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Task.B_Task_C.CompleteTask
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Task_C::CompleteTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Task_C", "CompleteTask");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Task.B_Task_C.StopTask
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Task_C::StopTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Task_C", "StopTask");

	UObject::ProcessEvent(Func, nullptr);
}

}
