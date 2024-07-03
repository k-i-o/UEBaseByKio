#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Starfish_AnimBP

#include "Basic.hpp"

#include "SK_Starfish_AnimBP_classes.hpp"
#include "SK_Starfish_AnimBP_parameters.hpp"


namespace SDK
{

// Function SK_Starfish_AnimBP.SK_Starfish_AnimBP_C.ExecuteUbergraph_SK_Starfish_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Starfish_AnimBP_C::ExecuteUbergraph_SK_Starfish_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SK_Starfish_AnimBP_C", "ExecuteUbergraph_SK_Starfish_AnimBP");

	Params::SK_Starfish_AnimBP_C_ExecuteUbergraph_SK_Starfish_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SK_Starfish_AnimBP.SK_Starfish_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_6C42ACC84FB936481F855782FC9BA024
// (BlueprintEvent)

void USK_Starfish_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_6C42ACC84FB936481F855782FC9BA024()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SK_Starfish_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_6C42ACC84FB936481F855782FC9BA024");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SK_Starfish_AnimBP.SK_Starfish_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_0D1288F74DF5C631444C0D9DA20C6FFF
// (BlueprintEvent)

void USK_Starfish_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_0D1288F74DF5C631444C0D9DA20C6FFF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SK_Starfish_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Starfish_AnimBP_AnimGraphNode_TransitionResult_0D1288F74DF5C631444C0D9DA20C6FFF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SK_Starfish_AnimBP.SK_Starfish_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void USK_Starfish_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SK_Starfish_AnimBP_C", "AnimGraph");

	Params::SK_Starfish_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

