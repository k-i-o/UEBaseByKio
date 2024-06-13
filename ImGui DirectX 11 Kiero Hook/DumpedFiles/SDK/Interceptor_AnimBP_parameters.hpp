#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Interceptor_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Interceptor_AnimBP.Interceptor_AnimBP_C.ExecuteUbergraph_Interceptor_AnimBP
// 0x0050 (0x0050 - 0x0000)
struct Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E70[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANPC_Interceptor_C*                     K2Node_DynamicCast_AsNPC_Interceptor;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E71[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP) == 0x000008, "Wrong alignment on Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP");
static_assert(sizeof(Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP) == 0x000050, "Wrong size on Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP");
static_assert(offsetof(Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP, EntryPoint) == 0x000000, "Member 'Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP, K2Node_DynamicCast_AsNPC_Interceptor) == 0x000010, "Member 'Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP::K2Node_DynamicCast_AsNPC_Interceptor' has a wrong offset!");
static_assert(offsetof(Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP, CallFunc_GetActorRightVector_ReturnValue) == 0x00001C, "Member 'Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP, CallFunc_GetVelocity_ReturnValue) == 0x000028, "Member 'Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP, CallFunc_Dot_VectorVector_ReturnValue) == 0x000034, "Member 'Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP, CallFunc_GetActorForwardVector_ReturnValue) == 0x000038, "Member 'Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP, CallFunc_Dot_VectorVector_ReturnValue_1) == 0x000044, "Member 'Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP::CallFunc_Dot_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP, K2Node_Event_DeltaTimeX) == 0x000048, "Member 'Interceptor_AnimBP_C_ExecuteUbergraph_Interceptor_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");

// Function Interceptor_AnimBP.Interceptor_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct Interceptor_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Interceptor_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on Interceptor_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(Interceptor_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on Interceptor_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(Interceptor_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'Interceptor_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function Interceptor_AnimBP.Interceptor_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Interceptor_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Interceptor_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Interceptor_AnimBP_C_AnimGraph");
static_assert(sizeof(Interceptor_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Interceptor_AnimBP_C_AnimGraph");
static_assert(offsetof(Interceptor_AnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'Interceptor_AnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

