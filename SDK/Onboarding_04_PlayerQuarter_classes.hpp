#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_04_PlayerQuarter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C
// 0x0119 (0x02F9 - 0x01E0)
class UOnboarding_04_PlayerQuarter_C : public UMS_Line_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       SceneToInteract;                                          // 0x01E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         techTreeSceneRowHandle;                                   // 0x01F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         generatorsSceneRowHandle;                                 // 0x0200(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FName                                       badumId;                                                  // 0x0210(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         badumSceneRowHandle;                                      // 0x0218(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         techTreeNpcRowHandle;                                     // 0x0228(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         generatorsNpcRowHandle;                                   // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         techtreeNodeToUnlock;                                     // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FGuid                                       ActiveGuidHandle;                                         // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         GeneratorsRowHandle;                                      // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FGuid                                       GeneratorHighlightGUID;                                   // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0288(0x0008) MISSED OFFSET
	struct FTransform                                  CurrentIntendedMarkerTransform;                           // 0x0290(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CurrentMarkerIsInPlayerQuarters;                          // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         PurchaseButtonHighlightRow;                               // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FGuid                                       PurchaseButtonHighlightGUID;                              // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FGuid                                       UpgradeNodeHighlightGUID;                                 // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UpdateMarkerOnPlayerInQuartersChange;                     // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C"));
		return ptr;
	}


	void SetGeneratorCategoryHighlight(bool IsHighlighted);
	void SetUpgradeNodeHighlight(bool IsHighlighted);
	void SetPurchaseButtonHighlight(bool IsHighlighted);
	void UpdateCurrentDestinationMarker(bool PlayerIsInQuarters);
	void SetDesiredDestinationMarker(const struct FName& ActiveMarkerId, const struct FTransform& Transform, bool MarkerIsInPlayerQuarters);
	void GetNPCObjectTransformByRowHandle(const struct FName& NpcRowName, const struct FTransform& ActorTransform, bool* FoundActor);
	void GetPlayerQuarterDoorTransform(const struct FTransform& ActorTransform, bool* FoundActor);
	void GetNPCTransform(const struct FName& NpcRowName, const struct FTransform& ActorTransform, bool* FoundActor);
	bool CreateHintMarkersWithNPCNames(const struct FName& ActiveMarkerId, TArray<struct FName>* Array);
	void OnInteraction(const struct FYInteractionUpdateData& Data);
	void Step1Completed(EYMissionResultType Result);
	void Step2Completed(EYMissionResultType Result);
	void Step3Completed(EYMissionResultType Result);
	void Step4Completed(EYMissionResultType Result);
	void Step5Completed(EYMissionResultType Result);
	void Step6Completed(EYMissionResultType Result);
	void ClientBindSceneAdded(const struct FName& SceneToInteract);
	void OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle);
	void Step7Completed(EYMissionResultType Result);
	void BP_StartMetaQuest();
	void TechTreeNodesUpdated(class UYControllerPlayerQuarterComponent* playerQuarterComponent);
	void ClientBindOnTechtreeNodeUpdates();
	void OnGeneratorCollected(const struct FString& generatorId, TArray<struct FYInventoryItem> crateItems);
	void ClientBindSupplyCrateCollectDelegates();
	void ClientOnInteraction();
	void OnHighlightInteracted(const struct FGuid& Data, EYHighlightStateChangeType Type);
	void ClientBindTechTreeCategoryOpen();
	void OnTechTreeCategoryOpen(EYTechtreeCategoryType Category);
	void BindIsInPlayerQuarters();
	void OnIsInPlayerQuartersChanged(bool IsInPlayerQuarters);
	void ShowTechTreeMarker(const struct FName& ActiveMarkerId);
	void ShowGeneratorMarker(const struct FName& ActiveMarkerId);
	void OnTechTreeNodeSelected(const struct FDataTableRowHandle& rowHandle);
	void Step6HandleCategoryChange(EYTechtreeCategoryType Category);
	void Step6OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle);
	void OnInitialStep();
	void UnbindSupplyCrateCollectDelegates();
	void OnSceneRemoved_CollectSupplyCrateStep(const struct FDataTableRowHandle& sceneRowHandle);
	void ExecuteUbergraph_Onboarding_04_PlayerQuarter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
