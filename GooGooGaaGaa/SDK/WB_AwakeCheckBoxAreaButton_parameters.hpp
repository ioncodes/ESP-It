#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AwakeCheckBoxAreaButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function WB_AwakeCheckBoxAreaButton.WB_AwakeCheckBoxAreaButton_C.GetTestBool
// 0x0020 (0x0020 - 0x0000)
struct WB_AwakeCheckBoxAreaButton_C_GetTestBool final
{
public:
	class AActor*                                 TestActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          TestBool;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47EF[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_StaticMeshProp_C*                    K2Node_DynamicCast_AsB_Static_Mesh_Prop;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AwakeCheckBoxAreaButton_C_GetTestBool) == 0x000008, "Wrong alignment on WB_AwakeCheckBoxAreaButton_C_GetTestBool");
static_assert(sizeof(WB_AwakeCheckBoxAreaButton_C_GetTestBool) == 0x000020, "Wrong size on WB_AwakeCheckBoxAreaButton_C_GetTestBool");
static_assert(offsetof(WB_AwakeCheckBoxAreaButton_C_GetTestBool, TestActor) == 0x000000, "Member 'WB_AwakeCheckBoxAreaButton_C_GetTestBool::TestActor' has a wrong offset!");
static_assert(offsetof(WB_AwakeCheckBoxAreaButton_C_GetTestBool, TestBool) == 0x000008, "Member 'WB_AwakeCheckBoxAreaButton_C_GetTestBool::TestBool' has a wrong offset!");
static_assert(offsetof(WB_AwakeCheckBoxAreaButton_C_GetTestBool, K2Node_DynamicCast_AsB_Static_Mesh_Prop) == 0x000010, "Member 'WB_AwakeCheckBoxAreaButton_C_GetTestBool::K2Node_DynamicCast_AsB_Static_Mesh_Prop' has a wrong offset!");
static_assert(offsetof(WB_AwakeCheckBoxAreaButton_C_GetTestBool, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_AwakeCheckBoxAreaButton_C_GetTestBool::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
