#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Rattler_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Rattler_ABP.Rattler_ABP_C
// 0x1510 (0x17D0 - 0x02C0)
class URattler_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x03C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x03E8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0468(0x0030)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x0498(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x0548(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x0630(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x06D0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x07B8(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x08A0(0x0030)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x08D0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0980(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0A00(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0A80(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x0AB0(0x00B0)
	struct FAnimNode_PowerIK_Ground                    AnimGraphNode_PowerIK_Ground;                             // 0x0B60(0x0390)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x0EF0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x0F10(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x0F30(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x0F58(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x10B0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x10D8(0x0028)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt;                                     // 0x1100(0x01B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x12B0(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1350(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1370(0x0020)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                             // 0x1390(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x13A8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x1468(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x14B0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1608(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1630(0x00A0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x16D0(0x0018)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x16E8(0x00A0)
	float                                              Direction;                                                // 0x1788(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Speed;                                                    // 0x178C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AYAICharacter*                               CharacterAIOwner;                                         // 0x1790(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               LookAtBool;                                               // 0x1798(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1799(0x0003) MISSED OFFSET
	struct FVector                                     LookAtTarget;                                             // 0x179C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      aiState;                                                  // 0x17A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Is_Dedicated_Server;                                      // 0x17A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x17AA(0x0002) MISSED OFFSET
	float                                              LookAtDistance;                                           // 0x17AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                DeathMontage;                                             // 0x17B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PlayScanVariant;                                          // 0x17B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x17B9(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         TurnAnimationRow;                                         // 0x17C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_DD5E8CB74B49B83D4EC2059BCF856B44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_A3D5FBC440B33BAED4CC4CA547C30B55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_2A9EC70541D6C8F7624E5A9D801A82BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_C8A06CFE43876ACBAA4D408078C544C4();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void PlayAnimationMontage(const struct FYAIMontagePlayInfo& montageInfo);
	void BlueprintBeginPlay();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_504B61E44BA3AC28D4A2EF8D16877A3F();
	void TriggerScanVariant();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_5B3344A74AE406705060FFB2C9890A9D();
	void ExecuteUbergraph_Rattler_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
