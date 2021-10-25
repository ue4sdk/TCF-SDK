// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AICharacter_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AICharacter_Base_BP.AICharacter_Base_BP_C.ResetDefaultRotationRate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::ResetDefaultRotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.ResetDefaultRotationRate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.DesaturateMaterialOnDeath
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimingControl                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::DesaturateMaterialOnDeath(float TimingControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.DesaturateMaterialOnDeath");

	struct
	{
		float                          TimingControl;
	} params;

	params.TimingControl = TimingControl;

	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.SetContextMaterial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYAISpawnContexts              Context                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::SetContextMaterial(EYAISpawnContexts Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.SetContextMaterial");

	struct
	{
		EYAISpawnContexts              Context;
	} params;

	params.Context = Context;

	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.GetYAICtrl_Base
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AAICtrl_Base_BP_C*       AsAICtrl_Base_BP               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::GetYAICtrl_Base(class AAICtrl_Base_BP_C** AsAICtrl_Base_BP)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.GetYAICtrl_Base");

	struct
	{
		class AAICtrl_Base_BP_C*       AsAICtrl_Base_BP;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsAICtrl_Base_BP != nullptr)
		*AsAICtrl_Base_BP = params.AsAICtrl_Base_BP;
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.Timeline_Desaturation__FinishedFunc
// (FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::Timeline_Desaturation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.Timeline_Desaturation__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.Timeline_Desaturation__UpdateFunc
// (FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::Timeline_Desaturation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.Timeline_Desaturation__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_aiDataComponent_K2Node_ComponentBoundEvent_0_OnAIStateChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYAIState                      oldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYAIState                      currentState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::BndEvt__m_aiDataComponent_K2Node_ComponentBoundEvent_0_OnAIStateChangedSignature__DelegateSignature(EYAIState oldState, EYAIState currentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_aiDataComponent_K2Node_ComponentBoundEvent_0_OnAIStateChangedSignature__DelegateSignature");

	struct
	{
		EYAIState                      oldState;
		EYAIState                      currentState;
	} params;

	params.oldState = oldState;
	params.currentState = currentState;

	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.MulticastPlayBarkAudio
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseIdleBark                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAICharacter_Base_BP_C::MulticastPlayBarkAudio(bool UseIdleBark)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.MulticastPlayBarkAudio");

	struct
	{
		bool                           UseIdleBark;
	} params;

	params.UseIdleBark = UseIdleBark;

	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.OnDotStateChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           dotState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAICharacter_Base_BP_C::OnDotStateChanged_Event(bool dotState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.OnDotStateChanged_Event");

	struct
	{
		bool                           dotState;
	} params;

	params.dotState = dotState;

	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.FinishBuff
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::FinishBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.FinishBuff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffedEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::StartBuffedEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffedEffect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.CustomEvent_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffWarmup
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::StartBuffWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffWarmup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffInterrupt
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::StartBuffInterrupt()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartBuffInterrupt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.disableBuffVFXWhenHowlerDies
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYHealthComponent*       healthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::disableBuffVFXWhenHowlerDies(class UYHealthComponent* healthComponent, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.disableBuffVFXWhenHowlerDies");

	struct
	{
		class UYHealthComponent*       healthComponent;
		class AActor*                  Instigator;
	} params;

	params.healthComponent = healthComponent;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.FinishSummon
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::FinishSummon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.FinishSummon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartSummon
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::StartSummon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.StartSummon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.InterruptSummon
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::InterruptSummon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.InterruptSummon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           dotState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAICharacter_Base_BP_C::CustomEvent_2(bool dotState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.CustomEvent_2");

	struct
	{
		bool                           dotState;
	} params;

	params.dotState = dotState;

	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_1_OnDeathDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       damageData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference)

void AAICharacter_Base_BP_C::BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_1_OnDeathDelegate__DelegateSignature(const struct FYDealtDamageData& damageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_1_OnDeathDelegate__DelegateSignature");

	struct
	{
		struct FYDealtDamageData       damageData;
	} params;

	params.damageData = damageData;

	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.CustomEvent_3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.CustomEvent_3");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.OnProjectileSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::OnProjectileSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.OnProjectileSpawned");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_2_OnDeathDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYCharacterDeathComponent* deathComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_2_OnDeathDelegate__DelegateSignature(class UYCharacterDeathComponent* deathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_deathComponent_K2Node_ComponentBoundEvent_2_OnDeathDelegate__DelegateSignature");

	struct
	{
		class UYCharacterDeathComponent* deathComponent;
	} params;

	params.deathComponent = deathComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.CE_SetStencilValueOnAllRelevantMeshes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           RenderInStencil                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAICharacter_Base_BP_C::CE_SetStencilValueOnAllRelevantMeshes(bool RenderInStencil)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.CE_SetStencilValueOnAllRelevantMeshes");

	struct
	{
		bool                           RenderInStencil;
	} params;

	params.RenderInStencil = RenderInStencil;

	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.CE_DisableOutline
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::CE_DisableOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.CE_DisableOutline");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.CE_ExecuteOutlineFromPhaseChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICharacter_Base_BP_C::CE_ExecuteOutlineFromPhaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.CE_ExecuteOutlineFromPhaseChange");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AAICharacter_Base_BP_C::BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_1_YTakeDamageEvent__DelegateSignature");

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function AICharacter_Base_BP.AICharacter_Base_BP_C.ExecuteUbergraph_AICharacter_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICharacter_Base_BP_C::ExecuteUbergraph_AICharacter_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacter_Base_BP.AICharacter_Base_BP_C.ExecuteUbergraph_AICharacter_Base_BP");

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
