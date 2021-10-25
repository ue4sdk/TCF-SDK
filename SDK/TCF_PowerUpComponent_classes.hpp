#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PowerUpComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PowerUpComponent.PowerUpComponent_C
// 0x0060 (0x0110 - 0x00B0)
class UPowerUpComponent_C : public UActorComponent
{
public:
	int                                                PowerSourcesNeeded;                                       // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsPowered;                                                // 0x00B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPowerStatusChanged;                                     // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00B5(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnPowerSourceEnabled;                                     // 0x00C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00C8(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<class AActor*>                              PowerSources;                                             // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_Transient, CPF_DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPowerSourceDisabled;                                    // 0x00E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x00E8(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               IsInCurrentVariation;                                     // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnConfiguratorInitiated;                                  // 0x0100(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x00F9(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PowerUpComponent.PowerUpComponent_C"));
		return ptr;
	}


	void RefreshPowerStatus();
	void RemovePowerSource(class AActor* Actor);
	void AddPowerSource(class AActor* Actor);
	void OnConfiguratorInitiated__DelegateSignature();
	void OnPowerSourceDisabled__DelegateSignature(class AActor* Actor);
	void OnPowerSourceEnabled__DelegateSignature(class AActor* Actor);
	void OnPowerStatusChanged__DelegateSignature(bool IsPowered);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
