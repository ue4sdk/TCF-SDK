#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ScannerWeaponComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C
// 0x0050 (0x0100 - 0x00B0)
class UScannerWeaponComponent_BP_C : public UYScriptableWeaponComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UYWeaponPlayerControllerRuntimeComponent*    Controller_Weapon_Runtime_Component;                      // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYPlayerCharacterWeaponComponent*            Character_Weapon_Component;                               // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  SFX_ScannerReady;                                         // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  SFX_ScannerCharge;                                        // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             Recharge2DSound;                                          // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  SFX_ScannerNotReady;                                      // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ScanDelayMaxRange;                                        // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ScanTravelTime;                                           // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               LatestScanResult;                                         // 0x00F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              PlayScanResultFXDelayTime;                                // 0x00F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                TimerPlayScanResult;                                      // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ScannerWeaponComponent_BP.ScannerWeaponComponent_BP_C");
		return ptr;
	}


	struct FVector GetCharacterLocation();
	class AActor* GetCharacter();
	void AddPingWidgetWithDelay(class UActorComponent* ScannableComponent);
	float CalcPingDelay(class UActorComponent* ScannableComponent);
	void ScanForScannableComponents();
	void GetWidget(class UWBP_ScannerInterface_C** AsWBP_Scanner_Interface);
	void FadeOutRechargeSound();
	void Init(class UYWeaponPlayerControllerRuntimeComponent* weaponRuntimeComponent, class UYPlayerCharacterWeaponComponent* characterWeaponComponent);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnWeaponCantBeFired_Event();
	void OnWeaponRefireCooldownTimeChanged_Event(float percentage);
	void OnWeaponRefireCooldownTimeFinished_Event();
	void OnWeaponFired_Event(class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent);
	void PlayScanFeedbackDelayed(bool IsSuccess);
	void OnPlayScanFX();
	void UpdateRefireProgress(float percentage);
	void ExecuteUbergraph_ScannerWeaponComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
