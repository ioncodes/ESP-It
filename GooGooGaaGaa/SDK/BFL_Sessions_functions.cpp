#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_Sessions

#include "Basic.hpp"

#include "BFL_Sessions_classes.hpp"
#include "BFL_Sessions_parameters.hpp"


namespace SDK
{

// Function BFL_Sessions.BFL_Sessions_C.GetDedicatedAddressAndID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOnlineSessionSearchResultBP     Session                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           Address                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ServerID                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBFL_Sessions_C::GetDedicatedAddressAndID(const struct FOnlineSessionSearchResultBP& Session, class UObject* __WorldContext, class FString* Address, class FString* ServerID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Sessions_C", "GetDedicatedAddressAndID");

	Params::BFL_Sessions_C_GetDedicatedAddressAndID Parms{};

	Parms.Session = std::move(Session);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Address != nullptr)
		*Address = std::move(Parms.Address);

	if (ServerID != nullptr)
		*ServerID = std::move(Parms.ServerID);
}


// Function BFL_Sessions.BFL_Sessions_C.GetExtraSessionSettings
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOnlineSessionSearchResultBP     Session                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, struct FOnlineSessionSettingBP>ExtraSettings                                          (Parm, OutParm)

void UBFL_Sessions_C::GetExtraSessionSettings(const struct FOnlineSessionSearchResultBP& Session, class UObject* __WorldContext, TMap<class FName, struct FOnlineSessionSettingBP>* ExtraSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Sessions_C", "GetExtraSessionSettings");

	Params::BFL_Sessions_C_GetExtraSessionSettings Parms{};

	Parms.Session = std::move(Session);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ExtraSettings != nullptr)
		*ExtraSettings = std::move(Parms.ExtraSettings);
}


// Function BFL_Sessions.BFL_Sessions_C.GetSessionMaxPlayers
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOnlineSessionSearchResultBP     Session                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxPlayers                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Sessions_C::GetSessionMaxPlayers(const struct FOnlineSessionSearchResultBP& Session, class UObject* __WorldContext, int32* MaxPlayers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Sessions_C", "GetSessionMaxPlayers");

	Params::BFL_Sessions_C_GetSessionMaxPlayers Parms{};

	Parms.Session = std::move(Session);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (MaxPlayers != nullptr)
		*MaxPlayers = Parms.MaxPlayers;
}


// Function BFL_Sessions.BFL_Sessions_C.GetSessionSettingValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOnlineSessionSettingBP          SessionSetting                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    As_Bool                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   As_Int                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   As_Float                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   As_Int_64                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           As_String                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBFL_Sessions_C::GetSessionSettingValue(const struct FOnlineSessionSettingBP& SessionSetting, class UObject* __WorldContext, bool* As_Bool, int32* As_Int, float* As_Float, int64* As_Int_64, class FString* As_String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Sessions_C", "GetSessionSettingValue");

	Params::BFL_Sessions_C_GetSessionSettingValue Parms{};

	Parms.SessionSetting = std::move(SessionSetting);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (As_Bool != nullptr)
		*As_Bool = Parms.As_Bool;

	if (As_Int != nullptr)
		*As_Int = Parms.As_Int;

	if (As_Float != nullptr)
		*As_Float = Parms.As_Float;

	if (As_Int_64 != nullptr)
		*As_Int_64 = Parms.As_Int_64;

	if (As_String != nullptr)
		*As_String = std::move(Parms.As_String);
}


// Function BFL_Sessions.BFL_Sessions_C.IsSessionDedicatedServer
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOnlineSessionSearchResultBP     Session                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Dedicated                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Sessions_C::IsSessionDedicatedServer(const struct FOnlineSessionSearchResultBP& Session, class UObject* __WorldContext, bool* Is_Dedicated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Sessions_C", "IsSessionDedicatedServer");

	Params::BFL_Sessions_C_IsSessionDedicatedServer Parms{};

	Parms.Session = std::move(Session);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Is_Dedicated != nullptr)
		*Is_Dedicated = Parms.Is_Dedicated;
}

}
