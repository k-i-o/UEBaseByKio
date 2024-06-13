#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RandomMapUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RandomMapUI.RandomMapUI_C
// 0x0018 (0x0278 - 0x0260)
class URandomMapUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_56;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RandomMapUI(int32 EntryPoint);
	void BndEvt__RandomMapUI_Button_56_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__RandomMapUI_Button_56_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__RandomMapUI_Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RandomMapUI_C">();
	}
	static class URandomMapUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URandomMapUI_C>();
	}
};
static_assert(alignof(URandomMapUI_C) == 0x000008, "Wrong alignment on URandomMapUI_C");
static_assert(sizeof(URandomMapUI_C) == 0x000278, "Wrong size on URandomMapUI_C");
static_assert(offsetof(URandomMapUI_C, UberGraphFrame) == 0x000260, "Member 'URandomMapUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URandomMapUI_C, Hover) == 0x000268, "Member 'URandomMapUI_C::Hover' has a wrong offset!");
static_assert(offsetof(URandomMapUI_C, Button_56) == 0x000270, "Member 'URandomMapUI_C::Button_56' has a wrong offset!");

}
