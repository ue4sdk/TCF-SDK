#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PowerUpComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PowerUpComponent.PowerUpComponent_C
// 0x0068 (0x0120 - 0x00B8)
class UPowerUpComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                PowerSourcesNeeded;                                       // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsPowered;                                                // 0x00C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnPowerStatusChanged;                                     // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnPowerSourceEnabled;                                     // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<class AActor*>                              PowerSources;                                             // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_Transient, CPF_DisableEditOnInstance)
	struct FMulticastScriptDelegate                    OnPowerSourceDisabled;                                    // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               IsInCurrentVariation;                                     // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnConfiguratorInitiated;                                  // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PowerUpComponent.PowerUpComponent_C"));
		return ptr;
	}


	void RefreshPowerStatus();
	void RemovePowerSource(class AActor* Actor);
	void AddPowerSource(class AActor* Actor);
	void ConfiguratorInitiated();
	void SendInitEvent();
	void ExecuteUbergraph_PowerUpComponent(int EntryPoint);
	void OnConfiguratorInitiated__DelegateSignature();
	void OnPowerSourceDisabled__DelegateSignature(class AActor* Actor);
	void OnPowerSourceEnabled__DelegateSignature(class AActor* Actor);
	void OnPowerStatusChanged__DelegateSignature(bool IsPowered);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
