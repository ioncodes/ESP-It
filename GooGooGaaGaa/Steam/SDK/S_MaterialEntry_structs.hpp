#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_MaterialEntry

#include "Basic.hpp"

#include "E_MapType_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_MaterialEntry.S_MaterialEntry
// 0x0018 (0x0018 - 0x0000)
struct FS_MaterialEntry final
{
public:
	E_MapType                                     MapType_2_F6B2413A4D4A121ED88EFE8A71C1411A;        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     MaterialInterface_5_5E44D0FD4CEE5ED20BA85E8DA1216704; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Icon_9_3643890E42066DCE880B869E9D4EB32C;           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_MaterialEntry) == 0x000008, "Wrong alignment on FS_MaterialEntry");
static_assert(sizeof(FS_MaterialEntry) == 0x000018, "Wrong size on FS_MaterialEntry");
static_assert(offsetof(FS_MaterialEntry, MapType_2_F6B2413A4D4A121ED88EFE8A71C1411A) == 0x000000, "Member 'FS_MaterialEntry::MapType_2_F6B2413A4D4A121ED88EFE8A71C1411A' has a wrong offset!");
static_assert(offsetof(FS_MaterialEntry, MaterialInterface_5_5E44D0FD4CEE5ED20BA85E8DA1216704) == 0x000008, "Member 'FS_MaterialEntry::MaterialInterface_5_5E44D0FD4CEE5ED20BA85E8DA1216704' has a wrong offset!");
static_assert(offsetof(FS_MaterialEntry, Icon_9_3643890E42066DCE880B869E9D4EB32C) == 0x000010, "Member 'FS_MaterialEntry::Icon_9_3643890E42066DCE880B869E9D4EB32C' has a wrong offset!");

}

