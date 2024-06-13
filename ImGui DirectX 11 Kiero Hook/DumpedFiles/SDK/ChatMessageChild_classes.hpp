#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatMessageChild

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatMessageChild.ChatMessageChild_C
// 0x0058 (0x02B8 - 0x0260)
class UChatMessageChild_C final : public UUserWidget
{
public:
	class UTextBlock*                             Chat;                                              // 0x0260(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_ChatMessageChild_C;                           // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 ChatName;                                          // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 ChatMessage;                                       // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                            MessageColor;                                      // 0x0290(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	class FText Get_Name_Text_0();
	class FText Get_Chat_Text_0();
	struct FSlateColor Get_Chat_ColorAndOpacity_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatMessageChild_C">();
	}
	static class UChatMessageChild_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatMessageChild_C>();
	}
};
static_assert(alignof(UChatMessageChild_C) == 0x000008, "Wrong alignment on UChatMessageChild_C");
static_assert(sizeof(UChatMessageChild_C) == 0x0002B8, "Wrong size on UChatMessageChild_C");
static_assert(offsetof(UChatMessageChild_C, Chat) == 0x000260, "Member 'UChatMessageChild_C::Chat' has a wrong offset!");
static_assert(offsetof(UChatMessageChild_C, Name_ChatMessageChild_C) == 0x000268, "Member 'UChatMessageChild_C::Name_ChatMessageChild_C' has a wrong offset!");
static_assert(offsetof(UChatMessageChild_C, ChatName) == 0x000270, "Member 'UChatMessageChild_C::ChatName' has a wrong offset!");
static_assert(offsetof(UChatMessageChild_C, ChatMessage) == 0x000280, "Member 'UChatMessageChild_C::ChatMessage' has a wrong offset!");
static_assert(offsetof(UChatMessageChild_C, MessageColor) == 0x000290, "Member 'UChatMessageChild_C::MessageColor' has a wrong offset!");

}

