// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_PlayerSet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_PlayerSet.ItemComponent_PlayerSet_C.SetInventoryId
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewInventoryId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_PlayerSet_C::SetInventoryId(int NewInventoryId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_PlayerSet.ItemComponent_PlayerSet_C.SetInventoryId"));

	struct
	{
		int                            NewInventoryId;
	} params = {};

	params.NewInventoryId = NewInventoryId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_PlayerSet.ItemComponent_PlayerSet_C.UpdateAmmoWarning
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemComponent_PlayerSet_C::UpdateAmmoWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_PlayerSet.ItemComponent_PlayerSet_C.UpdateAmmoWarning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_PlayerSet.ItemComponent_PlayerSet_C.HandleDrop
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_PlayerSet_C::HandleDrop(class UYWidget_ItemContainer* itemWidget, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_PlayerSet.ItemComponent_PlayerSet_C.HandleDrop"));

	struct
	{
		class UYWidget_ItemContainer*  itemWidget;
		class UDragDropOperation*      Operation;
	} params = {};

	params.itemWidget = itemWidget;
	params.Operation = Operation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_PlayerSet.ItemComponent_PlayerSet_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemComponent_PlayerSet_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_PlayerSet.ItemComponent_PlayerSet_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_PlayerSet.ItemComponent_PlayerSet_C.BP_HandleSetItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_PlayerSet_C::BP_HandleSetItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_PlayerSet.ItemComponent_PlayerSet_C.BP_HandleSetItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_PlayerSet.ItemComponent_PlayerSet_C.ExecuteUbergraph_ItemComponent_PlayerSet
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_PlayerSet_C::ExecuteUbergraph_ItemComponent_PlayerSet(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_PlayerSet.ItemComponent_PlayerSet_C.ExecuteUbergraph_ItemComponent_PlayerSet"));

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
