// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_NotificationLog_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.FilterWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<En_FilterCategoryCollection> Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NotificationLog_Menu_C::FilterWidgets(TEnumAsByte<En_FilterCategoryCollection> Category)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.FilterWidgets"));

	struct
	{
		TEnumAsByte<En_FilterCategoryCollection> Category;
	} params = {};

	params.Category = Category;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.CreateWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NotificationLog_Menu_C::CreateWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.CreateWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_NotificationLog_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BP_AnimateVisibility"));

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


// Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BP_HandleBackKey
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_NotificationLog_Menu_C::BP_HandleBackKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BP_HandleBackKey"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.ExecuteSpawnAction
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYResourceManagerRequestEntry Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_NotificationLog_Menu_C::ExecuteSpawnAction(const struct FYResourceManagerRequestEntry& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.ExecuteSpawnAction"));

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


// Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BP_OnWidgetStartShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_NotificationLog_Menu_C::BP_OnWidgetStartShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BP_OnWidgetStartShow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_NotificationLog_Menu_C::BP_OnWidgetHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BP_OnWidgetHidden"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BndEvt__WBP_NotificationLog_Menu_WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterCategoriesDataEntry Categories                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<En_FilterCategoryCollection> ReturnValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NotificationLog_Menu_C::BndEvt__WBP_NotificationLog_Menu_WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature(const struct FYFilterCategoriesDataEntry& Categories, TEnumAsByte<En_FilterCategoryCollection> ReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BndEvt__WBP_NotificationLog_Menu_WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature"));

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


// Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BndEvt__WBP_NotificationLog_Menu_WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_TabElementBase_TabElem_C* TabElement                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NotificationLog_Menu_C::BndEvt__WBP_NotificationLog_Menu_WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature(int Index, class UWBP_TabElementBase_TabElem_C* TabElement)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BndEvt__WBP_NotificationLog_Menu_WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature"));

	struct
	{
		int                            Index;
		class UWBP_TabElementBase_TabElem_C* TabElement;
	} params = {};

	params.Index = Index;
	params.TabElement = TabElement;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BndEvt__WBP_NotificationLog_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_2_OnInputKeyClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   InputKey                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     InputActionRowHandle           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_NotificationLog_Menu_C::BndEvt__WBP_NotificationLog_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_2_OnInputKeyClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* InputKey, int Index, const struct FDataTableRowHandle& InputActionRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.BndEvt__WBP_NotificationLog_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_2_OnInputKeyClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   InputKey;
		int                            Index;
		struct FDataTableRowHandle     InputActionRowHandle;
	} params = {};

	params.InputKey = InputKey;
	params.Index = Index;
	params.InputActionRowHandle = InputActionRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.ExecuteUbergraph_WBP_NotificationLog_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NotificationLog_Menu_C::ExecuteUbergraph_WBP_NotificationLog_Menu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_NotificationLog_Menu.WBP_NotificationLog_Menu_C.ExecuteUbergraph_WBP_NotificationLog_Menu"));

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
