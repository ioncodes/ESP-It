#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HunterSkinPreview

#include "Basic.hpp"

#include "E_Slot_structs.hpp"
#include "PropWitchHuntModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_HunterSkinPreview.B_HunterSkinPreview_C.Capture Skin Config Image
// 0x02C8 (0x02C8 - 0x0000)
struct B_HunterSkinPreview_C_Capture_Skin_Config_Image final
{
public:
	int32                                         ConfigNr;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               OriginRotation;                                    // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        ZRotation;                                         // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ImagePath;                                         // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           StaticMeshes;                                      // 0x0038(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0088(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_1;     // 0x0180(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class FString                                 CallFunc_Get_Skin_Config_Save_Name_Name;           // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item_1;                         // 0x02A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AD[0x3];                                      // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x02B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_CaptureComponent2D_SaveImage_ReturnValue; // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_HunterSkinPreview_C_Capture_Skin_Config_Image) == 0x000008, "Wrong alignment on B_HunterSkinPreview_C_Capture_Skin_Config_Image");
static_assert(sizeof(B_HunterSkinPreview_C_Capture_Skin_Config_Image) == 0x0002C8, "Wrong size on B_HunterSkinPreview_C_Capture_Skin_Config_Image");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, ConfigNr) == 0x000000, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::ConfigNr' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, OriginRotation) == 0x000008, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::OriginRotation' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, ZRotation) == 0x000020, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::ZRotation' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, ImagePath) == 0x000028, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::ImagePath' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, StaticMeshes) == 0x000038, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::StaticMeshes' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_GetGameInstance_ReturnValue) == 0x000048, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, K2Node_DynamicCast_AsB_Game_Instance) == 0x000058, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, Temp_int_Loop_Counter_Variable_1) == 0x000068, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_Add_IntInt_ReturnValue_1) == 0x00006C, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, Temp_int_Array_Index_Variable) == 0x000070, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, Temp_int_Array_Index_Variable_1) == 0x00007C, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_Array_Get_Item) == 0x000080, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000088, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_K2_SetWorldRotation_SweepHitResult_1) == 0x000180, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_K2_SetWorldRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_Get_Skin_Config_Save_Name_Name) == 0x000278, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_Get_Skin_Config_Save_Name_Name' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000288, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_Array_Get_Item_1) == 0x0002A0, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_Array_Length_ReturnValue_1) == 0x0002A8, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002AC, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x0002B0, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_Capture_Skin_Config_Image, CallFunc_CaptureComponent2D_SaveImage_ReturnValue) == 0x0002C0, "Member 'B_HunterSkinPreview_C_Capture_Skin_Config_Image::CallFunc_CaptureComponent2D_SaveImage_ReturnValue' has a wrong offset!");

// Function B_HunterSkinPreview.B_HunterSkinPreview_C.ExecuteUbergraph_B_HunterSkinPreview
// 0x00A8 (0x00A8 - 0x0000)
struct B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHunterSkin                            K2Node_MakeStruct_HunterSkin;                      // 0x0030(0x0038)(NoDestructor)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_1;            // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Slot                                        K2Node_CustomEvent_Slot;                           // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x2];                                       // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemId;                         // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_2;            // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview) == 0x000008, "Wrong alignment on B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview");
static_assert(sizeof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview) == 0x0000A8, "Wrong size on B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, EntryPoint) == 0x000000, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, K2Node_DynamicCast_AsB_Game_Instance) == 0x000018, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, Temp_int_Variable) == 0x000024, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, K2Node_MakeStruct_HunterSkin) == 0x000030, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::K2Node_MakeStruct_HunterSkin' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, CallFunc_Array_Get_Item) == 0x000068, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, CallFunc_GetGameInstance_ReturnValue_1) == 0x000078, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x000080, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, K2Node_CustomEvent_Slot) == 0x000089, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::K2Node_CustomEvent_Slot' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, K2Node_CustomEvent_ItemId) == 0x00008C, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::K2Node_CustomEvent_ItemId' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, CallFunc_GetGameInstance_ReturnValue_2) == 0x000090, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, K2Node_DynamicCast_AsB_Game_Instance_2) == 0x000098, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::K2Node_DynamicCast_AsB_Game_Instance_2' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview, K2Node_DynamicCast_bSuccess_2) == 0x0000A0, "Member 'B_HunterSkinPreview_C_ExecuteUbergraph_B_HunterSkinPreview::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function B_HunterSkinPreview.B_HunterSkinPreview_C.UpdateLocallyStoredSkin
// 0x0070 (0x0070 - 0x0000)
struct B_HunterSkinPreview_C_UpdateLocallyStoredSkin final
{
public:
	E_Slot                                        Slot;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 SkinClass;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   CallFunc_GetSkinSoftReference_ReturnValue;         // 0x0030(0x0028)(HasGetValueTypeHash)
	class UClass*                                 CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsActor;                   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin) == 0x000008, "Wrong alignment on B_HunterSkinPreview_C_UpdateLocallyStoredSkin");
static_assert(sizeof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin) == 0x000070, "Wrong size on B_HunterSkinPreview_C_UpdateLocallyStoredSkin");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin, Slot) == 0x000000, "Member 'B_HunterSkinPreview_C_UpdateLocallyStoredSkin::Slot' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin, ItemId) == 0x000004, "Member 'B_HunterSkinPreview_C_UpdateLocallyStoredSkin::ItemId' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin, SkinClass) == 0x000008, "Member 'B_HunterSkinPreview_C_UpdateLocallyStoredSkin::SkinClass' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'B_HunterSkinPreview_C_UpdateLocallyStoredSkin::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin, CallFunc_GetGameInstance_ReturnValue) == 0x000018, "Member 'B_HunterSkinPreview_C_UpdateLocallyStoredSkin::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin, K2Node_DynamicCast_AsB_Game_Instance) == 0x000020, "Member 'B_HunterSkinPreview_C_UpdateLocallyStoredSkin::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'B_HunterSkinPreview_C_UpdateLocallyStoredSkin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin, CallFunc_GetSkinSoftReference_ReturnValue) == 0x000030, "Member 'B_HunterSkinPreview_C_UpdateLocallyStoredSkin::CallFunc_GetSkinSoftReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin, CallFunc_LoadClassAsset_Blocking_ReturnValue) == 0x000058, "Member 'B_HunterSkinPreview_C_UpdateLocallyStoredSkin::CallFunc_LoadClassAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin, K2Node_ClassDynamicCast_AsActor) == 0x000060, "Member 'B_HunterSkinPreview_C_UpdateLocallyStoredSkin::K2Node_ClassDynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateLocallyStoredSkin, K2Node_ClassDynamicCast_bSuccess) == 0x000068, "Member 'B_HunterSkinPreview_C_UpdateLocallyStoredSkin::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");

// Function B_HunterSkinPreview.B_HunterSkinPreview_C.UpdateSlot
// 0x0008 (0x0008 - 0x0000)
struct B_HunterSkinPreview_C_UpdateSlot final
{
public:
	E_Slot                                        Slot;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_HunterSkinPreview_C_UpdateSlot) == 0x000004, "Wrong alignment on B_HunterSkinPreview_C_UpdateSlot");
static_assert(sizeof(B_HunterSkinPreview_C_UpdateSlot) == 0x000008, "Wrong size on B_HunterSkinPreview_C_UpdateSlot");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateSlot, Slot) == 0x000000, "Member 'B_HunterSkinPreview_C_UpdateSlot::Slot' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateSlot, ItemId) == 0x000004, "Member 'B_HunterSkinPreview_C_UpdateSlot::ItemId' has a wrong offset!");

// Function B_HunterSkinPreview.B_HunterSkinPreview_C.UpdateSlotFunction
// 0x0020 (0x0020 - 0x0000)
struct B_HunterSkinPreview_C_UpdateSlotFunction final
{
public:
	E_Slot                                        Slot;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_HunterSkinPreview_C_UpdateSlotFunction) == 0x000008, "Wrong alignment on B_HunterSkinPreview_C_UpdateSlotFunction");
static_assert(sizeof(B_HunterSkinPreview_C_UpdateSlotFunction) == 0x000020, "Wrong size on B_HunterSkinPreview_C_UpdateSlotFunction");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateSlotFunction, Slot) == 0x000000, "Member 'B_HunterSkinPreview_C_UpdateSlotFunction::Slot' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateSlotFunction, ItemId) == 0x000004, "Member 'B_HunterSkinPreview_C_UpdateSlotFunction::ItemId' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateSlotFunction, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'B_HunterSkinPreview_C_UpdateSlotFunction::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateSlotFunction, K2Node_DynamicCast_AsB_Game_Instance) == 0x000010, "Member 'B_HunterSkinPreview_C_UpdateSlotFunction::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_HunterSkinPreview_C_UpdateSlotFunction, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'B_HunterSkinPreview_C_UpdateSlotFunction::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

