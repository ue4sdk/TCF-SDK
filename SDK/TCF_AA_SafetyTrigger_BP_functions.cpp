// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_SafetyTrigger_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnRep_IsActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::OnRep_IsActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnRep_IsActive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnRep_IsInteractable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::OnRep_IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnRep_IsInteractable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnSwitchActivate-TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::OnSwitchActivate_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnSwitchActivate-TL__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnSwitchActivate-TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::OnSwitchActivate_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnSwitchActivate-TL__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.SetIsOwnerPowered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPowered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_SafetyTrigger_BP_C::SetIsOwnerPowered(bool IsPowered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.SetIsOwnerPowered"));

	struct
	{
		bool                           IsPowered;
	} params;

	params.IsPowered = IsPowered;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           perfectInteraction             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_SafetyTrigger_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer, bool perfectInteraction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature"));

	struct
	{
		EYInteractionType              interactionType;
		class AYPlayerController_Match* interactingPlayer;
		bool                           perfectInteraction;
	} params;

	params.interactionType = interactionType;
	params.interactingPlayer = interactingPlayer;
	params.perfectInteraction = perfectInteraction;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.TriggerEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::TriggerEnded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.TriggerEnded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.FX-TriggerStarted
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::FX_TriggerStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.FX-TriggerStarted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.FX-TriggerEnded
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::FX_TriggerEnded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.FX-TriggerEnded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.FX-TriggerAlmostEnded
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::FX_TriggerAlmostEnded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.FX-TriggerAlmostEnded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.BndEvt__YDamage_K2Node_ComponentBoundEvent_0_YTakeDamageEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AAA_SafetyTrigger_BP_C::BndEvt__YDamage_K2Node_ComponentBoundEvent_0_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.BndEvt__YDamage_K2Node_ComponentBoundEvent_0_YTakeDamageEvent__DelegateSignature"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.FX-OnActivateAnim
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::FX_OnActivateAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.FX-OnActivateAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.FX-OnDeActivateAnim
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::FX_OnDeActivateAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.FX-OnDeActivateAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnRelevantToPowerup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_SafetyTrigger_BP_C::OnRelevantToPowerup(bool TRUE)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnRelevantToPowerup"));

	struct
	{
		bool                           TRUE;
	} params;

	params.TRUE = TRUE;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.ExecuteUbergraph_AA_SafetyTrigger_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_SafetyTrigger_BP_C::ExecuteUbergraph_AA_SafetyTrigger_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.ExecuteUbergraph_AA_SafetyTrigger_BP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnTriggerEnded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::OnTriggerEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnTriggerEnded__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnTriggerStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_SafetyTrigger_BP_C::OnTriggerStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C.OnTriggerStarted__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
