// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_RadialSelection_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.SetupItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYBaseWheelEntry        YBaseWheelEntry                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_RadialSelection_Item_C::SetupItem(const struct FYBaseWheelEntry& YBaseWheelEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.SetupItem");

	struct
	{
		struct FYBaseWheelEntry        YBaseWheelEntry;
	} params;

	params.YBaseWheelEntry = YBaseWheelEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnPressed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RadialSelection_Item_C::OnPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_RadialSelection_Item_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnIsSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialSelection_Item_C::OnIsSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnIsSelected");

	struct
	{
		bool                           IsSelected;
	} params;

	params.IsSelected = IsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnCommWheelRowHandleSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FYCommWheelEntry        wheelEntry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_RadialSelection_Item_C::OnCommWheelRowHandleSet(const struct FYCommWheelEntry& wheelEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnCommWheelRowHandleSet");

	struct
	{
		struct FYCommWheelEntry        wheelEntry;
	} params;

	params.wheelEntry = wheelEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.UpdateWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialSelection_Item_C::UpdateWidget(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.UpdateWidget");

	struct
	{
		bool                           IsSelected;
	} params;

	params.IsSelected = IsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnItemDataTableWheelRowHandleSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FYBaseWheelEntry        wheelEntry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_RadialSelection_Item_C::OnItemDataTableWheelRowHandleSet(const struct FYBaseWheelEntry& wheelEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.OnItemDataTableWheelRowHandleSet");

	struct
	{
		struct FYBaseWheelEntry        wheelEntry;
	} params;

	params.wheelEntry = wheelEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialSelection_Item_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.BP_SetConsumableInfo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         inventoryItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_RadialSelection_Item_C::BP_SetConsumableInfo(const struct FYInventoryItem& inventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.BP_SetConsumableInfo");

	struct
	{
		struct FYInventoryItem         inventoryItem;
	} params;

	params.inventoryItem = inventoryItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.ExecuteUbergraph_WBP_RadialSelection_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelection_Item_C::ExecuteUbergraph_WBP_RadialSelection_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Item.WBP_RadialSelection_Item_C.ExecuteUbergraph_WBP_RadialSelection_Item");

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
