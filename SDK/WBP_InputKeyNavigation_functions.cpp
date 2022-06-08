// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_InputKeyNavigation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.ClearInputKeys
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputKeyNavigation_C::ClearInputKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.ClearInputKeys"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.GetWidgetForInputRow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     row                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UWBP_InputKeyNavigation_Btn_C* Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputKeyNavigation_C::GetWidgetForInputRow(const struct FDataTableRowHandle& row, class UWBP_InputKeyNavigation_Btn_C** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.GetWidgetForInputRow"));

	struct
	{
		struct FDataTableRowHandle     row;
		class UWBP_InputKeyNavigation_Btn_C* Widget;
	} params = {};

	params.row = row;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.CreateNavKeys
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_InputKeyNav  NavItemSetup                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_InputKeyNavigation_C::CreateNavKeys(const struct FStructure_InputKeyNav& NavItemSetup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.CreateNavKeys"));

	struct
	{
		struct FStructure_InputKeyNav  NavItemSetup;
	} params = {};

	params.NavItemSetup = NavItemSetup;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InputKeyNavigation_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.PreConstruct"));

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


// Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InputKeyNavigation_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.AddNavItem
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_InputKeyNav  newItem                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           ClearDefaultNavItems           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InputKeyNavigation_C::AddNavItem(const struct FStructure_InputKeyNav& newItem, bool ClearDefaultNavItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.AddNavItem"));

	struct
	{
		struct FStructure_InputKeyNav  newItem;
		bool                           ClearDefaultNavItems;
	} params = {};

	params.newItem = newItem;
	params.ClearDefaultNavItems = ClearDefaultNavItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InputKeyNavigation_C::Refresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.Refresh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.ExecuteUbergraph_WBP_InputKeyNavigation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputKeyNavigation_C::ExecuteUbergraph_WBP_InputKeyNavigation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InputKeyNavigation.WBP_InputKeyNavigation_C.ExecuteUbergraph_WBP_InputKeyNavigation"));

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
