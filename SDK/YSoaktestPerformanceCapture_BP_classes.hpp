#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YSoaktestPerformanceCapture_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YSoaktestPerformanceCapture_BP.YSoaktestPerformanceCapture_BP_C
// 0x0028 (0x00E0 - 0x00B8)
class UYSoaktestPerformanceCapture_BP_C : public UActorComponent
{
public:
	struct FTimerHandle                                TimerHandle_SimpleFPSData;                                // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FString                                     Time_Series_Specifier;                                    // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     Performance_Capture_Name;                                 // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YSoaktestPerformanceCapture_BP.YSoaktestPerformanceCapture_BP_C"));
		return ptr;
	}


	void SendSimpleFPSData();
	void StartSimplePefromanceCapture(const struct FString& timeSeriesSpecifier, const struct FString& performanceCaptureName, float TimerSeconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
