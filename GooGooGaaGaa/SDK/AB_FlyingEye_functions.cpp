#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_FlyingEye

#include "Basic.hpp"

#include "AB_FlyingEye_classes.hpp"
#include "AB_FlyingEye_parameters.hpp"


namespace SDK
{

// Function AB_FlyingEye.AB_FlyingEye_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_FlyingEye_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_FlyingEye_C", "AnimGraph");

	Params::AB_FlyingEye_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function AB_FlyingEye.AB_FlyingEye_C.ExecuteUbergraph_AB_FlyingEye
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_FlyingEye_C::ExecuteUbergraph_AB_FlyingEye(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_FlyingEye_C", "ExecuteUbergraph_AB_FlyingEye");

	Params::AB_FlyingEye_C_ExecuteUbergraph_AB_FlyingEye Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
