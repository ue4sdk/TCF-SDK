#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_LightningTypeManager_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightningTypeManager_BP.LightningTypeManager_BP_C
// 0x0054 (0x007C - 0x0028)
class ULightningTypeManager_BP_C : public UObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FLightningTuningDataInfo                    LightningTuningData;                                      // 0x0030(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsLightningActive;                                        // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class ULightningComponent_BP_C*                    LightningComponent;                                       // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         LightningRowHandle;                                       // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FTimerHandle                                TimerHandle_InitialDelay;                                 // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentPhaseBlendDuration;                                // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LightningTypeManager_BP.LightningTypeManager_BP_C");
		return ptr;
	}


	void DetermineInitialActivationDelay(float* Delay);
	void GetShouldBeActive(TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive, bool* Result);
	void SetupTimer();
	void OnTimer();
	void Initialize(const struct FDataTableRowHandle& LightningRowHandle);
	void OnInitialTimerElapsed();
	void StartLightningStrikes();
	void StopLightningStrikes();
	void SetIsLightningStrikesActive(bool IsActive);
	void RefreshIsActiveStatus(TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive, float CurrentPhaseBlendDuration);
	void ExecuteUbergraph_LightningTypeManager_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
