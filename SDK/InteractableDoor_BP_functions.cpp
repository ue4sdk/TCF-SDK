// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InteractableDoor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InteractableDoor_BP.InteractableDoor_BP_C.DeductKeyDurability
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AInteractableDoor_BP_C::DeductKeyDurability(class AYPlayerController_Match* interactingPlayer, bool* success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.DeductKeyDurability"));

	struct
	{
		class AYPlayerController_Match* interactingPlayer;
		bool                           success;
	} params = {};

	params.interactingPlayer = interactingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (success != nullptr)
		*success = params.success;
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.OnRep_RequiresKey
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::OnRep_RequiresKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.OnRep_RequiresKey"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.CheckForKey
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  actorContext                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HasItemInInventory             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AInteractableDoor_BP_C::CheckForKey(class AActor* actorContext, bool* HasItemInInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.CheckForKey"));

	struct
	{
		class AActor*                  actorContext;
		bool                           HasItemInInventory;
	} params = {};

	params.actorContext = actorContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasItemInInventory != nullptr)
		*HasItemInInventory = params.HasItemInInventory;
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.PlayFXNotOpenableKeyPad
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::PlayFXNotOpenableKeyPad()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.PlayFXNotOpenableKeyPad"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.SetColorOfKeyPad
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IgnoreDoorState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AInteractableDoor_BP_C::SetColorOfKeyPad(bool IgnoreDoorState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.SetColorOfKeyPad"));

	struct
	{
		bool                           IgnoreDoorState;
	} params = {};

	params.IgnoreDoorState = IgnoreDoorState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.PanelAnimation_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::PanelAnimation_TL__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.PanelAnimation_TL__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.PanelAnimation_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::PanelAnimation_TL__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.PanelAnimation_TL__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AInteractableDoor_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature"));

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


// Function InteractableDoor_BP.InteractableDoor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnObjectInteractionDetected__DelegateSignature
// (FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnObjectInteractionDetected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnObjectInteractionDetected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.BndEvt__InteractableDoor_BP_YAreaStatusNotify_K2Node_ComponentBoundEvent_2_OnAreaRespawned__DelegateSignature
// (FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::BndEvt__InteractableDoor_BP_YAreaStatusNotify_K2Node_ComponentBoundEvent_2_OnAreaRespawned__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.BndEvt__InteractableDoor_BP_YAreaStatusNotify_K2Node_ComponentBoundEvent_2_OnAreaRespawned__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.PanelAnimation
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::PanelAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.PanelAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.HandleDoorAnimationStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ADoorBase_BP_C*          Door                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AInteractableDoor_BP_C::HandleDoorAnimationStarted(class ADoorBase_BP_C* Door)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.HandleDoorAnimationStarted"));

	struct
	{
		class ADoorBase_BP_C*          Door;
	} params = {};

	params.Door = Door;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.HandleDoorAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ADoorBase_BP_C*          Door                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AInteractableDoor_BP_C::HandleDoorAnimationFinished(class ADoorBase_BP_C* Door)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.HandleDoorAnimationFinished"));

	struct
	{
		class ADoorBase_BP_C*          Door;
	} params = {};

	params.Door = Door;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.PanelAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::PanelAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.PanelAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.DoorInteraction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::DoorInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.DoorInteraction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.PanelSound
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInteractableDoor_BP_C::PanelSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.PanelSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractableDoor_BP.InteractableDoor_BP_C.ExecuteUbergraph_InteractableDoor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AInteractableDoor_BP_C::ExecuteUbergraph_InteractableDoor_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractableDoor_BP.InteractableDoor_BP_C.ExecuteUbergraph_InteractableDoor_BP"));

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
