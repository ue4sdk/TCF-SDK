#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_02_Stash_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_02_Stash.Onboarding_02_Stash_C
// 0x0079 (0x0259 - 0x01E0)
class UOnboarding_02_Stash_C : public UMS_Line_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<EYPlayerSetType>                            SlotsToCheck;                                             // 0x01E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	EYItemType                                         itemTypeToCheck;                                          // 0x01F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01F9(0x0003) MISSED OFFSET
	struct FName                                       SceneToInteract;                                          // 0x01FC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               stepActive;                                               // 0x0204(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0205(0x0003) MISSED OFFSET
	struct FDataTableRowHandle                         loadSceneRowHandle;                                       // 0x0208(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         quickMenuRowHandle;                                       // 0x0218(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               checkForTools;                                            // 0x0228(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0229(0x0003) MISSED OFFSET
	struct FGuid                                       trackedGuid;                                              // 0x022C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	struct FInventoryOnboarding_ST                     OnboardingInventoryData;                                  // 0x0240(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify, CPF_HasGetValueTypeHash)
	bool                                               ShouldStashAndSafePocketBeHighlightedForDragAndDrop;      // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Onboarding_02_Stash.Onboarding_02_Stash_C"));
		return ptr;
	}


	void OnRep_ShouldStashAndSafePocketBeHighlightedForDragAndDrop();
	void OnRep_OnboardingInventoryData();
	void BindOnStashOpened();
	void Step3Completed(EYMissionResultType Result);
	void OnSetChanged(class UYStateInventoryComponent* stateInventoryComponent);
	void Step5Completed(EYMissionResultType Result);
	void OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle);
	void Step2Completed(EYMissionResultType Result);
	void ClientBindOnSetChanged();
	void ClientBindSceneAdded();
	void Step1Completed(EYMissionResultType Result);
	void OnStashOpened();
	void OnStepBind(const struct FYRuntimeInitializationContext& Result);
	void Step4Completed(EYMissionResultType Result);
	void Step7Completed(EYMissionResultType Result);
	void BP_StartMetaQuest();
	void BP_MissionCompleted();
	void Step6Completed(EYMissionResultType Result);
	void Step8Completed(EYMissionResultType Result);
	void ExecuteUbergraph_Onboarding_02_Stash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
