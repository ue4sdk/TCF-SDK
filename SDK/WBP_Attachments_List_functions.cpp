// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Attachments_List_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Attachments_List.WBP_Attachments_List_C.ClearItemModsInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Attachments_List_C::ClearItemModsInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.ClearItemModsInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Attachments_List.WBP_Attachments_List_C.HasCreatedAttachmentWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasCreatedWidgets              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Attachments_List_C::HasCreatedAttachmentWidgets(bool* HasCreatedWidgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.HasCreatedAttachmentWidgets"));

	struct
	{
		bool                           HasCreatedWidgets;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasCreatedWidgets != nullptr)
		*HasCreatedWidgets = params.HasCreatedWidgets;
}


// Function WBP_Attachments_List.WBP_Attachments_List_C.UpdateItemModsInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Attachments_List_C::UpdateItemModsInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.UpdateItemModsInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Attachments_List.WBP_Attachments_List_C.CreateAttachment
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYResourceManagerRequestEntry Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Attachments_List_C::CreateAttachment(const struct FYResourceManagerRequestEntry& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.CreateAttachment"));

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


// Function WBP_Attachments_List.WBP_Attachments_List_C.OnAttachmentMoved
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Attachments_List_C::OnAttachmentMoved(class UDragDropOperation* DragDropOperation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.OnAttachmentMoved"));

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


// Function WBP_Attachments_List.WBP_Attachments_List_C.ModItemDragDoneCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Attachments_List_C::ModItemDragDoneCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.ModItemDragDoneCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Attachments_List.WBP_Attachments_List_C.SetItemModsInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYItemModsInfo          InItemModsInfo                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FYInventoryItem         inInventoryItem                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Attachments_List_C::SetItemModsInfo(const struct FYItemModsInfo& InItemModsInfo, const struct FYInventoryItem& inInventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.SetItemModsInfo"));

	struct
	{
		struct FYItemModsInfo          InItemModsInfo;
		struct FYInventoryItem         inInventoryItem;
	} params = {};

	params.InItemModsInfo = InItemModsInfo;
	params.inInventoryItem = inInventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Attachments_List.WBP_Attachments_List_C.BP_CanMoveItem
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYInventoryItem         inventoryItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UUserWidget*             InWidget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Attachments_List_C::BP_CanMoveItem(const struct FYInventoryItem& inventoryItem, class UUserWidget* InWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.BP_CanMoveItem"));

	struct
	{
		struct FYInventoryItem         inventoryItem;
		class UUserWidget*             InWidget;
		bool                           ReturnValue;
	} params = {};

	params.inventoryItem = inventoryItem;
	params.InWidget = InWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Attachments_List.WBP_Attachments_List_C.CreateModAttachmentItemPlates
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Attachments_List_C::CreateModAttachmentItemPlates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.CreateModAttachmentItemPlates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Attachments_List.WBP_Attachments_List_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Attachments_List_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.PreConstruct"));

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


// Function WBP_Attachments_List.WBP_Attachments_List_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Attachments_List_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Attachments_List.WBP_Attachments_List_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Attachments_List_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Attachments_List.WBP_Attachments_List_C.OnInvalidDragDropOperationDetected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Attachments_List_C::OnInvalidDragDropOperationDetected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.OnInvalidDragDropOperationDetected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Attachments_List.WBP_Attachments_List_C.OnValidDragDropOperationDetected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Attachments_List_C::OnValidDragDropOperationDetected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.OnValidDragDropOperationDetected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Attachments_List.WBP_Attachments_List_C.ExecuteSpawnAction
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYResourceManagerRequestEntry Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_Attachments_List_C::ExecuteSpawnAction(const struct FYResourceManagerRequestEntry& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.ExecuteSpawnAction"));

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


// Function WBP_Attachments_List.WBP_Attachments_List_C.ExecuteUbergraph_WBP_Attachments_List
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Attachments_List_C::ExecuteUbergraph_WBP_Attachments_List(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments_List.WBP_Attachments_List_C.ExecuteUbergraph_WBP_Attachments_List"));

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
