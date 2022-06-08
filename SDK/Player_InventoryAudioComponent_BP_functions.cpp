// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Player_InventoryAudioComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C.FindAudioRowHandle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYPlayerSetType                InTargetSetType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYItemType                     InItemType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     OutItemInteractionSound        (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UPlayer_InventoryAudioComponent_BP_C::FindAudioRowHandle(EYPlayerSetType InTargetSetType, EYItemType InItemType, struct FDataTableRowHandle* OutItemInteractionSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C.FindAudioRowHandle"));

	struct
	{
		EYPlayerSetType                InTargetSetType;
		EYItemType                     InItemType;
		struct FDataTableRowHandle     OutItemInteractionSound;
	} params = {};

	params.InTargetSetType = InTargetSetType;
	params.InItemType = InItemType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutItemInteractionSound != nullptr)
		*OutItemInteractionSound = params.OutItemInteractionSound;
}


// Function Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C.Event Play Inventory Audio Action
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInventoryAudioActionPerformed actionPerformed                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYPlayerSetType                targetSetType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         inventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPlayer_InventoryAudioComponent_BP_C::Event_Play_Inventory_Audio_Action(EYInventoryAudioActionPerformed actionPerformed, EYPlayerSetType targetSetType, const struct FYInventoryItem& inventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C.Event Play Inventory Audio Action"));

	struct
	{
		EYInventoryAudioActionPerformed actionPerformed;
		EYPlayerSetType                targetSetType;
		struct FYInventoryItem         inventoryItem;
	} params = {};

	params.actionPerformed = actionPerformed;
	params.targetSetType = targetSetType;
	params.inventoryItem = inventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C.BP_PlayInventoryAudio
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// EYInventoryAudioActionPerformed actionPerformed                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYPlayerSetType                targetSetType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayer_InventoryAudioComponent_BP_C::BP_PlayInventoryAudio(EYInventoryAudioActionPerformed actionPerformed, EYPlayerSetType targetSetType, const struct FYInventoryItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C.BP_PlayInventoryAudio"));

	struct
	{
		EYInventoryAudioActionPerformed actionPerformed;
		EYPlayerSetType                targetSetType;
		struct FYInventoryItem         Item;
	} params = {};

	params.actionPerformed = actionPerformed;
	params.targetSetType = targetSetType;
	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C.ExecuteUbergraph_Player_InventoryAudioComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayer_InventoryAudioComponent_BP_C::ExecuteUbergraph_Player_InventoryAudioComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C.ExecuteUbergraph_Player_InventoryAudioComponent_BP"));

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
