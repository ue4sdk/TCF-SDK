// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_03_MatchPickUpAndEscape_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.GetSavegameParameters
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FString                 SlotName                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            UserIndex                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::GetSavegameParameters(struct FString* SlotName, int* UserIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.GetSavegameParameters"));

	struct
	{
		struct FString                 SlotName;
		int                            UserIndex;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SlotName != nullptr)
		*SlotName = params.SlotName;
	if (UserIndex != nullptr)
		*UserIndex = params.UserIndex;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.DebugLog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::DebugLog(const struct FString& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.DebugLog"));

	struct
	{
		struct FString                 Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.CheckPushToTalk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::CheckPushToTalk()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.CheckPushToTalk"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.AreContractsReadyToEndStep6
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractsUIData YActiveContractsUIData         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOnboarding_03_MatchPickUpAndEscape_C::AreContractsReadyToEndStep6(const struct FYActiveContractsUIData& YActiveContractsUIData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.AreContractsReadyToEndStep6"));

	struct
	{
		struct FYActiveContractsUIData YActiveContractsUIData;
		bool                           ReturnValue;
	} params = {};

	params.YActiveContractsUIData = YActiveContractsUIData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.PlayVOAfterFirstMatch
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           EscapedSucessfully             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsAnyContractComplete          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::PlayVOAfterFirstMatch(bool EscapedSucessfully, bool IsAnyContractComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.PlayVOAfterFirstMatch"));

	struct
	{
		bool                           EscapedSucessfully;
		bool                           IsAnyContractComplete;
	} params = {};

	params.EscapedSucessfully = EscapedSucessfully;
	params.IsAnyContractComplete = IsAnyContractComplete;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.AdjustLaunchTerminalTransformForMarker
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ActorTransform                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTransform              MarkerTransform                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::AdjustLaunchTerminalTransformForMarker(const struct FTransform& ActorTransform, struct FTransform* MarkerTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.AdjustLaunchTerminalTransformForMarker"));

	struct
	{
		struct FTransform              ActorTransform;
		struct FTransform              MarkerTransform;
	} params = {};

	params.ActorTransform = ActorTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MarkerTransform != nullptr)
		*MarkerTransform = params.MarkerTransform;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.IsAnyContractFromUIDataCompleted
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractsUIData YActiveContractsUIData         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           contractCompleted              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::IsAnyContractFromUIDataCompleted(const struct FYActiveContractsUIData& YActiveContractsUIData, bool* contractCompleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.IsAnyContractFromUIDataCompleted"));

	struct
	{
		struct FYActiveContractsUIData YActiveContractsUIData;
		bool                           contractCompleted;
	} params = {};

	params.YActiveContractsUIData = YActiveContractsUIData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (contractCompleted != nullptr)
		*contractCompleted = params.contractCompleted;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractsProgressUpdated
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractsProgress     contractsProgress              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_03_MatchPickUpAndEscape_C::OnContractsProgressUpdated(const struct FYContractsProgress& contractsProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractsProgressUpdated"));

	struct
	{
		struct FYContractsProgress     contractsProgress;
	} params = {};

	params.contractsProgress = contractsProgress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.SetHintDataOnAuthorithy
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActiveMarkerId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FTransform>      Transforms                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_03_MatchPickUpAndEscape_C::SetHintDataOnAuthorithy(const struct FName& ActiveMarkerId, TArray<struct FTransform>* Transforms)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.SetHintDataOnAuthorithy"));

	struct
	{
		struct FName                   ActiveMarkerId;
		TArray<struct FTransform>      Transforms;
	} params = {};

	params.ActiveMarkerId = ActiveMarkerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Transforms != nullptr)
		*Transforms = params.Transforms;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.GetCurrentContractData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYContractRow>   CurrentContractData            (CPF_Parm, CPF_OutParm)

void UOnboarding_03_MatchPickUpAndEscape_C::GetCurrentContractData(TArray<struct FYContractRow>* CurrentContractData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.GetCurrentContractData"));

	struct
	{
		TArray<struct FYContractRow>   CurrentContractData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CurrentContractData != nullptr)
		*CurrentContractData = params.CurrentContractData;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.IsContractItemInSafePocket
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Output_Get                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::IsContractItemInSafePocket(bool* Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.IsContractItemInSafePocket"));

	struct
	{
		bool                           Output_Get;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Faction Of Completed Contract
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           ContractFactionName            (CPF_Parm, CPF_OutParm)

void UOnboarding_03_MatchPickUpAndEscape_C::Get_Faction_Of_Completed_Contract(TArray<struct FName>* ContractFactionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Faction Of Completed Contract"));

	struct
	{
		TArray<struct FName>           ContractFactionName;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ContractFactionName != nullptr)
		*ContractFactionName = params.ContractFactionName;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.UnbindOnContractStatusChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::UnbindOnContractStatusChanged(const struct FScriptDelegate& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.UnbindOnContractStatusChanged"));

	struct
	{
		struct FScriptDelegate         Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.BindOnContractStatusChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::BindOnContractStatusChanged(const struct FScriptDelegate& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.BindOnContractStatusChanged"));

	struct
	{
		struct FScriptDelegate         Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Bind and Check if Contract Is Completed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::Bind_and_Check_if_Contract_Is_Completed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Bind and Check if Contract Is Completed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Check if Contract Has Been Completed
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 contractId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<int>                    currentProgress                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           isCompleted                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::Check_if_Contract_Has_Been_Completed(const struct FString& contractId, TArray<int>* currentProgress, bool* isCompleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Check if Contract Has Been Completed"));

	struct
	{
		struct FString                 contractId;
		TArray<int>                    currentProgress;
		bool                           isCompleted;
	} params = {};

	params.contractId = contractId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (currentProgress != nullptr)
		*currentProgress = params.currentProgress;
	if (isCompleted != nullptr)
		*isCompleted = params.isCompleted;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Faction NPC TransformOfActiveContracts
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTransform>      ActorTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm)
// bool                           FoundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::Get_Faction_NPC_TransformOfActiveContracts(TArray<struct FTransform> ActorTransform, bool* FoundActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Faction NPC TransformOfActiveContracts"));

	struct
	{
		TArray<struct FTransform>      ActorTransform;
		bool                           FoundActor;
	} params = {};

	params.ActorTransform = ActorTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundActor != nullptr)
		*FoundActor = params.FoundActor;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Launch Terminal Transform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              ActorTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           FoundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::Get_Launch_Terminal_Transform(const struct FTransform& ActorTransform, bool* FoundActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Launch Terminal Transform"));

	struct
	{
		struct FTransform              ActorTransform;
		bool                           FoundActor;
	} params = {};

	params.ActorTransform = ActorTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundActor != nullptr)
		*FoundActor = params.FoundActor;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnRep_EscapeTerminalTransforms
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::OnRep_EscapeTerminalTransforms()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnRep_EscapeTerminalTransforms"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.GetEscapeTerminalTransforms
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTransform>      EscapeTerminalTransforms       (CPF_Parm, CPF_OutParm)
// bool                           Output_Get                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::GetEscapeTerminalTransforms(TArray<struct FTransform>* EscapeTerminalTransforms, bool* Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.GetEscapeTerminalTransforms"));

	struct
	{
		TArray<struct FTransform>      EscapeTerminalTransforms;
		bool                           Output_Get;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EscapeTerminalTransforms != nullptr)
		*EscapeTerminalTransforms = params.EscapeTerminalTransforms;
	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Completed_D5F88E5C42E6DA8CB727B795A8B47D7D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSuccess                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::Completed_D5F88E5C42E6DA8CB727B795A8B47D7D(class USaveGame* SaveGame, bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Completed_D5F88E5C42E6DA8CB727B795A8B47D7D"));

	struct
	{
		class USaveGame*               SaveGame;
		bool                           bSuccess;
	} params = {};

	params.SaveGame = SaveGame;
	params.bSuccess = bSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Completed_D5F88E5C42E6DA8CB727B79579F4EC32
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSuccess                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::Completed_D5F88E5C42E6DA8CB727B79579F4EC32(class USaveGame* SaveGame, bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Completed_D5F88E5C42E6DA8CB727B79579F4EC32"));

	struct
	{
		class USaveGame*               SaveGame;
		bool                           bSuccess;
	} params = {};

	params.SaveGame = SaveGame;
	params.bSuccess = bSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Completed_370976E44B99E8DFB6647BBACA8A065F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSuccess                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::Completed_370976E44B99E8DFB6647BBACA8A065F(class USaveGame* SaveGame, bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Completed_370976E44B99E8DFB6647BBACA8A065F"));

	struct
	{
		class USaveGame*               SaveGame;
		bool                           bSuccess;
	} params = {};

	params.SaveGame = SaveGame;
	params.bSuccess = bSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Completed_F18AAD664BE05879B467708E3A64ECB5
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSuccess                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::Completed_F18AAD664BE05879B467708E3A64ECB5(class USaveGame* SaveGame, bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Completed_F18AAD664BE05879B467708E3A64ECB5"));

	struct
	{
		class USaveGame*               SaveGame;
		bool                           bSuccess;
	} params = {};

	params.SaveGame = SaveGame;
	params.bSuccess = bSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Completed_38BD8A6E4AA2357F5055938BF3099D9E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGame                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSuccess                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::Completed_38BD8A6E4AA2357F5055938BF3099D9E(class USaveGame* SaveGame, bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Completed_38BD8A6E4AA2357F5055938BF3099D9E"));

	struct
	{
		class USaveGame*               SaveGame;
		bool                           bSuccess;
	} params = {};

	params.SaveGame = SaveGame;
	params.bSuccess = bSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.BP_StartMetaQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::BP_StartMetaQuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.BP_StartMetaQuest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step3Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::Step3Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step3Completed"));

	struct
	{
		EYMissionResultType            Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step4Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::Step4Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step4Completed"));

	struct
	{
		EYMissionResultType            Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnMatchFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYPlayerMatchFinishedResult    Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::OnMatchFinished(EYPlayerMatchFinishedResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnMatchFinished"));

	struct
	{
		EYPlayerMatchFinishedResult    Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step5Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::Step5Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step5Completed"));

	struct
	{
		EYMissionResultType            Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.CreateHintFaction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::CreateHintFaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.CreateHintFaction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindAndCheckIfContractIsCompleted
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ClientBindAndCheckIfContractIsCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindAndCheckIfContractIsCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindOnContractStatusChanged
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ClientBindOnContractStatusChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindOnContractStatusChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientCheckContractStatusToSkipNextStep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ClientCheckContractStatusToSkipNextStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientCheckContractStatusToSkipNextStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerStartStep6
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ServerStartStep6()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerStartStep6"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractsChangedMoveFtueProgress
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractsUIData activeContractsUIData          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_03_MatchPickUpAndEscape_C::OnContractsChangedMoveFtueProgress(const struct FYActiveContractsUIData& activeContractsUIData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractsChangedMoveFtueProgress"));

	struct
	{
		struct FYActiveContractsUIData activeContractsUIData;
	} params = {};

	params.activeContractsUIData = activeContractsUIData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step6OnContractsStatusChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractsUIData activeContractsUIData          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_03_MatchPickUpAndEscape_C::Step6OnContractsStatusChanged(const struct FYActiveContractsUIData& activeContractsUIData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step6OnContractsStatusChanged"));

	struct
	{
		struct FYActiveContractsUIData activeContractsUIData;
	} params = {};

	params.activeContractsUIData = activeContractsUIData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step1Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::Step1Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step1Completed"));

	struct
	{
		EYMissionResultType            Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step2Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::Step2Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step2Completed"));

	struct
	{
		EYMissionResultType            Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnCommWheelUsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYCommWheelVOComponent*  commWheelComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     commWheelEntry                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::OnCommWheelUsed(class UYCommWheelVOComponent* commWheelComponent, const struct FDataTableRowHandle& commWheelEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnCommWheelUsed"));

	struct
	{
		class UYCommWheelVOComponent*  commWheelComponent;
		struct FDataTableRowHandle     commWheelEntry;
	} params = {};

	params.commWheelComponent = commWheelComponent;
	params.commWheelEntry = commWheelEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.TryFinishCommWheelStep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::TryFinishCommWheelStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.TryFinishCommWheelStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientTrackCommWheelUse
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::ClientTrackCommWheelUse(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientTrackCommWheelUse"));

	struct
	{
		bool                           IsActive;
	} params = {};

	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerOnUseCommWheel
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ServerOnUseCommWheel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerOnUseCommWheel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step2HandleIntroFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::Step2HandleIntroFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step2HandleIntroFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step1HandleIntroFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::Step1HandleIntroFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step1HandleIntroFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerStartStep4
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ServerStartStep4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerStartStep4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientTrackMatchFnished
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ClientTrackMatchFnished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientTrackMatchFnished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.InitialStep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::InitialStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.InitialStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerGoBackToStep4
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ServerGoBackToStep4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerGoBackToStep4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientStep5BindOnContractsStatusChanged
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ClientStep5BindOnContractsStatusChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientStep5BindOnContractsStatusChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step5OnContractsStatusChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractsUIData activeContractsUIData          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_03_MatchPickUpAndEscape_C::Step5OnContractsStatusChanged(const struct FYActiveContractsUIData& activeContractsUIData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step5OnContractsStatusChanged"));

	struct
	{
		struct FYActiveContractsUIData activeContractsUIData;
	} params = {};

	params.activeContractsUIData = activeContractsUIData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientTrackVoiceChat
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldCheckPushToTalk          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::ClientTrackVoiceChat(bool ShouldCheckPushToTalk)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientTrackVoiceChat"));

	struct
	{
		bool                           ShouldCheckPushToTalk;
	} params = {};

	params.ShouldCheckPushToTalk = ShouldCheckPushToTalk;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerOnFirstPushToTalk
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ServerOnFirstPushToTalk()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerOnFirstPushToTalk"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.TryFinishPushToTalkStep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::TryFinishPushToTalkStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.TryFinishPushToTalkStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.SaveMatchEscapedToSaveGame
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            UserIndex                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYPlayerMatchFinishedResult    MatchResult                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::SaveMatchEscapedToSaveGame(const struct FString& SlotName, int UserIndex, EYPlayerMatchFinishedResult MatchResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.SaveMatchEscapedToSaveGame"));

	struct
	{
		struct FString                 SlotName;
		int                            UserIndex;
		EYPlayerMatchFinishedResult    MatchResult;
	} params = {};

	params.SlotName = SlotName;
	params.UserIndex = UserIndex;
	params.MatchResult = MatchResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ShowLaunchTerminalMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ShowLaunchTerminalMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ShowLaunchTerminalMarker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ExecuteUbergraph_Onboarding_03_MatchPickUpAndEscape
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::ExecuteUbergraph_Onboarding_03_MatchPickUpAndEscape(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ExecuteUbergraph_Onboarding_03_MatchPickUpAndEscape"));

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
