#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HackingGameParent

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function HackingGameParent.HackingGameParent_C.ExecuteUbergraph_HackingGameParent
// 0x0030 (0x0030 - 0x0000)
struct HackingGameParent_C_ExecuteUbergraph_HackingGameParent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1494[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHackingGame_base_C*                    CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HackingGameParent_C_ExecuteUbergraph_HackingGameParent) == 0x000008, "Wrong alignment on HackingGameParent_C_ExecuteUbergraph_HackingGameParent");
static_assert(sizeof(HackingGameParent_C_ExecuteUbergraph_HackingGameParent) == 0x000030, "Wrong size on HackingGameParent_C_ExecuteUbergraph_HackingGameParent");
static_assert(offsetof(HackingGameParent_C_ExecuteUbergraph_HackingGameParent, EntryPoint) == 0x000000, "Member 'HackingGameParent_C_ExecuteUbergraph_HackingGameParent::EntryPoint' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_ExecuteUbergraph_HackingGameParent, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'HackingGameParent_C_ExecuteUbergraph_HackingGameParent::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_ExecuteUbergraph_HackingGameParent, CallFunc_Create_ReturnValue) == 0x000010, "Member 'HackingGameParent_C_ExecuteUbergraph_HackingGameParent::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_ExecuteUbergraph_HackingGameParent, CallFunc_AddChild_ReturnValue) == 0x000018, "Member 'HackingGameParent_C_ExecuteUbergraph_HackingGameParent::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_ExecuteUbergraph_HackingGameParent, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'HackingGameParent_C_ExecuteUbergraph_HackingGameParent::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_ExecuteUbergraph_HackingGameParent, CallFunc_GetPlayerController_ReturnValue_1) == 0x000028, "Member 'HackingGameParent_C_ExecuteUbergraph_HackingGameParent::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");

// Function HackingGameParent.HackingGameParent_C.OnKeyDown
// 0x0278 (0x0278 - 0x0000)
struct HackingGameParent_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue;             // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0130(0x0018)(HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>         CallFunc_GetActionMappingByName_OutMappings;       // 0x0148(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1495[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputActionKeyMapping                 CallFunc_Array_Get_Item;                           // 0x0160(0x0028)()
	struct FInputActionKeyMapping                 CallFunc_Array_Get_Item_1;                         // 0x0188(0x0028)()
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1496[0x6];                                     // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            K2Node_MakeStruct_EventReply;                      // 0x01B8(0x00B8)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HackingGameParent_C_OnKeyDown) == 0x000008, "Wrong alignment on HackingGameParent_C_OnKeyDown");
static_assert(sizeof(HackingGameParent_C_OnKeyDown) == 0x000278, "Wrong size on HackingGameParent_C_OnKeyDown");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'HackingGameParent_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, InKeyEvent) == 0x000038, "Member 'HackingGameParent_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, ReturnValue) == 0x000070, "Member 'HackingGameParent_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, CallFunc_GetInputSettings_ReturnValue) == 0x000128, "Member 'HackingGameParent_C_OnKeyDown::CallFunc_GetInputSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, CallFunc_GetKey_ReturnValue) == 0x000130, "Member 'HackingGameParent_C_OnKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, CallFunc_GetActionMappingByName_OutMappings) == 0x000148, "Member 'HackingGameParent_C_OnKeyDown::CallFunc_GetActionMappingByName_OutMappings' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000158, "Member 'HackingGameParent_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, CallFunc_Array_Get_Item) == 0x000160, "Member 'HackingGameParent_C_OnKeyDown::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, CallFunc_Array_Get_Item_1) == 0x000188, "Member 'HackingGameParent_C_OnKeyDown::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x0001B0, "Member 'HackingGameParent_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_2) == 0x0001B1, "Member 'HackingGameParent_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, K2Node_MakeStruct_EventReply) == 0x0001B8, "Member 'HackingGameParent_C_OnKeyDown::K2Node_MakeStruct_EventReply' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, CallFunc_BooleanOR_ReturnValue) == 0x000270, "Member 'HackingGameParent_C_OnKeyDown::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(HackingGameParent_C_OnKeyDown, CallFunc_BooleanOR_ReturnValue_1) == 0x000271, "Member 'HackingGameParent_C_OnKeyDown::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

}

