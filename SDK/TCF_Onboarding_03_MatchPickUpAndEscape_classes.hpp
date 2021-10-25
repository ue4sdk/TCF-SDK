#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Onboarding_03_MatchPickUpAndEscape_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C
// 0x0098 (0x0248 - 0x01B0)
class UOnboarding_03_MatchPickUpAndEscape_C : public UMS_Line_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       SceneToInteract;                                          // 0x01B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FTransform>                          EscapeTerminalTransforms;                                 // 0x01C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify)
	TArray<EYContractStatus>                           ContractStatusToCheck;                                    // 0x01D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	bool                                               hintIndicatorCreated;                                     // 0x01E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET
	TArray<struct FYContractRow>                       Contract_Config_Data;                                     // 0x01E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FTransform>                          ContractActorTransforms;                                  // 0x01F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         launchTerminalSceneRowHandle;                             // 0x0208(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         icaNPCRowName;                                            // 0x0218(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         korolevNPCRowName;                                        // 0x0228(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         osirisNPCRowName;                                         // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C");
		return ptr;
	}


	void Is_Any_Contract_Completed(bool* contractCompleted);
	void OnContractsProgressUpdated(const struct FYContractsProgress& contractsProgress);
	void SetHintDataOnAuthorithy(const struct FName& ActiveMarkerId, TArray<struct FTransform>* Transforms);
	void GetCurrentContractData(TArray<struct FYContractRow>* CurrentContractData);
	void IsContractItemInSafePocket(bool* Output_Get);
	void SetNewMission(const struct FString& missionId, int progress);
	void Get_Faction_Of_Completed_Contract(TArray<struct FName>* ContractFactionName);
	void BindOnContractStatusChanged();
	void CompleteStep();
	void Bind_and_Check_if_Contract_Is_Completed();
	void Check_if_Contract_Has_Been_Completed(const struct FString& contractId, TArray<int>* currentProgress, bool* isCompleted);
	void Get_Faction_NPC_TransformOfActiveContracts(TArray<struct FTransform> ActorTransform, bool* foundActor);
	void Get_Launch_Terminal_Transform(const struct FTransform& ActorTransform, bool* foundActor);
	void OnRep_EscapeTerminalTransforms();
	void GetEscapeTerminalTransforms(TArray<struct FTransform>* EscapeTerminalTransforms, bool* Output_Get);
	void BP_StartMetaQuest();
	void Step1Completed(EYMissionResultType Result);
	void Step2Completed(EYMissionResultType Result);
	void OnMatchFinished(EYPlayerMatchFinishedResult Result);
	void Step3Completed(EYMissionResultType Result);
	void OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle);
	void ServerCompleteStep();
	void ClientBindSceneAdded();
	void CreateHintFaction();
	void ClientBindAndCheckIfContractIsCompleted();
	void ClientBindOnContractStatusChanged();
	void OnContractStatusChanged(const struct FYActiveContractUIData& activeContractUIData);
	void ClientSetMission(const struct FString& missionId, int progress);
	void ClientCheckContractStatusToSkipNextStep();
	void OnContractChangedMoveFtueProgress(const struct FYActiveContractUIData& activeContractUIData);
	void ServerStartStep4();
	void ExecuteUbergraph_Onboarding_03_MatchPickUpAndEscape(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
