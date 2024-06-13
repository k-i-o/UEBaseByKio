#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CivilianAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass CivilianAnimBP.CivilianAnimBP_C
// 0x07A0 (0x0A60 - 0x02C0)
class UCivilianAnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2404[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x02F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0320(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0348(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0370(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0398(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x03C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x03E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0410(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0438(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0460(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x04E0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0510(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0590(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x05C0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0640(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0670(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x06F0(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0720(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0808(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0838(0x00B0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x08E8(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x09F0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0A10(0x0020)()
	float                                         ForwardSpeed;                                      // 0x0A30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RightSpeed;                                        // 0x0A34(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Scared_;                                           // 0x0A38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2405[0x3];                                     // 0x0A39(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               LookRotation;                                      // 0x0A3C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Lookat_Lerp;                                       // 0x0A48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoingGesture_;                                     // 0x0A4C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2406[0x3];                                     // 0x0A4D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      GestureAnim;                                       // 0x0A50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GestureLoops_;                                     // 0x0A58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Tied_;                                             // 0x0A59(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void PlayGesture(class UAnimSequenceBase* Anim, bool Loops_);
	void StopGesture();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CivilianAnimBP_AnimGraphNode_ModifyBone_99D026B745679536DA45BCBA766120BC();
	void AnimNotify_PauseAnims();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_CivilianAnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CivilianAnimBP_C">();
	}
	static class UCivilianAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCivilianAnimBP_C>();
	}
};
static_assert(alignof(UCivilianAnimBP_C) == 0x000010, "Wrong alignment on UCivilianAnimBP_C");
static_assert(sizeof(UCivilianAnimBP_C) == 0x000A60, "Wrong size on UCivilianAnimBP_C");
static_assert(offsetof(UCivilianAnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UCivilianAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UCivilianAnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_TransitionResult_8) == 0x0002F8, "Member 'UCivilianAnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_TransitionResult_7) == 0x000320, "Member 'UCivilianAnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_TransitionResult_6) == 0x000348, "Member 'UCivilianAnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000370, "Member 'UCivilianAnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000398, "Member 'UCivilianAnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_TransitionResult_3) == 0x0003C0, "Member 'UCivilianAnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0003E8, "Member 'UCivilianAnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000410, "Member 'UCivilianAnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_TransitionResult) == 0x000438, "Member 'UCivilianAnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000460, "Member 'UCivilianAnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_StateResult_4) == 0x0004E0, "Member 'UCivilianAnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000510, "Member 'UCivilianAnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_StateResult_3) == 0x000590, "Member 'UCivilianAnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0005C0, "Member 'UCivilianAnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_StateResult_2) == 0x000640, "Member 'UCivilianAnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_SequencePlayer) == 0x000670, "Member 'UCivilianAnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_StateResult_1) == 0x0006F0, "Member 'UCivilianAnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x000720, "Member 'UCivilianAnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_StateResult) == 0x000808, "Member 'UCivilianAnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_StateMachine) == 0x000838, "Member 'UCivilianAnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_ModifyBone) == 0x0008E8, "Member 'UCivilianAnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0009F0, "Member 'UCivilianAnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000A10, "Member 'UCivilianAnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, ForwardSpeed) == 0x000A30, "Member 'UCivilianAnimBP_C::ForwardSpeed' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, RightSpeed) == 0x000A34, "Member 'UCivilianAnimBP_C::RightSpeed' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, Scared_) == 0x000A38, "Member 'UCivilianAnimBP_C::Scared_' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, LookRotation) == 0x000A3C, "Member 'UCivilianAnimBP_C::LookRotation' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, Lookat_Lerp) == 0x000A48, "Member 'UCivilianAnimBP_C::Lookat_Lerp' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, DoingGesture_) == 0x000A4C, "Member 'UCivilianAnimBP_C::DoingGesture_' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, GestureAnim) == 0x000A50, "Member 'UCivilianAnimBP_C::GestureAnim' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, GestureLoops_) == 0x000A58, "Member 'UCivilianAnimBP_C::GestureLoops_' has a wrong offset!");
static_assert(offsetof(UCivilianAnimBP_C, Tied_) == 0x000A59, "Member 'UCivilianAnimBP_C::Tied_' has a wrong offset!");

}

