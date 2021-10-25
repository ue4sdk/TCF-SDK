// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BP_Door_Transition_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Door_Transition_BP.BP_Door_Transition_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           perfectInteraction             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_Door_Transition_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer, bool perfectInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_Transition_BP.BP_Door_Transition_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature");

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


// Function BP_Door_Transition_BP.BP_Door_Transition_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Door_Transition_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_Transition_BP.BP_Door_Transition_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Door_Transition_BP.BP_Door_Transition_BP_C.ExecuteUbergraph_BP_Door_Transition_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Door_Transition_BP_C::ExecuteUbergraph_BP_Door_Transition_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_Transition_BP.BP_Door_Transition_BP_C.ExecuteUbergraph_BP_Door_Transition_BP");

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
