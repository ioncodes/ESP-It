#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_InviteInfoPopup

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "S_ItemInfo_structs.hpp"


namespace SDK::Params
{

// Function WB_InviteInfoPopup.WB_InviteInfoPopup_C.ExecuteUbergraph_WB_InviteInfoPopup
// 0x0250 (0x0250 - 0x0000)
struct WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_549F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54A0[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x0020(0x00D0)()
	class FText                                   Temp_text_Variable;                                // 0x00F0(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0108(0x0018)()
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54A1[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x013C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0178(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemInfo                            CallFunc_GetSkinItem_ReturnValue;                  // 0x0188(0x0080)(HasGetValueTypeHash)
	bool                                          CallFunc_GetSkinItem_Found;                        // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue;        // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54A2[0x6];                                     // 0x020A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0210(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0228(0x0018)()
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54A3[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup) == 0x000010, "Wrong alignment on WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup");
static_assert(sizeof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup) == 0x000250, "Wrong size on WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, EntryPoint) == 0x000000, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, Temp_object_Variable) == 0x000008, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, K2Node_DynamicCast_AsTexture_2D) == 0x000010, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, Temp_bool_Variable) == 0x000019, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, CallFunc_MakeBrushFromTexture_ReturnValue) == 0x000020, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::CallFunc_MakeBrushFromTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, Temp_text_Variable) == 0x0000F0, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, Temp_text_Variable_1) == 0x000108, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, CallFunc_GetGameInstance_ReturnValue) == 0x000120, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, K2Node_CustomEvent_Loaded) == 0x000128, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, K2Node_DynamicCast_AsB_Game_Instance) == 0x000130, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, K2Node_DynamicCast_bSuccess_1) == 0x000138, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, K2Node_Event_MyGeometry) == 0x00013C, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, K2Node_Event_InDeltaTime) == 0x000174, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, K2Node_CreateDelegate_OutputDelegate) == 0x000178, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, CallFunc_GetSkinItem_ReturnValue) == 0x000188, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::CallFunc_GetSkinItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, CallFunc_GetSkinItem_Found) == 0x000208, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::CallFunc_GetSkinItem_Found' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, CallFunc_IsAnyAnimationPlaying_ReturnValue) == 0x000209, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::CallFunc_IsAnyAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, K2Node_Select_Default) == 0x000210, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, CallFunc_Conv_StringToText_ReturnValue) == 0x000228, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000240, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup, CallFunc_PlayAnimation_ReturnValue) == 0x000248, "Member 'WB_InviteInfoPopup_C_ExecuteUbergraph_WB_InviteInfoPopup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WB_InviteInfoPopup.WB_InviteInfoPopup_C.OnLoaded_3BE29F904FBDD0DBD2FF679EE9D34192
// 0x0008 (0x0008 - 0x0000)
struct WB_InviteInfoPopup_C_OnLoaded_3BE29F904FBDD0DBD2FF679EE9D34192 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_InviteInfoPopup_C_OnLoaded_3BE29F904FBDD0DBD2FF679EE9D34192) == 0x000008, "Wrong alignment on WB_InviteInfoPopup_C_OnLoaded_3BE29F904FBDD0DBD2FF679EE9D34192");
static_assert(sizeof(WB_InviteInfoPopup_C_OnLoaded_3BE29F904FBDD0DBD2FF679EE9D34192) == 0x000008, "Wrong size on WB_InviteInfoPopup_C_OnLoaded_3BE29F904FBDD0DBD2FF679EE9D34192");
static_assert(offsetof(WB_InviteInfoPopup_C_OnLoaded_3BE29F904FBDD0DBD2FF679EE9D34192, Loaded) == 0x000000, "Member 'WB_InviteInfoPopup_C_OnLoaded_3BE29F904FBDD0DBD2FF679EE9D34192::Loaded' has a wrong offset!");

// Function WB_InviteInfoPopup.WB_InviteInfoPopup_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_InviteInfoPopup_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_InviteInfoPopup_C_Tick) == 0x000004, "Wrong alignment on WB_InviteInfoPopup_C_Tick");
static_assert(sizeof(WB_InviteInfoPopup_C_Tick) == 0x00003C, "Wrong size on WB_InviteInfoPopup_C_Tick");
static_assert(offsetof(WB_InviteInfoPopup_C_Tick, MyGeometry) == 0x000000, "Member 'WB_InviteInfoPopup_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_InviteInfoPopup_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_InviteInfoPopup_C_Tick::InDeltaTime' has a wrong offset!");

}
