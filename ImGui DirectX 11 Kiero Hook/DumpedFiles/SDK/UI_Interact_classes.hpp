#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Interact

#include "Basic.hpp"

#include "CrabChampions_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Interact.UI_Interact_C
// 0x0008 (0x0360 - 0x0358)
class UUI_Interact_C final : public UCrabInteractUI
{
public:
	class UImage*                                 Image_310;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Interact_C">();
	}
	static class UUI_Interact_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Interact_C>();
	}
};
static_assert(alignof(UUI_Interact_C) == 0x000008, "Wrong alignment on UUI_Interact_C");
static_assert(sizeof(UUI_Interact_C) == 0x000360, "Wrong size on UUI_Interact_C");
static_assert(offsetof(UUI_Interact_C, Image_310) == 0x000358, "Member 'UUI_Interact_C::Image_310' has a wrong offset!");

}
