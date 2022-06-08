// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_04_PlayerQuarter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.SetGeneratorCategoryHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::SetGeneratorCategoryHighlight(bool IsHighlighted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.SetGeneratorCategoryHighlight"));

	struct
	{
		bool                           IsHighlighted;
	} params = {};

	params.IsHighlighted = IsHighlighted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.SetUpgradeNodeHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::SetUpgradeNodeHighlight(bool IsHighlighted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.SetUpgradeNodeHighlight"));

	struct
	{
		bool                           IsHighlighted;
	} params = {};

	params.IsHighlighted = IsHighlighted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.SetPurchaseButtonHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::SetPurchaseButtonHighlight(bool IsHighlighted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.SetPurchaseButtonHighlight"));

	struct
	{
		bool                           IsHighlighted;
	} params = {};

	params.IsHighlighted = IsHighlighted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.UpdateCurrentDestinationMarker
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PlayerIsInQuarters             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::UpdateCurrentDestinationMarker(bool PlayerIsInQuarters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.UpdateCurrentDestinationMarker"));

	struct
	{
		bool                           PlayerIsInQuarters;
	} params = {};

	params.PlayerIsInQuarters = PlayerIsInQuarters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.SetDesiredDestinationMarker
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActiveMarkerId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           MarkerIsInPlayerQuarters       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::SetDesiredDestinationMarker(const struct FName& ActiveMarkerId, const struct FTransform& Transform, bool MarkerIsInPlayerQuarters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.SetDesiredDestinationMarker"));

	struct
	{
		struct FName                   ActiveMarkerId;
		struct FTransform              Transform;
		bool                           MarkerIsInPlayerQuarters;
	} params = {};

	params.ActiveMarkerId = ActiveMarkerId;
	params.Transform = Transform;
	params.MarkerIsInPlayerQuarters = MarkerIsInPlayerQuarters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetNPCObjectTransformByRowHandle
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NpcRowName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              ActorTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           FoundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::GetNPCObjectTransformByRowHandle(const struct FName& NpcRowName, const struct FTransform& ActorTransform, bool* FoundActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetNPCObjectTransformByRowHandle"));

	struct
	{
		struct FName                   NpcRowName;
		struct FTransform              ActorTransform;
		bool                           FoundActor;
	} params = {};

	params.NpcRowName = NpcRowName;
	params.ActorTransform = ActorTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundActor != nullptr)
		*FoundActor = params.FoundActor;
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetPlayerQuarterDoorTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              ActorTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           FoundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::GetPlayerQuarterDoorTransform(const struct FTransform& ActorTransform, bool* FoundActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetPlayerQuarterDoorTransform"));

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


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetNPCTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NpcRowName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              ActorTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           FoundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::GetNPCTransform(const struct FName& NpcRowName, const struct FTransform& ActorTransform, bool* FoundActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetNPCTransform"));

	struct
	{
		struct FName                   NpcRowName;
		struct FTransform              ActorTransform;
		bool                           FoundActor;
	} params = {};

	params.NpcRowName = NpcRowName;
	params.ActorTransform = ActorTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundActor != nullptr)
		*FoundActor = params.FoundActor;
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.CreateHintMarkersWithNPCNames
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   ActiveMarkerId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOnboarding_04_PlayerQuarter_C::CreateHintMarkersWithNPCNames(const struct FName& ActiveMarkerId, TArray<struct FName>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.CreateHintMarkersWithNPCNames"));

	struct
	{
		TArray<struct FName>           Array;
		struct FName                   ActiveMarkerId;
		bool                           ReturnValue;
	} params = {};

	params.ActiveMarkerId = ActiveMarkerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;

	return params.ReturnValue;
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnInteraction
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInteractionUpdateData Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UOnboarding_04_PlayerQuarter_C::OnInteraction(const struct FYInteractionUpdateData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnInteraction"));

	struct
	{
		struct FYInteractionUpdateData Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step1Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step1Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step1Completed"));

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


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step2Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step2Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step2Completed"));

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


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step3Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step3Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step3Completed"));

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


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step4Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step4Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step4Completed"));

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


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step5Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step5Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step5Completed"));

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


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step6Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step6Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step6Completed"));

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


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindSceneAdded
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SceneToInteract                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::ClientBindSceneAdded(const struct FName& SceneToInteract)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindSceneAdded"));

	struct
	{
		struct FName                   SceneToInteract;
	} params = {};

	params.SceneToInteract = SceneToInteract;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnSceneRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnSceneRequested"));

	struct
	{
		struct FDataTableRowHandle     sceneRowHandle;
	} params = {};

	params.sceneRowHandle = sceneRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step7Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step7Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step7Completed"));

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


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.BP_StartMetaQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::BP_StartMetaQuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.BP_StartMetaQuest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.TechTreeNodesUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYControllerPlayerQuarterComponent* playerQuarterComponent         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::TechTreeNodesUpdated(class UYControllerPlayerQuarterComponent* playerQuarterComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.TechTreeNodesUpdated"));

	struct
	{
		class UYControllerPlayerQuarterComponent* playerQuarterComponent;
	} params = {};

	params.playerQuarterComponent = playerQuarterComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindOnTechtreeNodeUpdates
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::ClientBindOnTechtreeNodeUpdates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindOnTechtreeNodeUpdates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnGeneratorCollected
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 generatorId                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<struct FYInventoryItem> crateItems                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_04_PlayerQuarter_C::OnGeneratorCollected(const struct FString& generatorId, TArray<struct FYInventoryItem> crateItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnGeneratorCollected"));

	struct
	{
		struct FString                 generatorId;
		TArray<struct FYInventoryItem> crateItems;
	} params = {};

	params.generatorId = generatorId;
	params.crateItems = crateItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindSupplyCrateCollectDelegates
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::ClientBindSupplyCrateCollectDelegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindSupplyCrateCollectDelegates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientOnInteraction
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::ClientOnInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientOnInteraction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnHighlightInteracted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGuid                   Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYHighlightStateChangeType     Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::OnHighlightInteracted(const struct FGuid& Data, EYHighlightStateChangeType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnHighlightInteracted"));

	struct
	{
		struct FGuid                   Data;
		EYHighlightStateChangeType     Type;
	} params = {};

	params.Data = Data;
	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindTechTreeCategoryOpen
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::ClientBindTechTreeCategoryOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindTechTreeCategoryOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnTechTreeCategoryOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYTechtreeCategoryType         Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::OnTechTreeCategoryOpen(EYTechtreeCategoryType Category)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnTechTreeCategoryOpen"));

	struct
	{
		EYTechtreeCategoryType         Category;
	} params = {};

	params.Category = Category;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.BindIsInPlayerQuarters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::BindIsInPlayerQuarters()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.BindIsInPlayerQuarters"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnIsInPlayerQuartersChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsInPlayerQuarters             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::OnIsInPlayerQuartersChanged(bool IsInPlayerQuarters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnIsInPlayerQuartersChanged"));

	struct
	{
		bool                           IsInPlayerQuarters;
	} params = {};

	params.IsInPlayerQuarters = IsInPlayerQuarters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ShowTechTreeMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActiveMarkerId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::ShowTechTreeMarker(const struct FName& ActiveMarkerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ShowTechTreeMarker"));

	struct
	{
		struct FName                   ActiveMarkerId;
	} params = {};

	params.ActiveMarkerId = ActiveMarkerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ShowGeneratorMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActiveMarkerId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::ShowGeneratorMarker(const struct FName& ActiveMarkerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ShowGeneratorMarker"));

	struct
	{
		struct FName                   ActiveMarkerId;
	} params = {};

	params.ActiveMarkerId = ActiveMarkerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnTechTreeNodeSelected
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     rowHandle                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::OnTechTreeNodeSelected(const struct FDataTableRowHandle& rowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnTechTreeNodeSelected"));

	struct
	{
		struct FDataTableRowHandle     rowHandle;
	} params = {};

	params.rowHandle = rowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step6HandleCategoryChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYTechtreeCategoryType         Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step6HandleCategoryChange(EYTechtreeCategoryType Category)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step6HandleCategoryChange"));

	struct
	{
		EYTechtreeCategoryType         Category;
	} params = {};

	params.Category = Category;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step6OnSceneRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::Step6OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step6OnSceneRequested"));

	struct
	{
		struct FDataTableRowHandle     sceneRowHandle;
	} params = {};

	params.sceneRowHandle = sceneRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnInitialStep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::OnInitialStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnInitialStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.UnbindSupplyCrateCollectDelegates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::UnbindSupplyCrateCollectDelegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.UnbindSupplyCrateCollectDelegates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnSceneRemoved_CollectSupplyCrateStep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::OnSceneRemoved_CollectSupplyCrateStep(const struct FDataTableRowHandle& sceneRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnSceneRemoved_CollectSupplyCrateStep"));

	struct
	{
		struct FDataTableRowHandle     sceneRowHandle;
	} params = {};

	params.sceneRowHandle = sceneRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ExecuteUbergraph_Onboarding_04_PlayerQuarter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::ExecuteUbergraph_Onboarding_04_PlayerQuarter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ExecuteUbergraph_Onboarding_04_PlayerQuarter"));

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
