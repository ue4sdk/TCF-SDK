#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_PowerUpDoor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C
// 0x0088 (0x0458 - 0x03D0)
class AAA_PowerUpDoor_BP_C : public ADoorBase_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPowerUpComponent_C*                         PowerUpComponent;                                         // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_WallSocket;                                            // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AAA_SafetyTrigger_BP_C*                      SafetyTrigger;                                            // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	TArray<class AAA_Trigger_BP_C*>                    RegularTrigger;                                           // 0x03F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_ExposeOnSpawn)
	float                                              AutoCloseDurationWhenUnpowered;                           // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandleCloseDoorDuePowerOff;                          // 0x0408(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnDoorIsOpenChanged_1;                                    // 0x0410(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               IsPowered;                                                // 0x0420(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class USoundBase*                                  SoundOnPowerGained;                                       // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  SoundOnPowerLost;                                         // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  SoundOnForceClosed;                                       // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  SoundDoorTimer;                                           // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Fade_Out_Duration;                                        // 0x0448(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsConnectedToConfigurator;                                // 0x044C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsLootRoomDoor;                                           // 0x044D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x044E(0x0002) MISSED OFFSET
	class APlayerController*                           interactingPlayer;                                        // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_PowerUpDoor_BP.AA_PowerUpDoor_BP_C"));
		return ptr;
	}


	void NewFunction_0_1();
	void OnRep_IsPowered();
	void Init_Event_Listeners();
	void RefreshState();
	void GetIsPowered(bool* IsPowered);
	void UserConstructionScript();
	void OnPoweredProgressionLootRoom(int PoweredConnectionsInt);
	void OnLootRoomPowered();
	void ReceiveBeginPlay();
	void OnRegularTriggerPressed(class APlayerController* PlayerController);
	void OnRegularTriggerInteract(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer);
	void CloseDoorDuePowerOff();
	void OnSafetyTriggerStarted();
	void OnSafetyTriggerEnded();
	void OnDamageTriggered();
	void FX_PowerGained();
	void FX_PowerLost();
	void FX_PowerLostShutdown();
	void BndEvt__AA_PowerUpDoor_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnPowerStatusChanged__DelegateSignature(bool IsPowered);
	void FX_DoorCloseTimer();
	void BndEvt__AA_PowerUpDoor_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnConfiguratorInitiated__DelegateSignature();
	void ResetPowerUpActor();
	void OnRelevantToPowerup(bool TRUE);
	void ExecuteUbergraph_AA_PowerUpDoor_BP(int EntryPoint);
	void OnDoorIsOpenChanged_0__DelegateSignature(class AAA_PowerUpDoor_BP_C* Door);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
