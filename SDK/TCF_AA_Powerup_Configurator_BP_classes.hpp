#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_Powerup_Configurator_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C
// 0x00CC (0x030C - 0x0240)
class AAA_Powerup_Configurator_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UMatchPhaseListenerComponent_BP_C*           MatchPhaseListenerComponent_BP;                           // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UBillboardComponent*                         Billboard;                                                // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              ResetActors;                                              // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class AAA_PowerUpDoor_BP_C*                        DoorToTriggerReset;                                       // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ResetCheckDelayDoorOpened;                                // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ResetCheckInterval;                                       // 0x027C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ResetDistance;                                            // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class AActor*                                      PlayerReferenceLocationForReset;                          // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                TimerHandle_TriggerReset;                                 // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TimestampLastReset;                                       // 0x0298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                PreviewVariation;                                         // 0x029C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<class AActor*, struct FString>                PowerupActors;                                            // 0x02A0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	TArray<bool>                                       IsVarationEnabled;                                        // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	int                                                MaxVariations;                                            // 0x0300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsConfiguratorInitiated;                                  // 0x0304(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	int                                                CurrentVariation;                                         // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_Powerup_Configurator_BP.AA_Powerup_Configurator_BP_C"));
		return ptr;
	}


	struct FCoreUObject_FColor GetDrawDebugLineColor();
	struct FString GetDebugDescription();
	struct FVector GetDrawDebugLineTo();
	void HideAllPowerupActors();
	void UpdateNonVariationEntries();
	void OnRep_CurrentVariation();
	void OnRep_IsConfiguratorInitiated();
	void RandomVariatonSelect(int* RandomVariation);
	void TransferResetActorsToNewConfigSetup();
	void VariationSwitchUpdate(int variation);
	void GetActorsCurrentVariation(TMap<class AActor*, struct FString> PowerupActorsAll, int variation, TArray<class AActor*>* PowerupActorsVariation);
	void CachePowerupActor(class AActor* Actor, bool* IsSuccess, struct FString* ErrorMessage);
	void HighlightCurrentConfig();
	void RefreshConfig();
	void ClearCurrentConfig();
	struct FYMapErrorInfo BP_CheckForErrors();
	void Log_Initialization();
	void GetPowerUpID(struct FString* PowerUpID);
	void ResetPowerUpActors();
	void TryReset(bool* Reset);
	void GetPlayerReferenceLocationActor(class AActor** Actor);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDoorIsOpenChanged_Event_1(class ADoorBase_BP_C* Door);
	void TryTriggerReset();
	void TryRegister();
	void OnActivitiesSpawned_Event_1();
	void DEBUG_OnConfigUpdate(int NewVariationUpdate);
	void BndEvt__AA_Powerup_Configurator_BP_MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_0_OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData);
	void ExecuteUbergraph_AA_Powerup_Configurator_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
