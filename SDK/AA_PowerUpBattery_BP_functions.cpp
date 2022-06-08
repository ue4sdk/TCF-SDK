// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_PowerUpBattery_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.PlayerValidCheck
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::PlayerValidCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.PlayerValidCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.BP_CheckForErrors
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMapErrorInfo          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FYMapErrorInfo AAA_PowerUpBattery_BP_C::BP_CheckForErrors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.BP_CheckForErrors"));

	struct
	{
		struct FYMapErrorInfo          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.UpdateIsProjectileMovementEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::UpdateIsProjectileMovementEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.UpdateIsProjectileMovementEnabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.UpdateIsInteractable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::UpdateIsInteractable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.UpdateIsInteractable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.OnRep_Status
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::OnRep_Status()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.OnRep_Status"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.BatteryLocked-TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::BatteryLocked_TL__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.BatteryLocked-TL__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.BatteryLocked-TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::BatteryLocked_TL__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.BatteryLocked-TL__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUpBattery_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature"));

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


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.OnBatteryPlacedOnPedestal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAA_Pedestal_BP_C*       Pedestrial                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              BatteryLocationTransform       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_PowerUpBattery_BP_C::OnBatteryPlacedOnPedestal(class AAA_Pedestal_BP_C* Pedestrial, const struct FTransform& BatteryLocationTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.OnBatteryPlacedOnPedestal"));

	struct
	{
		class AAA_Pedestal_BP_C*       Pedestrial;
		struct FTransform              BatteryLocationTransform;
	} params = {};

	params.Pedestrial = Pedestrial;
	params.BatteryLocationTransform = BatteryLocationTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.OnBatteryResetTeleport
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::OnBatteryResetTeleport()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.OnBatteryResetTeleport"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.LockBattery
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::LockBattery()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.LockBattery"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.OnBatteryDropped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::OnBatteryDropped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.OnBatteryDropped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.StartedCarrying
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::StartedCarrying()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.StartedCarrying"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.ClientShowDebugLine
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 LineStart                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 LineEnd                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUpBattery_BP_C::ClientShowDebugLine(const struct FVector& LineStart, const struct FVector& LineEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.ClientShowDebugLine"));

	struct
	{
		struct FVector                 LineStart;
		struct FVector                 LineEnd;
	} params = {};

	params.LineStart = LineStart;
	params.LineEnd = LineEnd;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.ClientShowDebugSphere
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Center                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUpBattery_BP_C::ClientShowDebugSphere(const struct FVector& Center)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.ClientShowDebugSphere"));

	struct
	{
		struct FVector                 Center;
	} params = {};

	params.Center = Center;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.TryCancelReset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::TryCancelReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.TryCancelReset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.ResetBattery
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Reason                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AAA_PowerUpBattery_BP_C::ResetBattery(const struct FString& Reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.ResetBattery"));

	struct
	{
		struct FString                 Reason;
	} params = {};

	params.Reason = Reason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.UnlockBattery
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::UnlockBattery()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.UnlockBattery"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-StartTeleportWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::FX_StartTeleportWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-StartTeleportWarning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-OnTeleportWindup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::FX_OnTeleportWindup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-OnTeleportWindup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-OnTeleportIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::FX_OnTeleportIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-OnTeleportIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.BndEvt__YCarryableComponent_BP_K2Node_ComponentBoundEvent_1_OnStartedGettingCarried__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::BndEvt__YCarryableComponent_BP_K2Node_ComponentBoundEvent_1_OnStartedGettingCarried__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.BndEvt__YCarryableComponent_BP_K2Node_ComponentBoundEvent_1_OnStartedGettingCarried__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.BndEvt__YCarryableComponent_BP_K2Node_ComponentBoundEvent_3_OnStoppedGettingCarried__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::BndEvt__YCarryableComponent_BP_K2Node_ComponentBoundEvent_3_OnStoppedGettingCarried__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.BndEvt__YCarryableComponent_BP_K2Node_ComponentBoundEvent_3_OnStoppedGettingCarried__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-OnTeleportAway
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::FX_OnTeleportAway()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-OnTeleportAway"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.CheckBatteryDistance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::CheckBatteryDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.CheckBatteryDistance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.EmergencyTeleport
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::EmergencyTeleport()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.EmergencyTeleport"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-OnDropped
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::FX_OnDropped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-OnDropped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-OnPickedUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUpBattery_BP_C::FX_OnPickedUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-OnPickedUp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-OnLocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLockedIn                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_PowerUpBattery_BP_C::FX_OnLocked(bool IsLockedIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.FX-OnLocked"));

	struct
	{
		bool                           IsLockedIn;
	} params = {};

	params.IsLockedIn = IsLockedIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.ExecuteUbergraph_AA_PowerUpBattery_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUpBattery_BP_C::ExecuteUbergraph_AA_PowerUpBattery_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUpBattery_BP.AA_PowerUpBattery_BP_C.ExecuteUbergraph_AA_PowerUpBattery_BP"));

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
