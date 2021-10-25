#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UIHealthDeltaFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UIHealthDeltaFunctions.UIHealthDeltaFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UUIHealthDeltaFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass UIHealthDeltaFunctions.UIHealthDeltaFunctions_C");
		return ptr;
	}


	static void UpdateDeltaProgressBar(class UProgressBar* ProgressBar_Delta, class UProgressBar* ProgressBar, float AdjustmentSpeed, class UObject* __WorldContext, float* DeltaTime, float* TimeLeftUntilProgressDeltaStarts_REFERENCE);
	static void SetupShowDeltaHealth(class UProgressBar* ProgressBar_Delta, class UProgressBar* ProgressBar, float DelayDeltaProgress, class UObject* __WorldContext, float* TimeLeftUntilProgressDeltaStarts_REEFERENCE);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
