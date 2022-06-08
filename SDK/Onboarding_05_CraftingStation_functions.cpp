// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_05_CraftingStation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.SetUtilitiesHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_05_CraftingStation_C::SetUtilitiesHighlight(bool IsHighlighted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.SetUtilitiesHighlight"));

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


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.SetBackpackHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_05_CraftingStation_C::SetBackpackHighlight(bool IsHighlighted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.SetBackpackHighlight"));

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


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.SetCraftButtonHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_05_CraftingStation_C::SetCraftButtonHighlight(bool IsHighlighted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.SetCraftButtonHighlight"));

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


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.GetNPCObjectTransformByRowHandle
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NpcRowName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              ActorTransform                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           FoundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_05_CraftingStation_C::GetNPCObjectTransformByRowHandle(const struct FName& NpcRowName, struct FTransform* ActorTransform, bool* FoundActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.GetNPCObjectTransformByRowHandle"));

	struct
	{
		struct FName                   NpcRowName;
		struct FTransform              ActorTransform;
		bool                           FoundActor;
	} params = {};

	params.NpcRowName = NpcRowName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ActorTransform != nullptr)
		*ActorTransform = params.ActorTransform;
	if (FoundActor != nullptr)
		*FoundActor = params.FoundActor;
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.GetNPCTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NpcRowName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FoundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTransform              ActorTransform                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_05_CraftingStation_C::GetNPCTransform(const struct FName& NpcRowName, bool* FoundActor, struct FTransform* ActorTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.GetNPCTransform"));

	struct
	{
		struct FName                   NpcRowName;
		bool                           FoundActor;
		struct FTransform              ActorTransform;
	} params = {};

	params.NpcRowName = NpcRowName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundActor != nullptr)
		*FoundActor = params.FoundActor;
	if (ActorTransform != nullptr)
		*ActorTransform = params.ActorTransform;
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.CreateHintMarkersWithNPCNames
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   ActiveMarkerId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOnboarding_05_CraftingStation_C::CreateHintMarkersWithNPCNames(const struct FName& ActiveMarkerId, TArray<struct FName>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.CreateHintMarkersWithNPCNames"));

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


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnChainCompleted_E7A4CC0541EF2DB0E74BEA8A9FFC06F9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_05_CraftingStation_C::OnChainCompleted_E7A4CC0541EF2DB0E74BEA8A9FFC06F9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnChainCompleted_E7A4CC0541EF2DB0E74BEA8A9FFC06F9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnCompleted_E7A4CC0541EF2DB0E74BEA8A9FFC06F9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_05_CraftingStation_C::OnCompleted_E7A4CC0541EF2DB0E74BEA8A9FFC06F9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnCompleted_E7A4CC0541EF2DB0E74BEA8A9FFC06F9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnCancelled_E7A4CC0541EF2DB0E74BEA8A9FFC06F9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_05_CraftingStation_C::OnCancelled_E7A4CC0541EF2DB0E74BEA8A9FFC06F9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnCancelled_E7A4CC0541EF2DB0E74BEA8A9FFC06F9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnStarted_E7A4CC0541EF2DB0E74BEA8A9FFC06F9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_05_CraftingStation_C::OnStarted_E7A4CC0541EF2DB0E74BEA8A9FFC06F9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnStarted_E7A4CC0541EF2DB0E74BEA8A9FFC06F9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnStartFailed_E7A4CC0541EF2DB0E74BEA8A9FFC06F9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_05_CraftingStation_C::OnStartFailed_E7A4CC0541EF2DB0E74BEA8A9FFC06F9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnStartFailed_E7A4CC0541EF2DB0E74BEA8A9FFC06F9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnSceneRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_05_CraftingStation_C::OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnSceneRequested"));

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


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.BP_StartMetaQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOnboarding_05_CraftingStation_C::BP_StartMetaQuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.BP_StartMetaQuest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ClientBindCraftingWidgetDelegates
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CompleteStepOnOpen             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_05_CraftingStation_C::ClientBindCraftingWidgetDelegates(bool CompleteStepOnOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ClientBindCraftingWidgetDelegates"));

	struct
	{
		bool                           CompleteStepOnOpen;
	} params = {};

	params.CompleteStepOnOpen = CompleteStepOnOpen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnCustomStep1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_05_CraftingStation_C::OnCustomStep1(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnCustomStep1"));

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


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ShowCraftingStationmarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActiveMarkerId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_05_CraftingStation_C::ShowCraftingStationmarker(const struct FName& ActiveMarkerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ShowCraftingStationmarker"));

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


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnItemToCraftSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemBaseID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_05_CraftingStation_C::OnItemToCraftSelected(const struct FName& ItemBaseID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnItemToCraftSelected"));

	struct
	{
		struct FName                   ItemBaseID;
	} params = {};

	params.ItemBaseID = ItemBaseID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnCraftingFilterClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterCategoriesDataEntry Categories                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<En_FilterCategoryCollection> ReturnValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_05_CraftingStation_C::OnCraftingFilterClicked(const struct FYFilterCategoriesDataEntry& Categories, TEnumAsByte<En_FilterCategoryCollection> ReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnCraftingFilterClicked"));

	struct
	{
		struct FYFilterCategoriesDataEntry Categories;
		TEnumAsByte<En_FilterCategoryCollection> ReturnValue;
	} params = {};

	params.Categories = Categories;
	params.ReturnValue = ReturnValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnSceneRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_05_CraftingStation_C::OnSceneRemoved(const struct FDataTableRowHandle& sceneRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnSceneRemoved"));

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


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.UnbindDelegatesForHighlighting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_05_CraftingStation_C::UnbindDelegatesForHighlighting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.UnbindDelegatesForHighlighting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.BindDelegatesForHighlighting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_05_CraftingStation_C::BindDelegatesForHighlighting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.BindDelegatesForHighlighting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ClientBindCraftingStarted
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_05_CraftingStation_C::ClientBindCraftingStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ClientBindCraftingStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnCustomStep2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_05_CraftingStation_C::OnCustomStep2(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnCustomStep2"));

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


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnItemCraftingSetInProgress_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 shopItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UOnboarding_05_CraftingStation_C::OnItemCraftingSetInProgress_Event_1(const struct FString& shopItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnItemCraftingSetInProgress_Event_1"));

	struct
	{
		struct FString                 shopItem;
	} params = {};

	params.shopItem = shopItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.CompleteStartCraftingStep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PlayerStartedCrafting          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_05_CraftingStation_C::CompleteStartCraftingStep(bool PlayerStartedCrafting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.CompleteStartCraftingStep"));

	struct
	{
		bool                           PlayerStartedCrafting;
	} params = {};

	params.PlayerStartedCrafting = PlayerStartedCrafting;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ServerTryCompleteCraftingStep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PlayerStartedCrafting          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_05_CraftingStation_C::ServerTryCompleteCraftingStep(bool PlayerStartedCrafting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ServerTryCompleteCraftingStep"));

	struct
	{
		bool                           PlayerStartedCrafting;
	} params = {};

	params.PlayerStartedCrafting = PlayerStartedCrafting;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ClientBindDelegatesForSkipStep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_05_CraftingStation_C::ClientBindDelegatesForSkipStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ClientBindDelegatesForSkipStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ServerTryToCompleteSkipStep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_05_CraftingStation_C::ServerTryToCompleteSkipStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ServerTryToCompleteSkipStep"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnSceneRemoved_SkipStep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_05_CraftingStation_C::OnSceneRemoved_SkipStep(const struct FDataTableRowHandle& sceneRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.OnSceneRemoved_SkipStep"));

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


// Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ExecuteUbergraph_Onboarding_05_CraftingStation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_05_CraftingStation_C::ExecuteUbergraph_Onboarding_05_CraftingStation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C.ExecuteUbergraph_Onboarding_05_CraftingStation"));

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
