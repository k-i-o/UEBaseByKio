#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SelectedMapUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SelectedMapUI.SelectedMapUI_C
// 0x0038 (0x0298 - 0x0260)
class USelectedMapUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_71;                                         // 0x0270(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_115;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_69;                                      // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 Map;                                               // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AMainMenuPlayer_C*                      As_Main_Menu_Player;                               // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SelectedMapUI(int32 EntryPoint);
	void Construct();
	void BndEvt__SelectedMapUI_Button_115_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SelectedMapUI_Button_115_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SelectedMapUI_Button_115_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	struct FSlateBrush GetBackground_0();
	class FText GetText_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SelectedMapUI_C">();
	}
	static class USelectedMapUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelectedMapUI_C>();
	}
};
static_assert(alignof(USelectedMapUI_C) == 0x000008, "Wrong alignment on USelectedMapUI_C");
static_assert(sizeof(USelectedMapUI_C) == 0x000298, "Wrong size on USelectedMapUI_C");
static_assert(offsetof(USelectedMapUI_C, UberGraphFrame) == 0x000260, "Member 'USelectedMapUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USelectedMapUI_C, HoverAnim) == 0x000268, "Member 'USelectedMapUI_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(USelectedMapUI_C, Border_71) == 0x000270, "Member 'USelectedMapUI_C::Border_71' has a wrong offset!");
static_assert(offsetof(USelectedMapUI_C, Button_115) == 0x000278, "Member 'USelectedMapUI_C::Button_115' has a wrong offset!");
static_assert(offsetof(USelectedMapUI_C, TextBlock_69) == 0x000280, "Member 'USelectedMapUI_C::TextBlock_69' has a wrong offset!");
static_assert(offsetof(USelectedMapUI_C, Map) == 0x000288, "Member 'USelectedMapUI_C::Map' has a wrong offset!");
static_assert(offsetof(USelectedMapUI_C, As_Main_Menu_Player) == 0x000290, "Member 'USelectedMapUI_C::As_Main_Menu_Player' has a wrong offset!");

}
