#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_Mineral_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_Mineral_Base_BP.AA_Mineral_Base_BP_C
// 0x01D8 (0x0418 - 0x0240)
class AAA_Mineral_Base_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCollapseDestructibleComponent_BP_C*         CollapseDestructibleComponent_BP;                         // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYAssetVariationComponent*                   YAssetVariation;                                          // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYActivityComponent*                         YActivity;                                                // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYScannableComponent*                        YScannable;                                               // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UMineralBIHookComponent_BP_C*                MineralBIHookComponent_BP;                                // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYDamageComponent*                           YDamage;                                                  // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYDestructibleMeshComponent*                 YDestructibleMesh;                                        // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ULootSpawnVolume_Component_BP_C*             LootSpawnVolume_BP;                                       // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Rockmesh;                                                 // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_scan_animSlider_679FECFA42E41068EB4E8480011EB007;// 0x0298(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_679FECFA42E41068EB4E8480011EB007;   // 0x029C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DestructibleMesh_MID_Exterior;                            // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DestructibleMesh_MID_Interior;                            // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         MineralVariationRowHandle;                                // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify, CPF_NoDestructor)
	bool                                               MeshVariationSetupComplete;                               // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               LootSetupComplete;                                        // 0x02C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x02CA(0x0006) MISSED OFFSET
	TMap<EYActivityType, struct FDataTableRowHandle>   DataTableRowPerActivity_Wall;                             // 0x02D0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<EYActivityType, struct FDataTableRowHandle>   DataTableRowPerActivity_Ground;                           // 0x0320(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               IsWallType;                                               // 0x0370(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsMineralCollapsed;                                       // 0x0371(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0372(0x0006) MISSED OFFSET
	TArray<struct FVector>                             SpawnedLoot;                                              // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify)
	TArray<struct FVector>                             LootMined;                                                // 0x0388(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify)
	TArray<struct FVector>                             LootMinedAcknowledged;                                    // 0x0398(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                ChunksToDestroyPerFrame;                                  // 0x03A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ChunkCollapseTimeStep;                                    // 0x03AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                TimerHandle_PartialCollapse;                              // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<int>                                        ExecutionRequests;                                        // 0x03B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<int>                                        ExecutionRequests_Executed;                               // 0x03C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               HasBegunPlay;                                             // 0x03D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HasValidRow;                                              // 0x03D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x6];                                       // 0x03DA(0x0006) MISSED OFFSET
	class UAudioComponent*                             MineralCrumble_SoundComp;                                 // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  MineralCompletedCrumble_Sound;                            // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              DiscoveredLootByLocalPlayer;                              // 0x03F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class AYPickupActor*>                       SpawnedPickUpActors;                                      // 0x0400(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class AAL_Mineral_Base_BP_C*                       MineralActivityLocation;                                  // 0x0410(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_Mineral_Base_BP.AA_Mineral_Base_BP_C"));
		return ptr;
	}


	struct FCoreUObject_FColor GetDrawDebugLineColor();
	struct FVector GetDrawDebugLineTo();
	struct FString GetDebugDescription();
	void OnDamaged(const struct FYDealtDamageData& DamageEvent);
	void TriggerLootDiscoveredCheck();
	void OnRep_LootMined();
	void OnRep_IsMineralCollapsed();
	void DetermineDestructibleMaterialParent(int MaterialIndex, class UMaterialInterface** Output);
	void InitializeDynamicMaterialInstances();
	void OnRep_SpawnedLoot();
	void OnRep_MineralVariationRowHandle();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__YDamage_K2Node_ComponentBoundEvent_4_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data);
	void BndEvt__LootSpawnVolume_BP_K2Node_ComponentBoundEvent_5_OnLootSpawned__DelegateSignature(TArray<class AYPickupActor*>* LootActors);
	void BndEvt__LootSpawnVolume_BP_K2Node_ComponentBoundEvent_0_OnAllLootPickedUp__DelegateSignature();
	void BndEvt__YActivity_K2Node_ComponentBoundEvent_2_OnSetupComplete__DelegateSignature();
	void SetupVariation();
	void BndEvt__YAssetVariation_K2Node_ComponentBoundEvent_3_OnRowLoaded__DelegateSignature();
	void OnMeshVariationIntialized();
	void OnLootInitialized();
	void TryInitializeDynamicMaterialInstances();
	void BndEvt__YScannable_K2Node_ComponentBoundEvent_6_OnWasScanned__DelegateSignature();
	void BndEvt__LootSpawnVolume_BP_K2Node_ComponentBoundEvent_1_OnLootPickUpActorDestroyed__DelegateSignature(class AActor* pickUpActor);
	void DestroyChunksAround(const struct FVector& HurtOrigin);
	void UpdateDestructionDueAlreadyMinedLoot();
	void ExecuteSpawnAction(const struct FYResourceManagerRequestEntry& Data);
	void TrySetMaterial(int IndexToTest);
	void ReceiveBeginPlay();
	void TryLoadRow();
	void BndEvt__AA_Mineral_Base_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_7_OnCollapseCompleted__DelegateSignature();
	void FX_MineralCompletedCrumbleStarted();
	void FX_MineralCompletedCrumbleEnded();
	void MarkAsDepletedDueDamage();
	void ExecuteUbergraph_AA_Mineral_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
