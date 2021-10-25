#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPickup_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YPickup_Base_BP.YPickup_Base_BP_C
// 0x0064 (0x048C - 0x0428)
class AYPickup_Base_BP_C : public AYPickupActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UParticleSystemComponent*                    LootFeedbackVFX;                                          // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MeshScaleTimeline_Rotation_9B7B943048FDE1CBBA26CA93EBC05C27;// 0x0438(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              MeshScaleTimeline_Size_9B7B943048FDE1CBBA26CA93EBC05C27;  // 0x043C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    MeshScaleTimeline__Direction_9B7B943048FDE1CBBA26CA93EBC05C27;// 0x0440(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class UTimelineComponent*                          MeshScaleTimeline;                                        // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         SFXLanding;                                               // 0x0450(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         SFXLegendarySpawn;                                        // 0x0460(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         RarityDT;                                                 // 0x0470(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FVector                                     DesiedMeshScale;                                          // 0x0480(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass YPickup_Base_BP.YPickup_Base_BP_C");
		return ptr;
	}


	struct FCoreUObject_FColor GetDrawDebugLineColor();
	struct FVector GetDrawDebugLineTo();
	struct FString GetDebugDescription();
	void OffsetMesh();
	void SetupLight();
	struct FTransform GetPlayerForwardViewTransform();
	void SetTrailRarityColor(EYItemRarityType rarity);
	void MeshScaleTimeline__FinishedFunc();
	void MeshScaleTimeline__UpdateFunc();
	void OnPlayLootSpawnEffects(EYItemRarityType rarity);
	void BndEvt__m_projectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void PlaySpawnSound(EYItemRarityType Index);
	void BP_OnMeshComponentAdded();
	void BP_OnCollected(class AYPlayerController* collectingPlayer, bool isItemPlacedInPlayerInventory);
	void BP_OnItemSet();
	void AnimateMeshScale();
	void ExecuteUbergraph_YPickup_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
