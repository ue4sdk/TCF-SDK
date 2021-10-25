#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_NL_IvyPlant_01_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NL_IvyPlant_01_BP.NL_IvyPlant_01_BP_C
// 0x0000 (0x0294 - 0x0294)
class ANL_IvyPlant_01_BP_C : public ANaturalLoot_Base_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass NL_IvyPlant_01_BP.NL_IvyPlant_01_BP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
