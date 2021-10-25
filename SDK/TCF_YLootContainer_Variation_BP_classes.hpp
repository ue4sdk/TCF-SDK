#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YLootContainer_Variation_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YLootContainer_Variation_BP.YLootContainer_Variation_BP_C
// 0x0061 (0x04E1 - 0x0480)
class AYLootContainer_Variation_BP_C : public AYLootContainer_Base_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYAssetVariationComponent*                   YAssetVariation;                                          // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         LootContainerDefinition;                                  // 0x0498(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify, CPF_NoDestructor)
	class UAnimSequenceBase*                           OpenAnimation;                                            // 0x04A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsOpened;                                                 // 0x04B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	bool                                               IsEmpty;                                                  // 0x04B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x04B2(0x0006) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialInstances;                                 // 0x04B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FName                                       MaterialParameterNameGleam;                               // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         LootContainerDefinition_PlacedInWorld;                    // 0x04D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn)
	EYLootContainerTier                                LootTier;                                                 // 0x04E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass YLootContainer_Variation_BP.YLootContainer_Variation_BP_C");
		return ptr;
	}


	void PlayInteractionSound();
	void OnRep_IsEmpty();
	int GetMaxInventoryWeight();
	void SetupLootContainer();
	void OnRep_IsOpened();
	struct FText BP_GetInteractionAvailableMessage(int numInputBindings);
	void OnRep_LootContainerDefinition();
	void GetDefinitionRow(struct FYLootContainerDefinitionRow* LootContainerRow);
	void UserConstructionScript();
	void SetupVisuals();
	void BndEvt__YAssetVariation_K2Node_ComponentBoundEvent_0_OnRowLoaded__DelegateSignature();
	void BndEvt__m_objectInteractionComponent_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer, bool perfectInteraction);
	void UpdateOpenAnimationStatea();
	void RefreshEmptyState();
	void BndEvt__m_inventoryComponent_K2Node_ComponentBoundEvent_5_YStateInventoryUpdatedSignature__DelegateSignature(class UYStateInventoryComponent* stateInventoryComponent);
	void UpdateEmptyState();
	void MulticastPlayInteractionSound();
	void ExecuteUbergraph_YLootContainer_Variation_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
