// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_DeadDrop_Container_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BP_OnDeadDropResult_Event
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYDeadDropDepositResult        Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_DeadDrop_Container_C::BP_OnDeadDropResult_Event(EYDeadDropDepositResult Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BP_OnDeadDropResult_Event"));

	struct
	{
		EYDeadDropDepositResult        Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.HandleModDroppedCallback
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         inInventoryItem                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// EYPlayerSetType                targetSetType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            targetInventoryComponentId     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_DeadDrop_Container_C::HandleModDroppedCallback(const struct FYInventoryItem& inInventoryItem, EYPlayerSetType targetSetType, int targetInventoryComponentId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.HandleModDroppedCallback"));

	struct
	{
		struct FYInventoryItem         inInventoryItem;
		EYPlayerSetType                targetSetType;
		int                            targetInventoryComponentId;
	} params;

	params.inInventoryItem = inInventoryItem;
	params.targetSetType = targetSetType;
	params.targetInventoryComponentId = targetInventoryComponentId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BP_GetTargetSetType
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             InWidget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYPlayerSetType                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EYPlayerSetType UWBP_Inventory_DeadDrop_Container_C::BP_GetTargetSetType(class UUserWidget* InWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BP_GetTargetSetType"));

	struct
	{
		class UUserWidget*             InWidget;
		EYPlayerSetType                ReturnValue;
	} params;

	params.InWidget = InWidget;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BP_GetCurrentWeight
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UWBP_Inventory_DeadDrop_Container_C::BP_GetCurrentWeight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BP_GetCurrentWeight"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BP_GetCurrentMaxWeight
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UWBP_Inventory_DeadDrop_Container_C::BP_GetCurrentMaxWeight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BP_GetCurrentMaxWeight"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BP_CanMoveItem
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYInventoryItem         inventoryItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UUserWidget*             InWidget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Inventory_DeadDrop_Container_C::BP_CanMoveItem(const struct FYInventoryItem& inventoryItem, class UUserWidget* InWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BP_CanMoveItem"));

	struct
	{
		struct FYInventoryItem         inventoryItem;
		class UUserWidget*             InWidget;
		bool                           ReturnValue;
	} params;

	params.inventoryItem = inventoryItem;
	params.InWidget = InWidget;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.OnMoveItemToSlotCallback
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            originInventoryComponentId     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            targetInventoryComponentId     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         inventoryItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            amountToMove                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYPlayerSetType                targetSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_DeadDrop_Container_C::OnMoveItemToSlotCallback(int originInventoryComponentId, int targetInventoryComponentId, const struct FYInventoryItem& inventoryItem, int amountToMove, EYPlayerSetType targetSlot)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.OnMoveItemToSlotCallback"));

	struct
	{
		int                            originInventoryComponentId;
		int                            targetInventoryComponentId;
		struct FYInventoryItem         inventoryItem;
		int                            amountToMove;
		EYPlayerSetType                targetSlot;
	} params;

	params.originInventoryComponentId = originInventoryComponentId;
	params.targetInventoryComponentId = targetInventoryComponentId;
	params.inventoryItem = inventoryItem;
	params.amountToMove = amountToMove;
	params.targetSlot = targetSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.SetInventoryId
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            inventoryComponentId           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_DeadDrop_Container_C::SetInventoryId(int inventoryComponentId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.SetInventoryId"));

	struct
	{
		int                            inventoryComponentId;
	} params;

	params.inventoryComponentId = inventoryComponentId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BP_PlayerInventoryDataUpdated
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYUIInventoryData       inPlayerInventory              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Inventory_DeadDrop_Container_C::BP_PlayerInventoryDataUpdated(const struct FYUIInventoryData& inPlayerInventory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BP_PlayerInventoryDataUpdated"));

	struct
	{
		struct FYUIInventoryData       inPlayerInventory;
	} params;

	params.inPlayerInventory = inPlayerInventory;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_DeadDrop_Container_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_DeadDrop_Container_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BndEvt__WBP_Inventory_DeadDrop_Container_WBP_Common_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_DeadDrop_Container_C::BndEvt__WBP_Inventory_DeadDrop_Container_WBP_Common_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.BndEvt__WBP_Inventory_DeadDrop_Container_WBP_Common_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Inventory_DeadDrop_Container_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.ShowFeedbackText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYDeadDropDepositResult        Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_DeadDrop_Container_C::ShowFeedbackText(EYDeadDropDepositResult Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.ShowFeedbackText"));

	struct
	{
		EYDeadDropDepositResult        Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.HookUpToInventoryChanges
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_DeadDrop_Container_C::HookUpToInventoryChanges()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.HookUpToInventoryChanges"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.UpdateDeadDropText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_DeadDrop_Container_C::UpdateDeadDropText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.UpdateDeadDropText"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.OnInventoryUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_DeadDrop_Container_C::OnInventoryUpdated(class UYStateInventoryComponent* stateInventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.OnInventoryUpdated"));

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
	} params;

	params.stateInventoryComponent = stateInventoryComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.ExecuteUbergraph_WBP_Inventory_DeadDrop_Container
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_DeadDrop_Container_C::ExecuteUbergraph_WBP_Inventory_DeadDrop_Container(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_DeadDrop_Container.WBP_Inventory_DeadDrop_Container_C.ExecuteUbergraph_WBP_Inventory_DeadDrop_Container"));

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
