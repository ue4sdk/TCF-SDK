#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EQSContext_AllyLocationAndCombatLocations_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EQSContext_AllyLocationAndCombatLocations.EQSContext_AllyLocationAndCombatLocations_C
// 0x000C (0x0044 - 0x0038)
class UEQSContext_AllyLocationAndCombatLocations_C : public UEnvQueryContext_BlueprintBase
{
public:
	struct FName                                       KeyCombatMoveToLocation;                                  // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              NearbyAIRadius;                                           // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass EQSContext_AllyLocationAndCombatLocations.EQSContext_AllyLocationAndCombatLocations_C"));
		return ptr;
	}


	void TryGetMoveToLocation(class AYAICharacter* aiCharacter, struct FVector* MoveToLocation, bool* HasMoveToLocation);
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
