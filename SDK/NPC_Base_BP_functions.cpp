// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NPC_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NPC_Base_BP.NPC_Base_BP_C.SendBIStationInteractionEvent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ANPC_Base_BP_C::SendBIStationInteractionEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Base_BP.NPC_Base_BP_C.SendBIStationInteractionEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Base_BP.NPC_Base_BP_C.UpdateAnimDistanceTicking
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ANPC_Base_BP_C::UpdateAnimDistanceTicking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Base_BP.NPC_Base_BP_C.UpdateAnimDistanceTicking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Base_BP.NPC_Base_BP_C.OnRep_ShowcaseData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ANPC_Base_BP_C::OnRep_ShowcaseData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Base_BP.NPC_Base_BP_C.OnRep_ShowcaseData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Base_BP.NPC_Base_BP_C.onArchetypeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   archetypeId                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANPC_Base_BP_C::onArchetypeChanged(const struct FName& archetypeId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Base_BP.NPC_Base_BP_C.onArchetypeChanged"));

	struct
	{
		struct FName                   archetypeId;
	} params = {};

	params.archetypeId = archetypeId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Base_BP.NPC_Base_BP_C.BP_OnActiveCustomizationDataChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveCustomizationData newCustomizationData           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ANPC_Base_BP_C::BP_OnActiveCustomizationDataChanged(const struct FYActiveCustomizationData& newCustomizationData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Base_BP.NPC_Base_BP_C.BP_OnActiveCustomizationDataChanged"));

	struct
	{
		struct FYActiveCustomizationData newCustomizationData;
	} params = {};

	params.newCustomizationData = newCustomizationData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Base_BP.NPC_Base_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnPlayerInteractionStarted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANPC_Base_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnPlayerInteractionStarted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Base_BP.NPC_Base_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnPlayerInteractionStarted__DelegateSignature"));

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


// Function NPC_Base_BP.NPC_Base_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANPC_Base_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Base_BP.NPC_Base_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature"));

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


// Function NPC_Base_BP.NPC_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ANPC_Base_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Base_BP.NPC_Base_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Base_BP.NPC_Base_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANPC_Base_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Base_BP.NPC_Base_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Base_BP.NPC_Base_BP_C.UpdateDrawDistance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ANPC_Base_BP_C::UpdateDrawDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Base_BP.NPC_Base_BP_C.UpdateDrawDistance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NPC_Base_BP.NPC_Base_BP_C.ExecuteUbergraph_NPC_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANPC_Base_BP_C::ExecuteUbergraph_NPC_Base_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NPC_Base_BP.NPC_Base_BP_C.ExecuteUbergraph_NPC_Base_BP"));

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
