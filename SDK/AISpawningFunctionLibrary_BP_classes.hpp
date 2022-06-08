#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AISpawningFunctionLibrary_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C
// 0x0000 (0x0030 - 0x0030)
class UAISpawningFunctionLibrary_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C"));
		return ptr;
	}


	static void LogSpawnError(class UObject* contextObject, const struct FDataTableRowHandle& OptionalDT, const struct FString& contextString, class UObject* __WorldContext);
	static void GetAIsToSpawnFromDT(const struct FDataTableRowHandle& DataTableRowHandle, class UObject* Context, class UObject* __WorldContext, struct FYAISquadSpawnDefinition* squadSpawnDefinition, TArray<struct FYSquadAIType>* Result);
	static void SpawnAISquadSpecificAIs(const struct FYAISquadSpawnDefinition& m_spawnDefinition, class UObject* __WorldContext, TArray<struct FYSquadAIType>* SpawnAis, class UYPersistentDataAISquad** PersistentSquadObject);
	static void SpawnAISquadFromDT(const struct FDataTableRowHandle& AISquadRowHandle, class UObject* contextObject, class UObject* __WorldContext, struct FYAISquadSpawnDefinition* SpawnDefinition, class UYPersistentDataAISquad** PersistentSquadObject);
	static void SpawnAISquadGeneric(class UObject* __WorldContext, struct FYAISquadSpawnDefinition* SpawnDefinition, class UYPersistentDataAISquad** PersistentSquadObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
