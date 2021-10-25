// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_Weight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_Weight.ItemComponent_Weight_C.BP_HandleSetItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_Weight_C::BP_HandleSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Weight.ItemComponent_Weight_C.BP_HandleSetItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Weight.ItemComponent_Weight_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemComponent_Weight_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Weight.ItemComponent_Weight_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Weight.ItemComponent_Weight_C.OnStashItemUpdatedCallback
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UItemComponent_Weight_C::OnStashItemUpdatedCallback(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Weight.ItemComponent_Weight_C.OnStashItemUpdatedCallback");

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
		struct FYInventoryItem         Item;
	} params;

	params.stateInventoryComponent = stateInventoryComponent;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Weight.ItemComponent_Weight_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemComponent_Weight_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Weight.ItemComponent_Weight_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Weight.ItemComponent_Weight_C.OnPlayerSetItemUpdatedCallback
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// EYPlayerSetType                equippedSetType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Weight_C::OnPlayerSetItemUpdatedCallback(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item, EYPlayerSetType equippedSetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Weight.ItemComponent_Weight_C.OnPlayerSetItemUpdatedCallback");

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
		struct FYInventoryItem         Item;
		EYPlayerSetType                equippedSetType;
	} params;

	params.stateInventoryComponent = stateInventoryComponent;
	params.Item = Item;
	params.equippedSetType = equippedSetType;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Weight.ItemComponent_Weight_C.ExecuteUbergraph_ItemComponent_Weight
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Weight_C::ExecuteUbergraph_ItemComponent_Weight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Weight.ItemComponent_Weight_C.ExecuteUbergraph_ItemComponent_Weight");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Weight.ItemComponent_Weight_C.OnWeightTextSet__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   WeightText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UItemComponent_Weight_C::OnWeightTextSet__DelegateSignature(const struct FText& WeightText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Weight.ItemComponent_Weight_C.OnWeightTextSet__DelegateSignature");

	struct
	{
		struct FText                   WeightText;
	} params;

	params.WeightText = WeightText;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
