#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimGraphRuntime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (0x02C0 - 0x02C0)
class UAnimSequencerInstance : public UAnimInstance
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSequencerInstance">();
	}
	static class UAnimSequencerInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSequencerInstance>();
	}
};
static_assert(alignof(UAnimSequencerInstance) == 0x000010, "Wrong alignment on UAnimSequencerInstance");
static_assert(sizeof(UAnimSequencerInstance) == 0x0002C0, "Wrong size on UAnimSequencerInstance");

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_PlayMontageNotify final : public UAnimNotify
{
public:
	class FName                                   NotifyName;                                        // 0x0038(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotify_PlayMontageNotify">();
	}
	static class UAnimNotify_PlayMontageNotify* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayMontageNotify>();
	}
};
static_assert(alignof(UAnimNotify_PlayMontageNotify) == 0x000008, "Wrong alignment on UAnimNotify_PlayMontageNotify");
static_assert(sizeof(UAnimNotify_PlayMontageNotify) == 0x000040, "Wrong size on UAnimNotify_PlayMontageNotify");
static_assert(offsetof(UAnimNotify_PlayMontageNotify, NotifyName) == 0x000038, "Member 'UAnimNotify_PlayMontageNotify::NotifyName' has a wrong offset!");

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_PlayMontageNotifyWindow final : public UAnimNotifyState
{
public:
	class FName                                   NotifyName;                                        // 0x0030(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotify_PlayMontageNotifyWindow">();
	}
	static class UAnimNotify_PlayMontageNotifyWindow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayMontageNotifyWindow>();
	}
};
static_assert(alignof(UAnimNotify_PlayMontageNotifyWindow) == 0x000008, "Wrong alignment on UAnimNotify_PlayMontageNotifyWindow");
static_assert(sizeof(UAnimNotify_PlayMontageNotifyWindow) == 0x000038, "Wrong size on UAnimNotify_PlayMontageNotifyWindow");
static_assert(offsetof(UAnimNotify_PlayMontageNotifyWindow, NotifyName) == 0x000030, "Member 'UAnimNotify_PlayMontageNotifyWindow::NotifyName' has a wrong offset!");

// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetAnimationLibrary final : public UBlueprintFunctionLibrary
{
public:
	static float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax);
	static float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const class FName SocketOrBoneName, const class FName ReferenceSocketOrBone, ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve);
	static struct FVector K2_DirectionBetweenSockets(const class USkeletalMeshComponent* Component, const class FName SocketOrBoneNameFrom, const class FName SocketOrBoneNameTo);
	static float K2_DistanceBetweenTwoSocketsAndMapRange(const class USkeletalMeshComponent* Component, const class FName SocketOrBoneNameA, ERelativeTransformSpace SocketSpaceA, const class FName SocketOrBoneNameB, ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
	static float K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix);
	static struct FTransform K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree);
	static float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
	static struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
	static void K2_StartProfilingTimer();
	static void K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KismetAnimationLibrary">();
	}
	static class UKismetAnimationLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetAnimationLibrary>();
	}
};
static_assert(alignof(UKismetAnimationLibrary) == 0x000008, "Wrong alignment on UKismetAnimationLibrary");
static_assert(sizeof(UKismetAnimationLibrary) == 0x000028, "Wrong size on UKismetAnimationLibrary");

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x0080 (0x00A8 - 0x0028)
class UPlayMontageCallbackProxy final : public UObject
{
public:
	FMulticastInlineDelegateProperty_             OnCompleted;                                       // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnBlendOut;                                        // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnInterrupted;                                     // 0x0048(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnNotifyBegin;                                     // 0x0058(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnNotifyEnd;                                       // 0x0068(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1153[0x30];                                    // 0x0078(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);

	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnNotifyEndReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayMontageCallbackProxy">();
	}
	static class UPlayMontageCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayMontageCallbackProxy>();
	}
};
static_assert(alignof(UPlayMontageCallbackProxy) == 0x000008, "Wrong alignment on UPlayMontageCallbackProxy");
static_assert(sizeof(UPlayMontageCallbackProxy) == 0x0000A8, "Wrong size on UPlayMontageCallbackProxy");
static_assert(offsetof(UPlayMontageCallbackProxy, OnCompleted) == 0x000028, "Member 'UPlayMontageCallbackProxy::OnCompleted' has a wrong offset!");
static_assert(offsetof(UPlayMontageCallbackProxy, OnBlendOut) == 0x000038, "Member 'UPlayMontageCallbackProxy::OnBlendOut' has a wrong offset!");
static_assert(offsetof(UPlayMontageCallbackProxy, OnInterrupted) == 0x000048, "Member 'UPlayMontageCallbackProxy::OnInterrupted' has a wrong offset!");
static_assert(offsetof(UPlayMontageCallbackProxy, OnNotifyBegin) == 0x000058, "Member 'UPlayMontageCallbackProxy::OnNotifyBegin' has a wrong offset!");
static_assert(offsetof(UPlayMontageCallbackProxy, OnNotifyEnd) == 0x000068, "Member 'UPlayMontageCallbackProxy::OnNotifyEnd' has a wrong offset!");

// Class AnimGraphRuntime.SequencerAnimationSupport
// 0x0000 (0x0028 - 0x0028)
class ISequencerAnimationSupport final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequencerAnimationSupport">();
	}
	static class ISequencerAnimationSupport* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISequencerAnimationSupport>();
	}
};
static_assert(alignof(ISequencerAnimationSupport) == 0x000008, "Wrong alignment on ISequencerAnimationSupport");
static_assert(sizeof(ISequencerAnimationSupport) == 0x000028, "Wrong size on ISequencerAnimationSupport");

}

