// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_SplitItem_Modal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BP_HandleBackKey
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Inventory_SplitItem_Modal_C::BP_HandleBackKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BP_HandleBackKey");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Inventory_SplitItem_Modal_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetupSplitModalData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_SplitItem_Modal_C::SetupSplitModalData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetupSplitModalData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.ExecuteItemSplitting
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_SplitItem_Modal_C::ExecuteItemSplitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.ExecuteItemSplitting");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetStartingValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_SplitItem_Modal_C::SetStartingValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetStartingValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetMaxAmount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_SplitItem_Modal_C::SetMaxAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetMaxAmount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetMinAmount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_SplitItem_Modal_C::SetMinAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetMinAmount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetupItemContainer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_SplitItem_Modal_C::SetupItemContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.SetupItemContainer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_SplitItem_Modal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BndEvt__WBP_Common_Btn_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_SplitItem_Modal_C::BndEvt__WBP_Common_Btn_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BndEvt__WBP_Common_Btn_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_SplitItem_Modal_C::BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Inventory_SplitItem_Modal_C::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.BP_OnWidgetHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.InventoryStateDeactivatedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Inventory_SplitItem_Modal_C::InventoryStateDeactivatedCallback(bool interupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.InventoryStateDeactivatedCallback");

	struct
	{
		bool                           interupted;
	} params;

	params.interupted = interupted;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.OnSceneRemovedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Inventory_SplitItem_Modal_C::OnSceneRemovedCallback(const struct FDataTableRowHandle& sceneRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.OnSceneRemovedCallback");

	struct
	{
		struct FDataTableRowHandle     sceneRowHandle;
	} params;

	params.sceneRowHandle = sceneRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.OnInventoryToggledCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isInventoryOpen                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Inventory_SplitItem_Modal_C::OnInventoryToggledCallback(bool isInventoryOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.OnInventoryToggledCallback");

	struct
	{
		bool                           isInventoryOpen;
	} params;

	params.isInventoryOpen = isInventoryOpen;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.ExecuteUbergraph_WBP_Inventory_SplitItem_Modal
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_SplitItem_Modal_C::ExecuteUbergraph_WBP_Inventory_SplitItem_Modal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.ExecuteUbergraph_WBP_Inventory_SplitItem_Modal");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.OnExecuteItemSplitting__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_SplitItem_Modal_C::OnExecuteItemSplitting__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_SplitItem_Modal.WBP_Inventory_SplitItem_Modal_C.OnExecuteItemSplitting__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
