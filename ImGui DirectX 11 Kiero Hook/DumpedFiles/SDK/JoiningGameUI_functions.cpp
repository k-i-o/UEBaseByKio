#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JoiningGameUI

#include "Basic.hpp"

#include "JoiningGameUI_classes.hpp"
#include "JoiningGameUI_parameters.hpp"


namespace SDK
{

// Function JoiningGameUI.JoiningGameUI_C.ExecuteUbergraph_JoiningGameUI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoiningGameUI_C::ExecuteUbergraph_JoiningGameUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoiningGameUI_C", "ExecuteUbergraph_JoiningGameUI");

	Params::JoiningGameUI_C_ExecuteUbergraph_JoiningGameUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoiningGameUI.JoiningGameUI_C.BndEvt__JoiningGameUI_Loadout_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UJoiningGameUI_C::BndEvt__JoiningGameUI_Loadout_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoiningGameUI_C", "BndEvt__JoiningGameUI_Loadout_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoiningGameUI.JoiningGameUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJoiningGameUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoiningGameUI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
