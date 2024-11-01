#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HUDFunctionLibrary

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_HUDFunctionLibrary.B_HUDFunctionLibrary_C.GetNameOfControllingProp
// 0x00B8 (0x00B8 - 0x0000)
struct B_HUDFunctionLibrary_C_GetNameOfControllingProp final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0030(0x0010)()
	class APlayerController*                      CallFunc_GetFirstLocalPlayerController_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PropPawnPhysics_C*                   K2Node_DynamicCast_AsB_Prop_Pawn_Physics;          // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IIProp_C>              K2Node_DynamicCast_AsIProp;                        // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PlayerState_C*                       K2Node_DynamicCast_AsB_Player_State;               // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetName_Name;                             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_HUDFunctionLibrary_C_GetNameOfControllingProp) == 0x000008, "Wrong alignment on B_HUDFunctionLibrary_C_GetNameOfControllingProp");
static_assert(sizeof(B_HUDFunctionLibrary_C_GetNameOfControllingProp) == 0x0000B8, "Wrong size on B_HUDFunctionLibrary_C_GetNameOfControllingProp");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, __WorldContext) == 0x000000, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::__WorldContext' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, ReturnValue) == 0x000008, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, K2Node_MakeArray_Array) == 0x000018, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, CallFunc_GetGameInstance_ReturnValue) == 0x000028, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, CallFunc_Format_ReturnValue) == 0x000030, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, CallFunc_GetFirstLocalPlayerController_ReturnValue) == 0x000040, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::CallFunc_GetFirstLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, CallFunc_K2_GetPawn_ReturnValue) == 0x000058, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, K2Node_DynamicCast_AsB_Prop_Pawn_Physics) == 0x000068, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::K2Node_DynamicCast_AsB_Prop_Pawn_Physics' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, K2Node_DynamicCast_AsIProp) == 0x000078, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::K2Node_DynamicCast_AsIProp' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, K2Node_DynamicCast_AsB_Player_State) == 0x000090, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::K2Node_DynamicCast_AsB_Player_State' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, K2Node_DynamicCast_bSuccess_2) == 0x000098, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, CallFunc_GetName_Name) == 0x0000A0, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::CallFunc_GetName_Name' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_GetNameOfControllingProp, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'B_HUDFunctionLibrary_C_GetNameOfControllingProp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function B_HUDFunctionLibrary.B_HUDFunctionLibrary_C.UpdatePressDownProcess
// 0x0058 (0x0058 - 0x0000)
struct B_HUDFunctionLibrary_C_UpdatePressDownProcess final
{
public:
	class UImage*                                 Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetFirstLocalPlayerController_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_PropPawnPhysics_C*                   K2Node_DynamicCast_AsB_Prop_Pawn_Physics;          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_HUDFunctionLibrary_C_UpdatePressDownProcess) == 0x000008, "Wrong alignment on B_HUDFunctionLibrary_C_UpdatePressDownProcess");
static_assert(sizeof(B_HUDFunctionLibrary_C_UpdatePressDownProcess) == 0x000058, "Wrong size on B_HUDFunctionLibrary_C_UpdatePressDownProcess");
static_assert(offsetof(B_HUDFunctionLibrary_C_UpdatePressDownProcess, Image) == 0x000000, "Member 'B_HUDFunctionLibrary_C_UpdatePressDownProcess::Image' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_UpdatePressDownProcess, __WorldContext) == 0x000008, "Member 'B_HUDFunctionLibrary_C_UpdatePressDownProcess::__WorldContext' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_UpdatePressDownProcess, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'B_HUDFunctionLibrary_C_UpdatePressDownProcess::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_UpdatePressDownProcess, CallFunc_GetFirstLocalPlayerController_ReturnValue) == 0x000018, "Member 'B_HUDFunctionLibrary_C_UpdatePressDownProcess::CallFunc_GetFirstLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_UpdatePressDownProcess, CallFunc_K2_GetPawn_ReturnValue) == 0x000020, "Member 'B_HUDFunctionLibrary_C_UpdatePressDownProcess::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_UpdatePressDownProcess, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'B_HUDFunctionLibrary_C_UpdatePressDownProcess::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_UpdatePressDownProcess, K2Node_DynamicCast_AsB_Prop_Pawn_Physics) == 0x000030, "Member 'B_HUDFunctionLibrary_C_UpdatePressDownProcess::K2Node_DynamicCast_AsB_Prop_Pawn_Physics' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_UpdatePressDownProcess, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'B_HUDFunctionLibrary_C_UpdatePressDownProcess::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_UpdatePressDownProcess, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'B_HUDFunctionLibrary_C_UpdatePressDownProcess::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_UpdatePressDownProcess, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000048, "Member 'B_HUDFunctionLibrary_C_UpdatePressDownProcess::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HUDFunctionLibrary_C_UpdatePressDownProcess, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000050, "Member 'B_HUDFunctionLibrary_C_UpdatePressDownProcess::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

}

