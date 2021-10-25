#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PRO_PlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRO_PlayerController.PRO_PlayerController_C
// 0x0130 (0x09F8 - 0x08C8)
class APRO_PlayerController_C : public AYPlayerController_Match
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UYControllerCraftingComponent_BP_C*          YControllerCraftingComponent_BP;                          // 0x08D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYPlayerDropPodIntroComponent_BP_C*          YPlayerDropPodIntroComponent_BP;                          // 0x08D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UBP_AimAssistDebug_C*                        BP_AimAssistDebug;                                        // 0x08E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UBP_AimAssist_C*                             BP_AimAssist;                                             // 0x08E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYTutorialComponent_BP_C*                    YTutorialComponent_BP;                                    // 0x08F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYControllerContractsActivesDataComponent_BP_C* YControllerContractsActivesDataComponent_BP;              // 0x08F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYControllerTrackerInventoryComponent_BP_C*  YControllerTrackerInventoryComponent_BP;                  // 0x0900(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYControllerTrackerKillsComponent_BP_C*      YControllerTrackerKillsComponent_BP;                      // 0x0908(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYControllerContractsBoardsDataComponent_BP_C* YControllerContractsBoardsDataComponent_BP;               // 0x0910(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYControllerContractsCheatsComponent_BP_C*   YControllerContractsCheatsComponent_BP;                   // 0x0918(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UBackgroundDropPodSpawner_BP_C*              BackgroundDropPodSpawner_BP;                              // 0x0920(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYIdleDetectionComponent_BP_C*               YIdleDetectionComponent_BP;                               // 0x0928(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ULightningComponent_BP_C*                    LightningComponent_BP;                                    // 0x0930(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UPlayerStationComponent_BP_C*                PlayerStationComponent_BP;                                // 0x0938(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UPlayerControllerCombatAwarenessComponent_BP_C* CombatAwarenessComponent;                                 // 0x0940(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYBugReporterComponent_BP_C*                 YBugItComponent_BP;                                       // 0x0948(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FString                                     commandLine;                                              // 0x0950(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               recordProfiles;                                           // 0x0960(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0961(0x0003) MISSED OFFSET
	int                                                performanceLoop;                                          // 0x0964(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0968(0x0008) MISSED OFFSET
	struct FTransform                                  default_location;                                         // 0x0970(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isSoaktestRunning;                                        // 0x09A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isCraftingMaterialsReceived;                              // 0x09A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x6];                                       // 0x09A2(0x0006) MISSED OFFSET
	struct FString                                     CraftItemName;                                            // 0x09A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               isCraftingWorks;                                          // 0x09B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x09B9(0x0007) MISSED OFFSET
	class ASoakTestStationAutomationManager_BP_C*      SoaktestStationManagerActor;                              // 0x09C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsSmokecheckAutomationRunning;                            // 0x09C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               SmokecheckPlayedMP_Map;                                   // 0x09C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x6];                                       // 0x09CA(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHasZeal;                                                // 0x09D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x09CA(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               isStationAutomationReconectRunning;                       // 0x09E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isFunctionalTestRunning;                                  // 0x09E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsPerformanceAutomationRunning;                           // 0x09E2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isPerformanceCapturingRunning;                            // 0x09E3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isStationAutomationIDLE_Running;                          // 0x09E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x3];                                       // 0x09E5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    CallEvacPressed;                                          // 0x09E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData07[0xF];                                       // 0x09E5(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PRO_PlayerController.PRO_PlayerController_C");
		return ptr;
	}


	void BP_DebugToggleAimAssistInfo();
	float BP_AimAssistAdjustYawInput(float InValue);
	float BP_AimAssistAdjustPitchInput(float InValue);
	void LogSpawnedActivities();
	bool BP_OnTryConsumeEscapeKey();
	void InpActEvt_Debug_ToggleGod_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_HideHud_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_CallEvac_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void sendRequestAutomationStarted();
	void StartInMatchSoaktest();
	void RunPerformanceCapture(const struct FString& timeSeriesSpecifier, const struct FString& performanceCaptureName);
	void nextPerformanceCycle();
	void DebugLeaveMatch();
	void ServerDebugLeaveMatch();
	void sendRequestSpottedPerformanceStarted();
	void BndEvt__m_controllerReplicationComponent_K2Node_ComponentBoundEvent_0_OnAnyPlayerTeleportedDBNO__DelegateSignature(const struct FYTeleportData& teleportData);
	void ToggleHud();
	void RequestCaptureServerPerf();
	void MatchStarted(EYMatchState matchState);
	void StartSmokecheckInMatch();
	void debuginitautomation();
	void startSationAutomation();
	void SmokecheckMeta();
	void OnPlayerInventoryUpdated(TArray<struct FYInventoryItem> Inventory);
	void startSoaktest();
	void StartSpotPerformanceCapturing();
	void startStationReconnectAutomation();
	void InitSoaktest();
	void SmokeCheckMeta_PlayerQuarters();
	void BP_DebugSetMatchPhase(const struct FDataTableRowHandle& newMatchPhaseRowHandle);
	void ServerDebugSetMatchPhase(const struct FDataTableRowHandle& MatchPhaseDefinitionRowHandle);
	void PressedCallEvac();
	void NextMatchPhase();
	void OnSmokeTestTimeOut();
	void HealthEmptyDelegate_Event_1(class UYHealthComponent* healthComponent, class AActor* Instigator);
	void CustomEvent(class UYHealthComponent* healthComponent, class AActor* Instigator);
	void ExecuteUbergraph_PRO_PlayerController(int EntryPoint);
	void CallEvacPressed__DelegateSignature(class APRO_PlayerController_C* Player);
	void OnHasZeal__DelegateSignature(bool HasZeal);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
