#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LootSpawnVolume_Component_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C
// 0x0068 (0x0120 - 0x00B8)
class ULootSpawnVolume_Component_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<struct FTransform>                          LootSpawnTransforms;                                      // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class AYPickupActor*>                       Spawned_Loot;                                             // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FMulticastScriptDelegate                    OnLootSpawned;                                            // 0x00E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnAllLootPickedUp;                                        // 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FDataTableRowHandle                         LootListRowHandle;                                        // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FMulticastScriptDelegate                    OnLootPickUpActorDestroyed;                               // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C"));
		return ptr;
	}


	void DespawnLoot();
	bool IsAllLootPickedUp();
	void CleanUpSpawnedLoot();
	void OnLootActorDestroyed(class AActor* DestroyedActor);
	void CreateLootPool(const struct FDataTableRowHandle& LootPoolRow, TArray<struct FLootSpawnVolume_Struct>* LoopPool);
	void VisualizeLootTransforms();
	void AttemptLootSpawn();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_LootSpawnVolume_Component_BP(int EntryPoint);
	void OnLootPickUpActorDestroyed__DelegateSignature(class AActor* pickUpActor);
	void OnAllLootPickedUp__DelegateSignature();
	void OnLootSpawned__DelegateSignature(TArray<class AYPickupActor*>* LootActors);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
