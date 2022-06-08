// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Crafting_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.Get Context String
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 FuncName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString UWBP_Crafting_Menu_C::Get_Context_String(const struct FString& FuncName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.Get Context String"));

	struct
	{
		struct FString                 FuncName;
		struct FString                 ReturnValue;
	} params = {};

	params.FuncName = FuncName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.Set Active Customization
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemBaseID                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Crafting_Menu_C::Set_Active_Customization(const struct FName& ItemBaseID, class UObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.Set Active Customization"));

	struct
	{
		struct FName                   ItemBaseID;
		class UObject*                 Widget;
	} params = {};

	params.ItemBaseID = ItemBaseID;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Crafting_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.BP_AnimateVisibility"));

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


// Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.BP_HandleBackKey
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Crafting_Menu_C::BP_HandleBackKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.BP_HandleBackKey"));

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


// Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.BndEvt__WBP_Crafting_Menu_WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_0_OnTabChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_TabElementBase_TabElem_C* TabElement                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Crafting_Menu_C::BndEvt__WBP_Crafting_Menu_WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_0_OnTabChanged__DelegateSignature(int Index, class UWBP_TabElementBase_TabElem_C* TabElement)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.BndEvt__WBP_Crafting_Menu_WBP_TabNavigation_Primary_K2Node_ComponentBoundEvent_0_OnTabChanged__DelegateSignature"));

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


// Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.BndEvt__WBP_Crafting_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_1_OnInputKeyClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   InputKey                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     InputActionRowHandle           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Crafting_Menu_C::BndEvt__WBP_Crafting_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_1_OnInputKeyClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* InputKey, int Index, const struct FDataTableRowHandle& InputActionRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.BndEvt__WBP_Crafting_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_1_OnInputKeyClicked__DelegateSignature"));

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


// Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.BndEvt__WBP_Crafting_Menu_WBP_Station_Repair_Menu_K2Node_ComponentBoundEvent_2_OnItemSelectedChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemBaseID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Crafting_Menu_C::BndEvt__WBP_Crafting_Menu_WBP_Station_Repair_Menu_K2Node_ComponentBoundEvent_2_OnItemSelectedChanged__DelegateSignature(const struct FName& ItemBaseID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.BndEvt__WBP_Crafting_Menu_WBP_Station_Repair_Menu_K2Node_ComponentBoundEvent_2_OnItemSelectedChanged__DelegateSignature"));

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


// Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.BndEvt__WBP_Crafting_Menu_WBP_Station_Crafting_Menu_K2Node_ComponentBoundEvent_3_OnItemSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemBaseID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Crafting_Menu_C::BndEvt__WBP_Crafting_Menu_WBP_Station_Crafting_Menu_K2Node_ComponentBoundEvent_3_OnItemSelected__DelegateSignature(const struct FName& ItemBaseID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.BndEvt__WBP_Crafting_Menu_WBP_Station_Crafting_Menu_K2Node_ComponentBoundEvent_3_OnItemSelected__DelegateSignature"));

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


// Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.ExecuteUbergraph_WBP_Crafting_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Crafting_Menu_C::ExecuteUbergraph_WBP_Crafting_Menu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crafting_Menu.WBP_Crafting_Menu_C.ExecuteUbergraph_WBP_Crafting_Menu"));

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
