#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EQSContext_HigherBetweenCombatTargetAndQuerier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EQSContext_HigherBetweenCombatTargetAndQuerier.EQSContext_HigherBetweenCombatTargetAndQuerier_C
// 0x0008 (0x0040 - 0x0038)
class UEQSContext_HigherBetweenCombatTargetAndQuerier_C : public UEnvQueryContext_BlueprintBase
{
public:
	struct FName                                       KeyNameCombatTarget;                                      // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass EQSContext_HigherBetweenCombatTargetAndQuerier.EQSContext_HigherBetweenCombatTargetAndQuerier_C"));
		return ptr;
	}


	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
