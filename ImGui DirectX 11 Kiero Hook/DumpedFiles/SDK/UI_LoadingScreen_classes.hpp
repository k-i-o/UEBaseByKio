#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LoadingScreen

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_LoadingScreen.UI_LoadingScreen_C
// 0x0010 (0x0270 - 0x0260)
class UUI_LoadingScreen_C final : public UUserWidget
{
public:
	class UCircularThrobber*                      CircularThrobber_113;                              // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_29;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_LoadingScreen_C">();
	}
	static class UUI_LoadingScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_LoadingScreen_C>();
	}
};
static_assert(alignof(UUI_LoadingScreen_C) == 0x000008, "Wrong alignment on UUI_LoadingScreen_C");
static_assert(sizeof(UUI_LoadingScreen_C) == 0x000270, "Wrong size on UUI_LoadingScreen_C");
static_assert(offsetof(UUI_LoadingScreen_C, CircularThrobber_113) == 0x000260, "Member 'UUI_LoadingScreen_C::CircularThrobber_113' has a wrong offset!");
static_assert(offsetof(UUI_LoadingScreen_C, Image_29) == 0x000268, "Member 'UUI_LoadingScreen_C::Image_29' has a wrong offset!");

}

