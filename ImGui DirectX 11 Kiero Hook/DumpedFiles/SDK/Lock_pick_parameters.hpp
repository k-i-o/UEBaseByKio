#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lock_pick

#include "Basic.hpp"


namespace SDK::Params
{

// Function Lock_pick.Lock_pick_C.ExecuteUbergraph_Lock_pick
// 0x00C0 (0x00C0 - 0x0000)
struct Lock_pick_C_ExecuteUbergraph_Lock_pick final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FD0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD1[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Player;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD2[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULockPickUI_C*                          CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character_1;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD3[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character_2;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD4[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD5[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue_1;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FD6[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character_3;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD7[0x1];                                     // 0x009B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* Player)>         K2Node_CreateDelegate_OutputDelegate;              // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD8[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lock_pick_C_ExecuteUbergraph_Lock_pick) == 0x000008, "Wrong alignment on Lock_pick_C_ExecuteUbergraph_Lock_pick");
static_assert(sizeof(Lock_pick_C_ExecuteUbergraph_Lock_pick) == 0x0000C0, "Wrong size on Lock_pick_C_ExecuteUbergraph_Lock_pick");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, EntryPoint) == 0x000000, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::EntryPoint' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, K2Node_DynamicCast_AsPlayer_Character) == 0x000010, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, K2Node_CustomEvent_Player) == 0x000020, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_GetOwner_ReturnValue_1) == 0x000030, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_Create_ReturnValue) == 0x000038, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, K2Node_DynamicCast_AsPlayer_Character_1) == 0x000040, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::K2Node_DynamicCast_AsPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_IsLocallyControlled_ReturnValue) == 0x000049, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_GetOwner_ReturnValue_2) == 0x000050, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, K2Node_DynamicCast_AsPlayer_Character_2) == 0x000058, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::K2Node_DynamicCast_AsPlayer_Character_2' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_BreakRotator_Roll) == 0x000064, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_BreakRotator_Pitch) == 0x000068, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_BreakRotator_Yaw) == 0x00006C, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000070, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_Add_FloatFloat_ReturnValue) == 0x000074, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_Abs_ReturnValue) == 0x000078, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00007C, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_Abs_ReturnValue_1) == 0x000080, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_GetOwner_ReturnValue_3) == 0x000088, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, K2Node_DynamicCast_AsPlayer_Character_3) == 0x000090, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::K2Node_DynamicCast_AsPlayer_Character_3' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, K2Node_DynamicCast_bSuccess_3) == 0x000098, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_IsValid_ReturnValue_1) == 0x000099, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x00009A, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, K2Node_CreateDelegate_OutputDelegate) == 0x00009C, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_IsValid_ReturnValue_2) == 0x0000AC, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000B0, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000B4, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_FClamp_ReturnValue) == 0x0000B8, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lock_pick_C_ExecuteUbergraph_Lock_pick, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0000BC, "Member 'Lock_pick_C_ExecuteUbergraph_Lock_pick::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function Lock_pick.Lock_pick_C.ReleaseFromSpot
// 0x0008 (0x0008 - 0x0000)
struct Lock_pick_C_ReleaseFromSpot final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lock_pick_C_ReleaseFromSpot) == 0x000008, "Wrong alignment on Lock_pick_C_ReleaseFromSpot");
static_assert(sizeof(Lock_pick_C_ReleaseFromSpot) == 0x000008, "Wrong size on Lock_pick_C_ReleaseFromSpot");
static_assert(offsetof(Lock_pick_C_ReleaseFromSpot, Player) == 0x000000, "Member 'Lock_pick_C_ReleaseFromSpot::Player' has a wrong offset!");

}
