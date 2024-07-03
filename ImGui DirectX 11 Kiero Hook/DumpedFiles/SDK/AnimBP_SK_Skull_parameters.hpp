#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_SK_Skull

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AnimBP_SK_Skull.AnimBP_SK_Skull_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AnimBP_SK_Skull_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AnimBP_SK_Skull_C_AnimGraph) == 0x000008, "Wrong alignment on AnimBP_SK_Skull_C_AnimGraph");
static_assert(sizeof(AnimBP_SK_Skull_C_AnimGraph) == 0x000010, "Wrong size on AnimBP_SK_Skull_C_AnimGraph");
static_assert(offsetof(AnimBP_SK_Skull_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'AnimBP_SK_Skull_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function AnimBP_SK_Skull.AnimBP_SK_Skull_C.ExecuteUbergraph_AnimBP_SK_Skull
// 0x0004 (0x0004 - 0x0000)
struct AnimBP_SK_Skull_C_ExecuteUbergraph_AnimBP_SK_Skull final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_SK_Skull_C_ExecuteUbergraph_AnimBP_SK_Skull) == 0x000004, "Wrong alignment on AnimBP_SK_Skull_C_ExecuteUbergraph_AnimBP_SK_Skull");
static_assert(sizeof(AnimBP_SK_Skull_C_ExecuteUbergraph_AnimBP_SK_Skull) == 0x000004, "Wrong size on AnimBP_SK_Skull_C_ExecuteUbergraph_AnimBP_SK_Skull");
static_assert(offsetof(AnimBP_SK_Skull_C_ExecuteUbergraph_AnimBP_SK_Skull, EntryPoint) == 0x000000, "Member 'AnimBP_SK_Skull_C_ExecuteUbergraph_AnimBP_SK_Skull::EntryPoint' has a wrong offset!");

}

