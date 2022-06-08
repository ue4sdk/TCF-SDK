#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Rattler_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Rattler_ABP.Rattler_ABP_C
// 0x1BE8 (0x1EF8 - 0x0310)
class URattler_ABP_C : public UYAICharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0318(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x0370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x0398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x03C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x03E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0460(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x0488(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x0508(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8;                         // 0x0538(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                          // 0x0620(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7;                         // 0x06D0(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x07B8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                         // 0x0858(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                         // 0x0940(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x0A28(0x0030)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x0A58(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0B08(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0B88(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0C08(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0C38(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x0CB8(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x0CE8(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x0DD0(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x0E80(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x0F68(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x1008(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x10F0(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x11D8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1208(0x00B0)
	struct FAnimNode_PowerIK_Ground                    AnimGraphNode_PowerIK_Ground;                             // 0x12B8(0x0390)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x1648(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x1668(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x1688(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x17E0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x1808(0x0028)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt;                                     // 0x1830(0x01B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x19E0(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1A80(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1AA0(0x0020)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                             // 0x1AC0(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x1AD8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x1B98(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x1BE0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x1D38(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1D60(0x00A0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x1E00(0x0018)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1E18(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1EB8(0x0028)
	class UAnimMontage*                                DeathMontage;                                             // 0x1EE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         TurnAnimationRow;                                         // 0x1EE8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass Rattler_ABP.Rattler_ABP_C"));
		return ptr;
	}


	class UAnimMontage* GetGoToRestAnimationToPlay();
	class UAnimMontage* GetOutOfRestAnimationToPlay();
	class UAnimMontage* GetScanAnimation();
	class UAnimMontage* GetBuffAnimationToPlay();
	class UAnimMontage* GetBuffOutAnimationToPlay();
	class UAnimMontage* GetDeathAnimationToPlay(const struct FYDealtDamageData& deathHitInfo);
	class UAnimMontage* GetDodgeAnimationToPlay(float maxAllowedDodgeDistance, bool isToRight);
	class UAnimMontage* GetExplosionAnimationToPlay();
	class UAnimMontage* GetInterruptBuffAnimationToPlay();
	class UAnimMontage* GetInterruptSummonAnimationToPlay();
	class UAnimMontage* GetLeapForwardAnimationToPlay();
	class UAnimMontage* GetMeleeAttackAnimationToPlay(float distanceToTarget, int meleeArrayIndex, const struct FYAIMeleeAttackDefinition& meleeAttack);
	class UAnimMontage* GetMeleeDodgeBackAnimationToPlay();
	class UAnimMontage* GetRangedAttackAnimationToPlay();
	class UAnimMontage* GetReloadAnimationToPlay();
	class UAnimMontage* GetSnipedAnimationToPlay();
	class UAnimMontage* GetSpawnAnimationToPlay();
	class UAnimMontage* GetSummonAnimationToPlay();
	class UAnimMontage* GetSummonOutAnimationToPlay();
	class UAnimMontage* GetTauntAnimationToPlay();
	struct FYAIMontagePlayInfo GetTurnAnimationToPlay(float desiredTurnAngle);
	bool OnAttackPhaseStarted(class UYAIAttackComponent* attackComponent);
	bool OnRangedAttackCancelled();
	bool OnRangedAttackFire(class UYAIAttackComponent* attackComponent);
	class UAnimMontage* OnStabilityThresholdReached(const struct FYDealtDamageData& damageInfo, const struct FName& stabilityIdentifier, const struct FName& currentAIActionContext, float* yawRotationGoalWorldSpace, bool* canBeInterruptedByDodge);
	bool TriggerFlinchAnimation(const struct FYDealtDamageData& HitInfo);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_57C5B68042FCD98880045EA5188D0BC2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_BlendListByBool_1B43607C4C90B89A40E8339A216C782B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_BlendListByBool_B3C4BE39470F17A2664006873B68344D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_C8A06CFE43876ACBAA4D408078C544C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_DD5E8CB74B49B83D4EC2059BCF856B44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_5286633A41396FB9BBA915BC75588094();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_F3A7A1C247CB4F8720A9E5BB48E5708F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_235220A0453E2675F5C031BE48D3CC8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_F78E44B74D2946DA46139A8D4E09E52F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_BE798170481C04A68BDC74BAE9ED3C6A();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void PlayAnimationMontage(const struct FYAIMontagePlayInfo& montageInfo);
	void ExecuteUbergraph_Rattler_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
