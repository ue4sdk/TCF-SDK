// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AC_Uplink_HardDriveSlot_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.OnRep_HasHardDrive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_HardDriveSlot_BP_C::OnRep_HasHardDrive()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.OnRep_HasHardDrive"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.CanInteract
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CanInteract                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_HardDriveSlot_BP_C::CanInteract(class AYPlayerController_Match* interactingPlayer, bool* CanInteract)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.CanInteract"));

	struct
	{
		class AYPlayerController_Match* interactingPlayer;
		bool                           CanInteract;
	} params = {};

	params.interactingPlayer = interactingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanInteract != nullptr)
		*CanInteract = params.CanInteract;
}


// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_HardDriveSlot_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature"));

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


// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnObjectInteractionDetected__DelegateSignature
// (FUNC_BlueprintEvent)

void AAC_Uplink_HardDriveSlot_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnObjectInteractionDetected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnObjectInteractionDetected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.HardDriveEntered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_HardDriveSlot_BP_C::HardDriveEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.HardDriveEntered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.HardDriveRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_HardDriveSlot_BP_C::HardDriveRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.HardDriveRemoved"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.OnInteractSuccessfull
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_HardDriveSlot_BP_C::OnInteractSuccessfull()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.OnInteractSuccessfull"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.OnInteractFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_HardDriveSlot_BP_C::OnInteractFailed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.OnInteractFailed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.UnblockInteraction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_Uplink_HardDriveSlot_BP_C::UnblockInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.UnblockInteraction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.ExecuteUbergraph_AC_Uplink_HardDriveSlot_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_HardDriveSlot_BP_C::ExecuteUbergraph_AC_Uplink_HardDriveSlot_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.ExecuteUbergraph_AC_Uplink_HardDriveSlot_BP"));

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


// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.OnLookedAt__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanInteract                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_Uplink_HardDriveSlot_BP_C::OnLookedAt__DelegateSignature(bool CanInteract)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.OnLookedAt__DelegateSignature"));

	struct
	{
		bool                           CanInteract;
	} params = {};

	params.CanInteract = CanInteract;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.OnFailedInteract__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController_Match* PlayerInteracting              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_HardDriveSlot_BP_C::OnFailedInteract__DelegateSignature(class AYPlayerController_Match* PlayerInteracting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.OnFailedInteract__DelegateSignature"));

	struct
	{
		class AYPlayerController_Match* PlayerInteracting;
	} params = {};

	params.PlayerInteracting = PlayerInteracting;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.OnSuccessInteracted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_Uplink_HardDriveSlot_BP_C::OnSuccessInteracted__DelegateSignature(class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C.OnSuccessInteracted__DelegateSignature"));

	struct
	{
		class AYPlayerController_Match* interactingPlayer;
	} params = {};

	params.interactingPlayer = interactingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
