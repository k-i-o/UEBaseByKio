#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JoiningGameUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass JoiningGameUI.JoiningGameUI_C
// 0x0010 (0x0270 - 0x0260)
class UJoiningGameUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Loadout_Button;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_JoiningGameUI(int32 EntryPoint);
	void BndEvt__JoiningGameUI_Loadout_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JoiningGameUI_C">();
	}
	static class UJoiningGameUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJoiningGameUI_C>();
	}
};
static_assert(alignof(UJoiningGameUI_C) == 0x000008, "Wrong alignment on UJoiningGameUI_C");
static_assert(sizeof(UJoiningGameUI_C) == 0x000270, "Wrong size on UJoiningGameUI_C");
static_assert(offsetof(UJoiningGameUI_C, UberGraphFrame) == 0x000260, "Member 'UJoiningGameUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJoiningGameUI_C, Loadout_Button) == 0x000268, "Member 'UJoiningGameUI_C::Loadout_Button' has a wrong offset!");

}
