#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Onboarding_01_TalkToBadum_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C
// 0x0060 (0x0210 - 0x01B0)
class UOnboarding_01_TalkToBadum_C : public UMS_Line_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       SceneToInteract;                                          // 0x01B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FName>                               ContractNPCS;                                             // 0x01C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<EYContractStatus>                           ContractStatusToCheck;                                    // 0x01D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         missionSceneRowHandle;                                    // 0x01E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         contractSceneRowHandle;                                   // 0x01F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FName                                       badumId;                                                  // 0x0200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       contractsId;                                              // 0x0208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C");
		return ptr;
	}


	bool CreateHintMarkersWithNPCNames(const struct FName& ID, TArray<struct FName>* Names);
	void Handle_Backend_Response_To_A_Request_To_Change_A_Contract_Status(bool isFail, bool anActiveContractHasBeenCancelled);
	void Handle_Successfull_Contract_Status_Change(const struct FYActiveContractUIData& activeContractUIData);
	void Bind_on_Contract_Backend_Responses();
	void Complete_Step();
	void Get_NPCTransform(const struct FName& NpcRowName, const struct FTransform& ActorTransform, bool* foundActor);
	void BP_StartMetaQuest();
	void OnStep2Completed(EYMissionResultType Result);
	void ServerStepCompleted();
	void ClientBindSceneAdded();
	void OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle);
	void ServerCompleteStep();
	void OnStep1Completed(EYMissionResultType Result);
	void ClientBindOnContactStatusChanged();
	void ExecuteUbergraph_Onboarding_01_TalkToBadum(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
