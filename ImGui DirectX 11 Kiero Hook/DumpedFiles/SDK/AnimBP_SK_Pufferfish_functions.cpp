#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_SK_Pufferfish

#include "Basic.hpp"

#include "AnimBP_SK_Pufferfish_classes.hpp"
#include "AnimBP_SK_Pufferfish_parameters.hpp"


namespace SDK
{

// Function AnimBP_SK_Pufferfish.AnimBP_SK_Pufferfish_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAnimBP_SK_Pufferfish_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_SK_Pufferfish_C", "AnimGraph");

	Params::AnimBP_SK_Pufferfish_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function AnimBP_SK_Pufferfish.AnimBP_SK_Pufferfish_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Pufferfish_AnimGraphNode_SequencePlayer_869AA08746C9DE95EEAE2895CB29DEC6
// (BlueprintEvent)

void UAnimBP_SK_Pufferfish_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Pufferfish_AnimGraphNode_SequencePlayer_869AA08746C9DE95EEAE2895CB29DEC6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_SK_Pufferfish_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SK_Pufferfish_AnimGraphNode_SequencePlayer_869AA08746C9DE95EEAE2895CB29DEC6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_SK_Pufferfish.AnimBP_SK_Pufferfish_C.ExecuteUbergraph_AnimBP_SK_Pufferfish
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_SK_Pufferfish_C::ExecuteUbergraph_AnimBP_SK_Pufferfish(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_SK_Pufferfish_C", "ExecuteUbergraph_AnimBP_SK_Pufferfish");

	Params::AnimBP_SK_Pufferfish_C_ExecuteUbergraph_AnimBP_SK_Pufferfish Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

