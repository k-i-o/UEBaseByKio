#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillChildUI

#include "Basic.hpp"

#include "ShopItemCategory_structs.hpp"
#include "SkillProgressStruct_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SkillChildUI.SkillChildUI_C.ExecuteUbergraph_SkillChildUI
// 0x0090 (0x0090 - 0x0000)
struct SkillChildUI_C_ExecuteUbergraph_SkillChildUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             K2Node_Event_Category_1;                           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             K2Node_Event_Category;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CE6[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Event_ItemInfo;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SalePrice;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CE7[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUserWidget*>                    CallFunc_GetAllWidgetsWithInterface_FoundWidgets;  // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CE8[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMenuUIInteraface_C>   K2Node_DynamicCast_AsMenu_UIInteraface;            // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CE9[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARobberController_C*                    K2Node_DynamicCast_AsRobber_Controller;            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CEA[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSkillTier_Tier;                        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI) == 0x000008, "Wrong alignment on SkillChildUI_C_ExecuteUbergraph_SkillChildUI");
static_assert(sizeof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI) == 0x000090, "Wrong size on SkillChildUI_C_ExecuteUbergraph_SkillChildUI");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, EntryPoint) == 0x000000, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, Temp_int_Array_Index_Variable) == 0x000008, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, K2Node_Event_Category_1) == 0x000010, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::K2Node_Event_Category_1' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, K2Node_Event_Category) == 0x000011, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::K2Node_Event_Category' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, K2Node_Event_ItemInfo) == 0x000018, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::K2Node_Event_ItemInfo' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, K2Node_Event_SalePrice) == 0x000020, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::K2Node_Event_SalePrice' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, CallFunc_GetAllWidgetsWithInterface_FoundWidgets) == 0x000028, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::CallFunc_GetAllWidgetsWithInterface_FoundWidgets' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, CallFunc_Array_Get_Item) == 0x000038, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, K2Node_DynamicCast_AsMenu_UIInteraface) == 0x000048, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::K2Node_DynamicCast_AsMenu_UIInteraface' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, CallFunc_Less_IntInt_ReturnValue) == 0x000059, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, CallFunc_GetPlayerController_ReturnValue) == 0x000060, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, CallFunc_PlayAnimation_ReturnValue) == 0x000068, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, K2Node_DynamicCast_AsRobber_Controller) == 0x000070, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::K2Node_DynamicCast_AsRobber_Controller' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, CallFunc_PlayAnimation_ReturnValue_1) == 0x000080, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_ExecuteUbergraph_SkillChildUI, CallFunc_GetSkillTier_Tier) == 0x000088, "Member 'SkillChildUI_C_ExecuteUbergraph_SkillChildUI::CallFunc_GetSkillTier_Tier' has a wrong offset!");

// Function SkillChildUI.SkillChildUI_C.PreviewItem
// 0x0010 (0x0010 - 0x0000)
struct SkillChildUI_C_PreviewItem final
{
public:
	class UClass*                                 ItemInfo;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SalePrice;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillChildUI_C_PreviewItem) == 0x000008, "Wrong alignment on SkillChildUI_C_PreviewItem");
static_assert(sizeof(SkillChildUI_C_PreviewItem) == 0x000010, "Wrong size on SkillChildUI_C_PreviewItem");
static_assert(offsetof(SkillChildUI_C_PreviewItem, ItemInfo) == 0x000000, "Member 'SkillChildUI_C_PreviewItem::ItemInfo' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_PreviewItem, SalePrice) == 0x000008, "Member 'SkillChildUI_C_PreviewItem::SalePrice' has a wrong offset!");

// Function SkillChildUI.SkillChildUI_C.DragItemFromCategory
// 0x0001 (0x0001 - 0x0000)
struct SkillChildUI_C_DragItemFromCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillChildUI_C_DragItemFromCategory) == 0x000001, "Wrong alignment on SkillChildUI_C_DragItemFromCategory");
static_assert(sizeof(SkillChildUI_C_DragItemFromCategory) == 0x000001, "Wrong size on SkillChildUI_C_DragItemFromCategory");
static_assert(offsetof(SkillChildUI_C_DragItemFromCategory, Category) == 0x000000, "Member 'SkillChildUI_C_DragItemFromCategory::Category' has a wrong offset!");

// Function SkillChildUI.SkillChildUI_C.ChangeCategory
// 0x0001 (0x0001 - 0x0000)
struct SkillChildUI_C_ChangeCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillChildUI_C_ChangeCategory) == 0x000001, "Wrong alignment on SkillChildUI_C_ChangeCategory");
static_assert(sizeof(SkillChildUI_C_ChangeCategory) == 0x000001, "Wrong size on SkillChildUI_C_ChangeCategory");
static_assert(offsetof(SkillChildUI_C_ChangeCategory, Category) == 0x000000, "Member 'SkillChildUI_C_ChangeCategory::Category' has a wrong offset!");

// Function SkillChildUI.SkillChildUI_C.GetBrush_0
// 0x0118 (0x0118 - 0x0000)
struct SkillChildUI_C_GetBrush_0 final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CEB[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0090(0x0088)()
};
static_assert(alignof(SkillChildUI_C_GetBrush_0) == 0x000008, "Wrong alignment on SkillChildUI_C_GetBrush_0");
static_assert(sizeof(SkillChildUI_C_GetBrush_0) == 0x000118, "Wrong size on SkillChildUI_C_GetBrush_0");
static_assert(offsetof(SkillChildUI_C_GetBrush_0, ReturnValue) == 0x000000, "Member 'SkillChildUI_C_GetBrush_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_GetBrush_0, CallFunc_IsValidClass_ReturnValue) == 0x000088, "Member 'SkillChildUI_C_GetBrush_0::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_GetBrush_0, K2Node_MakeStruct_SlateBrush) == 0x000090, "Member 'SkillChildUI_C_GetBrush_0::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function SkillChildUI.SkillChildUI_C.GetText_0
// 0x0038 (0x0038 - 0x0000)
struct SkillChildUI_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CEC[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(SkillChildUI_C_GetText_0) == 0x000008, "Wrong alignment on SkillChildUI_C_GetText_0");
static_assert(sizeof(SkillChildUI_C_GetText_0) == 0x000038, "Wrong size on SkillChildUI_C_GetText_0");
static_assert(offsetof(SkillChildUI_C_GetText_0, ReturnValue) == 0x000000, "Member 'SkillChildUI_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_GetText_0, CallFunc_IsValidClass_ReturnValue) == 0x000018, "Member 'SkillChildUI_C_GetText_0::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_GetText_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'SkillChildUI_C_GetText_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function SkillChildUI.SkillChildUI_C.Get_Rarity_ColorAndOpacity_0
// 0x0068 (0x0068 - 0x0000)
struct SkillChildUI_C_Get_Rarity_ColorAndOpacity_0 final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CED[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillChildUI_C_Get_Rarity_ColorAndOpacity_0) == 0x000004, "Wrong alignment on SkillChildUI_C_Get_Rarity_ColorAndOpacity_0");
static_assert(sizeof(SkillChildUI_C_Get_Rarity_ColorAndOpacity_0) == 0x000068, "Wrong size on SkillChildUI_C_Get_Rarity_ColorAndOpacity_0");
static_assert(offsetof(SkillChildUI_C_Get_Rarity_ColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'SkillChildUI_C_Get_Rarity_ColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_Get_Rarity_ColorAndOpacity_0, Temp_int_Variable) == 0x000010, "Member 'SkillChildUI_C_Get_Rarity_ColorAndOpacity_0::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_Get_Rarity_ColorAndOpacity_0, Temp_struct_Variable) == 0x000014, "Member 'SkillChildUI_C_Get_Rarity_ColorAndOpacity_0::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_Get_Rarity_ColorAndOpacity_0, Temp_struct_Variable_1) == 0x000024, "Member 'SkillChildUI_C_Get_Rarity_ColorAndOpacity_0::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_Get_Rarity_ColorAndOpacity_0, Temp_struct_Variable_2) == 0x000034, "Member 'SkillChildUI_C_Get_Rarity_ColorAndOpacity_0::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_Get_Rarity_ColorAndOpacity_0, Temp_struct_Variable_3) == 0x000044, "Member 'SkillChildUI_C_Get_Rarity_ColorAndOpacity_0::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_Get_Rarity_ColorAndOpacity_0, CallFunc_IsValidClass_ReturnValue) == 0x000054, "Member 'SkillChildUI_C_Get_Rarity_ColorAndOpacity_0::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_Get_Rarity_ColorAndOpacity_0, K2Node_Select_Default) == 0x000058, "Member 'SkillChildUI_C_Get_Rarity_ColorAndOpacity_0::K2Node_Select_Default' has a wrong offset!");

// Function SkillChildUI.SkillChildUI_C.GetText_1
// 0x0050 (0x0050 - 0x0000)
struct SkillChildUI_C_GetText_1 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(SkillChildUI_C_GetText_1) == 0x000008, "Wrong alignment on SkillChildUI_C_GetText_1");
static_assert(sizeof(SkillChildUI_C_GetText_1) == 0x000050, "Wrong size on SkillChildUI_C_GetText_1");
static_assert(offsetof(SkillChildUI_C_GetText_1, ReturnValue) == 0x000000, "Member 'SkillChildUI_C_GetText_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_GetText_1, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'SkillChildUI_C_GetText_1::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_GetText_1, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'SkillChildUI_C_GetText_1::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_GetText_1, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'SkillChildUI_C_GetText_1::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function SkillChildUI.SkillChildUI_C.Get_UnlockBox_Visibility_0
// 0x0002 (0x0002 - 0x0000)
struct SkillChildUI_C_Get_UnlockBox_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillChildUI_C_Get_UnlockBox_Visibility_0) == 0x000001, "Wrong alignment on SkillChildUI_C_Get_UnlockBox_Visibility_0");
static_assert(sizeof(SkillChildUI_C_Get_UnlockBox_Visibility_0) == 0x000002, "Wrong size on SkillChildUI_C_Get_UnlockBox_Visibility_0");
static_assert(offsetof(SkillChildUI_C_Get_UnlockBox_Visibility_0, ReturnValue) == 0x000000, "Member 'SkillChildUI_C_Get_UnlockBox_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_Get_UnlockBox_Visibility_0, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000001, "Member 'SkillChildUI_C_Get_UnlockBox_Visibility_0::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function SkillChildUI.SkillChildUI_C.GetVisibility_0
// 0x0020 (0x0020 - 0x0000)
struct SkillChildUI_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindResearchingSkill_Is_researching_;     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CEE[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillProgressStruct                   CallFunc_FindResearchingSkill_Array_Element;       // 0x0008(0x0018)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillChildUI_C_GetVisibility_0) == 0x000008, "Wrong alignment on SkillChildUI_C_GetVisibility_0");
static_assert(sizeof(SkillChildUI_C_GetVisibility_0) == 0x000020, "Wrong size on SkillChildUI_C_GetVisibility_0");
static_assert(offsetof(SkillChildUI_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'SkillChildUI_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_GetVisibility_0, CallFunc_FindResearchingSkill_Is_researching_) == 0x000001, "Member 'SkillChildUI_C_GetVisibility_0::CallFunc_FindResearchingSkill_Is_researching_' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_GetVisibility_0, CallFunc_FindResearchingSkill_Array_Element) == 0x000008, "Member 'SkillChildUI_C_GetVisibility_0::CallFunc_FindResearchingSkill_Array_Element' has a wrong offset!");

// Function SkillChildUI.SkillChildUI_C.GetPercent_0
// 0x0028 (0x0028 - 0x0000)
struct SkillChildUI_C_GetPercent_0 final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindResearchingSkill_Is_researching_;     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CEF[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillProgressStruct                   CallFunc_FindResearchingSkill_Array_Element;       // 0x0008(0x0018)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillChildUI_C_GetPercent_0) == 0x000008, "Wrong alignment on SkillChildUI_C_GetPercent_0");
static_assert(sizeof(SkillChildUI_C_GetPercent_0) == 0x000028, "Wrong size on SkillChildUI_C_GetPercent_0");
static_assert(offsetof(SkillChildUI_C_GetPercent_0, ReturnValue) == 0x000000, "Member 'SkillChildUI_C_GetPercent_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_GetPercent_0, CallFunc_FindResearchingSkill_Is_researching_) == 0x000004, "Member 'SkillChildUI_C_GetPercent_0::CallFunc_FindResearchingSkill_Is_researching_' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_GetPercent_0, CallFunc_FindResearchingSkill_Array_Element) == 0x000008, "Member 'SkillChildUI_C_GetPercent_0::CallFunc_FindResearchingSkill_Array_Element' has a wrong offset!");
static_assert(offsetof(SkillChildUI_C_GetPercent_0, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'SkillChildUI_C_GetPercent_0::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

}

