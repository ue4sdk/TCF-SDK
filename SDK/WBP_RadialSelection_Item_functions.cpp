// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_RadialSelection_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.SetNoExpressionState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialSelection_Item_C::SetNoExpressionState(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.SetNoExpressionState"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.Set Empty State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialSelection_Item_C::Set_Empty_State(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.Set Empty State"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.SetupItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYBaseWheelEntry        YBaseWheelEntry                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_RadialSelection_Item_C::SetupItem(const struct FYBaseWheelEntry& YBaseWheelEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.SetupItem"));

	struct
	{
		struct FYBaseWheelEntry        YBaseWheelEntry;
	} params = {};

	params.YBaseWheelEntry = YBaseWheelEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnPressed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RadialSelection_Item_C::OnPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_RadialSelection_Item_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.BP_AnimateVisibility"));

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


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnIsSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialSelection_Item_C::OnIsSelected(bool IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnIsSelected"));

	struct
	{
		bool                           IsSelected;
	} params = {};

	params.IsSelected = IsSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnCommWheelRowHandleSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FYCommWheelEntry        wheelEntry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_RadialSelection_Item_C::OnCommWheelRowHandleSet(const struct FYCommWheelEntry& wheelEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnCommWheelRowHandleSet"));

	struct
	{
		struct FYCommWheelEntry        wheelEntry;
	} params = {};

	params.wheelEntry = wheelEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.UpdateWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialSelection_Item_C::UpdateWidget(bool IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.UpdateWidget"));

	struct
	{
		bool                           IsSelected;
	} params = {};

	params.IsSelected = IsSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnItemDataTableWheelRowHandleSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FYBaseWheelEntry        wheelEntry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_RadialSelection_Item_C::OnItemDataTableWheelRowHandleSet(const struct FYBaseWheelEntry& wheelEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnItemDataTableWheelRowHandleSet"));

	struct
	{
		struct FYBaseWheelEntry        wheelEntry;
	} params = {};

	params.wheelEntry = wheelEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialSelection_Item_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.PreConstruct"));

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


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.BP_SetConsumableInfo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         inventoryItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_RadialSelection_Item_C::BP_SetConsumableInfo(const struct FYInventoryItem& inventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.BP_SetConsumableInfo"));

	struct
	{
		struct FYInventoryItem         inventoryItem;
	} params = {};

	params.inventoryItem = inventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnEmptyItemSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EYWheelType                    wheelType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelection_Item_C::OnEmptyItemSet(EYWheelType wheelType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnEmptyItemSet"));

	struct
	{
		EYWheelType                    wheelType;
	} params = {};

	params.wheelType = wheelType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.ExecuteUbergraph_WBP_RadialSelection_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelection_Item_C::ExecuteUbergraph_WBP_RadialSelection_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.ExecuteUbergraph_WBP_RadialSelection_Item"));

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
