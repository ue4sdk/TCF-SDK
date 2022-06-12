// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_MonsterNest_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.SetCanInteract
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_MonsterNest_BP_C::SetCanInteract(bool TRUE)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.SetCanInteract"));

	struct
	{
		bool                           TRUE;
	} params = {};

	params.TRUE = TRUE;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.SpawnLoot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MonsterNest_BP_C::SpawnLoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.SpawnLoot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.TryCreatePlateWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_MonsterNest_BP_C::TryCreatePlateWidget(bool* success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.TryCreatePlateWidget"));

	struct
	{
		bool                           success;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (success != nullptr)
		*success = params.success;
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.RemovePlateWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MonsterNest_BP_C::RemovePlateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.RemovePlateWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.OnRep_BaitPlaced
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MonsterNest_BP_C::OnRep_BaitPlaced()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.OnRep_BaitPlaced"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MonsterNest_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MonsterNest_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature"));

	struct
	{
		EYInteractionType              interactionType;
		class AYPlayerController_Match* interactingPlayer;
	} params = {};

	params.interactionType = interactionType;
	params.interactingPlayer = interactingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.SpawnBoss
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MonsterNest_BP_C::SpawnBoss()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.SpawnBoss"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.BndEvt__YLocalPlayerProximity_K2Node_ComponentBoundEvent_5_OnPlayerClose__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_MonsterNest_BP_C::BndEvt__YLocalPlayerProximity_K2Node_ComponentBoundEvent_5_OnPlayerClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.BndEvt__YLocalPlayerProximity_K2Node_ComponentBoundEvent_5_OnPlayerClose__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.BndEvt__YLocalPlayerProximity_K2Node_ComponentBoundEvent_6_OnPlayerNotCloseAnymore__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_MonsterNest_BP_C::BndEvt__YLocalPlayerProximity_K2Node_ComponentBoundEvent_6_OnPlayerNotCloseAnymore__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.BndEvt__YLocalPlayerProximity_K2Node_ComponentBoundEvent_6_OnPlayerNotCloseAnymore__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_MonsterNest_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.CheckAndSetInteractionEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MonsterNest_BP_C::CheckAndSetInteractionEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.CheckAndSetInteractionEnabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.SpawnGuardians
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MonsterNest_BP_C::SpawnGuardians()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.SpawnGuardians"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.BossSpawnFX
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MonsterNest_BP_C::BossSpawnFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.BossSpawnFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.ExecuteUbergraph_AA_MonsterNest_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MonsterNest_BP_C::ExecuteUbergraph_AA_MonsterNest_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_MonsterNest_BP.AA_MonsterNest_BP_C.ExecuteUbergraph_AA_MonsterNest_BP"));

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
