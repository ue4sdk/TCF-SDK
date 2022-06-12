#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MI_FlightRecorder_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MI_FlightRecorder_BP.MI_FlightRecorder_BP_C
// 0x0000 (0x02C4 - 0x02C4)
class AMI_FlightRecorder_BP_C : public AMissionItems_Base_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MI_FlightRecorder_BP.MI_FlightRecorder_BP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
