#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ControllerIcon

#include "Basic.hpp"

#include "WB_ControllerIcon_classes.hpp"
#include "WB_ControllerIcon_parameters.hpp"


namespace SDK
{

// Function WB_ControllerIcon.WB_ControllerIcon_C.Get_ControllerIcon_Visibility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_ControllerIcon_C::Get_ControllerIcon_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIcon_C", "Get_ControllerIcon_Visibility");

	Params::WB_ControllerIcon_C_Get_ControllerIcon_Visibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ControllerIcon.WB_ControllerIcon_C.IsWideKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_ControllerIcon_C::IsWideKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIcon_C", "IsWideKey");

	Params::WB_ControllerIcon_C_IsWideKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ControllerIcon.WB_ControllerIcon_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        TextScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                         Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    InAutoTextWrap                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETextJustify                            InJustification                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ControllerIcon_C::Update(const struct FVector2D& TextScale, class UTexture* Image, bool InAutoTextWrap, ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIcon_C", "Update");

	Params::WB_ControllerIcon_C_Update Parms{};

	Parms.TextScale = std::move(TextScale);
	Parms.Image = Image;
	Parms.InAutoTextWrap = InAutoTextWrap;
	Parms.InJustification = InJustification;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ControllerIcon.WB_ControllerIcon_C.IsSuperWideKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_ControllerIcon_C::IsSuperWideKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIcon_C", "IsSuperWideKey");

	Params::WB_ControllerIcon_C_IsSuperWideKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ControllerIcon.WB_ControllerIcon_C.CreateTextWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_Text_C*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWB_Text_C* UWB_ControllerIcon_C::CreateTextWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIcon_C", "CreateTextWidget");

	Params::WB_ControllerIcon_C_CreateTextWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ControllerIcon.WB_ControllerIcon_C.IsNumKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_ControllerIcon_C::IsNumKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIcon_C", "IsNumKey");

	Params::WB_ControllerIcon_C_IsNumKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ControllerIcon.WB_ControllerIcon_C.SetButtonImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_ControllerIcon_C::SetButtonImage(class UTexture* Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIcon_C", "SetButtonImage");

	Params::WB_ControllerIcon_C_SetButtonImage Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ControllerIcon.WB_ControllerIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ControllerIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIcon_C", "PreConstruct");

	Params::WB_ControllerIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ControllerIcon.WB_ControllerIcon_C.SetBoundKey
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWB_ControllerIcon_C::SetBoundKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIcon_C", "SetBoundKey");

	Params::WB_ControllerIcon_C_SetBoundKey Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ControllerIcon.WB_ControllerIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ControllerIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ControllerIcon.WB_ControllerIcon_C.ExecuteUbergraph_WB_ControllerIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ControllerIcon_C::ExecuteUbergraph_WB_ControllerIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIcon_C", "ExecuteUbergraph_WB_ControllerIcon");

	Params::WB_ControllerIcon_C_ExecuteUbergraph_WB_ControllerIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

