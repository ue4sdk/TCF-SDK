#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UplinkBiDataComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UplinkBiDataComponent_BP.UplinkBiDataComponent_BP_C
// 0x0000 (0x00B0 - 0x00B0)
class UUplinkBiDataComponent_BP_C : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass UplinkBiDataComponent_BP.UplinkBiDataComponent_BP_C"));
		return ptr;
	}


	void SendBIDataEvent(class APlayerController* Controller, TEnumAsByte<EBIEventDataUplink_Enum> UplinkState, const struct FDataTableRowHandle& HardDiskRowHandle);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
