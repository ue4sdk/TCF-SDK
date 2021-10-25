// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Station_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Station_Menu.WBP_Station_Menu_C.EvaluateStackPop
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UWBP_Station_Menu_C::EvaluateStackPop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.EvaluateStackPop"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.ExecuteActivate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Station_Menu_C::ExecuteActivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.ExecuteActivate"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.ExecuteDeactivate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Station_Menu_C::ExecuteDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.ExecuteDeactivate"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.RefreshShopTabVisibility
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Menu_C::RefreshShopTabVisibility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.RefreshShopTabVisibility"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.isInventoryOpen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsOpen                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_Menu_C::isInventoryOpen(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.isInventoryOpen"));

	struct
	{
		bool                           IsOpen;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.NotifyStashOpened
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Menu_C::NotifyStashOpened()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.NotifyStashOpened"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Station_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.BndEvt__WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_TabElementBase_TabElem_C* TabElement                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Menu_C::BndEvt__WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature(int Index, class UWBP_TabElementBase_TabElem_C* TabElement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.BndEvt__WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature"));

	struct
	{
		int                            Index;
		class UWBP_TabElementBase_TabElem_C* TabElement;
	} params;

	params.Index = Index;
	params.TabElement = TabElement;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.BndEvt__WBP_Friends_MiniWidget_K2Node_ComponentBoundEvent_2_WidgetClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Menu_C::BndEvt__WBP_Friends_MiniWidget_K2Node_ComponentBoundEvent_2_WidgetClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.BndEvt__WBP_Friends_MiniWidget_K2Node_ComponentBoundEvent_2_WidgetClicked__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.BP_OnProviderDataChanged
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   DataName                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   dataType                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Menu_C::BP_OnProviderDataChanged(const struct FName& DataName, const struct FName& dataType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.BP_OnProviderDataChanged"));

	struct
	{
		struct FName                   DataName;
		struct FName                   dataType;
	} params;

	params.DataName = DataName;
	params.dataType = dataType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.BndEvt__WBP_Common_Empty_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Menu_C::BndEvt__WBP_Common_Empty_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.BndEvt__WBP_Common_Empty_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.BndEvt__WBP_Station_Play_Menu_K2Node_ComponentBoundEvent_1_OnProfileClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Menu_C::BndEvt__WBP_Station_Play_Menu_K2Node_ComponentBoundEvent_1_OnProfileClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.BndEvt__WBP_Station_Play_Menu_K2Node_ComponentBoundEvent_1_OnProfileClicked__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.OpenInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Menu_C::OpenInventory()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.OpenInventory"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.SetPendingVisibility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newPendingVisibility           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           atConstruct                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_Menu_C::SetPendingVisibility(ESlateVisibility newPendingVisibility, bool atConstruct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.SetPendingVisibility"));

	struct
	{
		ESlateVisibility               newPendingVisibility;
		bool                           atConstruct;
	} params;

	params.newPendingVisibility = newPendingVisibility;
	params.atConstruct = atConstruct;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Station_Menu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_Menu_C::BP_OnWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.BP_OnWidgetShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.BndEvt__WBP_Station_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_2_OnInputKeyClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   InputKey                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     InputActionRowHandle           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Station_Menu_C::BndEvt__WBP_Station_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_2_OnInputKeyClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* InputKey, int Index, const struct FDataTableRowHandle& InputActionRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.BndEvt__WBP_Station_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_2_OnInputKeyClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   InputKey;
		int                            Index;
		struct FDataTableRowHandle     InputActionRowHandle;
	} params;

	params.InputKey = InputKey;
	params.Index = Index;
	params.InputActionRowHandle = InputActionRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Menu.WBP_Station_Menu_C.ExecuteUbergraph_WBP_Station_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Menu_C::ExecuteUbergraph_WBP_Station_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Menu.WBP_Station_Menu_C.ExecuteUbergraph_WBP_Station_Menu"));

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
