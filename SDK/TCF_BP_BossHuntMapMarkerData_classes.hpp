#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BP_BossHuntMapMarkerData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BossHuntMapMarkerData.BP_BossHuntMapMarkerData_C
// 0x0000 (0x0150 - 0x0150)
class UBP_BossHuntMapMarkerData_C : public UYBossHuntMapMarkerData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BossHuntMapMarkerData.BP_BossHuntMapMarkerData_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
