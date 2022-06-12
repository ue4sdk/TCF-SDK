#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AAM_LootContainers_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AAM_LootContainers_BP.AAM_LootContainers_BP_C
// 0x0010 (0x0308 - 0x02F8)
class AAAM_LootContainers_BP_C : public AAAM_Base_BP_C
{
public:
	struct FDataTableRowHandle                         CreateRow;                                                // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AAM_LootContainers_BP.AAM_LootContainers_BP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
