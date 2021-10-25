#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BP_VehicleMapMarkerData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleMapMarkerData.BP_VehicleMapMarkerData_C
// 0x0000 (0x0158 - 0x0158)
class UBP_VehicleMapMarkerData_C : public UYVehicleMarkerData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_VehicleMapMarkerData.BP_VehicleMapMarkerData_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
