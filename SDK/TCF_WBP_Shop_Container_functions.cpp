// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Shop_Container_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Shop_Container.WBP_Shop_Container_C.OnUpdateStores
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Shop_Container_C::OnUpdateStores()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Container.WBP_Shop_Container_C.OnUpdateStores"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Container.WBP_Shop_Container_C.BP_CreateAndAddEntry
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayfabStoreItemEntry storeItemEntry                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UYWidget_ShopItemEntry*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget_ShopItemEntry* UWBP_Shop_Container_C::BP_CreateAndAddEntry(const struct FYPlayfabStoreItemEntry& storeItemEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Container.WBP_Shop_Container_C.BP_CreateAndAddEntry"));

	struct
	{
		struct FYPlayfabStoreItemEntry storeItemEntry;
		class UYWidget_ShopItemEntry*  ReturnValue;
	} params;

	params.storeItemEntry = storeItemEntry;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Shop_Container.WBP_Shop_Container_C.PopulateFromShop
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayfabStoreItemsResult Store                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Shop_Container_C::PopulateFromShop(const struct FYPlayfabStoreItemsResult& Store)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Container.WBP_Shop_Container_C.PopulateFromShop"));

	struct
	{
		struct FYPlayfabStoreItemsResult Store;
	} params;

	params.Store = Store;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Container.WBP_Shop_Container_C.OnShopItemClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayfabStoreItemEntry storeItemEntry                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Shop_Container_C::OnShopItemClicked(const struct FYPlayfabStoreItemEntry& storeItemEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Container.WBP_Shop_Container_C.OnShopItemClicked"));

	struct
	{
		struct FYPlayfabStoreItemEntry storeItemEntry;
	} params;

	params.storeItemEntry = storeItemEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Container.WBP_Shop_Container_C.BP_PlayfabShopItemPurchaseCompleted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Shop_Container_C::BP_PlayfabShopItemPurchaseCompleted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Container.WBP_Shop_Container_C.BP_PlayfabShopItemPurchaseCompleted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Container.WBP_Shop_Container_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Shop_Container_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Container.WBP_Shop_Container_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Shop_Container.WBP_Shop_Container_C.ExecuteUbergraph_WBP_Shop_Container
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Shop_Container_C::ExecuteUbergraph_WBP_Shop_Container(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Shop_Container.WBP_Shop_Container_C.ExecuteUbergraph_WBP_Shop_Container"));

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
