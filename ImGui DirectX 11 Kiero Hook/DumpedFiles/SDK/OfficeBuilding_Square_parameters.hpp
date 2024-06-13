#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OfficeBuilding_Square

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function OfficeBuilding_Square.OfficeBuilding_Square_C.UserConstructionScript
// 0x0160 (0x0160 - 0x0000)
struct OfficeBuilding_Square_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2570[0xC];                                     // 0x0024(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;         // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2571[0xB];                                     // 0x0085(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_AddInstance_ReturnValue;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x00D8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(OfficeBuilding_Square_C_UserConstructionScript) == 0x000010, "Wrong alignment on OfficeBuilding_Square_C_UserConstructionScript");
static_assert(sizeof(OfficeBuilding_Square_C_UserConstructionScript) == 0x000160, "Wrong size on OfficeBuilding_Square_C_UserConstructionScript");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, Temp_int_Variable) == 0x000000, "Member 'OfficeBuilding_Square_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000004, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000008, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue) == 0x000018, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_GetRelativeTransform_ReturnValue) == 0x000030, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_BreakTransform_Location) == 0x000060, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_BreakTransform_Rotation) == 0x00006C, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_BreakTransform_Scale) == 0x000078, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000084, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_AddInstance_ReturnValue) == 0x0000C0, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_AddInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x0000C4, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000C8, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue_1) == 0x0000CC, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OfficeBuilding_Square_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0000D8, "Member 'OfficeBuilding_Square_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}

