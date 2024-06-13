#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function InteractComponent.InteractComponent_C.Interact__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct InteractComponent_C_Interact__DelegateSignature final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractComponent_C_Interact__DelegateSignature) == 0x000008, "Wrong alignment on InteractComponent_C_Interact__DelegateSignature");
static_assert(sizeof(InteractComponent_C_Interact__DelegateSignature) == 0x000010, "Wrong size on InteractComponent_C_Interact__DelegateSignature");
static_assert(offsetof(InteractComponent_C_Interact__DelegateSignature, Player) == 0x000000, "Member 'InteractComponent_C_Interact__DelegateSignature::Player' has a wrong offset!");
static_assert(offsetof(InteractComponent_C_Interact__DelegateSignature, HitComponent) == 0x000008, "Member 'InteractComponent_C_Interact__DelegateSignature::HitComponent' has a wrong offset!");

}

