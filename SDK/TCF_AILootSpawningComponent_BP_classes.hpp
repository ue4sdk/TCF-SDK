#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AILootSpawningComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AILootSpawningComponent_BP.AILootSpawningComponent_BP_C
// 0x0008 (0x00B8 - 0x00B0)
class UAILootSpawningComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AILootSpawningComponent_BP.AILootSpawningComponent_BP_C"));
		return ptr;
	}


	void SpawnLoot(class AYAICharacter* aiCharacter, TArray<struct FYLootItemAmount>* LootItems);
	void DetermineAILoot(class AYAICharacter* aiCharacter, TArray<struct FYLootItemAmount>* LootItems);
	void ReceiveBeginPlay();
	void BP_OnAICharacterAdded_Event_1(class AYAICharacter* Character);
	void HealthEmptyDelegate_Event_1(class UYHealthComponent* healthComponent, class AActor* Instigator);
	void ExecuteUbergraph_AILootSpawningComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
