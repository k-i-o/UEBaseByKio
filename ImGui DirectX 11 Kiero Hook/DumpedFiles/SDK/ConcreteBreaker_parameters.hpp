#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConcreteBreaker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ConcreteBreaker.ConcreteBreaker_C.ExecuteUbergraph_ConcreteBreaker
// 0x0028 (0x0028 - 0x0000)
struct ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FCD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker) == 0x000008, "Wrong alignment on ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker");
static_assert(sizeof(ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker) == 0x000028, "Wrong size on ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker");
static_assert(offsetof(ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker, EntryPoint) == 0x000000, "Member 'ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker::EntryPoint' has a wrong offset!");
static_assert(offsetof(ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'ConcreteBreaker_C_ExecuteUbergraph_ConcreteBreaker::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

}
