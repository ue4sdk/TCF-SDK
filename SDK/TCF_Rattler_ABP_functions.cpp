// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Rattler_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rattler_ABP.Rattler_ABP_C.GetGoToRestAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetGoToRestAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetGoToRestAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetOutOfRestAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetOutOfRestAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetOutOfRestAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetScanAnimation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetScanAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetScanAnimation"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetBuffAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetBuffAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetBuffAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetBuffOutAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetBuffOutAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetBuffOutAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetDeathAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       deathHitInfo                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetDeathAnimationToPlay(const struct FYDealtDamageData& deathHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetDeathAnimationToPlay"));

	struct
	{
		struct FYDealtDamageData       deathHitInfo;
		class UAnimMontage*            ReturnValue;
	} params;

	params.deathHitInfo = deathHitInfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetDodgeAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          maxAllowedDodgeDistance        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isToRight                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetDodgeAnimationToPlay(float maxAllowedDodgeDistance, bool isToRight)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetDodgeAnimationToPlay"));

	struct
	{
		float                          maxAllowedDodgeDistance;
		bool                           isToRight;
		class UAnimMontage*            ReturnValue;
	} params;

	params.maxAllowedDodgeDistance = maxAllowedDodgeDistance;
	params.isToRight = isToRight;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetExplosionAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetExplosionAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetExplosionAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetInterruptBuffAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetInterruptBuffAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetInterruptBuffAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetInterruptSummonAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetInterruptSummonAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetInterruptSummonAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetLeapForwardAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetLeapForwardAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetLeapForwardAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetMeleeAttackAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          distanceToTarget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            meleeArrayIndex                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAIMeleeAttackDefinition meleeAttack                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetMeleeAttackAnimationToPlay(float distanceToTarget, int meleeArrayIndex, const struct FYAIMeleeAttackDefinition& meleeAttack)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetMeleeAttackAnimationToPlay"));

	struct
	{
		float                          distanceToTarget;
		int                            meleeArrayIndex;
		struct FYAIMeleeAttackDefinition meleeAttack;
		class UAnimMontage*            ReturnValue;
	} params;

	params.distanceToTarget = distanceToTarget;
	params.meleeArrayIndex = meleeArrayIndex;
	params.meleeAttack = meleeAttack;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetMeleeDodgeBackAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetMeleeDodgeBackAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetMeleeDodgeBackAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetRangedAttackAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetRangedAttackAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetRangedAttackAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetReloadAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetReloadAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetReloadAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetSnipedAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetSnipedAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetSnipedAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetSpawnAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetSpawnAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetSpawnAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetSummonAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetSummonAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetSummonAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetSummonOutAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetSummonOutAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetSummonOutAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetTauntAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::GetTauntAnimationToPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetTauntAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.GetTurnAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          desiredTurnAngle               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAIMontagePlayInfo     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor)

struct FYAIMontagePlayInfo URattler_ABP_C::GetTurnAnimationToPlay(float desiredTurnAngle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.GetTurnAnimationToPlay"));

	struct
	{
		float                          desiredTurnAngle;
		struct FYAIMontagePlayInfo     ReturnValue;
	} params;

	params.desiredTurnAngle = desiredTurnAngle;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.OnAttackPhaseStarted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYAIAttackComponent*     attackComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool URattler_ABP_C::OnAttackPhaseStarted(class UYAIAttackComponent* attackComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.OnAttackPhaseStarted"));

	struct
	{
		class UYAIAttackComponent*     attackComponent;
		bool                           ReturnValue;
	} params;

	params.attackComponent = attackComponent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.OnRangedAttackCancelled
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool URattler_ABP_C::OnRangedAttackCancelled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.OnRangedAttackCancelled"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.OnRangedAttackFire
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYAIAttackComponent*     attackComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool URattler_ABP_C::OnRangedAttackFire(class UYAIAttackComponent* attackComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.OnRangedAttackFire"));

	struct
	{
		class UYAIAttackComponent*     attackComponent;
		bool                           ReturnValue;
	} params;

	params.attackComponent = attackComponent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.OnStabilityThresholdReached
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       damageInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// struct FName                   stabilityIdentifier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   currentAIActionContext         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          yawRotationGoalWorldSpace      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           canBeInterruptedByDodge        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* URattler_ABP_C::OnStabilityThresholdReached(const struct FYDealtDamageData& damageInfo, const struct FName& stabilityIdentifier, const struct FName& currentAIActionContext, float* yawRotationGoalWorldSpace, bool* canBeInterruptedByDodge)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.OnStabilityThresholdReached"));

	struct
	{
		struct FYDealtDamageData       damageInfo;
		struct FName                   stabilityIdentifier;
		struct FName                   currentAIActionContext;
		float                          yawRotationGoalWorldSpace;
		bool                           canBeInterruptedByDodge;
		class UAnimMontage*            ReturnValue;
	} params;

	params.damageInfo = damageInfo;
	params.stabilityIdentifier = stabilityIdentifier;
	params.currentAIActionContext = currentAIActionContext;

	UObject::ProcessEvent(fn, &params);

	if (yawRotationGoalWorldSpace != nullptr)
		*yawRotationGoalWorldSpace = params.yawRotationGoalWorldSpace;
	if (canBeInterruptedByDodge != nullptr)
		*canBeInterruptedByDodge = params.canBeInterruptedByDodge;

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.TriggerFlinchAnimation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       HitInfo                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool URattler_ABP_C::TriggerFlinchAnimation(const struct FYDealtDamageData& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.TriggerFlinchAnimation"));

	struct
	{
		struct FYDealtDamageData       HitInfo;
		bool                           ReturnValue;
	} params;

	params.HitInfo = HitInfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Rattler_ABP.Rattler_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void URattler_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function Rattler_ABP.Rattler_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_DD5E8CB74B49B83D4EC2059BCF856B44
// (FUNC_BlueprintEvent)

void URattler_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_DD5E8CB74B49B83D4EC2059BCF856B44()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_DD5E8CB74B49B83D4EC2059BCF856B44"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Rattler_ABP.Rattler_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_A3D5FBC440B33BAED4CC4CA547C30B55
// (FUNC_BlueprintEvent)

void URattler_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_A3D5FBC440B33BAED4CC4CA547C30B55()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_A3D5FBC440B33BAED4CC4CA547C30B55"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Rattler_ABP.Rattler_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_2A9EC70541D6C8F7624E5A9D801A82BC
// (FUNC_BlueprintEvent)

void URattler_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_2A9EC70541D6C8F7624E5A9D801A82BC()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_2A9EC70541D6C8F7624E5A9D801A82BC"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Rattler_ABP.Rattler_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_C8A06CFE43876ACBAA4D408078C544C4
// (FUNC_BlueprintEvent)

void URattler_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_C8A06CFE43876ACBAA4D408078C544C4()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_C8A06CFE43876ACBAA4D408078C544C4"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Rattler_ABP.Rattler_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URattler_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function Rattler_ABP.Rattler_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URattler_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.BlueprintInitializeAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Rattler_ABP.Rattler_ABP_C.PlayAnimationMontage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAIMontagePlayInfo     montageInfo                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void URattler_ABP_C::PlayAnimationMontage(const struct FYAIMontagePlayInfo& montageInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.PlayAnimationMontage"));

	struct
	{
		struct FYAIMontagePlayInfo     montageInfo;
	} params;

	params.montageInfo = montageInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function Rattler_ABP.Rattler_ABP_C.BlueprintBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URattler_ABP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.BlueprintBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Rattler_ABP.Rattler_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_504B61E44BA3AC28D4A2EF8D16877A3F
// (FUNC_BlueprintEvent)

void URattler_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_504B61E44BA3AC28D4A2EF8D16877A3F()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_504B61E44BA3AC28D4A2EF8D16877A3F"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Rattler_ABP.Rattler_ABP_C.TriggerScanVariant
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URattler_ABP_C::TriggerScanVariant()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.TriggerScanVariant"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Rattler_ABP.Rattler_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_5B3344A74AE406705060FFB2C9890A9D
// (FUNC_BlueprintEvent)

void URattler_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_5B3344A74AE406705060FFB2C9890A9D()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Rattler_ABP_AnimGraphNode_TransitionResult_5B3344A74AE406705060FFB2C9890A9D"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Rattler_ABP.Rattler_ABP_C.ExecuteUbergraph_Rattler_ABP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URattler_ABP_C::ExecuteUbergraph_Rattler_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Rattler_ABP.Rattler_ABP_C.ExecuteUbergraph_Rattler_ABP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
