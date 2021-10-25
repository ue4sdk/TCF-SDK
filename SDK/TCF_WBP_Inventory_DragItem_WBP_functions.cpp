// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_DragItem_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.EvaluateCancelDragDrop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         RemovedInventoryItem           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Inventory_DragItem_WBP_C::EvaluateCancelDragDrop(const struct FYInventoryItem& RemovedInventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.EvaluateCancelDragDrop");

	struct
	{
		struct FYInventoryItem         RemovedInventoryItem;
	} params;

	params.RemovedInventoryItem = RemovedInventoryItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.Get_AmountText_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWBP_Inventory_DragItem_WBP_C::Get_AmountText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.Get_AmountText_Text_1");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.PlayDragSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_DragItem_WBP_C::PlayDragSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.PlayDragSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.OnLoaded_DC0630EA454AD91B07AEA4A237A595F9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_DragItem_WBP_C::OnLoaded_DC0630EA454AD91B07AEA4A237A595F9(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.OnLoaded_DC0630EA454AD91B07AEA4A237A595F9");

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_DragItem_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.OnPlayerSetItemRemovedCallback
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// EYPlayerSetType                equippedSetType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_DragItem_WBP_C::OnPlayerSetItemRemovedCallback(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item, EYPlayerSetType equippedSetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.OnPlayerSetItemRemovedCallback");

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


// Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.OnPlayerStashItemRemovedCallback
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Inventory_DragItem_WBP_C::OnPlayerStashItemRemovedCallback(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.OnPlayerStashItemRemovedCallback");

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
		struct FYInventoryItem         Item;
	} params;

	params.stateInventoryComponent = stateInventoryComponent;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.ExecuteUbergraph_WBP_Inventory_DragItem_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_DragItem_WBP_C::ExecuteUbergraph_WBP_Inventory_DragItem_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C.ExecuteUbergraph_WBP_Inventory_DragItem_WBP");

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
