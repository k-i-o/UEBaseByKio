#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RandomMapUI

#include "Basic.hpp"


namespace SDK::Params
{

// Function RandomMapUI.RandomMapUI_C.ExecuteUbergraph_RandomMapUI
// 0x0030 (0x0030 - 0x0000)
struct RandomMapUI_C_ExecuteUbergraph_RandomMapUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2409[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFindingSessionUI_C*                    CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           CallFunc_GetParent_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           CallFunc_GetParent_ReturnValue_1;                  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RandomMapUI_C_ExecuteUbergraph_RandomMapUI) == 0x000008, "Wrong alignment on RandomMapUI_C_ExecuteUbergraph_RandomMapUI");
static_assert(sizeof(RandomMapUI_C_ExecuteUbergraph_RandomMapUI) == 0x000030, "Wrong size on RandomMapUI_C_ExecuteUbergraph_RandomMapUI");
static_assert(offsetof(RandomMapUI_C_ExecuteUbergraph_RandomMapUI, EntryPoint) == 0x000000, "Member 'RandomMapUI_C_ExecuteUbergraph_RandomMapUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(RandomMapUI_C_ExecuteUbergraph_RandomMapUI, CallFunc_Create_ReturnValue) == 0x000008, "Member 'RandomMapUI_C_ExecuteUbergraph_RandomMapUI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomMapUI_C_ExecuteUbergraph_RandomMapUI, CallFunc_GetParent_ReturnValue) == 0x000010, "Member 'RandomMapUI_C_ExecuteUbergraph_RandomMapUI::CallFunc_GetParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomMapUI_C_ExecuteUbergraph_RandomMapUI, CallFunc_GetParent_ReturnValue_1) == 0x000018, "Member 'RandomMapUI_C_ExecuteUbergraph_RandomMapUI::CallFunc_GetParent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomMapUI_C_ExecuteUbergraph_RandomMapUI, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'RandomMapUI_C_ExecuteUbergraph_RandomMapUI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomMapUI_C_ExecuteUbergraph_RandomMapUI, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'RandomMapUI_C_ExecuteUbergraph_RandomMapUI::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

