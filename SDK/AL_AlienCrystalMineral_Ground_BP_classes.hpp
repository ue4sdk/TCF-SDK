#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AL_AlienCrystalMineral_Ground_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AL_AlienCrystalMineral_Ground_BP.AL_AlienCrystalMineral_Ground_BP_C
// 0x0000 (0x0560 - 0x0560)
class AAL_AlienCrystalMineral_Ground_BP_C : public AAL_Mineral_Base_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AL_AlienCrystalMineral_Ground_BP.AL_AlienCrystalMineral_Ground_BP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif