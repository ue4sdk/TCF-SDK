#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AL_Locker_01_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AL_Locker_01_BP.AL_Locker_01_BP_C
// 0x0000 (0x04FA - 0x04FA)
class AAL_Locker_01_BP_C : public AAL_LootContainers_Base_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AL_Locker_01_BP.AL_Locker_01_BP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
