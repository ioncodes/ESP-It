#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerStart

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_PlayerStart.B_PlayerStart_C.ExecuteUbergraph_B_PlayerStart
// 0x0008 (0x0008 - 0x0000)
struct B_PlayerStart_C_ExecuteUbergraph_B_PlayerStart final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Occupied;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PlayerStart_C_ExecuteUbergraph_B_PlayerStart) == 0x000004, "Wrong alignment on B_PlayerStart_C_ExecuteUbergraph_B_PlayerStart");
static_assert(sizeof(B_PlayerStart_C_ExecuteUbergraph_B_PlayerStart) == 0x000008, "Wrong size on B_PlayerStart_C_ExecuteUbergraph_B_PlayerStart");
static_assert(offsetof(B_PlayerStart_C_ExecuteUbergraph_B_PlayerStart, EntryPoint) == 0x000000, "Member 'B_PlayerStart_C_ExecuteUbergraph_B_PlayerStart::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_PlayerStart_C_ExecuteUbergraph_B_PlayerStart, K2Node_Event_Occupied) == 0x000004, "Member 'B_PlayerStart_C_ExecuteUbergraph_B_PlayerStart::K2Node_Event_Occupied' has a wrong offset!");

// Function B_PlayerStart.B_PlayerStart_C.GetOccupied
// 0x0001 (0x0001 - 0x0000)
struct B_PlayerStart_C_GetOccupied final
{
public:
	bool                                          Occupied_0;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PlayerStart_C_GetOccupied) == 0x000001, "Wrong alignment on B_PlayerStart_C_GetOccupied");
static_assert(sizeof(B_PlayerStart_C_GetOccupied) == 0x000001, "Wrong size on B_PlayerStart_C_GetOccupied");
static_assert(offsetof(B_PlayerStart_C_GetOccupied, Occupied_0) == 0x000000, "Member 'B_PlayerStart_C_GetOccupied::Occupied_0' has a wrong offset!");

// Function B_PlayerStart.B_PlayerStart_C.SetOccupied
// 0x0001 (0x0001 - 0x0000)
struct B_PlayerStart_C_SetOccupied final
{
public:
	bool                                          Occupied_0;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PlayerStart_C_SetOccupied) == 0x000001, "Wrong alignment on B_PlayerStart_C_SetOccupied");
static_assert(sizeof(B_PlayerStart_C_SetOccupied) == 0x000001, "Wrong size on B_PlayerStart_C_SetOccupied");
static_assert(offsetof(B_PlayerStart_C_SetOccupied, Occupied_0) == 0x000000, "Member 'B_PlayerStart_C_SetOccupied::Occupied_0' has a wrong offset!");

}

