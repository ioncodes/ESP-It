#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_LuaqAttack

#include "Basic.hpp"

#include "AB_LuaqAttack_classes.hpp"
#include "AB_LuaqAttack_parameters.hpp"


namespace SDK
{

// Function AB_LuaqAttack.AB_LuaqAttack_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAB_LuaqAttack_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_LuaqAttack_C", "AnimGraph");

	Params::AB_LuaqAttack_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function AB_LuaqAttack.AB_LuaqAttack_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_LuaqAttack_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_LuaqAttack_C", "BlueprintUpdateAnimation");

	Params::AB_LuaqAttack_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_LuaqAttack.AB_LuaqAttack_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_LuaqAttack_AnimGraphNode_TransitionResult_4ECB4A4F42ACCD7D90B032A889615192
// (BlueprintEvent)

void UAB_LuaqAttack_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_LuaqAttack_AnimGraphNode_TransitionResult_4ECB4A4F42ACCD7D90B032A889615192()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_LuaqAttack_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_LuaqAttack_AnimGraphNode_TransitionResult_4ECB4A4F42ACCD7D90B032A889615192");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_LuaqAttack.AB_LuaqAttack_C.ExecuteUbergraph_AB_LuaqAttack
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_LuaqAttack_C::ExecuteUbergraph_AB_LuaqAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_LuaqAttack_C", "ExecuteUbergraph_AB_LuaqAttack");

	Params::AB_LuaqAttack_C_ExecuteUbergraph_AB_LuaqAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

