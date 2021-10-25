#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AB_Turret_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Turret_ABP.AB_Turret_ABP_C
// 0x0368 (0x0628 - 0x02C0)
class UAB_Turret_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x02F8(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0400(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0420(0x0080)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x04A0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x04E8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0508(0x0108)
	float                                              Pitch;                                                    // 0x0610(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Yaw;                                                      // 0x0614(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                SpawnAnimation;                                           // 0x0618(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                RangeattackAnimation;                                     // 0x0620(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass AB_Turret_ABP.AB_Turret_ABP_C"));
		return ptr;
	}


	class UAnimMontage* GetBuffAnimationToPlay();
	class UAnimMontage* GetBuffOutAnimationToPlay();
	class UAnimMontage* GetExplosionAnimationToPlay();
	class UAnimMontage* GetGoToRestAnimationToPlay();
	class UAnimMontage* GetInterruptBuffAnimationToPlay();
	class UAnimMontage* GetInterruptSummonAnimationToPlay();
	class UAnimMontage* GetLeapForwardAnimationToPlay();
	class UAnimMontage* GetMeleeDodgeBackAnimationToPlay();
	class UAnimMontage* GetOutOfRestAnimationToPlay();
	class UAnimMontage* GetReloadAnimationToPlay();
	class UAnimMontage* GetScanAnimation();
	class UAnimMontage* GetSnipedAnimationToPlay();
	class UAnimMontage* GetSummonAnimationToPlay();
	class UAnimMontage* GetSummonOutAnimationToPlay();
	class UAnimMontage* GetTauntAnimationToPlay();
	struct FYAIMontagePlayInfo GetTurnAnimationToPlay(float desiredTurnAngle);
	bool OnAttackPhaseStarted(class UYAIAttackComponent* attackComponent);
	bool OnRangedAttackCancelled();
	bool OnRangedAttackFire(class UYAIAttackComponent* attackComponent);
	class UAnimMontage* OnStabilityThresholdReached(const struct FYDealtDamageData& damageInfo, const struct FName& stabilityIdentifier, const struct FName& currentAIActionContext, float* yawRotationGoalWorldSpace, bool* canBeInterruptedByDodge);
	bool TriggerFlinchAnimation(const struct FYDealtDamageData& HitInfo);
	class UAnimMontage* GetDeathAnimationToPlay(const struct FYDealtDamageData& deathHitInfo);
	class UAnimMontage* GetDodgeAnimationToPlay(float maxAllowedDodgeDistance, bool isToRight);
	class UAnimMontage* GetMeleeAttackAnimationToPlay(float distanceToTarget, int meleeArrayIndex, const struct FYAIMeleeAttackDefinition& meleeAttack);
	class UAnimMontage* GetRangedAttackAnimationToPlay();
	class UAnimMontage* GetSpawnAnimationToPlay();
	void AnimGraph(struct FPoseLink* AnimGraph);
	void PlayAnimationMontage(const struct FYAIMontagePlayInfo& montageInfo);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Turret_ABP_AnimGraphNode_ModifyBone_BCDA0F2044B1ADC29B068D972E8D349D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Turret_ABP_AnimGraphNode_ModifyBone_978CF8A5471564F802222E9F449DC8E6();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_Turret_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
