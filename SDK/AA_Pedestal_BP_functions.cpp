// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_Pedestal_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_Pedestal_BP.AA_Pedestal_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAA_Pedestal_BP_C::GetDebugDescription()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AAA_Pedestal_BP_C::GetDrawDebugLineColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.GetDrawDebugLineColor"));

	struct
	{
		struct FCoreUObject_FColor     ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AAA_Pedestal_BP_C::GetDrawDebugLineTo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.GetDrawDebugLineTo"));

	struct
	{
		struct FVector                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.LocalCarriesBattery
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           TRUE                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Pedestal_BP_C::LocalCarriesBattery(bool* TRUE)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.LocalCarriesBattery"));

	struct
	{
		bool                           TRUE;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TRUE != nullptr)
		*TRUE = params.TRUE;
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnRep_LootRoomProgressInt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::OnRep_LootRoomProgressInt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnRep_LootRoomProgressInt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.UpdateBatteryStatusOnConnections
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::UpdateBatteryStatusOnConnections()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.UpdateBatteryStatusOnConnections"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnRep_IsLocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::OnRep_IsLocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnRep_IsLocked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.UpdateConnectedCables
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Pedestal_BP_C::UpdateConnectedCables(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.UpdateConnectedCables"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnRep_PlacedBattery
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::OnRep_PlacedBattery()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnRep_PlacedBattery"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.HasBatteryVisualization
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasBattery                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Pedestal_BP_C::HasBatteryVisualization(bool HasBattery)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.HasBatteryVisualization"));

	struct
	{
		bool                           HasBattery;
	} params = {};

	params.HasBattery = HasBattery;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.TL - BatteryPlaced__FinishedFunc
// (FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::TL___BatteryPlaced__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.TL - BatteryPlaced__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.TL - BatteryPlaced__UpdateFunc
// (FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::TL___BatteryPlaced__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.TL - BatteryPlaced__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.TL - BatteryPlaced__PFX-Event__EventFunc
// (FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::TL___BatteryPlaced__PFX_Event__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.TL - BatteryPlaced__PFX-Event__EventFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.TL-BatteryLock__FinishedFunc
// (FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::TL_BatteryLock__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.TL-BatteryLock__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.TL-BatteryLock__UpdateFunc
// (FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::TL_BatteryLock__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.TL-BatteryLock__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.TL-BatteryLock__FX-Event__EventFunc
// (FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::TL_BatteryLock__FX_Event__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.TL-BatteryLock__FX-Event__EventFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnLootRoomPowered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::OnLootRoomPowered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnLootRoomPowered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.FX-OnBatteryPlaced
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::FX_OnBatteryPlaced()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.FX-OnBatteryPlaced"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.FX-OnBatteryRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::FX_OnBatteryRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.FX-OnBatteryRemoved"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.FX-OnBatteryLocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::FX_OnBatteryLocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.FX-OnBatteryLocked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.FX-OnPowered
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::FX_OnPowered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.FX-OnPowered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.FX-OnPowerLost
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::FX_OnPowerLost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.FX-OnPowerLost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.FX-OnLootRoomUnlocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::FX_OnLootRoomUnlocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.FX-OnLootRoomUnlocked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Pedestal_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature"));

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


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.TrySpawnBattery
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::TrySpawnBattery()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.TrySpawnBattery"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.PlaceBattery
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAA_PowerUpBattery_BP_C* Battery                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Pedestal_BP_C::PlaceBattery(class AAA_PowerUpBattery_BP_C* Battery)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.PlaceBattery"));

	struct
	{
		class AAA_PowerUpBattery_BP_C* Battery;
	} params = {};

	params.Battery = Battery;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.TryToPlaceBattery
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Pedestal_BP_C::TryToPlaceBattery(class APlayerController* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.TryToPlaceBattery"));

	struct
	{
		class APlayerController*       Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnBatteryPickedUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::OnBatteryPickedUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnBatteryPickedUp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.UpdateIsInteractableStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::UpdateIsInteractableStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.UpdateIsInteractableStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.LockPedestal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::LockPedestal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.LockPedestal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.SpawnNewCable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::SpawnNewCable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.SpawnNewCable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.ResetPowerUpActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::ResetPowerUpActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.ResetPowerUpActor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.UnlockPedestal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::UnlockPedestal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.UnlockPedestal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.BndEvt__Collider-AutoInsert_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AAA_Pedestal_BP_C::BndEvt__Collider_AutoInsert_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.BndEvt__Collider-AutoInsert_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.BndEvt__Collider-AutoInsert_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Pedestal_BP_C::BndEvt__Collider_AutoInsert_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.BndEvt__Collider-AutoInsert_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnPowerStatusChanges
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPowered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Pedestal_BP_C::OnPowerStatusChanges(bool IsPowered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnPowerStatusChanges"));

	struct
	{
		bool                           IsPowered;
	} params = {};

	params.IsPowered = IsPowered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnPoweredProgressionLootRoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PoweredConnectionsInt          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Pedestal_BP_C::OnPoweredProgressionLootRoom(int PoweredConnectionsInt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnPoweredProgressionLootRoom"));

	struct
	{
		int                            PoweredConnectionsInt;
	} params = {};

	params.PoweredConnectionsInt = PoweredConnectionsInt;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.BndEvt__AA_Pedestal_BP_PowerUpComponent_K2Node_ComponentBoundEvent_3_OnConfiguratorInitiated__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::BndEvt__AA_Pedestal_BP_PowerUpComponent_K2Node_ComponentBoundEvent_3_OnConfiguratorInitiated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.BndEvt__AA_Pedestal_BP_PowerUpComponent_K2Node_ComponentBoundEvent_3_OnConfiguratorInitiated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.FindCosmeticPowerActors
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::FindCosmeticPowerActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.FindCosmeticPowerActors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnRelevantToPowerup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Pedestal_BP_C::OnRelevantToPowerup(bool TRUE)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnRelevantToPowerup"));

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


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.UpdateEmissiveValues
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::UpdateEmissiveValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.UpdateEmissiveValues"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.BndEvt__AA_Pedestal_BP_YLocalPlayerProximity_K2Node_ComponentBoundEvent_4_OnPlayerClose__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::BndEvt__AA_Pedestal_BP_YLocalPlayerProximity_K2Node_ComponentBoundEvent_4_OnPlayerClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.BndEvt__AA_Pedestal_BP_YLocalPlayerProximity_K2Node_ComponentBoundEvent_4_OnPlayerClose__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.BndEvt__AA_Pedestal_BP_YLocalPlayerProximity_K2Node_ComponentBoundEvent_5_OnPlayerNotCloseAnymore__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::BndEvt__AA_Pedestal_BP_YLocalPlayerProximity_K2Node_ComponentBoundEvent_5_OnPlayerNotCloseAnymore__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.BndEvt__AA_Pedestal_BP_YLocalPlayerProximity_K2Node_ComponentBoundEvent_5_OnPlayerNotCloseAnymore__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.UpdateNearbyPlayerInteractable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Pedestal_BP_C::UpdateNearbyPlayerInteractable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.UpdateNearbyPlayerInteractable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.ExecuteUbergraph_AA_Pedestal_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Pedestal_BP_C::ExecuteUbergraph_AA_Pedestal_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.ExecuteUbergraph_AA_Pedestal_BP"));

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


// Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnBatteryPlaced__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AAA_Pedestal_BP_C*       Pedestal                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Pedestal_BP_C::OnBatteryPlaced__DelegateSignature(class APlayerController* Player, class AAA_Pedestal_BP_C* Pedestal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Pedestal_BP.AA_Pedestal_BP_C.OnBatteryPlaced__DelegateSignature"));

	struct
	{
		class APlayerController*       Player;
		class AAA_Pedestal_BP_C*       Pedestal;
	} params = {};

	params.Player = Player;
	params.Pedestal = Pedestal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
