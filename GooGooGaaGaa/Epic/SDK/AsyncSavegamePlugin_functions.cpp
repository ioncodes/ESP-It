#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AsyncSavegamePlugin

#include "Basic.hpp"

#include "AsyncSavegamePlugin_classes.hpp"
#include "AsyncSavegamePlugin_parameters.hpp"


namespace SDK
{

// Function AsyncSavegamePlugin.AsyncSaveGameLibrary.AsyncLoadGame
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class FString                           SaveFileName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(const class FString& Name, bool Success, class USaveGame* SaveGame)>Callback                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAsyncSaveGameLibrary::AsyncLoadGame(const class FString& SaveFileName, TDelegate<void(const class FString& Name, bool Success, class USaveGame* SaveGame)> Callback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncSaveGameLibrary", "AsyncLoadGame");

	Params::AsyncSaveGameLibrary_AsyncLoadGame Parms{};

	Parms.SaveFileName = std::move(SaveFileName);
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AsyncSavegamePlugin.AsyncSaveGameLibrary.AsyncSaveGame
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class FString                           SaveFileName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USaveGame*                        SaveGame                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAsyncSaveGameLibrary::AsyncSaveGame(const class FString& SaveFileName, class USaveGame* SaveGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncSaveGameLibrary", "AsyncSaveGame");

	Params::AsyncSaveGameLibrary_AsyncSaveGame Parms{};

	Parms.SaveFileName = std::move(SaveFileName);
	Parms.SaveGame = SaveGame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
