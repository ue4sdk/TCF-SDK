#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AL_AIGuardians_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AL_AIGuardians_BP.AL_AIGuardians_BP_C
// 0x0009 (0x0499 - 0x0490)
class AAL_AIGuardians_BP_C : public AAL_AISpawning_BP_C
{
public:
	class UStaticMeshComponent*                        SphereLinkRadiusEditor_SM_1;                              // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               IsSphereLinkRadiusVisible;                                // 0x0498(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AL_AIGuardians_BP.AL_AIGuardians_BP_C"));
		return ptr;
	}


	void DebugUpdateLinkedActors();
	struct FString GetDebugDescription();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
