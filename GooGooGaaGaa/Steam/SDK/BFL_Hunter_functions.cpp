#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_Hunter

#include "Basic.hpp"

#include "BFL_Hunter_classes.hpp"
#include "BFL_Hunter_parameters.hpp"


namespace SDK
{

// Function BFL_Hunter.BFL_Hunter_C.GetSpawnTransform
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform UBFL_Hunter_C::GetSpawnTransform(class APawn* Pawn, const struct FVector& Offset, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Hunter_C", "GetSpawnTransform");

	Params::BFL_Hunter_C_GetSpawnTransform Parms{};

	Parms.Pawn = Pawn;
	Parms.Offset = std::move(Offset);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BFL_Hunter.BFL_Hunter_C.GetSpawnTransformRotated
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform UBFL_Hunter_C::GetSpawnTransformRotated(class APawn* Pawn, const struct FVector& Offset, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Hunter_C", "GetSpawnTransformRotated");

	Params::BFL_Hunter_C_GetSpawnTransformRotated Parms{};

	Parms.Pawn = Pawn;
	Parms.Offset = std::move(Offset);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BFL_Hunter.BFL_Hunter_C.PlayModelAnimation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  InPlayRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBFL_Hunter_C::PlayModelAnimation(class USkeletalMeshComponent* Mesh, class UAnimMontage* Montage, double InPlayRate, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Hunter_C", "PlayModelAnimation");

	Params::BFL_Hunter_C_PlayModelAnimation Parms{};

	Parms.Mesh = Mesh;
	Parms.Montage = Montage;
	Parms.InPlayRate = InPlayRate;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
