#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SalvageCategoryButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "ESalvageCategory_structs.hpp"


namespace SDK::Params
{

// Function WB_SalvageCategoryButton.WB_SalvageCategoryButton_C.ExecuteUbergraph_WB_SalvageCategoryButton
// 0x0008 (0x0008 - 0x0000)
struct WB_SalvageCategoryButton_C_ExecuteUbergraph_WB_SalvageCategoryButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SalvageCategoryButton_C_ExecuteUbergraph_WB_SalvageCategoryButton) == 0x000004, "Wrong alignment on WB_SalvageCategoryButton_C_ExecuteUbergraph_WB_SalvageCategoryButton");
static_assert(sizeof(WB_SalvageCategoryButton_C_ExecuteUbergraph_WB_SalvageCategoryButton) == 0x000008, "Wrong size on WB_SalvageCategoryButton_C_ExecuteUbergraph_WB_SalvageCategoryButton");
static_assert(offsetof(WB_SalvageCategoryButton_C_ExecuteUbergraph_WB_SalvageCategoryButton, EntryPoint) == 0x000000, "Member 'WB_SalvageCategoryButton_C_ExecuteUbergraph_WB_SalvageCategoryButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_SalvageCategoryButton_C_ExecuteUbergraph_WB_SalvageCategoryButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WB_SalvageCategoryButton_C_ExecuteUbergraph_WB_SalvageCategoryButton::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WB_SalvageCategoryButton.WB_SalvageCategoryButton_C.Get_Icon_Brush_0
// 0x01A0 (0x01A0 - 0x0000)
struct WB_SalvageCategoryButton_C_Get_Icon_Brush_0 final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x00D0)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x00D0(0x00D0)()
};
static_assert(alignof(WB_SalvageCategoryButton_C_Get_Icon_Brush_0) == 0x000010, "Wrong alignment on WB_SalvageCategoryButton_C_Get_Icon_Brush_0");
static_assert(sizeof(WB_SalvageCategoryButton_C_Get_Icon_Brush_0) == 0x0001A0, "Wrong size on WB_SalvageCategoryButton_C_Get_Icon_Brush_0");
static_assert(offsetof(WB_SalvageCategoryButton_C_Get_Icon_Brush_0, ReturnValue) == 0x000000, "Member 'WB_SalvageCategoryButton_C_Get_Icon_Brush_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SalvageCategoryButton_C_Get_Icon_Brush_0, CallFunc_MakeBrushFromTexture_ReturnValue) == 0x0000D0, "Member 'WB_SalvageCategoryButton_C_Get_Icon_Brush_0::CallFunc_MakeBrushFromTexture_ReturnValue' has a wrong offset!");

// Function WB_SalvageCategoryButton.WB_SalvageCategoryButton_C.GetIsActiveCategorySlot
// 0x0018 (0x0018 - 0x0000)
struct WB_SalvageCategoryButton_C_GetIsActiveCategorySlot final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_SalvageScreen_C*                    K2Node_DynamicCast_AsWB_Salvage_Screen;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SalvageCategoryButton_C_GetIsActiveCategorySlot) == 0x000008, "Wrong alignment on WB_SalvageCategoryButton_C_GetIsActiveCategorySlot");
static_assert(sizeof(WB_SalvageCategoryButton_C_GetIsActiveCategorySlot) == 0x000018, "Wrong size on WB_SalvageCategoryButton_C_GetIsActiveCategorySlot");
static_assert(offsetof(WB_SalvageCategoryButton_C_GetIsActiveCategorySlot, ReturnValue) == 0x000000, "Member 'WB_SalvageCategoryButton_C_GetIsActiveCategorySlot::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SalvageCategoryButton_C_GetIsActiveCategorySlot, K2Node_DynamicCast_AsWB_Salvage_Screen) == 0x000008, "Member 'WB_SalvageCategoryButton_C_GetIsActiveCategorySlot::K2Node_DynamicCast_AsWB_Salvage_Screen' has a wrong offset!");
static_assert(offsetof(WB_SalvageCategoryButton_C_GetIsActiveCategorySlot, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WB_SalvageCategoryButton_C_GetIsActiveCategorySlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SalvageCategoryButton_C_GetIsActiveCategorySlot, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WB_SalvageCategoryButton_C_GetIsActiveCategorySlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SalvageCategoryButton_C_GetIsActiveCategorySlot, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'WB_SalvageCategoryButton_C_GetIsActiveCategorySlot::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WB_SalvageCategoryButton.WB_SalvageCategoryButton_C.OnUpdateCategory__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WB_SalvageCategoryButton_C_OnUpdateCategory__DelegateSignature final
{
public:
	ESalvageCategory                              Category_0;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SalvageCategoryButton_C_OnUpdateCategory__DelegateSignature) == 0x000001, "Wrong alignment on WB_SalvageCategoryButton_C_OnUpdateCategory__DelegateSignature");
static_assert(sizeof(WB_SalvageCategoryButton_C_OnUpdateCategory__DelegateSignature) == 0x000001, "Wrong size on WB_SalvageCategoryButton_C_OnUpdateCategory__DelegateSignature");
static_assert(offsetof(WB_SalvageCategoryButton_C_OnUpdateCategory__DelegateSignature, Category_0) == 0x000000, "Member 'WB_SalvageCategoryButton_C_OnUpdateCategory__DelegateSignature::Category_0' has a wrong offset!");

// Function WB_SalvageCategoryButton.WB_SalvageCategoryButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_SalvageCategoryButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SalvageCategoryButton_C_PreConstruct) == 0x000001, "Wrong alignment on WB_SalvageCategoryButton_C_PreConstruct");
static_assert(sizeof(WB_SalvageCategoryButton_C_PreConstruct) == 0x000001, "Wrong size on WB_SalvageCategoryButton_C_PreConstruct");
static_assert(offsetof(WB_SalvageCategoryButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_SalvageCategoryButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
