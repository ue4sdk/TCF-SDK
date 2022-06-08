#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PRO_PlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRO_PlayerController.PRO_PlayerController_C
// 0x0258 (0x0B48 - 0x08F0)
class APRO_PlayerController_C : public AYPlayerController_Match
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UYLoadingScreenComponent_BP_C*               YLoadingScreenComponent_BP;                               // 0x08F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYControllerFortunaPassComponent_BP_C*       YControllerFortunaPassComponent_BP;                       // 0x0900(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYControllerTrackingActionsComponent_BP_C*   YControllerTrackingActionsComponent_BP;                   // 0x0908(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPlayerBIHookComponent_BP_C*                 PlayerBIHookComponent_BP;                                 // 0x0910(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UControllerWeaponInspectionComponent_BP_C*   ControllerWeaponInspectionComponent_BP;                   // 0x0918(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYSoaktestPerformanceCapture_BP_C*           YSoaktestPerformanceCapture_BP;                           // 0x0920(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYPlayerUIComponent_C*                       YPlayerUIComponent;                                       // 0x0928(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAutomationStarterComponent_BP_C*            AutomationStarterComponent_BP;                            // 0x0930(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPlayerPerformanceCapturing_BP_C*            PlayerPerformanceCapturing_BP;                            // 0x0938(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPersistentWeaponDataComponent_BP_C*         PersistentWeaponDataComponent_BP;                         // 0x0940(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPlayerStuckComponent_BP_C*                  PlayerStuckComponent_BP;                                  // 0x0948(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYControllerCraftingComponent_BP_C*          YControllerCraftingComponent_BP;                          // 0x0950(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYPlayerDropPodIntroComponent_BP_C*          YPlayerDropPodIntroComponent_BP;                          // 0x0958(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_AimAssistDebug_C*                        BP_AimAssistDebug;                                        // 0x0960(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_AimAssist_C*                             BP_AimAssist;                                             // 0x0968(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYTutorialComponent_BP_C*                    YTutorialComponent_BP;                                    // 0x0970(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYControllerContractsActivesDataComponent_BP_C* YControllerContractsActivesDataComponent_BP;              // 0x0978(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYControllerTrackerInventoryComponent_BP_C*  YControllerTrackerInventoryComponent_BP;                  // 0x0980(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYControllerTrackerKillsComponent_BP_C*      YControllerTrackerKillsComponent_BP;                      // 0x0988(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYControllerContractsBoardsDataComponent_BP_C* YControllerContractsBoardsDataComponent_BP;               // 0x0990(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYControllerContractsCheatsComponent_BP_C*   YControllerContractsCheatsComponent_BP;                   // 0x0998(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBackgroundDropPodSpawner_BP_C*              BackgroundDropPodSpawner_BP;                              // 0x09A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYIdleDetectionComponent_BP_C*               YIdleDetectionComponent_BP;                               // 0x09A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ULightningComponent_BP_C*                    LightningComponent_BP;                                    // 0x09B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPlayerStationComponent_BP_C*                PlayerStationComponent_BP;                                // 0x09B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYBugReporterComponent_BP_C*                 YBugItComponent_BP;                                       // 0x09C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FString                                     CommandLine;                                              // 0x09C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               recordProfiles;                                           // 0x09D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09D9(0x0003) MISSED OFFSET
	int                                                performanceLoop;                                          // 0x09DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTransform                                  default_location;                                         // 0x09E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isSoaktestRunning;                                        // 0x0A10(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isCraftingMaterialsReceived;                              // 0x0A11(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0A12(0x0006) MISSED OFFSET
	struct FString                                     CraftItemName;                                            // 0x0A18(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               isCraftingWorks;                                          // 0x0A28(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0A29(0x0007) MISSED OFFSET
	class ASoakTestStationAutomationManager_BP_C*      SoaktestStationManagerActor;                              // 0x0A30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsSmokecheckAutomationRunning;                            // 0x0A38(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               SmokecheckPlayedMP_Map;                                   // 0x0A39(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0A3A(0x0006) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnHasZeal;                                                // 0x0A40(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               isStationAutomationReconectRunning;                       // 0x0A50(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isFunctionalTestRunning;                                  // 0x0A51(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsPerformanceAutomationRunning;                           // 0x0A52(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isPerformanceCapturingRunning;                            // 0x0A53(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isStationAutomationIDLE_Running;                          // 0x0A54(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0A55(0x0003) MISSED OFFSET
	struct FMulticastScriptDelegate                    CallEvacPressed;                                          // 0x0A58(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FVector                                     LastMeaningfulPosition;                                   // 0x0A68(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0A74(0x0004) MISSED OFFSET
	struct FTimespan                                   TimeOfLastMovement;                                       // 0x0A78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StuckForward;                                             // 0x0A80(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StuckBackward;                                            // 0x0A84(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StuckRight;                                               // 0x0A88(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StuckLeft;                                                // 0x0A8C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UYDefaultInventoryDataAsset>  SmokecheckDefaultInventory;                               // 0x0A90(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TMap<struct FString, TSoftObjectPtr<class AAutomationManager_Base_BP_C>> AutomationManagerMapping;                                 // 0x0AB8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UActorComponent*                             AutomationComponent;                                      // 0x0B08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnAutomationComponentCreated;                             // 0x0B10(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FTimerHandle                                TimerHandle_StartNewCapture;                              // 0x0B20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         InterruptionNotificationRowHandle;                        // 0x0B28(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         ConnectionRecoveredNotificationRowHandle;                 // 0x0B38(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PRO_PlayerController.PRO_PlayerController_C"));
		return ptr;
	}


	void Start_New_Capture();
	void Debug_Trigger_Stats_Capture();
	void Smokecheck_CompareInventoryWithDataAsset();
	void GettingStuckDetection(bool* Stuck);
	void BP_DebugToggleAimAssistInfo();
	float BP_AimAssistAdjustYawInput(float InValue);
	float BP_AimAssistAdjustPitchInput(float InValue);
	void LogSpawnedActivities();
	bool BP_OnTryConsumeEscapeKey();
	void InpActEvt_ToggleLight_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Debug_ToggleGod_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_CallEvac_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ServerChangeFlashlighState(bool bNewState);
	void Server_ReplicateVOData(const struct FST_EffortData& InEffortData);
	void StartSmokecheckInMatch();
	void OnSmokeTestTimeOut();
	void Smokecheck_InventoryPersistence_Match();
	void SmokeCheckMeta_PlayerQuarters();
	void Smokecheck_GivePlayerInventory();
	void StartInMatchSoaktest();
	void SendRequestAutomationStarted();
	void SendRequestSpottedPerformanceStarted();
	void RequestCaptureServerPerf();
	void startSoaktest();
	void HealthEmptyDelegate_Event_1(class UYHealthComponent* healthComponent, class AActor* Instigator);
	void StartStationAutomation();
	void startStationReconnectAutomation();
	void RunPerformanceCapture(const struct FString& timeSeriesSpecifier, const struct FString& performanceCaptureName, bool captureSimpleData);
	void NextPerformanceCycle();
	void MatchStarted(EYMatchState matchState);
	void DebugInitAutomation();
	void InitAutomation();
	void StartSpotPerformanceCapturing();
	void OnHealthEmptyCallback(class UYHealthComponent* healthComponent, class AActor* Instigator);
	void Automation_AddComponentRPCDontCall(TSoftClassPtr<class UClass> NewComponent);
	void Automation_AddComponent(TSoftClassPtr<class UClass> NewComponent);
	void Automation_Teleport(const struct FVector& NewLocaiton);
	void ReceiveBeginPlay();
	void DebugLeaveMatch();
	void ServerDebugLeaveMatch();
	void BndEvt__m_controllerReplicationComponent_K2Node_ComponentBoundEvent_0_OnAnyPlayerTeleportedDBNO__DelegateSignature(const struct FYTeleportData& teleportData);
	void ToggleHud();
	void BP_DebugSetMatchPhase(const struct FDataTableRowHandle& newMatchPhaseRowHandle, int visualVariationIndex, bool bForceTransition);
	void ServerDebugSetMatchPhase(const struct FDataTableRowHandle& MatchPhaseDefinitionRowHandle, int visualVariationIndex, bool ForceTransition);
	void PressedCallEvac();
	void NextMatchPhase(bool ForceTransition);
	void OnInterruptionStateChangedCallback(EYInterruptionCause interruptionCause, bool newState);
	void OnInterruptionClearedCallback();
	void ExecuteUbergraph_PRO_PlayerController(int EntryPoint);
	void OnAutomationComponentCreated__DelegateSignature();
	void CallEvacPressed__DelegateSignature(class APRO_PlayerController_C* Player);
	void OnHasZeal__DelegateSignature(bool HasZeal);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
