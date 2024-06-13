#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameChat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GameChat.GameChat_C
// 0x0040 (0x02A0 - 0x0260)
class UGameChat_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInMessages;                                    // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                             ChatMessages;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_269;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_366;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ChatOpen_;                                         // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F88[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARobberPlayerState_C*                   As_Robber_Player_State;                            // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GameChat(int32 EntryPoint);
	void Construct();
	void BndEvt__GameChat_EditableTextBox_269_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void NewChat();
	void UserOpenChat();
	ESlateVisibility GetVisibility_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GameChat_C">();
	}
	static class UGameChat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameChat_C>();
	}
};
static_assert(alignof(UGameChat_C) == 0x000008, "Wrong alignment on UGameChat_C");
static_assert(sizeof(UGameChat_C) == 0x0002A0, "Wrong size on UGameChat_C");
static_assert(offsetof(UGameChat_C, UberGraphFrame) == 0x000260, "Member 'UGameChat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGameChat_C, FadeOut) == 0x000268, "Member 'UGameChat_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UGameChat_C, FadeInMessages) == 0x000270, "Member 'UGameChat_C::FadeInMessages' has a wrong offset!");
static_assert(offsetof(UGameChat_C, ChatMessages) == 0x000278, "Member 'UGameChat_C::ChatMessages' has a wrong offset!");
static_assert(offsetof(UGameChat_C, EditableTextBox_269) == 0x000280, "Member 'UGameChat_C::EditableTextBox_269' has a wrong offset!");
static_assert(offsetof(UGameChat_C, Image_366) == 0x000288, "Member 'UGameChat_C::Image_366' has a wrong offset!");
static_assert(offsetof(UGameChat_C, ChatOpen_) == 0x000290, "Member 'UGameChat_C::ChatOpen_' has a wrong offset!");
static_assert(offsetof(UGameChat_C, As_Robber_Player_State) == 0x000298, "Member 'UGameChat_C::As_Robber_Player_State' has a wrong offset!");

}
