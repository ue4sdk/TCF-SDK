#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_05_CraftingStation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C
// 0x00BC (0x029C - 0x01E0)
class UOnboarding_05_CraftingStation_C : public UMS_Line_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         craftingStationSceneRowHandle;                            // 0x01E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         craftingStationNpcRowHandle;                              // 0x01F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         rowHandleBagId;                                           // 0x0208(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         utilitiesRowHandle;                                       // 0x0218(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         CraftingButtonHighlightRow;                               // 0x0228(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FGuid                                       CraftingButtonHighlightGUID;                              // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FGuid                                       UtilitiesHighlightGUID;                                   // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FGuid                                       BackpackHighlightGUID;                                    // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CompleteStepOnOpen;                                       // 0x0268(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	class UWBP_Crafting_Menu_C*                        CurrentCraftingMenuWidget;                                // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RebindHighlightingDelegatesAfterSceneClose;               // 0x0278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	struct FTimerHandle                                BackpackCheckTimer;                                       // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         StartCraftingFinishedVO;                                  // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               Step1CompletedInSameSession;                              // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanCompleteCraftingStep;                                  // 0x0299(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               PlayerStartedCrafting;                                    // 0x029A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanCompleteSkipStep;                                      // 0x029B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Onboarding_05_CraftingStation.Onboarding_05_CraftingStation_C"));
		return ptr;
	}


	void SetUtilitiesHighlight(bool IsHighlighted);
	void SetBackpackHighlight(bool IsHighlighted);
	void SetCraftButtonHighlight(bool IsHighlighted);
	void GetNPCObjectTransformByRowHandle(const struct FName& NpcRowName, struct FTransform* ActorTransform, bool* FoundActor);
	void GetNPCTransform(const struct FName& NpcRowName, bool* FoundActor, struct FTransform* ActorTransform);
	bool CreateHintMarkersWithNPCNames(const struct FName& ActiveMarkerId, TArray<struct FName>* Array);
	void OnChainCompleted_E7A4CC0541EF2DB0E74BEA8A9FFC06F9();
	void OnCompleted_E7A4CC0541EF2DB0E74BEA8A9FFC06F9();
	void OnCancelled_E7A4CC0541EF2DB0E74BEA8A9FFC06F9();
	void OnStarted_E7A4CC0541EF2DB0E74BEA8A9FFC06F9();
	void OnStartFailed_E7A4CC0541EF2DB0E74BEA8A9FFC06F9();
	void OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle);
	void BP_StartMetaQuest();
	void ClientBindCraftingWidgetDelegates(bool CompleteStepOnOpen);
	void OnCustomStep1(EYMissionResultType Result);
	void ShowCraftingStationmarker(const struct FName& ActiveMarkerId);
	void OnItemToCraftSelected(const struct FName& ItemBaseID);
	void OnCraftingFilterClicked(const struct FYFilterCategoriesDataEntry& Categories, TEnumAsByte<En_FilterCategoryCollection> ReturnValue);
	void OnSceneRemoved(const struct FDataTableRowHandle& sceneRowHandle);
	void UnbindDelegatesForHighlighting();
	void BindDelegatesForHighlighting();
	void ClientBindCraftingStarted();
	void OnCustomStep2(EYMissionResultType Result);
	void OnItemCraftingSetInProgress_Event_1(const struct FString& shopItem);
	void CompleteStartCraftingStep(bool PlayerStartedCrafting);
	void ServerTryCompleteCraftingStep(bool PlayerStartedCrafting);
	void ClientBindDelegatesForSkipStep();
	void ServerTryToCompleteSkipStep();
	void OnSceneRemoved_SkipStep(const struct FDataTableRowHandle& sceneRowHandle);
	void ExecuteUbergraph_Onboarding_05_CraftingStation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
