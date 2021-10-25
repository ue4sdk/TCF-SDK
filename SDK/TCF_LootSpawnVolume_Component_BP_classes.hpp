#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_LootSpawnVolume_Component_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C
// 0x0068 (0x0118 - 0x00B0)
class ULootSpawnVolume_Component_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<struct FTransform>                          LootSpawnTransforms;                                      // 0x00B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class AYPickupActor*>                       Spawned_Loot;                                             // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnLootSpawned;                                            // 0x00D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00D8(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnAllLootPickedUp;                                        // 0x00E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00E8(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FDataTableRowHandle                         LootListRowHandle;                                        // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FScriptMulticastDelegate                    OnLootPickUpActorDestroyed;                               // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0108(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

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
