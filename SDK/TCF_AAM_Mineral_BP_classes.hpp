#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_Mineral_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AAM_Mineral_BP.AAM_Mineral_BP_C
// 0x0000 (0x02E8 - 0x02E8)
class AAAM_Mineral_BP_C : public AAAM_Base_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AAM_Mineral_BP.AAM_Mineral_BP_C"));
		return ptr;
	}


	void GetActorClassToSpawn(class AYActivityLocation* Location, class UClass** ActivityActorClass);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif