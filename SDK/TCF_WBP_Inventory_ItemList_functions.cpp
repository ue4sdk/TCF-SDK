// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_ItemList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.UpdateFilter
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterCategoriesDataEntry Categories                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Inventory_ItemList_C::UpdateFilter(const struct FYFilterCategoriesDataEntry& Categories)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.UpdateFilter"));

	struct
	{
		struct FYFilterCategoriesDataEntry Categories;
	} params;

	params.Categories = Categories;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.CreateItemWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYUIInventoryData       InUIInventoryData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Inventory_ItemList_C::CreateItemWidgets(const struct FYUIInventoryData& InUIInventoryData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.CreateItemWidgets"));

	struct
	{
		struct FYUIInventoryData       InUIInventoryData;
	} params;

	params.InUIInventoryData = InUIInventoryData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.PlayerInventoryDataUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYUIInventoryData       InUIInventoryData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Inventory_ItemList_C::PlayerInventoryDataUpdated(const struct FYUIInventoryData& InUIInventoryData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.PlayerInventoryDataUpdated"));

	struct
	{
		struct FYUIInventoryData       InUIInventoryData;
	} params;

	params.InUIInventoryData = InUIInventoryData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_ItemList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.ApplyFilter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_ItemList_C::ApplyFilter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.ApplyFilter"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.ExecuteUbergraph_WBP_Inventory_ItemList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_ItemList_C::ExecuteUbergraph_WBP_Inventory_ItemList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.ExecuteUbergraph_WBP_Inventory_ItemList"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.AddedItem__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  newItemContainer               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_ItemList_C::AddedItem__DelegateSignature(class UYWidget_ItemContainer* newItemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_ItemList.WBP_Inventory_ItemList_C.AddedItem__DelegateSignature"));

	struct
	{
		class UYWidget_ItemContainer*  newItemContainer;
	} params;

	params.newItemContainer = newItemContainer;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
