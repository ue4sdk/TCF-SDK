// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_Powerup_Configurator_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AAA_Powerup_Configurator_BP_C::GetDrawDebugLineColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetDrawDebugLineColor"));

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


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAA_Powerup_Configurator_BP_C::GetDebugDescription()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetDebugDescription"));

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


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AAA_Powerup_Configurator_BP_C::GetDrawDebugLineTo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetDrawDebugLineTo"));

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


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.PlayersNearby
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPlayerNearby                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Powerup_Configurator_BP_C::PlayersNearby(bool* IsPlayerNearby)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.PlayersNearby"));

	struct
	{
		bool                           IsPlayerNearby;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsPlayerNearby != nullptr)
		*IsPlayerNearby = params.IsPlayerNearby;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.HideAllPowerupActors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::HideAllPowerupActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.HideAllPowerupActors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.UpdateNonVariationEntries
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::UpdateNonVariationEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.UpdateNonVariationEntries"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnRep_CurrentVariation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::OnRep_CurrentVariation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnRep_CurrentVariation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnRep_IsConfiguratorInitiated
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::OnRep_IsConfiguratorInitiated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnRep_IsConfiguratorInitiated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.RandomVariatonSelect
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            RandomVariation                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::RandomVariatonSelect(int* RandomVariation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.RandomVariatonSelect"));

	struct
	{
		int                            RandomVariation;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomVariation != nullptr)
		*RandomVariation = params.RandomVariation;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TransferResetActorsToNewConfigSetup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::TransferResetActorsToNewConfigSetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TransferResetActorsToNewConfigSetup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.VariationSwitchUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            variation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::VariationSwitchUpdate(int variation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.VariationSwitchUpdate"));

	struct
	{
		int                            variation;
	} params = {};

	params.variation = variation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetActorsCurrentVariation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TMap<class AActor*, struct FString> PowerupActorsAll               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            variation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class AActor*>          PowerupActorsVariation         (CPF_Parm, CPF_OutParm)

void AAA_Powerup_Configurator_BP_C::GetActorsCurrentVariation(TMap<class AActor*, struct FString> PowerupActorsAll, int variation, TArray<class AActor*>* PowerupActorsVariation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetActorsCurrentVariation"));

	struct
	{
		TMap<class AActor*, struct FString> PowerupActorsAll;
		int                            variation;
		TArray<class AActor*>          PowerupActorsVariation;
	} params = {};

	params.PowerupActorsAll = PowerupActorsAll;
	params.variation = variation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PowerupActorsVariation != nullptr)
		*PowerupActorsVariation = params.PowerupActorsVariation;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.CachePowerupActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isSuccess                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 errorMessage                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::CachePowerupActor(class AActor* Actor, bool* isSuccess, struct FString* errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.CachePowerupActor"));

	struct
	{
		class AActor*                  Actor;
		bool                           isSuccess;
		struct FString                 errorMessage;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (isSuccess != nullptr)
		*isSuccess = params.isSuccess;
	if (errorMessage != nullptr)
		*errorMessage = params.errorMessage;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.HighlightCurrentConfig
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::HighlightCurrentConfig()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.HighlightCurrentConfig"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.RefreshConfig
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::RefreshConfig()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.RefreshConfig"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ClearCurrentConfig
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::ClearCurrentConfig()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ClearCurrentConfig"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.BP_CheckForErrors
// (FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMapErrorInfo          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FYMapErrorInfo AAA_Powerup_Configurator_BP_C::BP_CheckForErrors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.BP_CheckForErrors"));

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


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.Log Initialization
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::Log_Initialization()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.Log Initialization"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetPowerUpID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PowerUpID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::GetPowerUpID(struct FString* PowerUpID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetPowerUpID"));

	struct
	{
		struct FString                 PowerUpID;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PowerUpID != nullptr)
		*PowerUpID = params.PowerUpID;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ResetPowerUpActors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::ResetPowerUpActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ResetPowerUpActors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TryReset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Reset                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Powerup_Configurator_BP_C::TryReset(bool* Reset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TryReset"));

	struct
	{
		bool                           Reset;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Reset != nullptr)
		*Reset = params.Reset;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetPlayerReferenceLocationActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::GetPlayerReferenceLocationActor(class AActor** Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetPlayerReferenceLocationActor"));

	struct
	{
		class AActor*                  Actor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnDoorIsOpenChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ADoorBase_BP_C*          Door                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::OnDoorIsOpenChanged_Event_1(class ADoorBase_BP_C* Door)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnDoorIsOpenChanged_Event_1"));

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


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TryTriggerReset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::TryTriggerReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TryTriggerReset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TryRegister
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::TryRegister()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TryRegister"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnActivitiesSpawned_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::OnActivitiesSpawned_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnActivitiesSpawned_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.DEBUG-OnConfigUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewVariationUpdate             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::DEBUG_OnConfigUpdate(int NewVariationUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.DEBUG-OnConfigUpdate"));

	struct
	{
		int                            NewVariationUpdate;
	} params = {};

	params.NewVariationUpdate = NewVariationUpdate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.BndEvt__AA_Powerup_Configurator_BP_MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AAA_Powerup_Configurator_BP_C::BndEvt__AA_Powerup_Configurator_BP_MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.BndEvt__AA_Powerup_Configurator_BP_MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params = {};

	params.newMatchPhaseData = newMatchPhaseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ExecuteUbergraph_AA_Powerup_Configurator_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::ExecuteUbergraph_AA_Powerup_Configurator_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ExecuteUbergraph_AA_Powerup_Configurator_BP"));

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
