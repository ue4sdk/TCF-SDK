// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_SetItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_SetItem.ItemComponent_SetItem_C.SetInventoryType
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInventoryListType            listType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_SetItem_C::SetInventoryType(EYInventoryListType listType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_SetItem.ItemComponent_SetItem_C.SetInventoryType"));

	struct
	{
		EYInventoryListType            listType;
	} params;

	params.listType = listType;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_SetItem.ItemComponent_SetItem_C.SetInventoryItemData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// EYPlayerSetType                ItemSlotType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_SetItem_C::SetInventoryItemData(const struct FYInventoryItem& Item, EYPlayerSetType ItemSlotType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_SetItem.ItemComponent_SetItem_C.SetInventoryItemData"));

	struct
	{
		struct FYInventoryItem         Item;
		EYPlayerSetType                ItemSlotType;
	} params;

	params.Item = Item;
	params.ItemSlotType = ItemSlotType;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_SetItem.ItemComponent_SetItem_C.BP_SetWeaponCounters
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYUIWeaponAmmoData      uiWeaponAmmoData               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UItemComponent_SetItem_C::BP_SetWeaponCounters(const struct FYUIWeaponAmmoData& uiWeaponAmmoData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_SetItem.ItemComponent_SetItem_C.BP_SetWeaponCounters"));

	struct
	{
		struct FYUIWeaponAmmoData      uiWeaponAmmoData;
	} params;

	params.uiWeaponAmmoData = uiWeaponAmmoData;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_SetItem.ItemComponent_SetItem_C.BP_HandleSetItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_SetItem_C::BP_HandleSetItem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_SetItem.ItemComponent_SetItem_C.BP_HandleSetItem"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_SetItem.ItemComponent_SetItem_C.ExecuteUbergraph_ItemComponent_SetItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_SetItem_C::ExecuteUbergraph_ItemComponent_SetItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_SetItem.ItemComponent_SetItem_C.ExecuteUbergraph_ItemComponent_SetItem"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_SetItem.ItemComponent_SetItem_C.OnItemScrapValueChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ScrapValueText                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UItemComponent_SetItem_C::OnItemScrapValueChanged__DelegateSignature(const struct FText& ScrapValueText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_SetItem.ItemComponent_SetItem_C.OnItemScrapValueChanged__DelegateSignature"));

	struct
	{
		struct FText                   ScrapValueText;
	} params;

	params.ScrapValueText = ScrapValueText;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_SetItem.ItemComponent_SetItem_C.OnItemScrapped__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UItemComponent_SetItem_C::OnItemScrapped__DelegateSignature(const struct FYInventoryItem& Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_SetItem.ItemComponent_SetItem_C.OnItemScrapped__DelegateSignature"));

	struct
	{
		struct FYInventoryItem         Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
