// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_Bag_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.Get_InfoIcon_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_Inventory_Bag_Item_C::Get_InfoIcon_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.Get_InfoIcon_ToolTipWidget"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.UpdateBagWarningText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_Item_C::UpdateBagWarningText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.UpdateBagWarningText"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.UpdateWarningMessages
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         inInventoryItem                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// EYPlayerSetType                InPlayerSetType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::UpdateWarningMessages(const struct FYInventoryItem& inInventoryItem, EYPlayerSetType InPlayerSetType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.UpdateWarningMessages"));

	struct
	{
		struct FYInventoryItem         inInventoryItem;
		EYPlayerSetType                InPlayerSetType;
	} params;

	params.inInventoryItem = inInventoryItem;
	params.InPlayerSetType = InPlayerSetType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.PlayerInventoryDataUpdated
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYUIInventoryData       inPlayerInventory              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Inventory_Bag_Item_C::PlayerInventoryDataUpdated(const struct FYUIInventoryData& inPlayerInventory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.PlayerInventoryDataUpdated"));

	struct
	{
		struct FYUIInventoryData       inPlayerInventory;
	} params;

	params.inPlayerInventory = inPlayerInventory;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.TryHighlightBackpackAreaForOnboarding
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_Item_C::TryHighlightBackpackAreaForOnboarding()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.TryHighlightBackpackAreaForOnboarding"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.BP_AnimateVisibility
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Inventory_Bag_Item_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.GetInventoryLimitsAsText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   inventoryLimit                 (CPF_Parm, CPF_OutParm)
// struct FText                   safeLimit                      (CPF_Parm, CPF_OutParm)

void UWBP_Inventory_Bag_Item_C::GetInventoryLimitsAsText(struct FText* inventoryLimit, struct FText* safeLimit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.GetInventoryLimitsAsText"));

	struct
	{
		struct FText                   inventoryLimit;
		struct FText                   safeLimit;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (inventoryLimit != nullptr)
		*inventoryLimit = params.inventoryLimit;
	if (safeLimit != nullptr)
		*safeLimit = params.safeLimit;
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.BindDragDrop_Event
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isDragging                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::BindDragDrop_Event(class UYWidget_ItemContainer* itemWidget, bool isDragging, class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.BindDragDrop_Event"));

	struct
	{
		class UYWidget_ItemContainer*  itemWidget;
		bool                           isDragging;
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.itemWidget = itemWidget;
	params.isDragging = isDragging;
	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.BindDragDrop_Bag
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isDragging                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UDragDropOperation*      InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::BindDragDrop_Bag(class UYWidget_ItemContainer* itemWidget, bool isDragging, class UDragDropOperation* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.BindDragDrop_Bag"));

	struct
	{
		class UYWidget_ItemContainer*  itemWidget;
		bool                           isDragging;
		class UDragDropOperation*      InputPin;
	} params;

	params.itemWidget = itemWidget;
	params.isDragging = isDragging;
	params.InputPin = InputPin;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.BindDragDrop_SafeContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isDragging                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UDragDropOperation*      InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::BindDragDrop_SafeContainer(class UYWidget_ItemContainer* itemWidget, bool isDragging, class UDragDropOperation* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.BindDragDrop_SafeContainer"));

	struct
	{
		class UYWidget_ItemContainer*  itemWidget;
		bool                           isDragging;
		class UDragDropOperation*      InputPin;
	} params;

	params.itemWidget = itemWidget;
	params.isDragging = isDragging;
	params.InputPin = InputPin;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.CreateItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            InPanelWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYPlayerSetType                InPlayerSetType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYPlayerInventory       inPlayerInventory              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Inventory_Bag_Item_C::CreateItems(class UPanelWidget* InPanelWidget, EYPlayerSetType InPlayerSetType, const struct FYPlayerInventory& inPlayerInventory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.CreateItems"));

	struct
	{
		class UPanelWidget*            InPanelWidget;
		EYPlayerSetType                InPlayerSetType;
		struct FYPlayerInventory       inPlayerInventory;
	} params;

	params.InPanelWidget = InPanelWidget;
	params.InPlayerSetType = InPlayerSetType;
	params.inPlayerInventory = inPlayerInventory;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Inventory_Bag_Item_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.DraggingItemOutsideOfWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::DraggingItemOutsideOfWidget(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.DraggingItemOutsideOfWidget"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.HideErrorNotifications
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::HideErrorNotifications(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.HideErrorNotifications"));

	struct
	{
		class UDragDropOperation*      Operation;
	} params;

	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnMissionStepStarted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMissionRuntimeData    uiMissionLineStepInfo          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Inventory_Bag_Item_C::OnMissionStepStarted(const struct FYMissionRuntimeData& uiMissionLineStepInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnMissionStepStarted"));

	struct
	{
		struct FYMissionRuntimeData    uiMissionLineStepInfo;
	} params;

	params.uiMissionLineStepInfo = uiMissionLineStepInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetShowBag
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowBag                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Inventory_Bag_Item_C::SetShowBag(bool bShowBag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetShowBag"));

	struct
	{
		bool                           bShowBag;
	} params;

	params.bShowBag = bShowBag;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetInventoryId
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            inventoryComponentId           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::SetInventoryId(int inventoryComponentId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetInventoryId"));

	struct
	{
		int                            inventoryComponentId;
	} params;

	params.inventoryComponentId = inventoryComponentId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetParentWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_Inventory_Base* NewInventoryWidget             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::SetParentWidget(class UYWidget_Inventory_Base* NewInventoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetParentWidget"));

	struct
	{
		class UYWidget_Inventory_Base* NewInventoryWidget;
	} params;

	params.NewInventoryWidget = NewInventoryWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetContainerTItle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewContainerTitle              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Inventory_Bag_Item_C::SetContainerTItle(const struct FText& NewContainerTitle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.SetContainerTItle"));

	struct
	{
		struct FText                   NewContainerTitle;
	} params;

	params.NewContainerTitle = NewContainerTitle;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnMissionStepCompleted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            missionStepIndex               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::OnMissionStepCompleted(int missionStepIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnMissionStepCompleted"));

	struct
	{
		int                            missionStepIndex;
	} params;

	params.missionStepIndex = missionStepIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.ExecuteUbergraph_WBP_Inventory_Bag_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::ExecuteUbergraph_WBP_Inventory_Bag_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.ExecuteUbergraph_WBP_Inventory_Bag_Item"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.AddedItem__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::AddedItem__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.AddedItem__DelegateSignature"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params;

	params.itemContainer = itemContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnDragStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_Item_C::OnDragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_Item.WBP_Inventory_Bag_Item_C.OnDragStarted__DelegateSignature"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
