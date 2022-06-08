#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_03_MatchPickUpAndEscape_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C
// 0x00A6 (0x0286 - 0x01E0)
class UOnboarding_03_MatchPickUpAndEscape_C : public UMS_Line_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       SceneToInteract;                                          // 0x01E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FTransform>                          EscapeTerminalTransforms;                                 // 0x01F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify)
	TArray<EYContractStatus>                           ContractStatusToCheck;                                    // 0x0200(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	bool                                               hintIndicatorCreated;                                     // 0x0210(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
	TArray<struct FYContractRow>                       Contract_Config_Data;                                     // 0x0218(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FTransform>                          ContractActorTransforms;                                  // 0x0228(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         launchTerminalSceneRowHandle;                             // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         icaNPCRowName;                                            // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         korolevNPCRowName;                                        // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         osirisNPCRowName;                                         // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FVector                                     LaunchTerminalMarkerOffset;                               // 0x0278(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Step4IsReturningFromStep6;                                // 0x0284(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ShouldCheckPushToTalk;                                    // 0x0285(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C"));
		return ptr;
	}


	void GetSavegameParameters(struct FString* SlotName, int* UserIndex);
	void DebugLog(const struct FString& Message);
	void CheckPushToTalk();
	bool AreContractsReadyToEndStep6(const struct FYActiveContractsUIData& YActiveContractsUIData);
	void PlayVOAfterFirstMatch(bool EscapedSucessfully, bool IsAnyContractComplete);
	void AdjustLaunchTerminalTransformForMarker(const struct FTransform& ActorTransform, struct FTransform* MarkerTransform);
	void IsAnyContractFromUIDataCompleted(const struct FYActiveContractsUIData& YActiveContractsUIData, bool* contractCompleted);
	void OnContractsProgressUpdated(const struct FYContractsProgress& contractsProgress);
	void SetHintDataOnAuthorithy(const struct FName& ActiveMarkerId, TArray<struct FTransform>* Transforms);
	void GetCurrentContractData(TArray<struct FYContractRow>* CurrentContractData);
	void IsContractItemInSafePocket(bool* Output_Get);
	void Get_Faction_Of_Completed_Contract(TArray<struct FName>* ContractFactionName);
	void UnbindOnContractStatusChanged(const struct FScriptDelegate& Event);
	void BindOnContractStatusChanged(const struct FScriptDelegate& Event);
	void Bind_and_Check_if_Contract_Is_Completed();
	void Check_if_Contract_Has_Been_Completed(const struct FString& contractId, TArray<int>* currentProgress, bool* isCompleted);
	void Get_Faction_NPC_TransformOfActiveContracts(TArray<struct FTransform> ActorTransform, bool* FoundActor);
	void Get_Launch_Terminal_Transform(const struct FTransform& ActorTransform, bool* FoundActor);
	void OnRep_EscapeTerminalTransforms();
	void GetEscapeTerminalTransforms(TArray<struct FTransform>* EscapeTerminalTransforms, bool* Output_Get);
	void Completed_D5F88E5C42E6DA8CB727B795A8B47D7D(class USaveGame* SaveGame, bool bSuccess);
	void Completed_D5F88E5C42E6DA8CB727B79579F4EC32(class USaveGame* SaveGame, bool bSuccess);
	void Completed_370976E44B99E8DFB6647BBACA8A065F(class USaveGame* SaveGame, bool bSuccess);
	void Completed_F18AAD664BE05879B467708E3A64ECB5(class USaveGame* SaveGame, bool bSuccess);
	void Completed_38BD8A6E4AA2357F5055938BF3099D9E(class USaveGame* SaveGame, bool bSuccess);
	void BP_StartMetaQuest();
	void Step3Completed(EYMissionResultType Result);
	void Step4Completed(EYMissionResultType Result);
	void OnMatchFinished(EYPlayerMatchFinishedResult Result);
	void Step5Completed(EYMissionResultType Result);
	void CreateHintFaction();
	void ClientBindAndCheckIfContractIsCompleted();
	void ClientBindOnContractStatusChanged();
	void ClientCheckContractStatusToSkipNextStep();
	void ServerStartStep6();
	void OnContractsChangedMoveFtueProgress(const struct FYActiveContractsUIData& activeContractsUIData);
	void Step6OnContractsStatusChanged(const struct FYActiveContractsUIData& activeContractsUIData);
	void Step1Completed(EYMissionResultType Result);
	void Step2Completed(EYMissionResultType Result);
	void OnCommWheelUsed(class UYCommWheelVOComponent* commWheelComponent, const struct FDataTableRowHandle& commWheelEntry);
	void TryFinishCommWheelStep();
	void ClientTrackCommWheelUse(bool IsActive);
	void ServerOnUseCommWheel();
	void Step2HandleIntroFinished();
	void Step1HandleIntroFinished();
	void ServerStartStep4();
	void ClientTrackMatchFnished();
	void InitialStep();
	void ServerGoBackToStep4();
	void ClientStep5BindOnContractsStatusChanged();
	void Step5OnContractsStatusChanged(const struct FYActiveContractsUIData& activeContractsUIData);
	void ClientTrackVoiceChat(bool ShouldCheckPushToTalk);
	void ServerOnFirstPushToTalk();
	void TryFinishPushToTalkStep();
	void SaveMatchEscapedToSaveGame(const struct FString& SlotName, int UserIndex, EYPlayerMatchFinishedResult MatchResult);
	void ShowLaunchTerminalMarker();
	void ExecuteUbergraph_Onboarding_03_MatchPickUpAndEscape(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
