#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BasePlaceableMaterialOverwrite

#include "Basic.hpp"

#include "S_MaterialEntry_structs.hpp"
#include "E_MapType_structs.hpp"


namespace SDK::Params
{

// Function B_BasePlaceableMaterialOverwrite.B_BasePlaceableMaterialOverwrite_C.GetAllMaterialIcons
// 0x0058 (0x0058 - 0x0000)
struct B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons final
{
public:
	TArray<class UTexture2D*>                     Icons;                                             // 0x0000(0x0010)(Parm, OutParm)
	TArray<class UTexture2D*>                     AllMaterialIcons;                                  // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_MaterialEntry                       CallFunc_Array_Get_Item;                           // 0x0030(0x0018)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons) == 0x000008, "Wrong alignment on B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons");
static_assert(sizeof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons) == 0x000058, "Wrong size on B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons, Icons) == 0x000000, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons::Icons' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons, AllMaterialIcons) == 0x000010, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons::AllMaterialIcons' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons, Temp_int_Array_Index_Variable) == 0x000020, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons, CallFunc_Array_Get_Item) == 0x000030, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons, CallFunc_Array_Add_ReturnValue) == 0x000048, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons, CallFunc_Array_AddUnique_ReturnValue) == 0x000050, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialIcons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function B_BasePlaceableMaterialOverwrite.B_BasePlaceableMaterialOverwrite_C.GetIconForIndex
// 0x0060 (0x0060 - 0x0000)
struct B_BasePlaceableMaterialOverwrite_C_GetIconForIndex final
{
public:
	uint8                                         MaterialIndex;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Icon_0;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     AllMaterialIcons;                                  // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_MaterialEntry                       CallFunc_Array_Get_Item_1;                         // 0x0038(0x0018)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex) == 0x000008, "Wrong alignment on B_BasePlaceableMaterialOverwrite_C_GetIconForIndex");
static_assert(sizeof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex) == 0x000060, "Wrong size on B_BasePlaceableMaterialOverwrite_C_GetIconForIndex");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, MaterialIndex) == 0x000000, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::MaterialIndex' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, Icon_0) == 0x000008, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::Icon_0' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, AllMaterialIcons) == 0x000010, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::AllMaterialIcons' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, Temp_int_Array_Index_Variable) == 0x000020, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00002C, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, CallFunc_Array_Get_Item) == 0x000030, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, CallFunc_Array_Get_Item_1) == 0x000038, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, CallFunc_Array_AddUnique_ReturnValue) == 0x000058, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetIconForIndex, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'B_BasePlaceableMaterialOverwrite_C_GetIconForIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function B_BasePlaceableMaterialOverwrite.B_BasePlaceableMaterialOverwrite_C.GetAllMaterialOptions
// 0x0058 (0x0058 - 0x0000)
struct B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions final
{
public:
	TArray<class UMaterialInterface*>             MaterialOptions;                                   // 0x0000(0x0010)(Parm, OutParm)
	TArray<class UMaterialInterface*>             AllMaterialOptions;                                // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_MaterialEntry                       CallFunc_Array_Get_Item;                           // 0x0030(0x0018)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions) == 0x000008, "Wrong alignment on B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions");
static_assert(sizeof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions) == 0x000058, "Wrong size on B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions, MaterialOptions) == 0x000000, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions::MaterialOptions' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions, AllMaterialOptions) == 0x000010, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions::AllMaterialOptions' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions, Temp_int_Array_Index_Variable) == 0x000020, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions, CallFunc_Array_Get_Item) == 0x000030, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions, CallFunc_Array_AddUnique_ReturnValue) == 0x000050, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOptions::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function B_BasePlaceableMaterialOverwrite.B_BasePlaceableMaterialOverwrite_C.GetAllMaterialOverwriteInfos
// 0x0078 (0x0078 - 0x0000)
struct B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos final
{
public:
	E_MapType                                     Environment;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             MaterialOptions;                                   // 0x0008(0x0010)(Parm, OutParm)
	class UMaterialInterface*                     EnvironmentMaterial;                               // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CurrentMaterial;                                   // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     FoundMaterial;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             AllMaterialOptions;                                // 0x0030(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_MaterialEntry                       CallFunc_Array_Get_Item;                           // 0x0050(0x0018)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos) == 0x000008, "Wrong alignment on B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos");
static_assert(sizeof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos) == 0x000078, "Wrong size on B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, Environment) == 0x000000, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::Environment' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, MaterialOptions) == 0x000008, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::MaterialOptions' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, EnvironmentMaterial) == 0x000018, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::EnvironmentMaterial' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, CurrentMaterial) == 0x000020, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::CurrentMaterial' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, FoundMaterial) == 0x000028, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::FoundMaterial' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, AllMaterialOptions) == 0x000030, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::AllMaterialOptions' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, Temp_int_Array_Index_Variable) == 0x000040, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, CallFunc_Array_AddUnique_ReturnValue) == 0x00004C, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, CallFunc_Array_Get_Item) == 0x000050, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00006D, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos, CallFunc_Array_Add_ReturnValue) == 0x000070, "Member 'B_BasePlaceableMaterialOverwrite_C_GetAllMaterialOverwriteInfos::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}
