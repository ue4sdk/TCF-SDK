// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YLootContainer_Variation_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.PlayInteractionSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::PlayInteractionSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.PlayInteractionSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.OnRep_IsEmpty
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::OnRep_IsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.OnRep_IsEmpty");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.GetMaxInventoryWeight
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int AYLootContainer_Variation_BP_C::GetMaxInventoryWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.GetMaxInventoryWeight");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.SetupLootContainer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::SetupLootContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.SetupLootContainer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.OnRep_IsOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::OnRep_IsOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.OnRep_IsOpened");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BP_GetInteractionAvailableMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// int                            numInputBindings               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText AYLootContainer_Variation_BP_C::BP_GetInteractionAvailableMessage(int numInputBindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BP_GetInteractionAvailableMessage");

	struct
	{
		int                            numInputBindings;
		struct FText                   ReturnValue;
	} params;

	params.numInputBindings = numInputBindings;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.OnRep_LootContainerDefinition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::OnRep_LootContainerDefinition()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.OnRep_LootContainerDefinition");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.GetDefinitionRow
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYLootContainerDefinitionRow LootContainerRow               (CPF_Parm, CPF_OutParm)

void AYLootContainer_Variation_BP_C::GetDefinitionRow(struct FYLootContainerDefinitionRow* LootContainerRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.GetDefinitionRow");

	struct
	{
		struct FYLootContainerDefinitionRow LootContainerRow;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (LootContainerRow != nullptr)
		*LootContainerRow = params.LootContainerRow;
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.SetupVisuals
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::SetupVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.SetupVisuals");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BndEvt__YAssetVariation_K2Node_ComponentBoundEvent_0_OnRowLoaded__DelegateSignature
// (FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::BndEvt__YAssetVariation_K2Node_ComponentBoundEvent_0_OnRowLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BndEvt__YAssetVariation_K2Node_ComponentBoundEvent_0_OnRowLoaded__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BndEvt__m_objectInteractionComponent_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           perfectInteraction             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AYLootContainer_Variation_BP_C::BndEvt__m_objectInteractionComponent_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer, bool perfectInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BndEvt__m_objectInteractionComponent_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature");

	struct
	{
		EYInteractionType              interactionType;
		class AYPlayerController_Match* interactingPlayer;
		bool                           perfectInteraction;
	} params;

	params.interactionType = interactionType;
	params.interactingPlayer = interactingPlayer;
	params.perfectInteraction = perfectInteraction;

	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.UpdateOpenAnimationStatea
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::UpdateOpenAnimationStatea()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.UpdateOpenAnimationStatea");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.RefreshEmptyState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::RefreshEmptyState()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.RefreshEmptyState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BndEvt__m_inventoryComponent_K2Node_ComponentBoundEvent_5_YStateInventoryUpdatedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYLootContainer_Variation_BP_C::BndEvt__m_inventoryComponent_K2Node_ComponentBoundEvent_5_YStateInventoryUpdatedSignature__DelegateSignature(class UYStateInventoryComponent* stateInventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.BndEvt__m_inventoryComponent_K2Node_ComponentBoundEvent_5_YStateInventoryUpdatedSignature__DelegateSignature");

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
	} params;

	params.stateInventoryComponent = stateInventoryComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.UpdateEmptyState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::UpdateEmptyState()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.UpdateEmptyState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.MulticastPlayInteractionSound
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYLootContainer_Variation_BP_C::MulticastPlayInteractionSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.MulticastPlayInteractionSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.ExecuteUbergraph_YLootContainer_Variation_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYLootContainer_Variation_BP_C::ExecuteUbergraph_YLootContainer_Variation_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YLootContainer_Variation_BP.YLootContainer_Variation_BP_C.ExecuteUbergraph_YLootContainer_Variation_BP");

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
