#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Sunshade

#include "Basic.hpp"

#include "AB_Sunshade_classes.hpp"
#include "AB_Sunshade_parameters.hpp"


namespace SDK
{

// Function AB_Sunshade.AB_Sunshade_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAB_Sunshade_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Sunshade_C", "AnimGraph");

	Params::AB_Sunshade_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function AB_Sunshade.AB_Sunshade_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Sunshade_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Sunshade_C", "BlueprintUpdateAnimation");

	Params::AB_Sunshade_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Sunshade.AB_Sunshade_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Sunshade_AnimGraphNode_TransitionResult_357013FA412996D5235EE8955486A339
// (BlueprintEvent)

void UAB_Sunshade_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Sunshade_AnimGraphNode_TransitionResult_357013FA412996D5235EE8955486A339()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Sunshade_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Sunshade_AnimGraphNode_TransitionResult_357013FA412996D5235EE8955486A339");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Sunshade.AB_Sunshade_C.ExecuteUbergraph_AB_Sunshade
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Sunshade_C::ExecuteUbergraph_AB_Sunshade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Sunshade_C", "ExecuteUbergraph_AB_Sunshade");

	Params::AB_Sunshade_C_ExecuteUbergraph_AB_Sunshade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

