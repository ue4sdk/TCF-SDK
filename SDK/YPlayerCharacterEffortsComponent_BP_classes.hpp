#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayerCharacterEffortsComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C
// 0x00DD (0x0195 - 0x00B8)
class UYPlayerCharacterEffortsComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         Default_Efforts_Row;                                      // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FST_EffortDataTableRow                      CurrentLoadedEffortRow;                                   // 0x00D0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	float                                              HeavyDamageTreshold;                                      // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bPrintDebug_;                                             // 0x0124(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	float                                              maxStamina;                                               // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxHealth;                                                // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PrevHealth;                                               // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PrevStamina;                                              // 0x0134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<TEnumAsByte<EN_EffortTypes>>                DisabledEffortTypes;                                      // 0x0138(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>                 ThrowableAbilities;                                       // 0x0148(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               WentLowStamina;                                           // 0x0158(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	float                                              RequiredDiff;                                             // 0x015C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               WentLowHealth;                                            // 0x0160(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	class UYStaminaComponent*                          StaminaComp;                                              // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             StaminaAudioComp;                                         // 0x0170(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StaminaBreathThreshold;                                   // 0x0178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	class USoundBase*                                  SFX_Female_StaminaLow;                                    // 0x0180(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  SFX_Male_StaminaLow;                                      // 0x0188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MediumDamageTreshold;                                     // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EYCustomizationBodyType                            CachedBodyType;                                           // 0x0194(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C"));
		return ptr;
	}


	void OnJumpCallback(int jumpCount);
	void SetupOnJump();
	void UpdateDropPodIntroStatus();
	void OnHealthDataChangedCallback(const struct FYHealthDataTableRow& HealthData);
	void OnCurrentHealthChangedCallback(float CurrentHealth, class AActor* Instigator);
	void SetupHealthBindings();
	void OnCurrentStaminaChangedCallback(float currentStamina);
	void OnMaxStaminaChangedCallback(float maxStamina);
	void SetupStaminaBindings();
	void OnDeathCallback(class UYCharacterDeathComponent* deathComponent);
	void SetupDeathBinding();
	void OnTakeDamageCallback(const struct FYDealtDamageData& IncomingDamageData);
	void SetupDamageBinding();
	void ExecuteEffortsDataFromEnum(TEnumAsByte<EN_EffortTypes> EffortType, bool NetMulticast);
	void Execute_Efforts_Data(const struct FST_EffortData& EffortData, bool NetMulticast);
	void FindCorrectEffortsRow(const struct FYActiveCustomizationData& oldData, const struct FYActiveCustomizationData& newData, bool ForceRefresh);
	void ReceiveBeginPlay();
	void BindEffortEvents_LocallyControlledOnly();
	void OnPlayerStateSetCallback(class AYPlayerState* PlayerState);
	void Server_ReplicateVOData(const struct FST_EffortData& InEffortData);
	void NetMulticast_VOData(const struct FST_EffortData& InEffortData);
	void ToggleDebug();
	void BindEffortEvents_AllClients();
	void UpdateHeavyBreathing();
	void SetupIntroBindings();
	void BP_OnIntroFinished_Event_1();
	void ExecuteUbergraph_YPlayerCharacterEffortsComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
