// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Inventory_Bag_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetHightlightVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 HighlightWidget                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     ContextRowHandle               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Inventory_Bag_Item_C::SetHightlightVisibility(class UWidget* HighlightWidget, const struct FDataTableRowHandle& ContextRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetHightlightVisibility"));

	struct
	{
		class UWidget*                 HighlightWidget;
		struct FDataTableRowHandle     ContextRowHandle;
	} params = {};

	params.HighlightWidget = HighlightWidget;
	params.ContextRowHandle = ContextRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.TryHighlightContext
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_Item_C::TryHighlightContext()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.TryHighlightContext"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.UpdateWeight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_Item_C::UpdateWeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.UpdateWeight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetIsAcceptingDragItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsAccepting                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Inventory_Bag_Item_C::SetIsAcceptingDragItems(bool IsAccepting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetIsAcceptingDragItems"));

	struct
	{
		bool                           IsAccepting;
	} params = {};

	params.IsAccepting = IsAccepting;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetupProtectedItemContainerByIndex
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::SetupProtectedItemContainerByIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetupProtectedItemContainerByIndex"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetupExistingProtectedItemContainers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_Item_C::SetupExistingProtectedItemContainers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetupExistingProtectedItemContainers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetupUnprotectedItemContainerByIndex
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::SetupUnprotectedItemContainerByIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetupUnprotectedItemContainerByIndex"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetupExistingUnprotectedItemContainers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_Item_C::SetupExistingUnprotectedItemContainers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetupExistingUnprotectedItemContainers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.CreateEmptyItemContainer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::CreateEmptyItemContainer(class UYWidget_ItemContainer** itemContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.CreateEmptyItemContainer"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (itemContainer != nullptr)
		*itemContainer = params.itemContainer;
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.Get_InfoIcon_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_Inventory_Bag_Item_C::Get_InfoIcon_ToolTipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.Get_InfoIcon_ToolTipWidget"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.UpdateBagWarningText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_Item_C::UpdateBagWarningText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.UpdateBagWarningText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.UpdateWarningMessages
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         inInventoryItem                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// EYPlayerSetType                InPlayerSetType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::UpdateWarningMessages(const struct FYInventoryItem& inInventoryItem, EYPlayerSetType InPlayerSetType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.UpdateWarningMessages"));

	struct
	{
		struct FYInventoryItem         inInventoryItem;
		EYPlayerSetType                InPlayerSetType;
	} params = {};

	params.inInventoryItem = inInventoryItem;
	params.InPlayerSetType = InPlayerSetType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.PlayerInventoryDataUpdated
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYUIInventoryData       inPlayerInventory              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Inventory_Bag_Item_C::PlayerInventoryDataUpdated(const struct FYUIInventoryData& inPlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.PlayerInventoryDataUpdated"));

	struct
	{
		struct FYUIInventoryData       inPlayerInventory;
	} params = {};

	params.inPlayerInventory = inPlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.TryHighlightBackpackAreaForOnboarding
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_Item_C::TryHighlightBackpackAreaForOnboarding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.TryHighlightBackpackAreaForOnboarding"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Inventory_Bag_Item_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params = {};

	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.GetInventoryLimitsAsText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   inventoryLimit                 (CPF_Parm, CPF_OutParm)
// struct FText                   safeLimit                      (CPF_Parm, CPF_OutParm)

void UWBP_Inventory_Bag_Item_C::GetInventoryLimitsAsText(struct FText* inventoryLimit, struct FText* safeLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.GetInventoryLimitsAsText"));

	struct
	{
		struct FText                   inventoryLimit;
		struct FText                   safeLimit;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (inventoryLimit != nullptr)
		*inventoryLimit = params.inventoryLimit;
	if (safeLimit != nullptr)
		*safeLimit = params.safeLimit;
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Inventory_Bag_Item_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_Item_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.HideErrorNotifications
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::HideErrorNotifications(class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.HideErrorNotifications"));

	struct
	{
		class UDragDropOperation*      Operation;
	} params = {};

	params.Operation = Operation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnMissionStepStarted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMissionRuntimeData    uiMissionLineStepInfo          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Inventory_Bag_Item_C::OnMissionStepStarted(const struct FYMissionRuntimeData& uiMissionLineStepInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnMissionStepStarted"));

	struct
	{
		struct FYMissionRuntimeData    uiMissionLineStepInfo;
	} params = {};

	params.uiMissionLineStepInfo = uiMissionLineStepInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetShowBag
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowBag                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Inventory_Bag_Item_C::SetShowBag(bool bShowBag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetShowBag"));

	struct
	{
		bool                           bShowBag;
	} params = {};

	params.bShowBag = bShowBag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetInventoryId
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            inventoryComponentId           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::SetInventoryId(int inventoryComponentId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetInventoryId"));

	struct
	{
		int                            inventoryComponentId;
	} params = {};

	params.inventoryComponentId = inventoryComponentId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetParentWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_Inventory_Base* NewInventoryWidget             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::SetParentWidget(class UYWidget_Inventory_Base* NewInventoryWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetParentWidget"));

	struct
	{
		class UYWidget_Inventory_Base* NewInventoryWidget;
	} params = {};

	params.NewInventoryWidget = NewInventoryWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetContainerTItle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewContainerTitle              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Inventory_Bag_Item_C::SetContainerTItle(const struct FText& NewContainerTitle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetContainerTItle"));

	struct
	{
		struct FText                   NewContainerTitle;
	} params = {};

	params.NewContainerTitle = NewContainerTitle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnMissionStepCompleted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            missionStepIndex               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::OnMissionStepCompleted(int missionStepIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnMissionStepCompleted"));

	struct
	{
		int                            missionStepIndex;
	} params = {};

	params.missionStepIndex = missionStepIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_Item_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnDropStateChangedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDragStateData         State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Inventory_Bag_Item_C::OnDropStateChangedCallback(const struct FYDragStateData& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnDropStateChangedCallback"));

	struct
	{
		struct FYDragStateData         State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.ExecuteSpawnAction
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYResourceManagerRequestEntry Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_Inventory_Bag_Item_C::ExecuteSpawnAction(const struct FYResourceManagerRequestEntry& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.ExecuteSpawnAction"));

	struct
	{
		struct FYResourceManagerRequestEntry Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnSortingMethodChangedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_Item_C::OnSortingMethodChangedCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnSortingMethodChangedCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.ExecuteUbergraph_WBP_Inventory_Bag_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::ExecuteUbergraph_WBP_Inventory_Bag_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.ExecuteUbergraph_WBP_Inventory_Bag_Item"));

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


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.AddedItem__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::AddedItem__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.AddedItem__DelegateSignature"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params = {};

	params.itemContainer = itemContainer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnDragStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::OnDragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnDragStarted__DelegateSignature"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params = {};

	params.DragDropOperation = DragDropOperation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
