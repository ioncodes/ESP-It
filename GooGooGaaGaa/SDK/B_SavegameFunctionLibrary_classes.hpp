#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SavegameFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "E_Savegame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SavegameFunctionLibrary.B_SavegameFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UB_SavegameFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Set_Setting_Commands(class UB_SettingsSave_C* SettingsSave, class UObject* __WorldContext);
	static void SaveSaveGameAsync(class USaveGame* SaveGame, E_Savegame SaveGameType, class UObject* __WorldContext);
	static void LoadSaveGameAsync(E_Savegame SaveGameType, TDelegate<void(const class FString& Name, bool Success, class USaveGame* SaveGame)> Callback, class UObject* __WorldContext);
	static void SaveSaveGame(class USaveGame* SaveGame, E_Savegame SaveGameType, class UObject* __WorldContext);
	static void LoadSaveGame(E_Savegame SaveGameType, class UObject* __WorldContext, class USaveGame** SaveGame);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SavegameFunctionLibrary_C">();
	}
	static class UB_SavegameFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_SavegameFunctionLibrary_C>();
	}
};
static_assert(alignof(UB_SavegameFunctionLibrary_C) == 0x000008, "Wrong alignment on UB_SavegameFunctionLibrary_C");
static_assert(sizeof(UB_SavegameFunctionLibrary_C) == 0x000028, "Wrong size on UB_SavegameFunctionLibrary_C");

}
