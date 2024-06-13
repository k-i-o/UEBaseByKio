#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SetupChild

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SetupChild.SetupChild_C
// 0x0060 (0x02C0 - 0x0260)
class USetupChild_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_144;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_63;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_126;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_202;                                     // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Underline;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 SetupInfo;                                         // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USetupsUI_C*                            ParentSetupWidget;                                 // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ARobberController_C*                    As_Robber_Controller;                              // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Unlocked_;                                         // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D12[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALobbyManager_C*                        LobbyManager;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SetupChild(int32 EntryPoint);
	void CheckUnlocked();
	void Construct();
	void BndEvt__SetupChild_Button_144_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SetupChild_Button_144_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	struct FSlateBrush GetBackground_0();
	class FText GetText_0();
	struct FSlateColor GetColorAndOpacity_0();
	ESlateVisibility GetVisibility_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SetupChild_C">();
	}
	static class USetupChild_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USetupChild_C>();
	}
};
static_assert(alignof(USetupChild_C) == 0x000008, "Wrong alignment on USetupChild_C");
static_assert(sizeof(USetupChild_C) == 0x0002C0, "Wrong size on USetupChild_C");
static_assert(offsetof(USetupChild_C, UberGraphFrame) == 0x000260, "Member 'USetupChild_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USetupChild_C, Hover) == 0x000268, "Member 'USetupChild_C::Hover' has a wrong offset!");
static_assert(offsetof(USetupChild_C, Button_144) == 0x000270, "Member 'USetupChild_C::Button_144' has a wrong offset!");
static_assert(offsetof(USetupChild_C, Image_63) == 0x000278, "Member 'USetupChild_C::Image_63' has a wrong offset!");
static_assert(offsetof(USetupChild_C, Image_126) == 0x000280, "Member 'USetupChild_C::Image_126' has a wrong offset!");
static_assert(offsetof(USetupChild_C, TextBlock_202) == 0x000288, "Member 'USetupChild_C::TextBlock_202' has a wrong offset!");
static_assert(offsetof(USetupChild_C, Underline) == 0x000290, "Member 'USetupChild_C::Underline' has a wrong offset!");
static_assert(offsetof(USetupChild_C, SetupInfo) == 0x000298, "Member 'USetupChild_C::SetupInfo' has a wrong offset!");
static_assert(offsetof(USetupChild_C, ParentSetupWidget) == 0x0002A0, "Member 'USetupChild_C::ParentSetupWidget' has a wrong offset!");
static_assert(offsetof(USetupChild_C, As_Robber_Controller) == 0x0002A8, "Member 'USetupChild_C::As_Robber_Controller' has a wrong offset!");
static_assert(offsetof(USetupChild_C, Unlocked_) == 0x0002B0, "Member 'USetupChild_C::Unlocked_' has a wrong offset!");
static_assert(offsetof(USetupChild_C, LobbyManager) == 0x0002B8, "Member 'USetupChild_C::LobbyManager' has a wrong offset!");

}
