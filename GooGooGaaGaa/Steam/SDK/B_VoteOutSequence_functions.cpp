#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_VoteOutSequence

#include "Basic.hpp"

#include "B_VoteOutSequence_classes.hpp"
#include "B_VoteOutSequence_parameters.hpp"


namespace SDK
{

// Function B_VoteOutSequence.B_VoteOutSequence_C.DoSequence
// (BlueprintCallable, BlueprintEvent)

void AB_VoteOutSequence_C::DoSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_VoteOutSequence_C", "DoSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_VoteOutSequence.B_VoteOutSequence_C.ExecuteUbergraph_B_VoteOutSequence
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_VoteOutSequence_C::ExecuteUbergraph_B_VoteOutSequence(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_VoteOutSequence_C", "ExecuteUbergraph_B_VoteOutSequence");

	Params::B_VoteOutSequence_C_ExecuteUbergraph_B_VoteOutSequence Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_VoteOutSequence.B_VoteOutSequence_C.OnSequenceFinished
// (BlueprintCallable, BlueprintEvent)

void AB_VoteOutSequence_C::OnSequenceFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_VoteOutSequence_C", "OnSequenceFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_VoteOutSequence.B_VoteOutSequence_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_VoteOutSequence_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_VoteOutSequence_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_VoteOutSequence.B_VoteOutSequence_C.SequenceFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AB_VoteOutSequence_C::SequenceFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_VoteOutSequence_C", "SequenceFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_VoteOutSequence.B_VoteOutSequence_C.StartSequence
// (Public, BlueprintCallable, BlueprintEvent)

void AB_VoteOutSequence_C::StartSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_VoteOutSequence_C", "StartSequence");

	UObject::ProcessEvent(Func, nullptr);
}

}

