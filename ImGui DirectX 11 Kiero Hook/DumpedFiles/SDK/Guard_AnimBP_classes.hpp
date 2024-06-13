#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Guard_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Guard_AnimBP.Guard_AnimBP_C
// 0x07D0 (0x0A90 - 0x02C0)
class UGuard_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_1E34[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x02F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0320(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0348(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x03C8(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x03F8(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x04E0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0510(0x00B0)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x05C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x05E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0610(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0638(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0660(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0688(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0708(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0738(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x07B8(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x07E8(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x08D0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0900(0x00B0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x09B0(0x00C0)()
	float                                         ForwardSpeed;                                      // 0x0A70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RightSpeed;                                        // 0x0A74(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoingGesture_;                                     // 0x0A78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E35[0x7];                                     // 0x0A79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      GestureAnim;                                       // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Armed_;                                            // 0x0A88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Guard_AnimBP(int32 EntryPoint);
	void StopGesture();
	void PlayGesture(class UAnimSequenceBase* Anim, bool Loops_);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Guard_AnimBP_C">();
	}
	static class UGuard_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuard_AnimBP_C>();
	}
};
static_assert(alignof(UGuard_AnimBP_C) == 0x000010, "Wrong alignment on UGuard_AnimBP_C");
static_assert(sizeof(UGuard_AnimBP_C) == 0x000A90, "Wrong size on UGuard_AnimBP_C");
static_assert(offsetof(UGuard_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UGuard_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UGuard_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x0002F8, "Member 'UGuard_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000320, "Member 'UGuard_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000348, "Member 'UGuard_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_StateResult_4) == 0x0003C8, "Member 'UGuard_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x0003F8, "Member 'UGuard_AnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_StateResult_3) == 0x0004E0, "Member 'UGuard_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x000510, "Member 'UGuard_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x0005C0, "Member 'UGuard_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x0005E8, "Member 'UGuard_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x000610, "Member 'UGuard_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000638, "Member 'UGuard_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000660, "Member 'UGuard_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000688, "Member 'UGuard_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_StateResult_2) == 0x000708, "Member 'UGuard_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000738, "Member 'UGuard_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_StateResult_1) == 0x0007B8, "Member 'UGuard_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x0007E8, "Member 'UGuard_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_StateResult) == 0x0008D0, "Member 'UGuard_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_StateMachine) == 0x000900, "Member 'UGuard_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x0009B0, "Member 'UGuard_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, ForwardSpeed) == 0x000A70, "Member 'UGuard_AnimBP_C::ForwardSpeed' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, RightSpeed) == 0x000A74, "Member 'UGuard_AnimBP_C::RightSpeed' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, DoingGesture_) == 0x000A78, "Member 'UGuard_AnimBP_C::DoingGesture_' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, GestureAnim) == 0x000A80, "Member 'UGuard_AnimBP_C::GestureAnim' has a wrong offset!");
static_assert(offsetof(UGuard_AnimBP_C, Armed_) == 0x000A88, "Member 'UGuard_AnimBP_C::Armed_' has a wrong offset!");

}

