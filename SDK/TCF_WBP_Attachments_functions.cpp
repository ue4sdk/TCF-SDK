// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Attachments_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Attachments.WBP_Attachments_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Attachments_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments.WBP_Attachments_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Attachments.WBP_Attachments_C.BP_GetTargetSetType
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             InWidget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYPlayerSetType                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EYPlayerSetType UWBP_Attachments_C::BP_GetTargetSetType(class UUserWidget* InWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments.WBP_Attachments_C.BP_GetTargetSetType"));

	struct
	{
		class UUserWidget*             InWidget;
		EYPlayerSetType                ReturnValue;
	} params;

	params.InWidget = InWidget;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Attachments.WBP_Attachments_C.BP_GetCurrentMaxWeight
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UWBP_Attachments_C::BP_GetCurrentMaxWeight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments.WBP_Attachments_C.BP_GetCurrentMaxWeight"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Attachments.WBP_Attachments_C.BP_GetCurrentWeight
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UWBP_Attachments_C::BP_GetCurrentWeight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments.WBP_Attachments_C.BP_GetCurrentWeight"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Attachments.WBP_Attachments_C.BP_CanMoveItem
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYInventoryItem         inventoryItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UUserWidget*             InWidget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Attachments_C::BP_CanMoveItem(const struct FYInventoryItem& inventoryItem, class UUserWidget* InWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments.WBP_Attachments_C.BP_CanMoveItem"));

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


// Function WBP_Attachments.WBP_Attachments_C.BP_PlayerInventoryDataUpdated
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYUIInventoryData       inPlayerInventory              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Attachments_C::BP_PlayerInventoryDataUpdated(const struct FYUIInventoryData& inPlayerInventory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments.WBP_Attachments_C.BP_PlayerInventoryDataUpdated"));

	struct
	{
		struct FYUIInventoryData       inPlayerInventory;
	} params;

	params.inPlayerInventory = inPlayerInventory;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Attachments.WBP_Attachments_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Attachments_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments.WBP_Attachments_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Attachments.WBP_Attachments_C.ExecuteUbergraph_WBP_Attachments
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Attachments_C::ExecuteUbergraph_WBP_Attachments(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Attachments.WBP_Attachments_C.ExecuteUbergraph_WBP_Attachments"));

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
