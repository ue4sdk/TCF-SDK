#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerPerformanceCapturing_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C
// 0x0178 (0x0230 - 0x00B8)
class UPlayerPerformanceCapturing_BP_C : public UActorComponent
{
public:
	struct FYElasticsearchData                         Profile;                                                  // 0x00B8(0x0150) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                TimerHandle_StopAndSend;                                  // 0x0208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FName>                               Stats_AvgInc;                                             // 0x0210(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FName>                               Stats_CallCount;                                          // 0x0220(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PlayerPerformanceCapturing_BP.PlayerPerformanceCapturing_BP_C"));
		return ptr;
	}


	void AddMapInfo();
	void AddActorCounts();
	void AddCaptureLocation();
	void EnableStats();
	void StopAndSend();
	void AddStatIncAverage(TArray<struct FName>* Stats_AvgInc, TArray<struct FName>* Stats_Count);
	void StartNewCapture(const struct FString& Title, float Duration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
