#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YTutorialStepsPlayerComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C
// 0x0334 (0x03EC - 0x00B8)
class UYTutorialStepsPlayerComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                CurrentStep;                                              // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                PendingStep;                                              // 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FText>                               TutorialStepTitles;                                       // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FText>                               TutorialStepDescription;                                  // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UYWidgetProvider_Missions*                   WidgetProviderMissions;                                   // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AOnboardingHintIndicator_C*                  HintMarkerGoTo;                                           // 0x00F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AYPlayerController_Match*                    PlayerController;                                         // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                DistanceToAiCheck_TH;                                     // 0x0100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FindClosestStriderMaxDistance;                            // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FindStridersMaxRange;                                     // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AOnboardingHintIndicator_C*>          HintMarkerStriders;                                       // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class UActorComponent*>                     MineralScanResults;                                       // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	float                                              DelayBeforeMineralMarker;                                 // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class AOnboardingHintIndicator_C*                  HintMarkerMineral;                                        // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                DistanceToMineral_TH;                                     // 0x0140(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                GoToEvacStepIndex;                                        // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             EvacMarkerLocations;                                      // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                CurrentEvacMarkerStep;                                    // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	class AOnboardingHintIndicator_C*                  HintMarkerEvac;                                           // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                DistanceToEvac_TH;                                        // 0x0170(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AAC_EvacShip_BP_C*                           EvacShipRef;                                              // 0x0178(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    ToolButtonHighlightUpdate;                                // 0x0180(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TMap<struct FString, struct FDataTableRowHandle>   VO_Lines;                                                 // 0x0190(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<struct FString, float>                        VO_Timing;                                                // 0x01E0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                FindRelevantStriders_TH;                                  // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PlayerHasKilledAStrider;                                  // 0x0238(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ReadyToEndStriderStep;                                    // 0x0239(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               PickedUpAMineral;                                         // 0x023A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ReadyToFinishMineralStep;                                 // 0x023B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector                                     EvacPlatformLocation;                                     // 0x023C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FGuid                                       SafepocketHighlightGUID;                                  // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         SafePocketRowHandle;                                      // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FGuid                                       MineralHighlightGUID;                                     // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         MineralRowHandle;                                         // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         AlteredNickelHandle;                                      // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FGuid                                       AlteredNickelHighlightGUID;                               // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               InventoryOpenPending;                                     // 0x02A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	int                                                HealingTutorialStepIndex;                                 // 0x02AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastDamageTimestamp;                                      // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	struct FTimerHandle                                HealingTutorialTimer;                                     // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               AutomaticHealingTutorialAllowed;                          // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    ConsumableButtonHighlightUpdate;                          // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               CompletedHealingTutorial;                                 // 0x02D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	struct FGuid                                       ToolsButtonHighlightGUID;                                 // 0x02DC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData07[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         ToolsButtonRowHandle;                                     // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FGuid                                       ConsumableButtonHighlightGUID;                            // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         ConsumableButtonRowHandle;                                // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               HealingTutorialEnabled;                                   // 0x0320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	TMap<struct FString, int>                          ItemSubstringsToTrackForStep;                             // 0x0328(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                FinishCompleteStriderRetryAmount;                         // 0x0378(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SafePocketVOPending;                                      // 0x037C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DebugAnalyticsEvents;                                     // 0x037D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               FinishedGoToEvacStep;                                     // 0x037E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData09[0x1];                                       // 0x037F(0x0001) MISSED OFFSET
	struct FString                                     HealingItemSubString;                                     // 0x0380(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	int                                                OpenMapStepIndex;                                         // 0x0390(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               MapIsOpen;                                                // 0x0394(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	TMap<int, int>                                     Test;                                                     // 0x0398(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              MapStepCompletionDelay;                                   // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C"));
		return ptr;
	}


	void SetGenericDragAndDropHighlightingActive(bool ShouldBeActive);
	bool HasHealingItems();
	void InitEvacMarker();
	void SetConsumableButtonHighlight(bool IsHighlighted);
	void SetToolButtonHighlight(bool IsHighlighted);
	void IsItemInHands(const struct FString& ItemSubstring, bool* success);
	void IncreasePendingStep();
	bool CanStartHealingTutorial();
	bool IsAtFullHealth();
	bool IsInCombat();
	void GetNumberOfItemsInSafePockets(int* Number);
	void SetAllMineralsHighlight(bool IsHighlighted);
	void IsOnEvacPlatform(bool* IsOnPlatform);
	void SetEvacMarkerStepUpdateActive(bool IsActive, int StartingStep);
	void FindCurrentEvacMarkerStep(int* step);
	void MoveEvacMarkerToWaitingPosition();
	void IsCloseEnoughToMineral(bool* CloseEnough);
	void SetClosestMineralMarkerActive(bool IsActive);
	void SetNewStep(int step, bool ShowMissionStep);
	void ShowMissionLineStep(int step);
	void SetStriderLocationMarkerActive(bool IsActive);
	void FindClosestStrider(bool* FoundAny, class AActor** Actor, float* Distance);
	void UpdateEvacMarkerLocationToStep(int step, TArray<struct FVector>* StepLocations);
	void IsMineralObject(const struct FYInventoryItem& YInventoryItem, bool* TRUE);
	void FindClosestMineralLoc(bool* success, struct FVector* Location);
	void KilledAStrider(const struct FYDealtDamageData& YDealtDamageData, bool* success);
	void FindNearbyStriders(bool* success);
	class UYWidgetProvider_Missions* FindWidgetProvider();
	void SetHUDHighlightActive(const struct FDataTableRowHandle& ContextRowHandle, bool IsActive, struct FGuid* Guid);
	void InitStep(int stepIndex);
	void OnChainCompleted_C23C35D4448CE813C63973BD63D420D3();
	void OnCompleted_C23C35D4448CE813C63973BD63D420D3();
	void OnCancelled_C23C35D4448CE813C63973BD63D420D3();
	void OnStarted_C23C35D4448CE813C63973BD63D420D3();
	void OnStartFailed_C23C35D4448CE813C63973BD63D420D3();
	void OnChainCompleted_C23C35D4448CE813C63973BD6909E3DD();
	void OnCompleted_C23C35D4448CE813C63973BD6909E3DD();
	void OnCancelled_C23C35D4448CE813C63973BD6909E3DD();
	void OnStarted_C23C35D4448CE813C63973BD6909E3DD();
	void OnStartFailed_C23C35D4448CE813C63973BD6909E3DD();
	void OnChainCompleted_C23C35D4448CE813C63973BD28127A84();
	void OnCompleted_C23C35D4448CE813C63973BD28127A84();
	void OnCancelled_C23C35D4448CE813C63973BD28127A84();
	void OnStarted_C23C35D4448CE813C63973BD28127A84();
	void OnStartFailed_C23C35D4448CE813C63973BD28127A84();
	void OnChainCompleted_C23C35D4448CE813C63973BD1BB5324D();
	void OnCompleted_C23C35D4448CE813C63973BD1BB5324D();
	void OnCancelled_C23C35D4448CE813C63973BD1BB5324D();
	void OnStarted_C23C35D4448CE813C63973BD1BB5324D();
	void OnStartFailed_C23C35D4448CE813C63973BD1BB5324D();
	void OnChainCompleted_C23C35D4448CE813C63973BD8A09B911();
	void OnCompleted_C23C35D4448CE813C63973BD8A09B911();
	void OnCancelled_C23C35D4448CE813C63973BD8A09B911();
	void OnStarted_C23C35D4448CE813C63973BD8A09B911();
	void OnStartFailed_C23C35D4448CE813C63973BD8A09B911();
	void OnChainCompleted_C23C35D4448CE813C63973BDDB600207();
	void OnCompleted_C23C35D4448CE813C63973BDDB600207();
	void OnCancelled_C23C35D4448CE813C63973BDDB600207();
	void OnStarted_C23C35D4448CE813C63973BDDB600207();
	void OnStartFailed_C23C35D4448CE813C63973BDDB600207();
	void OnChainCompleted_C23C35D4448CE813C63973BDBF127265();
	void OnCompleted_C23C35D4448CE813C63973BDBF127265();
	void OnCancelled_C23C35D4448CE813C63973BDBF127265();
	void OnStarted_C23C35D4448CE813C63973BDBF127265();
	void OnStartFailed_C23C35D4448CE813C63973BDBF127265();
	void OnChainCompleted_C23C35D4448CE813C63973BD3C541236();
	void OnCompleted_C23C35D4448CE813C63973BD3C541236();
	void OnCancelled_C23C35D4448CE813C63973BD3C541236();
	void OnStarted_C23C35D4448CE813C63973BD3C541236();
	void OnStartFailed_C23C35D4448CE813C63973BD3C541236();
	void OnChainCompleted_C23C35D4448CE813C63973BD9B50F69C();
	void OnCompleted_C23C35D4448CE813C63973BD9B50F69C();
	void OnCancelled_C23C35D4448CE813C63973BD9B50F69C();
	void OnStarted_C23C35D4448CE813C63973BD9B50F69C();
	void OnStartFailed_C23C35D4448CE813C63973BD9B50F69C();
	void OnChainCompleted_C23C35D4448CE813C63973BD86C4CFF8();
	void OnCompleted_C23C35D4448CE813C63973BD86C4CFF8();
	void OnCancelled_C23C35D4448CE813C63973BD86C4CFF8();
	void OnStarted_C23C35D4448CE813C63973BD86C4CFF8();
	void OnStartFailed_C23C35D4448CE813C63973BD86C4CFF8();
	void OnChainCompleted_C23C35D4448CE813C63973BD850DBC90();
	void OnCompleted_C23C35D4448CE813C63973BD850DBC90();
	void OnCancelled_C23C35D4448CE813C63973BD850DBC90();
	void OnStarted_C23C35D4448CE813C63973BD850DBC90();
	void OnStartFailed_C23C35D4448CE813C63973BD850DBC90();
	void OnChainCompleted_C23C35D4448CE813C63973BDC1D3C31E();
	void OnCompleted_C23C35D4448CE813C63973BDC1D3C31E();
	void OnCancelled_C23C35D4448CE813C63973BDC1D3C31E();
	void OnStarted_C23C35D4448CE813C63973BDC1D3C31E();
	void OnStartFailed_C23C35D4448CE813C63973BDC1D3C31E();
	void OnChainCompleted_C23C35D4448CE813C63973BDC98259D3();
	void OnCompleted_C23C35D4448CE813C63973BDC98259D3();
	void OnCancelled_C23C35D4448CE813C63973BDC98259D3();
	void OnStarted_C23C35D4448CE813C63973BDC98259D3();
	void OnStartFailed_C23C35D4448CE813C63973BDC98259D3();
	void OnChainCompleted_C23C35D4448CE813C63973BDBC1A6EC3();
	void OnCompleted_C23C35D4448CE813C63973BDBC1A6EC3();
	void OnCancelled_C23C35D4448CE813C63973BDBC1A6EC3();
	void OnStarted_C23C35D4448CE813C63973BDBC1A6EC3();
	void OnStartFailed_C23C35D4448CE813C63973BDBC1A6EC3();
	void OnChainCompleted_C23C35D4448CE813C63973BDD58FAA1B();
	void OnCompleted_C23C35D4448CE813C63973BDD58FAA1B();
	void OnCancelled_C23C35D4448CE813C63973BDD58FAA1B();
	void OnStarted_C23C35D4448CE813C63973BDD58FAA1B();
	void OnStartFailed_C23C35D4448CE813C63973BDD58FAA1B();
	void ReceiveBeginPlay();
	void InitStep_KillStrider();
	void InitStep_EquipScanner();
	void InitStep_UseScanner();
	void DistanceToAIUpdate();
	void OnPlayerDealsDamage(const struct FYDealtDamageData& Data);
	void ToolSwapTrackingInit();
	void InitStep_EquipPickaxe();
	void OnSuccessScan(TArray<class UActorComponent*> Location);
	void DistanceToMineralUpdate();
	void InitStep_MineMineral();
	void StartMineralDistanceCheck();
	void InitStep_GoToEvac();
	void OnItemPickedUp(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item, EYPlayerSetType equippedSetType);
	void DistanceToEvacUpdate();
	void InitStep_CallShip();
	void OnEvacCalled(class APRO_PlayerController_C* Player);
	void InitStep_WaitForShip();
	void OnEvacShipStateChange(TEnumAsByte<EAC_EscapeShip_State> EscapeShipState);
	void InitStep_GoIntoShip();
	void InitStep_Welcome();
	void OnIntroFinished();
	void InitializeTutorial();
	void InitStep_MissedEvac();
	void TryFindRelevantStriders();
	void EndStriderMarkerLogic();
	void TryFinishStepOne();
	void HandleTrackedItemEquipped(const struct FString& Substring);
	void HandleMineralsFinished();
	void HandleArrivedAtMineral();
	void StartFirstStep();
	void InitStep_Inventory();
	void CheckSafePocket();
	void CompleteStep_Inventory();
	void OnInventoryOpened();
	void FinishInventoryOpeningStep();
	void PromptOpenInventory();
	void OnPlayerSetUpdated(class UYStateInventoryComponent* stateInventoryComponent);
	void HandleStriderKilled();
	void DamageTrackingInit();
	void OnPlayerTakeDamage(const struct FYDealtDamageData& Data);
	void DetectDynamicHealingTutorialStart();
	void OnHealingComplete();
	void InitStep_HealEquipStim();
	void InitStep_HealUseStim();
	void HandleNewItemEquipped();
	void CompleteStep_EquipScanner();
	void CompleteStep_EquipPickaxe();
	void CompleteStep_HealEquipStim();
	void CompleteStep_KillStriders();
	void TryGoNextStepAfterKillStrider();
	void TryGoNextStepAfterInventory();
	void OnAbilityActivated_Event_1(class AActor* Owner, const struct FYInventoryItem& inventoryItem);
	void InitStep_OpenMap();
	void OnMapOpened(bool MapIsOpen);
	void ExecuteUbergraph_YTutorialStepsPlayerComponent_BP(int EntryPoint);
	void ConsumableButtonHighlightUpdate__DelegateSignature(bool ShouldHighlight);
	void ToolButtonHighlightUpdate__DelegateSignature(bool ShouldHighlight);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
