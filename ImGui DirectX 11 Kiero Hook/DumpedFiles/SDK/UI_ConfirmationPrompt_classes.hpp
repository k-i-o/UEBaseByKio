#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ConfirmationPrompt

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ConfirmationPrompt.UI_ConfirmationPrompt_C
// 0x0000 (0x0400 - 0x0400)
class UUI_ConfirmationPrompt_C final : public UCrabConfirmationPromptUI
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ConfirmationPrompt_C">();
	}
	static class UUI_ConfirmationPrompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ConfirmationPrompt_C>();
	}
};
static_assert(alignof(UUI_ConfirmationPrompt_C) == 0x000008, "Wrong alignment on UUI_ConfirmationPrompt_C");
static_assert(sizeof(UUI_ConfirmationPrompt_C) == 0x000400, "Wrong size on UUI_ConfirmationPrompt_C");

}
