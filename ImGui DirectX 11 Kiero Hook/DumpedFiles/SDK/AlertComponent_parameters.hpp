#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlertComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AlertComponent.AlertComponent_C.NearbyNoise__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct AlertComponent_C_NearbyNoise__DelegateSignature final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlertComponent_C_NearbyNoise__DelegateSignature) == 0x000004, "Wrong alignment on AlertComponent_C_NearbyNoise__DelegateSignature");
static_assert(sizeof(AlertComponent_C_NearbyNoise__DelegateSignature) == 0x00000C, "Wrong size on AlertComponent_C_NearbyNoise__DelegateSignature");
static_assert(offsetof(AlertComponent_C_NearbyNoise__DelegateSignature, Location) == 0x000000, "Member 'AlertComponent_C_NearbyNoise__DelegateSignature::Location' has a wrong offset!");

// Function AlertComponent.AlertComponent_C.ExecuteUbergraph_AlertComponent
// 0x02A8 (0x02A8 - 0x0000)
struct AlertComponent_C_ExecuteUbergraph_AlertComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_204F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ANPC_Guard_C*                           CallFunc_GetActorOfClass_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2050[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2051[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Alert_reason;                   // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APoliceWaveSpawner_C*                   CallFunc_GetActorOfClass_ReturnValue_1;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2052[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGuardmanager_C*                        CallFunc_GetActorOfClass_ReturnValue_2;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2053[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_max_distance;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_MustBeVisible_;                 // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2054[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2055[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Select_Default;                             // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2056[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAlarmBP_C*                             CallFunc_GetActorOfClass_ReturnValue_3;            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ANPC_Guard_C*>                   CallFunc_GetAllActorsOfClass_OutActors;            // 0x00A0(0x0010)(ReferenceParm)
	class ANPC_Guard_C*                           CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2057[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAlarmBP_C*                             CallFunc_GetActorOfClass_ReturnValue_4;            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2058[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ANPC_Guard_C*                           CallFunc_GetActorOfClass_ReturnValue_5;            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2059[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ANPC_Guard_C*                           CallFunc_FindClosestGuard_Guard;                   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FindClosestGuard_Distance_to;             // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_205A[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGuardmanager_C*                        CallFunc_GetActorOfClass_ReturnValue_6;            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_205B[0x2];                                     // 0x00FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAlertComponent_C*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0110(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors;      // 0x0128(0x0010)(ReferenceParm)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0138(0x0010)(ConstParm, ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0150(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_205C[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IAlarmInterface_C>     K2Node_DynamicCast_AsAlarm_Interface;              // 0x01E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_205D[0x1];                                     // 0x01F3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0208(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0214(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0220(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_205E[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x025C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0268(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_205F[0x2];                                     // 0x027A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_AlertLocation;                  // 0x027C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANPC_Guard_C*                           CallFunc_FindClosestGuardOnPath_ClosestGuard;      // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FindClosestGuardOnPath_Distance;          // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2060[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAlertComponent_C*                      CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AlertComponent_C_ExecuteUbergraph_AlertComponent) == 0x000008, "Wrong alignment on AlertComponent_C_ExecuteUbergraph_AlertComponent");
static_assert(sizeof(AlertComponent_C_ExecuteUbergraph_AlertComponent) == 0x0002A8, "Wrong size on AlertComponent_C_ExecuteUbergraph_AlertComponent");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, EntryPoint) == 0x000000, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetActorOfClass_ReturnValue) == 0x000008, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, Temp_int_Array_Index_Variable) == 0x000018, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, Temp_int_Loop_Counter_Variable_1) == 0x00001C, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, Temp_bool_IsClosed_Variable) == 0x000024, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, Temp_bool_Has_Been_Initd_Variable) == 0x000025, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, Temp_int_Array_Index_Variable_1) == 0x000028, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, Temp_bool_IsClosed_Variable_1) == 0x00002C, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, Temp_bool_Has_Been_Initd_Variable_1) == 0x00002D, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, Temp_bool_Variable) == 0x00002E, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, K2Node_CustomEvent_Alert_reason) == 0x000030, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::K2Node_CustomEvent_Alert_reason' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetActorOfClass_ReturnValue_1) == 0x000040, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetActorOfClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetActorOfClass_ReturnValue_2) == 0x000050, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetActorOfClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, Temp_bool_Has_Been_Initd_Variable_2) == 0x000058, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, K2Node_CustomEvent_max_distance) == 0x00005C, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::K2Node_CustomEvent_max_distance' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, K2Node_CustomEvent_MustBeVisible_) == 0x000060, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::K2Node_CustomEvent_MustBeVisible_' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, K2Node_CustomEvent_Location) == 0x000064, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetOwner_ReturnValue) == 0x000070, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000078, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00007C, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, K2Node_Select_Default) == 0x000088, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetActorOfClass_ReturnValue_3) == 0x000098, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetActorOfClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetAllActorsOfClass_OutActors) == 0x0000A0, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_Array_Length_ReturnValue) == 0x0000B8, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetActorOfClass_ReturnValue_4) == 0x0000C0, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetActorOfClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_Less_IntInt_ReturnValue) == 0x0000C8, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetActorOfClass_ReturnValue_5) == 0x0000D0, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetActorOfClass_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, Temp_bool_IsClosed_Variable_2) == 0x0000D8, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_IsValid_ReturnValue_2) == 0x0000D9, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_FindClosestGuard_Guard) == 0x0000E0, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_FindClosestGuard_Guard' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_FindClosestGuard_Distance_to) == 0x0000E8, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_FindClosestGuard_Distance_to' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetActorOfClass_ReturnValue_6) == 0x0000F0, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetActorOfClass_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_IsValid_ReturnValue_3) == 0x0000F8, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_IsValid_ReturnValue_4) == 0x0000F9, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000FC, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetComponentByClass_ReturnValue) == 0x000108, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000110, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetOwner_ReturnValue_1) == 0x000120, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetAllActorsWithInterface_OutActors) == 0x000128, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetAllActorsWithInterface_OutActors' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, K2Node_MakeArray_Array) == 0x000138, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_Array_Get_Item_1) == 0x000148, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_LineTraceSingle_OutHit) == 0x000150, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_LineTraceSingle_ReturnValue) == 0x0001D8, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, K2Node_DynamicCast_AsAlarm_Interface) == 0x0001E0, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::K2Node_DynamicCast_AsAlarm_Interface' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, K2Node_DynamicCast_bSuccess) == 0x0001F0, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_bBlockingHit) == 0x0001F1, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001F2, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_Time) == 0x0001F4, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_Distance) == 0x0001F8, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_Location) == 0x0001FC, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_ImpactPoint) == 0x000208, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_Normal) == 0x000214, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_ImpactNormal) == 0x000220, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_PhysMat) == 0x000230, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_HitActor) == 0x000238, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_HitComponent) == 0x000240, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_HitBoneName) == 0x000248, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_HitItem) == 0x000250, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_ElementIndex) == 0x000254, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_FaceIndex) == 0x000258, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_TraceStart) == 0x00025C, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_BreakHitResult_TraceEnd) == 0x000268, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_Array_Length_ReturnValue_1) == 0x000274, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000278, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_Less_IntInt_ReturnValue_1) == 0x000279, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, K2Node_CustomEvent_AlertLocation) == 0x00027C, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::K2Node_CustomEvent_AlertLocation' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_FindClosestGuardOnPath_ClosestGuard) == 0x000288, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_FindClosestGuardOnPath_ClosestGuard' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_FindClosestGuardOnPath_Distance) == 0x000290, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_FindClosestGuardOnPath_Distance' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000298, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_IsValid_ReturnValue_5) == 0x0002A0, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_ExecuteUbergraph_AlertComponent, CallFunc_IsValid_ReturnValue_6) == 0x0002A1, "Member 'AlertComponent_C_ExecuteUbergraph_AlertComponent::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");

// Function AlertComponent.AlertComponent_C.AlertNearestGuard
// 0x000C (0x000C - 0x0000)
struct AlertComponent_C_AlertNearestGuard final
{
public:
	struct FVector                                AlertLocation;                                     // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlertComponent_C_AlertNearestGuard) == 0x000004, "Wrong alignment on AlertComponent_C_AlertNearestGuard");
static_assert(sizeof(AlertComponent_C_AlertNearestGuard) == 0x00000C, "Wrong size on AlertComponent_C_AlertNearestGuard");
static_assert(offsetof(AlertComponent_C_AlertNearestGuard, AlertLocation) == 0x000000, "Member 'AlertComponent_C_AlertNearestGuard::AlertLocation' has a wrong offset!");

// Function AlertComponent.AlertComponent_C.AlertNearbyGuards
// 0x0014 (0x0014 - 0x0000)
struct AlertComponent_C_AlertNearbyGuards final
{
public:
	float                                         Max_distance;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MustBeVisible_;                                    // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2061[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlertComponent_C_AlertNearbyGuards) == 0x000004, "Wrong alignment on AlertComponent_C_AlertNearbyGuards");
static_assert(sizeof(AlertComponent_C_AlertNearbyGuards) == 0x000014, "Wrong size on AlertComponent_C_AlertNearbyGuards");
static_assert(offsetof(AlertComponent_C_AlertNearbyGuards, Max_distance) == 0x000000, "Member 'AlertComponent_C_AlertNearbyGuards::Max_distance' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_AlertNearbyGuards, MustBeVisible_) == 0x000004, "Member 'AlertComponent_C_AlertNearbyGuards::MustBeVisible_' has a wrong offset!");
static_assert(offsetof(AlertComponent_C_AlertNearbyGuards, Location) == 0x000008, "Member 'AlertComponent_C_AlertNearbyGuards::Location' has a wrong offset!");

// Function AlertComponent.AlertComponent_C.AlertAllGuards
// 0x0010 (0x0010 - 0x0000)
struct AlertComponent_C_AlertAllGuards final
{
public:
	class FString                                 Alert_reason;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AlertComponent_C_AlertAllGuards) == 0x000008, "Wrong alignment on AlertComponent_C_AlertAllGuards");
static_assert(sizeof(AlertComponent_C_AlertAllGuards) == 0x000010, "Wrong size on AlertComponent_C_AlertAllGuards");
static_assert(offsetof(AlertComponent_C_AlertAllGuards, Alert_reason) == 0x000000, "Member 'AlertComponent_C_AlertAllGuards::Alert_reason' has a wrong offset!");

}

