#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CH_Player_LABP_TPP_Loco_v2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C
// 0x2824 (0x2C24 - 0x0400)
class UCH_Player_LABP_TPP_Loco_v2_C : public UYPlayerCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4;                                     // 0x0408(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_2;                          // 0x0438(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_Root_3;                                     // 0x0550(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                            // 0x0580(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_Root_2;                                     // 0x0698(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x06C8(0x0158)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK;                                      // 0x0820(0x00F8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6;                    // 0x0918(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6;                    // 0x0938(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x0958(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x0980(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x09A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x09D0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x09F8(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x0AB8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x0AE0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x0B60(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10;                         // 0x0BE0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                             // 0x0C80(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x0CB0(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x0D70(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x0D98(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x0E18(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                          // 0x0E98(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                             // 0x0F38(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x0F68(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x0F90(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x0FC0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x1040(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x10C0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x1140(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x11C0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x11E8(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                          // 0x12A8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x1348(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1370(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x1398(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x1438(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x14D8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x1578(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x1618(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                             // 0x1648(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x16F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x1720(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x1748(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x1770(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x1798(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x17C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x17E8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x1868(0x0030)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2;                        // 0x1898(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x18E8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x1918(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x1940(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x1968(0x00E8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                    // 0x1A50(0x0020)
	struct FAnimNode_StrideWarp                        AnimGraphNode_StrideWarp_5;                               // 0x1A70(0x0190)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                    // 0x1C00(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x1C20(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                    // 0x1C50(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                    // 0x1C70(0x0020)
	struct FAnimNode_StrideWarp                        AnimGraphNode_StrideWarp_4;                               // 0x1C90(0x0190)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x1E20(0x0020)
	struct FAnimNode_StrideWarp                        AnimGraphNode_StrideWarp_3;                               // 0x1E40(0x0190)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x1FD0(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x1FF0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x20D8(0x00E8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x21C0(0x0020)
	struct FAnimNode_StrideWarp                        AnimGraphNode_StrideWarp_2;                               // 0x21E0(0x0190)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x2370(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x2390(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x2410(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x2430(0x0020)
	struct FAnimNode_StrideWarp                        AnimGraphNode_StrideWarp;                                 // 0x2450(0x0190)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x25E0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x2660(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x2700(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x27A0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x2840(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x2870(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x2920(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x2950(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x29D0(0x0030)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                          // 0x2A00(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x2A50(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x2A80(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x2B30(0x0030)
	class AYPlayerCharacter*                           ShooterChar;                                              // 0x2B60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              JumpUpNormalizedTime;                                     // 0x2B68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              JumpDownNormalizedTime;                                   // 0x2B6C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 BlendCurve_WalkPistol_Speed;                              // 0x2B70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DirectionBiasedForStrider;                                // 0x2B78(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsAccelerating;                                           // 0x2B7C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2B7D(0x0003) MISSED OFFSET
	int                                                CardinalDirection;                                        // 0x2B80(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       PlayerTuning_MaxWalkingSpeed_DTProperty;                  // 0x2B84(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2B8C(0x0004) MISSED OFFSET
	class UDataTable*                                  PlayerTuningDT;                                           // 0x2B90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PlayerTuning_MaxWalkingSpeed;                             // 0x2B98(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       PlayerTuning_SprintSpeedModifier_DTProperty;              // 0x2B9C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PlayerTuning_MaxSprintingSpeed;                           // 0x2BA4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PlayerTuning_MaxRunningSpeed;                             // 0x2BA8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimAlphaIdle;                                            // 0x2BAC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimSpeed_WalkF;                                          // 0x2BB0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimSpeed_WalkS;                                          // 0x2BB4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimSpeed_WalkB;                                          // 0x2BB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimAlphaWalk;                                            // 0x2BBC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimSpeed_RunF;                                           // 0x2BC0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimSpeed_RunS;                                           // 0x2BC4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimSpeed_RunB;                                           // 0x2BC8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimAlphaRun;                                             // 0x2BCC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimSpeed_SprintF;                                        // 0x2BD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimSpeed_SprintS;                                        // 0x2BD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimAlphaSprint;                                          // 0x2BD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StrideAlpha;                                              // 0x2BDC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StrideScaleWalk;                                          // 0x2BE0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StrideScaleRun;                                           // 0x2BE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StrideScaleSprint;                                        // 0x2BE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StrideScale;                                              // 0x2BEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpeedModifier_DirectionS;                                 // 0x2BF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpeedModifier_DirectionB;                                 // 0x2BF4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DirectionMultiplier;                                      // 0x2BF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2BFC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FloatCurve;                                               // 0x2C00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StrideScale_Test;                                         // 0x2C08(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TriggerAngle_Back;                                        // 0x2C0C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TriggerAngle_Side;                                        // 0x2C10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TurnInPlacePlayRate;                                      // 0x2C14(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              InitialJumpVelocity;                                      // 0x2C18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DirectionLastFrame;                                       // 0x2C1C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Direction;                                                // 0x2C20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C"));
		return ptr;
	}


	class UAnimMontage* GetDeathAnimationToPlay(const struct FYDealtDamageData& Tags);
	void TPP_UpperBody(const struct FPoseLink& UpperBody, struct FPoseLink* TPP_UpperBody);
	void TPP_Additive(const struct FPoseLink& Additive, struct FPoseLink* TPP_Additive);
	void TPP_Loco(struct FPoseLink* TPP_Loco);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void Fix_Backward_Direction();
	void StriderPluginUpdate();
	void StriderPluginSetup();
	void CalculateAnimAlphas();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_4F19F264473A83612C2B9693CAC15648();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_ABD7B2E54970289D1F0EA0B8A50A98B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_F456FC68416516296343F7A9FFFD921F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_BE0A5CE74C3526DAB44452AE70ADDCF6();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_709BEAE24FC11F21AF6587A6626C1F80();
	void BlueprintInitializeAnimation();
	void JumpLand();
	void BP_SetIsFirstPerson(bool firstPersonState);
	void BP_PlayWeaponState(EYWeaponPlayState State);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_BD7EDAAB48686E84B9CF2DA7E3A61B7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_D325670C4C015EE092A6DA8A95B292BC();
	void SetUnarmedMode(bool Unarmed);
	void DisableWeaponSway();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_B14D13034A0D0CD87B59968A21E5CB2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_B47CD1A541E2CFAE64B0B1923298DCA6();
	void UpdateRecallmesh(bool RecallState);
	void SendTurnDeltaOffsetToWeapon(float DYaw, float DPitch);
	void IsFirstPersonWeapon(bool IsFirstPerson);
	void WalkOut();
	void LightImpact();
	void ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
