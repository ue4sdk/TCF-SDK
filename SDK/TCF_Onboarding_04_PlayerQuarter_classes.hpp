#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Onboarding_04_PlayerQuarter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C
// 0x0078 (0x0228 - 0x01B0)
class UOnboarding_04_PlayerQuarter_C : public UMS_Line_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       SceneToInteract;                                          // 0x01B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         techTreeSceneRowHandle;                                   // 0x01C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         generatorsSceneRowHandle;                                 // 0x01D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FName                                       badumId;                                                  // 0x01E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         badumSceneRowHandle;                                      // 0x01E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         techTreeNpcRowHandle;                                     // 0x01F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         generatorsNpcRowHandle;                                   // 0x0208(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         techtreeNodeToUnlock;                                     // 0x0218(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C");
		return ptr;
	}


	void GetNPCObjectTransformByRowHandle(const struct FName& NpcRowName, const struct FTransform& ActorTransform, bool* foundActor);
	void GetPlayerQuarterDoorTransform(const struct FTransform& ActorTransform, bool* foundActor);
	void GetNPCTransform(const struct FName& NpcRowName, const struct FTransform& ActorTransform, bool* foundActor);
	bool CreateHintMarkersWithNPCNames(const struct FName& ActiveMarkerId, TArray<struct FName>* Array);
	void CompleteStep();
	void OnInteraction(const struct FYInteractionUpdateData& Data);
	void ServerCompleteStep();
	void Step1Completed(EYMissionResultType Result);
	void Step2Completed(EYMissionResultType Result);
	void Step3Completed(EYMissionResultType Result);
	void Step4Completed(EYMissionResultType Result);
	void Step5Completed(EYMissionResultType Result);
	void Step6Completed(EYMissionResultType Result);
	void ClientBindSceneAdded();
	void OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle);
	void Step7Completed(EYMissionResultType Result);
	void TechTreeNodesUpdated(class UYControllerPlayerQuarterComponent* playerQuarterComponent);
	void BP_StartMetaQuest();
	void ClientBindOnTechtreeNodeUpdates();
	void OnGeneratorCollected(const struct FString& generatorId, TArray<struct FYInventoryItem> crateItems);
	void ClientBindingOnGeneratorCollected();
	void ClientOnInteraction();
	void ExecuteUbergraph_Onboarding_04_PlayerQuarter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
