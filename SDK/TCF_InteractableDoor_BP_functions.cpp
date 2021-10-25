// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_InteractableDoor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InteractableDoor_BP.InteractableDoor_BP_C.OnRep_RequiresKey
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::OnRep_RequiresKey()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.OnRep_RequiresKey"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.CheckForKey
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  actorContext                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HasItemInInventory             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AInteractableDoor_BP_C::CheckForKey(class AActor* actorContext, bool* HasItemInInventory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.CheckForKey"));

	struct
	{
		class AActor*                  actorContext;
		bool                           HasItemInInventory;
	} params;

	params.actorContext = actorContext;

	UObject::ProcessEvent(fn, &params);

	if (HasItemInInventory != nullptr)
		*HasItemInInventory = params.HasItemInInventory;
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.PlayFXNotOpenableKeyPad
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::PlayFXNotOpenableKeyPad()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.PlayFXNotOpenableKeyPad"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.SetColorofKeyPad
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::SetColorofKeyPad()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.SetColorofKeyPad"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           perfectInteraction             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AInteractableDoor_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer, bool perfectInteraction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature"));

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


// Function InteractableDoor_BP.InteractableDoor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnObjectInteractionDetected__DelegateSignature
// (FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnObjectInteractionDetected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnObjectInteractionDetected__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.ExecuteUbergraph_InteractableDoor_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AInteractableDoor_BP_C::ExecuteUbergraph_InteractableDoor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.ExecuteUbergraph_InteractableDoor_BP"));

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
