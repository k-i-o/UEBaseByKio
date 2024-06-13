#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadoutToolsUI

#include "Basic.hpp"

#include "ShopItemCategory_structs.hpp"


namespace SDK::Params
{

// Function LoadoutToolsUI.LoadoutToolsUI_C.ExecuteUbergraph_LoadoutToolsUI
// 0x0040 (0x0040 - 0x0000)
struct LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DB7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EShopItemCategory>                     K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class UEquippedToolSlot_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DB8[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             K2Node_Event_Category_1;                           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             K2Node_Event_Category;                             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DB9[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Event_ItemInfo;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SalePrice;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI) == 0x000008, "Wrong alignment on LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI");
static_assert(sizeof(LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI) == 0x000040, "Wrong size on LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI");
static_assert(offsetof(LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI, EntryPoint) == 0x000000, "Member 'LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI, K2Node_MakeArray_Array) == 0x000008, "Member 'LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI, CallFunc_Create_ReturnValue) == 0x000018, "Member 'LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI, Temp_int_Variable) == 0x000020, "Member 'LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI, K2Node_Event_Category_1) == 0x00002C, "Member 'LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI::K2Node_Event_Category_1' has a wrong offset!");
static_assert(offsetof(LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI, K2Node_Event_Category) == 0x00002D, "Member 'LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI::K2Node_Event_Category' has a wrong offset!");
static_assert(offsetof(LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI, K2Node_Event_ItemInfo) == 0x000030, "Member 'LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI::K2Node_Event_ItemInfo' has a wrong offset!");
static_assert(offsetof(LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI, K2Node_Event_SalePrice) == 0x000038, "Member 'LoadoutToolsUI_C_ExecuteUbergraph_LoadoutToolsUI::K2Node_Event_SalePrice' has a wrong offset!");

// Function LoadoutToolsUI.LoadoutToolsUI_C.PreviewItem
// 0x0010 (0x0010 - 0x0000)
struct LoadoutToolsUI_C_PreviewItem final
{
public:
	class UClass*                                 ItemInfo;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SalePrice;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadoutToolsUI_C_PreviewItem) == 0x000008, "Wrong alignment on LoadoutToolsUI_C_PreviewItem");
static_assert(sizeof(LoadoutToolsUI_C_PreviewItem) == 0x000010, "Wrong size on LoadoutToolsUI_C_PreviewItem");
static_assert(offsetof(LoadoutToolsUI_C_PreviewItem, ItemInfo) == 0x000000, "Member 'LoadoutToolsUI_C_PreviewItem::ItemInfo' has a wrong offset!");
static_assert(offsetof(LoadoutToolsUI_C_PreviewItem, SalePrice) == 0x000008, "Member 'LoadoutToolsUI_C_PreviewItem::SalePrice' has a wrong offset!");

// Function LoadoutToolsUI.LoadoutToolsUI_C.DragItemFromCategory
// 0x0001 (0x0001 - 0x0000)
struct LoadoutToolsUI_C_DragItemFromCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadoutToolsUI_C_DragItemFromCategory) == 0x000001, "Wrong alignment on LoadoutToolsUI_C_DragItemFromCategory");
static_assert(sizeof(LoadoutToolsUI_C_DragItemFromCategory) == 0x000001, "Wrong size on LoadoutToolsUI_C_DragItemFromCategory");
static_assert(offsetof(LoadoutToolsUI_C_DragItemFromCategory, Category) == 0x000000, "Member 'LoadoutToolsUI_C_DragItemFromCategory::Category' has a wrong offset!");

// Function LoadoutToolsUI.LoadoutToolsUI_C.ChangeCategory
// 0x0001 (0x0001 - 0x0000)
struct LoadoutToolsUI_C_ChangeCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadoutToolsUI_C_ChangeCategory) == 0x000001, "Wrong alignment on LoadoutToolsUI_C_ChangeCategory");
static_assert(sizeof(LoadoutToolsUI_C_ChangeCategory) == 0x000001, "Wrong size on LoadoutToolsUI_C_ChangeCategory");
static_assert(offsetof(LoadoutToolsUI_C_ChangeCategory, Category) == 0x000000, "Member 'LoadoutToolsUI_C_ChangeCategory::Category' has a wrong offset!");

}

