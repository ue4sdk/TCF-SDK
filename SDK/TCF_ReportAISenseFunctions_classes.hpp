#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ReportAISenseFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ReportAISenseFunctions.ReportAISenseFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UReportAISenseFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ReportAISenseFunctions.ReportAISenseFunctions_C");
		return ptr;
	}


	static void ReportAISense(const struct FDataTableRowHandle& SenseTrigegrRowHandle, class AActor* ActorTriggering, float LoudnessMultiplier, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
