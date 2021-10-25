#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YTutorialStepsPlayerComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C
// 0x0108 (0x01B8 - 0x00B0)
class UYTutorialStepsPlayerComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	int                                                CurrentStep;                                              // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class UYWidgetProvider_Missions*                   WidgetProviderMissions;                                   // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AOnboardingHintIndicator_C*                  HintMarkerGoTo;                                           // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AYPlayerController_Match*                    PlayerController;                                         // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                DistanceToAiCheck_TH;                                     // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FindStridersMaxRange;                                     // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<class AOnboardingHintIndicator_C*>          HintMarkerStriders;                                       // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<struct FText>                               TutorialStepDescription;                                  // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               TrackToolSwapping;                                        // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	struct FString                                     ToolSwapGoal;                                             // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class UActorComponent*>                     MineralScanResults;                                       // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	class AOnboardingHintIndicator_C*                  HintMarkerMineral;                                        // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                DistanceToMineral_TH;                                     // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AOnboardingHintIndicator_C*                  HintMarkerEvac;                                           // 0x0140(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                DistanceToEvac_TH;                                        // 0x0148(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AAC_EvacShip_BP_C*                           EvacShipRef;                                              // 0x0150(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FText>                               TutorialStepTitles;                                       // 0x0158(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              DelayBeforeMineralMarker;                                 // 0x0168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             EvacMarkerLocations;                                      // 0x0170(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                EvacMarkerStep;                                           // 0x0180(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         VOTutorial1;                                              // 0x0188(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         VOTutorial2;                                              // 0x0198(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FScriptMulticastDelegate                    ToolButtonHighlightUpdate;                                // 0x01A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x01A8(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C");
		return ptr;
	}


	void UpdateEvacMarkerLocation(int Dimension_1, TArray<struct FVector>* Array);
	void IsMineralObject(const struct FYInventoryItem& YInventoryItem, bool* TRUE);
	void FindClosestMineralLoc(struct FVector* Location);
	void SwitchToCorrectItem(const struct FString& CorrectItem, bool* SUCCESS);
	void KilledAStrider(const struct FYDealtDamageData& YDealtDamageData, bool* SUCCESS);
	void FindAI(bool* SUCCESS);
	void AddMissionLineStepsToWidget();
	class UYWidgetProvider_Missions* FindWidgetProvider();
	void ReceiveBeginPlay();
	void FirstStepInit();
	void StepTwoInit();
	void StepThreeInit();
	void DistanceToAIUpdate();
	void OnPlayerDealsDamage(const struct FYDealtDamageData& Data);
	void DamageTrackingInit();
	void OnToolSwap();
	void ToolSwapTrackingInit();
	void StepFourInit();
	void OnSuccessScan(TArray<class UActorComponent*> Location);
	void DistanceToMineralUpdate();
	void StepFiveInit();
	void StartMineralDistanceCheck();
	void StepSixInit();
	void OnItemPickedUp(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item, EYPlayerSetType equippedSetType);
	void DistanceToEvacUpdate();
	void StepSevenInit();
	void OnEvacCalled(class APRO_PlayerController_C* Player);
	void StepEightInit();
	void OnEvacShipStateChange(TEnumAsByte<EAC_EscapeShip_State> EscapeShipState);
	void StepNineInit();
	void WelcomeStepInit();
	void OnIntroFinished();
	void InitializeTutorial();
	void Step10Init();
	void FindAiAttempt();
	void ExecuteUbergraph_YTutorialStepsPlayerComponent_BP(int EntryPoint);
	void ToolButtonHighlightUpdate__DelegateSignature(bool ShouldHighlight);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
