#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IHunter

#include "Basic.hpp"

#include "IHunter_classes.hpp"
#include "IHunter_parameters.hpp"


namespace SDK
{

// Function IHunter.IHunter_C.GetCurrentControllerYaw
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double IIHunter_C::GetCurrentControllerYaw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IHunter_C", "GetCurrentControllerYaw");

	Params::IHunter_C_GetCurrentControllerYaw Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function IHunter.IHunter_C.GetIsConfused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IIHunter_C::GetIsConfused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IHunter_C", "GetIsConfused");

	Params::IHunter_C_GetIsConfused Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function IHunter.IHunter_C.GetRotateInstantForOneFrame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IIHunter_C::GetRotateInstantForOneFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IHunter_C", "GetRotateInstantForOneFrame");

	Params::IHunter_C_GetRotateInstantForOneFrame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function IHunter.IHunter_C.GetSpawnTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform IIHunter_C::GetSpawnTransform(const struct FVector& Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IHunter_C", "GetSpawnTransform");

	Params::IHunter_C_GetSpawnTransform Parms{};

	Parms.Offset = std::move(Offset);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function IHunter.IHunter_C.GetSpawnTransformRotated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform IIHunter_C::GetSpawnTransformRotated(const struct FVector& Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IHunter_C", "GetSpawnTransformRotated");

	Params::IHunter_C_GetSpawnTransformRotated Parms{};

	Parms.Offset = std::move(Offset);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function IHunter.IHunter_C.IsPlayingQuestionTaunt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIHunter_C::IsPlayingQuestionTaunt(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IHunter_C", "IsPlayingQuestionTaunt");

	Params::IHunter_C_IsPlayingQuestionTaunt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;
}


// Function IHunter.IHunter_C.IsPlayingSpeakTaunt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIHunter_C::IsPlayingSpeakTaunt(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IHunter_C", "IsPlayingSpeakTaunt");

	Params::IHunter_C_IsPlayingSpeakTaunt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;
}


// Function IHunter.IHunter_C.PlayModelAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  InPlayRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForcedBoolean                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIHunter_C::PlayModelAnimation(class UAnimMontage* Montage, double InPlayRate, bool* ForcedBoolean)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IHunter_C", "PlayModelAnimation");

	Params::IHunter_C_PlayModelAnimation Parms{};

	Parms.Montage = Montage;
	Parms.InPlayRate = InPlayRate;

	UObject::ProcessEvent(Func, &Parms);

	if (ForcedBoolean != nullptr)
		*ForcedBoolean = Parms.ForcedBoolean;
}

}
