#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_CH_PlayerStation_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CH_PlayerStation_ABP.CH_PlayerStation_ABP_C
// 0x2B4A (0x2E9A - 0x0350)
class UCH_PlayerStation_ABP_C : public UYPlayerCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x0358(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x0380(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x04D8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x0500(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x0580(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x0600(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x0680(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                          // 0x0700(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                          // 0x07A0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x0840(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x08E0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x0980(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                             // 0x09B0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7;                                     // 0x0A60(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x0AA8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6;                                     // 0x0AD0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x0B18(0x0158)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x0C70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x0C98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x0CC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x0CE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x0D10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x0D38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x0D60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x0D88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0DB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0DD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0E00(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x0E28(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7;                         // 0x0EA8(0x00C0)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_2;                      // 0x0F68(0x00F0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x1058(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x1088(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x1108(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x1188(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                         // 0x1228(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x1310(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x13F8(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x1498(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x1560(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x1648(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x1678(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x1728(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x17C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x17F8(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6;                         // 0x1878(0x00C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x1938(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x1A20(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x1A50(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                         // 0x1AD0(0x00C0)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator;                        // 0x1B90(0x00F0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x1C80(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1CB0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                         // 0x1D30(0x00C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x1DF0(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1ED8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1F08(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5;                                     // 0x1FB8(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2;                 // 0x2000(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x2190(0x0190)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x2320(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                     // 0x23C0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x2408(0x0028)
	struct FAnimNode_Root                              AnimGraphNode_Root_2;                                     // 0x2430(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                     // 0x2460(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x24A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x24F0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x2538(0x00C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3;                             // 0x25F8(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x2610(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x26D0(0x00C0)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x2790(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x27C0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x28C8(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x28E8(0x00A0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                             // 0x2988(0x0018)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x29A0(0x0108)
	struct FAnimNode_LinkedAnimLayer                   AnimGraphNode_LinkedAnimLayer;                            // 0x2AA8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x2B58(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x2B78(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x2B98(0x0108)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x2CA0(0x0018)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x2CB8(0x0020)
	float                                              FinterpDeltaPitch;                                        // 0x2CD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FinterpDeltaYaw;                                          // 0x2CDC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsAiming;                                                 // 0x2CE0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2CE1(0x0003) MISSED OFFSET
	float                                              LowerbodyBlend;                                           // 0x2CE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DoRotationReset;                                          // 0x2CE8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2CE9(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x2CEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsJumping;                                                // 0x2CF0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsCrouching;                                              // 0x2CF1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x2CF2(0x0002) MISSED OFFSET
	float                                              Direction;                                                // 0x2CF4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DeltaWorldRotationYaw;                                    // 0x2CF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsSprintng;                                               // 0x2CFC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               doJump;                                                   // 0x2CFD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x2];                                       // 0x2CFE(0x0002) MISSED OFFSET
	float                                              JumpTime;                                                 // 0x2D00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AimPitch;                                                 // 0x2D04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AimPitchMultiplier;                                       // 0x2D08(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    DeltaWorldRotation;                                       // 0x2D0C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isHacking;                                                // 0x2D18(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x2D19(0x0007) MISSED OFFSET
	class UAnimMontage*                                AbilityMontage;                                           // 0x2D20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    InitialRotationYaw;                                       // 0x2D28(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    CurrentRotationYaw;                                       // 0x2D34(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    CurrentRotationPitch;                                     // 0x2D40(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              DeltaTimeX;                                               // 0x2D4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AYPlayerCharacter*                           ShooterChar;                                              // 0x2D50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DeltaSpeed;                                               // 0x2D58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpeedZ;                                                   // 0x2D5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DeltaSpeedInterp;                                         // 0x2D60(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CrouchAlpha;                                              // 0x2D64(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    AimRotation;                                              // 0x2D68(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    DeltaRotationYaw;                                         // 0x2D74(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              AimYaw;                                                   // 0x2D80(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    DeltaRotationPitch;                                       // 0x2D84(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsRunOnDedicatedServer;                                   // 0x2D90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2D91(0x0003) MISSED OFFSET
	float                                              IKAlpha;                                                  // 0x2D94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     RHandIKEffector;                                          // 0x2D98(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LHandEffector;                                            // 0x2DA4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LHAndEffectorInterp;                                      // 0x2DB0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     RHandEffectorInterp;                                      // 0x2DBC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IKHandEnabled;                                            // 0x2DC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	EYEquipedWeaponPoseType                            EquipedPoseType;                                          // 0x2DC9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsDedicatedServer;                                        // 0x2DCA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x1];                                       // 0x2DCB(0x0001) MISSED OFFSET
	float                                              AimposeAlpha;                                             // 0x2DCC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ForceFullbody;                                            // 0x2DD0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2DD1(0x0007) MISSED OFFSET
	class UAnimMontage*                                EmoteVariable;                                            // 0x2DD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsSliding;                                                // 0x2DE0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2DE1(0x0003) MISSED OFFSET
	float                                              _3rdPLegIK;                                               // 0x2DE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               isEmoting;                                                // 0x2DE8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	EYEquipedAnimationWeaponType                       EquipedWeaponType;                                        // 0x2DE9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData09[0x2];                                       // 0x2DEA(0x0002) MISSED OFFSET
	float                                              JumpSpeedZ;                                               // 0x2DEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              InitialJumpVelocity;                                      // 0x2DF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EYDeviceCategory                                   EquipedDeviceCategory;                                    // 0x2DF4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               force3rdPLanding;                                         // 0x2DF5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsVehicle;                                                // 0x2DF6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x1];                                       // 0x2DF7(0x0001) MISSED OFFSET
	struct FRotator                                    Rotator;                                                  // 0x2DF8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    CapsuleRotation;                                          // 0x2E04(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    cameraPawnDelta;                                          // 0x2E10(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData11[0x4];                                       // 0x2E1C(0x0004) MISSED OFFSET
	class UYPlayerMovementComponent*                   PlayerMoveComponent;                                      // 0x2E20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                DeathEmote;                                               // 0x2E28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsStation;                                                // 0x2E30(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2E31(0x0003) MISSED OFFSET
	float                                              DirectionFlipped;                                         // 0x2E34(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SlideTiltADSAlpha;                                        // 0x2E38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AdditiveAlphaFloat;                                       // 0x2E3C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYWeaponPlayerControllerRuntimeComponent*    WeaponRuntimeComponentRef;                                // 0x2E40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TurningDirection;                                         // 0x2E48(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FInterpDeltaSpringYaw;                                    // 0x2E4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FFloatSpringState                           YawSpringState;                                           // 0x2E50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               doJumpReset;                                              // 0x2E58(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData13[0x3];                                       // 0x2E59(0x0003) MISSED OFFSET
	float                                              FinterpDeltaSpringPitch;                                  // 0x2E5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FFloatSpringState                           PitchSpringState;                                         // 0x2E60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UYPlayerCharacterStateComponent*             CharStateComponent;                                       // 0x2E68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    CameraAim1PPRotator;                                      // 0x2E70(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    InvertedDeltaWorldRotation;                               // 0x2E7C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsIdle;                                                   // 0x2E88(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData14[0x3];                                       // 0x2E89(0x0003) MISSED OFFSET
	float                                              JumpUpNormTIme;                                           // 0x2E8C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              JumpDownNormTIme;                                         // 0x2E90(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TurnFinterpDeltaYaw;                                      // 0x2E94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsTurningLeft;                                            // 0x2E98(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsTurning;                                                // 0x2E99(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass CH_PlayerStation_ABP.CH_PlayerStation_ABP_C");
		return ptr;
	}


	class UAnimMontage* GetDeathAnimationToPlay(const struct FYDealtDamageData& Tags);
	void _3rdP(struct FPoseLink* _3rdP);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetIsTurning();
	void ClampInterpDelta(float Value, float* clampedValue);
	void SetAimAndDirectionVariables();
	void CalculateInterpolationValues();
	void SetLowerbodyBlend();
	void HandleAimOffsetRotationReset();
	void Set_Speed_And_Movement_Variables();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_FB5FF52B4CBB5BFE2E8FEB9BB007AC06();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_01B14A5F4CC6BE4B19E1F483D0C01772();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_20E202D0442920CA857EFE824DEAE5E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_79CBEBF84887BD34EB7B97AF46533DDC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_35BA399A4E700EF7BEC0E9BB71C1D3D4();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void UpdateRecallmesh(bool RecallState);
	void AnimNotify_TurnIK_Off();
	void AnimNotify_TurnIK_On();
	void SendTurnDeltaOffsetToWeapon(float DYaw, float DPitch);
	void IsFirstPersonWeapon(bool IsFirstPerson);
	void DoPactWave();
	void OnPlayPactAccept();
	void OnPlayPactDeny();
	void OnPlayerStateAssigned(class AYPlayerState* PlayerState);
	void WalkOut();
	void AnimNotify_ForceFullbody();
	void AnimNotify_DisableForceFullbodz();
	void EmoteStop(bool interupted);
	void LightImpact();
	void OnJumped(int jumpCount);
	void jumpLand();
	void BindOnCommwheelUsed();
	void OnCommWheelUse(class UYCommWheelVOComponent* commWheelComponent, const struct FDataTableRowHandle& commWheelEntry);
	void SetUnarmedMode(bool Unarmed);
	void DoPointForward();
	void OnBannerStarted();
	void OnGlobalVanityEntryUpdatedDelegate_Event_1(TArray<EYVanityType> Types);
	void DisableWeaponSway();
	void BindOnEmoted();
	void OnEmoted(const struct FYGlobalVanityItem& usedEmote, class AActor* Instigator);
	void BP_SetIsFirstPerson(bool firstPersonState);
	void AnimNotify_Jumpreset();
	void AnimNotify_EnteredJumpStart();
	void ResetCounterRotation();
	void BP_PlayWeaponState(EYWeaponPlayState State);
	void ExecuteUbergraph_CH_PlayerStation_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
