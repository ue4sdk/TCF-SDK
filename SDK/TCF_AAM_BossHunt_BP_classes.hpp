#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_BossHunt_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AAM_BossHunt_BP.AAM_BossHunt_BP_C
// 0x0018 (0x0300 - 0x02E8)
class AAAM_BossHunt_BP_C : public AAAM_Base_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         Ann_BossSpawn;                                            // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AAM_BossHunt_BP.AAM_BossHunt_BP_C"));
		return ptr;
	}


	void Ann_BossSpawned();
	void TriggerBossEncounter(class AAL_Generic_BP_C* activityLocation);
	void BossSquadSpawned(class UYPersistentDataAISquad* PersistentSquadObject);
	void ExecuteUbergraph_AAM_BossHunt_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
