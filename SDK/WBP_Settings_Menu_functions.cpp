// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Settings_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Settings_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_AnimateVisibility"));

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


// Function WBP_Settings_Menu.WBP_Settings_Menu_C.BndEvt__WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_TabElementBase_TabElem_C* TabElement                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Menu_C::BndEvt__WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature(int Index, class UWBP_TabElementBase_TabElem_C* TabElement)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.BndEvt__WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_1_OnTabChanged__DelegateSignature"));

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


// Function WBP_Settings_Menu.WBP_Settings_Menu_C.BndEvt__WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   InputKey                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     InputActionRowHandle           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Settings_Menu_C::BndEvt__WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* InputKey, int Index, const struct FDataTableRowHandle& InputActionRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.BndEvt__WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature"));

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


// Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Settings_Menu_C::BP_OnWidgetHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_OnWidgetHidden"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_OnWidgetStartShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Settings_Menu_C::BP_OnWidgetStartShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_OnWidgetStartShow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_OnWidgetStartHide
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Settings_Menu_C::BP_OnWidgetStartHide()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_OnWidgetStartHide"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnRestoreDefaults
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Settings_Menu_C::OnRestoreDefaults()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnRestoreDefaults"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnSettingInfoSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TSoftObjectPtr<class UTexture2D> Image                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Settings_Menu_C::OnSettingInfoSet(const struct FText& Title, const struct FText& Description, TSoftObjectPtr<class UTexture2D> Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnSettingInfoSet"));

	struct
	{
		struct FText                   Title;
		struct FText                   Description;
		TSoftObjectPtr<class UTexture2D> Image;
	} params = {};

	params.Title = Title;
	params.Description = Description;
	params.Image = Image;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnCloseSettingInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Settings_Menu_C::OnCloseSettingInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnCloseSettingInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnKeyReassigned
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             InputChord                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FText                   oldKey                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   newKey                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Settings_Menu_C::OnKeyReassigned(const struct FInputChord& InputChord, const struct FText& oldKey, const struct FText& newKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnKeyReassigned"));

	struct
	{
		struct FInputChord             InputChord;
		struct FText                   oldKey;
		struct FText                   newKey;
	} params = {};

	params.InputChord = InputChord;
	params.oldKey = oldKey;
	params.newKey = newKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnResetSettingsPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Settings_Menu_C::OnResetSettingsPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.OnResetSettingsPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Settings_Menu_C::BP_OnWidgetShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.BP_OnWidgetShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Settings_Menu.WBP_Settings_Menu_C.ExecuteUbergraph_WBP_Settings_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Settings_Menu_C::ExecuteUbergraph_WBP_Settings_Menu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Settings_Menu.WBP_Settings_Menu_C.ExecuteUbergraph_WBP_Settings_Menu"));

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
