#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LightningTypeManager_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightningTypeManager_BP.LightningTypeManager_BP_C
// 0x0070 (0x00A0 - 0x0030)
class ULightningTypeManager_BP_C : public UObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FLightningTuningDataInfo                    LightningTuningData;                                      // 0x0038(0x0024) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsLightningActive;                                        // 0x005C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	class ULightningComponent_BP_C*                    LightningComponent;                                       // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         LightningRowHandle;                                       // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FTimerHandle                                TimerHandle_InitialDelay;                                 // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                TImerHandle_OnTimer;                                      // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentPhaseBlendDuration;                                // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnRequestTimerClear;                                      // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LightningTypeManager_BP.LightningTypeManager_BP_C"));
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
	void OnRequestTimerClear__DelegateSignature(class ULightningTypeManager_BP_C* manager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
