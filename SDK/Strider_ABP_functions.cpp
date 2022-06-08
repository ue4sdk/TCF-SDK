// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Strider_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Strider_ABP.Strider_ABP_C.GetGoToRestAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetGoToRestAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetGoToRestAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetOutOfRestAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetOutOfRestAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetOutOfRestAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetScanAnimation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetScanAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetScanAnimation"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetBuffAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetBuffAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetBuffAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetBuffOutAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetBuffOutAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetBuffOutAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetDeathAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       deathHitInfo                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetDeathAnimationToPlay(const struct FYDealtDamageData& deathHitInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetDeathAnimationToPlay"));

	struct
	{
		struct FYDealtDamageData       deathHitInfo;
		class UAnimMontage*            ReturnValue;
	} params = {};

	params.deathHitInfo = deathHitInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetDodgeAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          maxAllowedDodgeDistance        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isToRight                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetDodgeAnimationToPlay(float maxAllowedDodgeDistance, bool isToRight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetDodgeAnimationToPlay"));

	struct
	{
		float                          maxAllowedDodgeDistance;
		bool                           isToRight;
		class UAnimMontage*            ReturnValue;
	} params = {};

	params.maxAllowedDodgeDistance = maxAllowedDodgeDistance;
	params.isToRight = isToRight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetExplosionAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetExplosionAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetExplosionAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetInterruptBuffAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetInterruptBuffAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetInterruptBuffAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetInterruptSummonAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetInterruptSummonAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetInterruptSummonAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetLeapForwardAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetLeapForwardAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetLeapForwardAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetMeleeAttackAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          distanceToTarget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            meleeArrayIndex                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAIMeleeAttackDefinition meleeAttack                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetMeleeAttackAnimationToPlay(float distanceToTarget, int meleeArrayIndex, const struct FYAIMeleeAttackDefinition& meleeAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetMeleeAttackAnimationToPlay"));

	struct
	{
		float                          distanceToTarget;
		int                            meleeArrayIndex;
		struct FYAIMeleeAttackDefinition meleeAttack;
		class UAnimMontage*            ReturnValue;
	} params = {};

	params.distanceToTarget = distanceToTarget;
	params.meleeArrayIndex = meleeArrayIndex;
	params.meleeAttack = meleeAttack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetMeleeDodgeBackAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetMeleeDodgeBackAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetMeleeDodgeBackAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetRangedAttackAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetRangedAttackAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetRangedAttackAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetReloadAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetReloadAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetReloadAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetSnipedAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetSnipedAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetSnipedAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetSpawnAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetSpawnAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetSpawnAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetSummonAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetSummonAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetSummonAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetSummonOutAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetSummonOutAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetSummonOutAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetTauntAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::GetTauntAnimationToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetTauntAnimationToPlay"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.GetTurnAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          desiredTurnAngle               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAIMontagePlayInfo     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor)

struct FYAIMontagePlayInfo UStrider_ABP_C::GetTurnAnimationToPlay(float desiredTurnAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.GetTurnAnimationToPlay"));

	struct
	{
		float                          desiredTurnAngle;
		struct FYAIMontagePlayInfo     ReturnValue;
	} params = {};

	params.desiredTurnAngle = desiredTurnAngle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.OnAttackPhaseStarted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYAIAttackComponent*     attackComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UStrider_ABP_C::OnAttackPhaseStarted(class UYAIAttackComponent* attackComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.OnAttackPhaseStarted"));

	struct
	{
		class UYAIAttackComponent*     attackComponent;
		bool                           ReturnValue;
	} params = {};

	params.attackComponent = attackComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.OnRangedAttackCancelled
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UStrider_ABP_C::OnRangedAttackCancelled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.OnRangedAttackCancelled"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.OnRangedAttackFire
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYAIAttackComponent*     attackComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UStrider_ABP_C::OnRangedAttackFire(class UYAIAttackComponent* attackComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.OnRangedAttackFire"));

	struct
	{
		class UYAIAttackComponent*     attackComponent;
		bool                           ReturnValue;
	} params = {};

	params.attackComponent = attackComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.OnStabilityThresholdReached
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       damageInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// struct FName                   stabilityIdentifier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   currentAIActionContext         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          yawRotationGoalWorldSpace      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           canBeInterruptedByDodge        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UStrider_ABP_C::OnStabilityThresholdReached(const struct FYDealtDamageData& damageInfo, const struct FName& stabilityIdentifier, const struct FName& currentAIActionContext, float* yawRotationGoalWorldSpace, bool* canBeInterruptedByDodge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.OnStabilityThresholdReached"));

	struct
	{
		struct FYDealtDamageData       damageInfo;
		struct FName                   stabilityIdentifier;
		struct FName                   currentAIActionContext;
		float                          yawRotationGoalWorldSpace;
		bool                           canBeInterruptedByDodge;
		class UAnimMontage*            ReturnValue;
	} params = {};

	params.damageInfo = damageInfo;
	params.stabilityIdentifier = stabilityIdentifier;
	params.currentAIActionContext = currentAIActionContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (yawRotationGoalWorldSpace != nullptr)
		*yawRotationGoalWorldSpace = params.yawRotationGoalWorldSpace;
	if (canBeInterruptedByDodge != nullptr)
		*canBeInterruptedByDodge = params.canBeInterruptedByDodge;

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.TriggerFlinchAnimation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       HitInfo                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UStrider_ABP_C::TriggerFlinchAnimation(const struct FYDealtDamageData& HitInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.TriggerFlinchAnimation"));

	struct
	{
		struct FYDealtDamageData       HitInfo;
		bool                           ReturnValue;
	} params = {};

	params.HitInfo = HitInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Strider_ABP.Strider_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UStrider_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function Strider_ABP.Strider_ABP_C.IsInObservantState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsObservant                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStrider_ABP_C::IsInObservantState(bool* IsObservant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.IsInObservantState"));

	struct
	{
		bool                           IsObservant;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsObservant != nullptr)
		*IsObservant = params.IsObservant;
}


// Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_2D323DB14A601AC335CD77A1327116F9
// (FUNC_BlueprintEvent)

void UStrider_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_2D323DB14A601AC335CD77A1327116F9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_2D323DB14A601AC335CD77A1327116F9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_932DAF274A48F5DF52FEAB94BC9B0242
// (FUNC_BlueprintEvent)

void UStrider_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_932DAF274A48F5DF52FEAB94BC9B0242()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_932DAF274A48F5DF52FEAB94BC9B0242"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_EA573F454A381AD3E4670380C2573289
// (FUNC_BlueprintEvent)

void UStrider_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_EA573F454A381AD3E4670380C2573289()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_EA573F454A381AD3E4670380C2573289"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_07555C1D4274F92F7E3496BB1A810A48
// (FUNC_BlueprintEvent)

void UStrider_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_07555C1D4274F92F7E3496BB1A810A48()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_07555C1D4274F92F7E3496BB1A810A48"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_59156283410FDC8A6FB793B729E9076D
// (FUNC_BlueprintEvent)

void UStrider_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_59156283410FDC8A6FB793B729E9076D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_59156283410FDC8A6FB793B729E9076D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_BlendListByBool_397C4742456D502C0B5299A65976C619
// (FUNC_BlueprintEvent)

void UStrider_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_BlendListByBool_397C4742456D502C0B5299A65976C619()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_BlendListByBool_397C4742456D502C0B5299A65976C619"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_BlendListByBool_179BBE1A4FE7F76C5027D799A5AFDD66
// (FUNC_BlueprintEvent)

void UStrider_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_BlendListByBool_179BBE1A4FE7F76C5027D799A5AFDD66()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_BlendListByBool_179BBE1A4FE7F76C5027D799A5AFDD66"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_92CF45E84502C80827C9838450CB2EAA
// (FUNC_BlueprintEvent)

void UStrider_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_92CF45E84502C80827C9838450CB2EAA()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_92CF45E84502C80827C9838450CB2EAA"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_445553E94C5C3BA4DF031CBB9062AE5E
// (FUNC_BlueprintEvent)

void UStrider_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_445553E94C5C3BA4DF031CBB9062AE5E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_445553E94C5C3BA4DF031CBB9062AE5E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.PlayAnimationMontage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAIMontagePlayInfo     montageInfo                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UStrider_ABP_C::PlayAnimationMontage(const struct FYAIMontagePlayInfo& montageInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.PlayAnimationMontage"));

	struct
	{
		struct FYAIMontagePlayInfo     montageInfo;
	} params = {};

	params.montageInfo = montageInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_EFD3DDD241BA26BB4107AD828B8490FB
// (FUNC_BlueprintEvent)

void UStrider_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_EFD3DDD241BA26BB4107AD828B8490FB()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_EFD3DDD241BA26BB4107AD828B8490FB"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_C1EFDB3E49D7480D36779E80AFF73CFC
// (FUNC_BlueprintEvent)

void UStrider_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_C1EFDB3E49D7480D36779E80AFF73CFC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Strider_ABP_AnimGraphNode_TransitionResult_C1EFDB3E49D7480D36779E80AFF73CFC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStrider_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params = {};

	params.DeltaTimeX = DeltaTimeX;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Strider_ABP.Strider_ABP_C.ExecuteUbergraph_Strider_ABP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStrider_ABP_C::ExecuteUbergraph_Strider_ABP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Strider_ABP.Strider_ABP_C.ExecuteUbergraph_Strider_ABP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
