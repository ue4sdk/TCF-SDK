#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ReportAISenseFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ReportAISenseFunctions.ReportAISenseFunctions_C
// 0x0000 (0x0030 - 0x0030)
class UReportAISenseFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ReportAISenseFunctions.ReportAISenseFunctions_C"));
		return ptr;
	}


	static void ReportAISense(const struct FDataTableRowHandle& SenseTrigegrRowHandle, class AActor* ActorTriggering, float LoudnessMultiplier, const struct FVector& LocationOverride, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
