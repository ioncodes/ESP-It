#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_LuaqSpectator

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AB_LuaqSpectator.AB_LuaqSpectator_C.AnimBlueprintGeneratedConstantData
// 0x01FF (0x0200 - 0x0001)
struct AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_15;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_16;                                 // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_17;                                // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_18;                               // 0x0014(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_19;                                // 0x0040(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_20;                                // 0x0044(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_21;                                 // 0x0048(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_22;                                 // 0x0049(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_23;                                 // 0x004A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B[0x1];                                       // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_24;                                 // 0x004C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_25;                               // 0x0058(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0078(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00F8(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x0110(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;                      // 0x0140(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_RigidBody;                           // 0x0170(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;               // 0x01A0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;               // 0x01D0(0x0030)()
};
static_assert(alignof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData) == 0x000200, "Wrong size on AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, __NameProperty_15) == 0x000004, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::__NameProperty_15' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, __BoolProperty_16) == 0x00000C, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::__BoolProperty_16' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, __FloatProperty_17) == 0x000010, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::__FloatProperty_17' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, __StructProperty_18) == 0x000014, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::__StructProperty_18' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, __FloatProperty_19) == 0x000040, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::__FloatProperty_19' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, __FloatProperty_20) == 0x000044, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::__FloatProperty_20' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, __BoolProperty_21) == 0x000048, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::__BoolProperty_21' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, __EnumProperty_22) == 0x000049, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::__EnumProperty_22' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, __ByteProperty_23) == 0x00004A, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::__ByteProperty_23' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, __NameProperty_24) == 0x00004C, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::__NameProperty_24' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, __StructProperty_25) == 0x000058, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::__StructProperty_25' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000078, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000F8, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x000110, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer) == 0x000140, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, AnimGraphNode_RigidBody) == 0x000170, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LocalToComponentSpace) == 0x0001A0, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ComponentToLocalSpace) == 0x0001D0, "Member 'AB_LuaqSpectator::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");

}

