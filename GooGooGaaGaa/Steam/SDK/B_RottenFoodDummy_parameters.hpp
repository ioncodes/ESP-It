#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_RottenFoodDummy

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_RottenFoodDummy.B_RottenFoodDummy_C.UpdateMesh
// 0x0020 (0x0020 - 0x0000)
struct B_RottenFoodDummy_C_UpdateMesh final
{
public:
	class UStaticMesh*                            CallFunc_PickMesh_Static_Mesh;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            CallFunc_PickMesh_Static_Mesh_1;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_RottenFoodDummy_C_UpdateMesh) == 0x000008, "Wrong alignment on B_RottenFoodDummy_C_UpdateMesh");
static_assert(sizeof(B_RottenFoodDummy_C_UpdateMesh) == 0x000020, "Wrong size on B_RottenFoodDummy_C_UpdateMesh");
static_assert(offsetof(B_RottenFoodDummy_C_UpdateMesh, CallFunc_PickMesh_Static_Mesh) == 0x000000, "Member 'B_RottenFoodDummy_C_UpdateMesh::CallFunc_PickMesh_Static_Mesh' has a wrong offset!");
static_assert(offsetof(B_RottenFoodDummy_C_UpdateMesh, CallFunc_SetStaticMesh_ReturnValue) == 0x000008, "Member 'B_RottenFoodDummy_C_UpdateMesh::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_RottenFoodDummy_C_UpdateMesh, CallFunc_PickMesh_Static_Mesh_1) == 0x000010, "Member 'B_RottenFoodDummy_C_UpdateMesh::CallFunc_PickMesh_Static_Mesh_1' has a wrong offset!");
static_assert(offsetof(B_RottenFoodDummy_C_UpdateMesh, CallFunc_SetStaticMesh_ReturnValue_1) == 0x000018, "Member 'B_RottenFoodDummy_C_UpdateMesh::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");

}
