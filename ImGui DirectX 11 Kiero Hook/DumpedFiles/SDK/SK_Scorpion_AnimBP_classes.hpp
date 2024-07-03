#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Scorpion_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "CrabChampions_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_Scorpion_AnimBP.SK_Scorpion_AnimBP_C
// 0x02E0 (0x05C0 - 0x02E0)
class USK_Scorpion_AnimBP_C final : public UCrabEnemyAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02E8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0318(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0360(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0388(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x03B0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0430(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0460(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x04E0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0510(0x00B0)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Scorpion_AnimBP_AnimGraphNode_SequencePlayer_81B11FE0473C7E04DDCD4B928EC21D15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Scorpion_AnimBP_AnimGraphNode_TransitionResult_9A6A4C6043634A4C16C73B9CFE25A885();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Scorpion_AnimBP_AnimGraphNode_TransitionResult_D0D877C7403DFA7C45B163A28761A69D();
	void ExecuteUbergraph_SK_Scorpion_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_Scorpion_AnimBP_C">();
	}
	static class USK_Scorpion_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_Scorpion_AnimBP_C>();
	}
};
static_assert(alignof(USK_Scorpion_AnimBP_C) == 0x000010, "Wrong alignment on USK_Scorpion_AnimBP_C");
static_assert(sizeof(USK_Scorpion_AnimBP_C) == 0x0005C0, "Wrong size on USK_Scorpion_AnimBP_C");
static_assert(offsetof(USK_Scorpion_AnimBP_C, UberGraphFrame) == 0x0002E0, "Member 'USK_Scorpion_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USK_Scorpion_AnimBP_C, AnimGraphNode_Root) == 0x0002E8, "Member 'USK_Scorpion_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USK_Scorpion_AnimBP_C, AnimGraphNode_Slot) == 0x000318, "Member 'USK_Scorpion_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(USK_Scorpion_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000360, "Member 'USK_Scorpion_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(USK_Scorpion_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000388, "Member 'USK_Scorpion_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(USK_Scorpion_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0003B0, "Member 'USK_Scorpion_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(USK_Scorpion_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000430, "Member 'USK_Scorpion_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(USK_Scorpion_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000460, "Member 'USK_Scorpion_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(USK_Scorpion_AnimBP_C, AnimGraphNode_StateResult) == 0x0004E0, "Member 'USK_Scorpion_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(USK_Scorpion_AnimBP_C, AnimGraphNode_StateMachine) == 0x000510, "Member 'USK_Scorpion_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");

}
