// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_Powerup_Configurator_BP_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetDrawDebugLineColor"));

	struct
	{
		struct FCoreUObject_FColor     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAA_Powerup_Configurator_BP_C::GetDebugDescription()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AAA_Powerup_Configurator_BP_C::GetDrawDebugLineTo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetDrawDebugLineTo"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.HideAllPowerupActors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::HideAllPowerupActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.HideAllPowerupActors"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.UpdateNonVariationEntries
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::UpdateNonVariationEntries()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.UpdateNonVariationEntries"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnRep_CurrentVariation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::OnRep_CurrentVariation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnRep_CurrentVariation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnRep_IsConfiguratorInitiated
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::OnRep_IsConfiguratorInitiated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnRep_IsConfiguratorInitiated"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.RandomVariatonSelect
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            RandomVariation                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::RandomVariatonSelect(int* RandomVariation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.RandomVariatonSelect"));

	struct
	{
		int                            RandomVariation;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (RandomVariation != nullptr)
		*RandomVariation = params.RandomVariation;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TransferResetActorsToNewConfigSetup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::TransferResetActorsToNewConfigSetup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TransferResetActorsToNewConfigSetup"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.VariationSwitchUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            variation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::VariationSwitchUpdate(int variation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.VariationSwitchUpdate"));

	struct
	{
		int                            variation;
	} params;

	params.variation = variation;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetActorsCurrentVariation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TMap<class AActor*, struct FString> PowerupActorsAll               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            variation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class AActor*>          PowerupActorsVariation         (CPF_Parm, CPF_OutParm)

void AAA_Powerup_Configurator_BP_C::GetActorsCurrentVariation(TMap<class AActor*, struct FString> PowerupActorsAll, int variation, TArray<class AActor*>* PowerupActorsVariation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetActorsCurrentVariation"));

	struct
	{
		TMap<class AActor*, struct FString> PowerupActorsAll;
		int                            variation;
		TArray<class AActor*>          PowerupActorsVariation;
	} params;

	params.PowerupActorsAll = PowerupActorsAll;
	params.variation = variation;

	UObject::ProcessEvent(fn, &params);

	if (PowerupActorsVariation != nullptr)
		*PowerupActorsVariation = params.PowerupActorsVariation;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.CachePowerupActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsSuccess                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ErrorMessage                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::CachePowerupActor(class AActor* Actor, bool* IsSuccess, struct FString* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.CachePowerupActor"));

	struct
	{
		class AActor*                  Actor;
		bool                           IsSuccess;
		struct FString                 ErrorMessage;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.HighlightCurrentConfig
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::HighlightCurrentConfig()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.HighlightCurrentConfig"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.RefreshConfig
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::RefreshConfig()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.RefreshConfig"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ClearCurrentConfig
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::ClearCurrentConfig()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ClearCurrentConfig"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.BP_CheckForErrors
// (FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMapErrorInfo          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FYMapErrorInfo AAA_Powerup_Configurator_BP_C::BP_CheckForErrors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.BP_CheckForErrors"));

	struct
	{
		struct FYMapErrorInfo          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.Log Initialization
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::Log_Initialization()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.Log Initialization"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetPowerUpID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PowerUpID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::GetPowerUpID(struct FString* PowerUpID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetPowerUpID"));

	struct
	{
		struct FString                 PowerUpID;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PowerUpID != nullptr)
		*PowerUpID = params.PowerUpID;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ResetPowerUpActors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::ResetPowerUpActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ResetPowerUpActors"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TryReset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Reset                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Powerup_Configurator_BP_C::TryReset(bool* Reset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TryReset"));

	struct
	{
		bool                           Reset;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Reset != nullptr)
		*Reset = params.Reset;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetPlayerReferenceLocationActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::GetPlayerReferenceLocationActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.GetPlayerReferenceLocationActor"));

	struct
	{
		class AActor*                  Actor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnDoorIsOpenChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ADoorBase_BP_C*          Door                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::OnDoorIsOpenChanged_Event_1(class ADoorBase_BP_C* Door)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnDoorIsOpenChanged_Event_1"));

	struct
	{
		class ADoorBase_BP_C*          Door;
	} params;

	params.Door = Door;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TryTriggerReset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::TryTriggerReset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TryTriggerReset"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TryRegister
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::TryRegister()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.TryRegister"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnActivitiesSpawned_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Powerup_Configurator_BP_C::OnActivitiesSpawned_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.OnActivitiesSpawned_Event_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.DEBUG-OnConfigUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewVariationUpdate             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::DEBUG_OnConfigUpdate(int NewVariationUpdate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.DEBUG-OnConfigUpdate"));

	struct
	{
		int                            NewVariationUpdate;
	} params;

	params.NewVariationUpdate = NewVariationUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.BndEvt__AA_Powerup_Configurator_BP_MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AAA_Powerup_Configurator_BP_C::BndEvt__AA_Powerup_Configurator_BP_MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.BndEvt__AA_Powerup_Configurator_BP_MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params;

	params.newMatchPhaseData = newMatchPhaseData;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ExecuteUbergraph_AA_Powerup_Configurator_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Powerup_Configurator_BP_C::ExecuteUbergraph_AA_Powerup_Configurator_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C.ExecuteUbergraph_AA_Powerup_Configurator_BP"));

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
