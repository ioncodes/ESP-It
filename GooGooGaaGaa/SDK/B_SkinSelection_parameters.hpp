#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinSelection

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_SkinSelection.B_SkinSelection_C.SetSelectedPlayerIcon
// 0x0040 (0x0040 - 0x0000)
struct B_SkinSelection_C_SetSelectedPlayerIcon final
{
public:
	class UClass*                                 IconClass;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_InventoryManager_C*                  InventoryManager;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CallFunc_Conv_ClassToSoftClassReference_ReturnValue; // 0x0010(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	int32                                         CallFunc_GetSkinItemIdBySoftReference_ReturnValue; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SkinSelection_C_SetSelectedPlayerIcon) == 0x000008, "Wrong alignment on B_SkinSelection_C_SetSelectedPlayerIcon");
static_assert(sizeof(B_SkinSelection_C_SetSelectedPlayerIcon) == 0x000040, "Wrong size on B_SkinSelection_C_SetSelectedPlayerIcon");
static_assert(offsetof(B_SkinSelection_C_SetSelectedPlayerIcon, IconClass) == 0x000000, "Member 'B_SkinSelection_C_SetSelectedPlayerIcon::IconClass' has a wrong offset!");
static_assert(offsetof(B_SkinSelection_C_SetSelectedPlayerIcon, InventoryManager) == 0x000008, "Member 'B_SkinSelection_C_SetSelectedPlayerIcon::InventoryManager' has a wrong offset!");
static_assert(offsetof(B_SkinSelection_C_SetSelectedPlayerIcon, CallFunc_Conv_ClassToSoftClassReference_ReturnValue) == 0x000010, "Member 'B_SkinSelection_C_SetSelectedPlayerIcon::CallFunc_Conv_ClassToSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SkinSelection_C_SetSelectedPlayerIcon, CallFunc_GetSkinItemIdBySoftReference_ReturnValue) == 0x000038, "Member 'B_SkinSelection_C_SetSelectedPlayerIcon::CallFunc_GetSkinItemIdBySoftReference_ReturnValue' has a wrong offset!");

// Function B_SkinSelection.B_SkinSelection_C.GetSelectedPlayerIcon
// 0x0010 (0x0010 - 0x0000)
struct B_SkinSelection_C_GetSelectedPlayerIcon final
{
public:
	class UClass*                                 OutClass;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         OutItemDefId;                                      // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SkinSelection_C_GetSelectedPlayerIcon) == 0x000008, "Wrong alignment on B_SkinSelection_C_GetSelectedPlayerIcon");
static_assert(sizeof(B_SkinSelection_C_GetSelectedPlayerIcon) == 0x000010, "Wrong size on B_SkinSelection_C_GetSelectedPlayerIcon");
static_assert(offsetof(B_SkinSelection_C_GetSelectedPlayerIcon, OutClass) == 0x000000, "Member 'B_SkinSelection_C_GetSelectedPlayerIcon::OutClass' has a wrong offset!");
static_assert(offsetof(B_SkinSelection_C_GetSelectedPlayerIcon, OutItemDefId) == 0x000008, "Member 'B_SkinSelection_C_GetSelectedPlayerIcon::OutItemDefId' has a wrong offset!");

}
