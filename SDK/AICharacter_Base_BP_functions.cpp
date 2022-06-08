// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AICharacter_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AICharacter_Base_BP.AICharacter_Base_BP_C.ResetDefaultRotationRate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::ResetDefaultRotationRate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.ResetDefaultRotationRate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.DesaturateMaterialOnDeath
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimingControl                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::DesaturateMaterialOnDeath(float TimingControl)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.DesaturateMaterialOnDeath"));

	struct
	{
		float                          TimingControl;
	} params = {};

	params.TimingControl = TimingControl;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.GetYAICtrl_Base
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AAICtrl_Base_BP_C*       AsAICtrl_Base_BP               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::GetYAICtrl_Base(class AAICtrl_Base_BP_C** AsAICtrl_Base_BP)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.GetYAICtrl_Base"));

	struct
	{
		class AAICtrl_Base_BP_C*       AsAICtrl_Base_BP;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsAICtrl_Base_BP != nullptr)
		*AsAICtrl_Base_BP = params.AsAICtrl_Base_BP;
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.Timeline_Desaturation__FinishedFunc
// (FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::Timeline_Desaturation__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.Timeline_Desaturation__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.Timeline_Desaturation__UpdateFunc
// (FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::Timeline_Desaturation__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.Timeline_Desaturation__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_aiDataComponent_K2Node_ComponentBoundEvent_0_OnAIStateChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYAIState                      oldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYAIState                      currentState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::BndEvt__m_aiDataComponent_K2Node_ComponentBoundEvent_0_OnAIStateChangedSignature__DelegateSignature(EYAIState oldState, EYAIState currentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_aiDataComponent_K2Node_ComponentBoundEvent_0_OnAIStateChangedSignature__DelegateSignature"));

	struct
	{
		EYAIState                      oldState;
		EYAIState                      currentState;
	} params = {};

	params.oldState = oldState;
	params.currentState = currentState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.MulticastPlayBarkAudio
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseIdleBark                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAICharacter_Base_BP_C::MulticastPlayBarkAudio(bool UseIdleBark)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.MulticastPlayBarkAudio"));

	struct
	{
		bool                           UseIdleBark;
	} params = {};

	params.UseIdleBark = UseIdleBark;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffedEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::StartBuffedEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffedEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.OnPerkChangedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::OnPerkChangedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.OnPerkChangedEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffWarmup
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::StartBuffWarmup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffWarmup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffInterrupt
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::StartBuffInterrupt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffInterrupt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.disableBuffVFXWhenHowlerDies
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYHealthComponent*       healthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::disableBuffVFXWhenHowlerDies(class UYHealthComponent* healthComponent, class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.disableBuffVFXWhenHowlerDies"));

	struct
	{
		class UYHealthComponent*       healthComponent;
		class AActor*                  Instigator;
	} params = {};

	params.healthComponent = healthComponent;
	params.Instigator = Instigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartSummon
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::StartSummon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartSummon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.InterruptSummon
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::InterruptSummon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.InterruptSummon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_1_OnDeathDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       damageData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference)

void AAICharacter_Base_BP_C::BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_1_OnDeathDelegate__DelegateSignature(const struct FYDealtDamageData& damageData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_1_OnDeathDelegate__DelegateSignature"));

	struct
	{
		struct FYDealtDamageData       damageData;
	} params = {};

	params.damageData = damageData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.BP_OnProjectileSpawnedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::BP_OnProjectileSpawnedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.BP_OnProjectileSpawnedEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.OnProjectileSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::OnProjectileSpawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.OnProjectileSpawned"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_2_OnDeathDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYCharacterDeathComponent* deathComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_2_OnDeathDelegate__DelegateSignature(class UYCharacterDeathComponent* deathComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_2_OnDeathDelegate__DelegateSignature"));

	struct
	{
		class UYCharacterDeathComponent* deathComponent;
	} params = {};

	params.deathComponent = deathComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.ExecuteUbergraph_AICharacter_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::ExecuteUbergraph_AICharacter_Base_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICharacter_Base_BP.AICharacter_Base_BP_C.ExecuteUbergraph_AICharacter_Base_BP"));

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
