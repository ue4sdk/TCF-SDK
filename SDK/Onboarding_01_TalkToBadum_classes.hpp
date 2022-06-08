#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_01_TalkToBadum_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C
// 0x00C8 (0x02A8 - 0x01E0)
class UOnboarding_01_TalkToBadum_C : public UMS_Line_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       SceneToInteract;                                          // 0x01E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FName>                               ContractNPCS;                                             // 0x01F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<EYContractStatus>                           ContractStatusToCheck;                                    // 0x0200(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         missionSceneRowHandle;                                    // 0x0210(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         contractSceneRowHandle;                                   // 0x0220(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FName                                       badumId;                                                  // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       contractsId;                                              // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               NewVar_1;                                                 // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	TMap<struct FName, struct FDataTableRowHandle>     mainContracts;                                            // 0x0248(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>                 VOHandlesToWaitForCompletingStep2;                        // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C"));
		return ptr;
	}


	void ManageVOsToWaitFor();
	void UpdateContractNPCListAndMarkersOnContractUpdate(const struct FYActiveContractsUIData& activeContractsUIData);
	void BindOnSceneAdded();
	bool CreateHintMarkersWithNPCNames(const struct FName& ID, TArray<struct FName>* Names);
	void Get_NPCTransform(const struct FName& NpcRowName, const struct FTransform& ActorTransform, bool* FoundActor);
	void BP_StartMetaQuest();
	void OnStep2Completed(EYMissionResultType Result);
	void ServerStepCompleted();
	void ClientBindSceneAdded();
	void OnSceneUpdated(const struct FDataTableRowHandle& sceneRowHandle);
	void OnStep1Completed(EYMissionResultType Result);
	void ClientBindSceneRemoved();
	void ClientBindDelegatesToContractActivation();
	void ServerUpdateMarkers(TArray<struct FName>* Names);
	void ClientCompleteStep2AfterAnnouncments();
	void Step2HandleAnnouncementsFinished();
	void ExecuteUbergraph_Onboarding_01_TalkToBadum(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
