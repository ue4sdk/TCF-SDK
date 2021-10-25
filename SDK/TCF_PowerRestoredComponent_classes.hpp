#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PowerRestoredComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PowerRestoredComponent.PowerRestoredComponent_C
// 0x00C4 (0x0174 - 0x00B0)
class UPowerRestoredComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<class AActor*>                              PowerSources;                                             // 0x00B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<TSoftObjectPtr<class AActor>>               PowerSourcesSoftRef;                                      // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	int                                                ResolveAttempts;                                          // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               FoundValidPowerSource;                                    // 0x00DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	float                                              MaxConnectDistance;                                       // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TSoftObjectPtr<class USoundBase>                   PowerGainedSound;                                         // 0x00E8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class USoundBase>                   PowerLostSound;                                           // 0x0110(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FName                                       MaterialParameterName;                                    // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    HasPower;                                                 // 0x0140(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0140(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    LostPower;                                                // 0x0150(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0150(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               Powered;                                                  // 0x0160(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	float                                              LightActiveIntensity;                                     // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LightDisabledIntensity;                                   // 0x0168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RequiresPowerupCompletion;                                // 0x016C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	float                                              MaxConnectDistancePowerupCompletion;                      // 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PowerRestoredComponent.PowerRestoredComponent_C"));
		return ptr;
	}


	void PowerLostLight();
	void PowerGainedLight();
	void FindPowerSources();
	void PowerLostEmissives();
	void PowerGainedEmissives();
	void CreatePowerSourceEventBindings(class UPowerUpComponent_C* PowerSourceComponent);
	void ReceivesAnyPower(bool* ReceivesPower);
	void ReceiveBeginPlay();
	void OnPowerRestored(class AActor* Actor);
	void OnPowerLost(class AActor* Actor);
	void GetPowerSources();
	void ClearPowerSources();
	void ResolvePowerSourceReferences();
	void OnPowerupCompleted();
	void OnPowerupIncomplete();
	void OpPowerUpdate(bool HasPower);
	void DebugShowConnections();
	void ExecuteUbergraph_PowerRestoredComponent(int EntryPoint);
	void LostPower__DelegateSignature();
	void HasPower__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
