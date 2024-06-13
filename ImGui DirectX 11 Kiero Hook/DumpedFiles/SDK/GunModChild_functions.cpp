#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GunModChild

#include "Basic.hpp"

#include "GunModChild_classes.hpp"
#include "GunModChild_parameters.hpp"


namespace SDK
{

// Function GunModChild.GunModChild_C.ExecuteUbergraph_GunModChild
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGunModChild_C::ExecuteUbergraph_GunModChild(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GunModChild_C", "ExecuteUbergraph_GunModChild");

	Params::GunModChild_C_ExecuteUbergraph_GunModChild Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GunModChild.GunModChild_C.StopCompare
// (BlueprintCallable, BlueprintEvent)

void UGunModChild_C::StopCompare()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GunModChild_C", "StopCompare");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GunModChild.GunModChild_C.BndEvt__GunModChild_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGunModChild_C::BndEvt__GunModChild_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GunModChild_C", "BndEvt__GunModChild_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GunModChild.GunModChild_C.BndEvt__GunModChild_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGunModChild_C::BndEvt__GunModChild_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GunModChild_C", "BndEvt__GunModChild_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GunModChild.GunModChild_C.IsEquippedAttachment?
// (BlueprintCallable, BlueprintEvent)

void UGunModChild_C::IsEquippedAttachment_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GunModChild_C", "IsEquippedAttachment?");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GunModChild.GunModChild_C.BndEvt__GunModChild_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGunModChild_C::BndEvt__GunModChild_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GunModChild_C", "BndEvt__GunModChild_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GunModChild.GunModChild_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGunModChild_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GunModChild_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GunModChild.GunModChild_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UGunModChild_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GunModChild_C", "GetText_0");

	Params::GunModChild_C_GetText_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GunModChild.GunModChild_C.GetBrush_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UGunModChild_C::GetBrush_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GunModChild_C", "GetBrush_0");

	Params::GunModChild_C_GetBrush_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

