#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Crab_AnimBP_Enemy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CrabChampions_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_Crab_AnimBP_Enemy.SK_Crab_AnimBP_Enemy_C
// 0x0A30 (0x0D10 - 0x02E0)
class USK_Crab_AnimBP_Enemy_C final : public UCrabEnemyAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02E8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0318(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0340(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0368(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x03B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x03E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0408(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0430(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0458(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0540(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0570(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x05F0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0620(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x06A0(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x06D0(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x07B8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x07E8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0868(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0898(0x00B0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0948(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0AA0(0x0028)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization;                     // 0x0AC8(0x0070)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x0B38(0x0190)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0CC8(0x0048)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_BlendSpacePlayer_F3EF04094EB895D6B20F42A20A3AE705();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_DD6C5B45424C4923F0B97B97F2DC0A48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_1F263FEE4CD1ACA6F8D1929A772145F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_6384B838415B210E76C0E29D0CDA5515();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_6738C0EE4CEC17D99C5117869B7001BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Crab_AnimBP_Enemy_AnimGraphNode_TransitionResult_DD8F65FF423482C538A43999A4629F14();
	void ExecuteUbergraph_SK_Crab_AnimBP_Enemy(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_Crab_AnimBP_Enemy_C">();
	}
	static class USK_Crab_AnimBP_Enemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_Crab_AnimBP_Enemy_C>();
	}
};
static_assert(alignof(USK_Crab_AnimBP_Enemy_C) == 0x000010, "Wrong alignment on USK_Crab_AnimBP_Enemy_C");
static_assert(sizeof(USK_Crab_AnimBP_Enemy_C) == 0x000D10, "Wrong size on USK_Crab_AnimBP_Enemy_C");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, UberGraphFrame) == 0x0002E0, "Member 'USK_Crab_AnimBP_Enemy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_Root) == 0x0002E8, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_TransitionResult_7) == 0x000318, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_TransitionResult_6) == 0x000340, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_TransitionResult_5) == 0x000368, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_TransitionResult_4) == 0x000390, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_TransitionResult_3) == 0x0003B8, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_TransitionResult_2) == 0x0003E0, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_TransitionResult_1) == 0x000408, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_TransitionResult) == 0x000430, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000458, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_StateResult_4) == 0x000540, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_SequencePlayer_2) == 0x000570, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_StateResult_3) == 0x0005F0, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_SequencePlayer_1) == 0x000620, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_StateResult_2) == 0x0006A0, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_BlendSpacePlayer) == 0x0006D0, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_StateResult_1) == 0x0007B8, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_SequencePlayer) == 0x0007E8, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_StateResult) == 0x000868, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_StateMachine) == 0x000898, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_SaveCachedPose) == 0x000948, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_UseCachedPose) == 0x000AA0, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_Inertialization) == 0x000AC8, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_Inertialization' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x000B38, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(USK_Crab_AnimBP_Enemy_C, AnimGraphNode_Slot) == 0x000CC8, "Member 'USK_Crab_AnimBP_Enemy_C::AnimGraphNode_Slot' has a wrong offset!");

}

