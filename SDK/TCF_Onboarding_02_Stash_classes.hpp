#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Onboarding_02_Stash_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_02_Stash.Onboarding_02_Stash_C
// 0x0049 (0x01F9 - 0x01B0)
class UOnboarding_02_Stash_C : public UMS_Line_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<EYPlayerSetType>                            SlotsToCheck;                                             // 0x01B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	EYItemType                                         itemTypeToCheck;                                          // 0x01C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	struct FName                                       SceneToInteract;                                          // 0x01CC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               stepActive;                                               // 0x01D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	struct FDataTableRowHandle                         loadSceneRowHandle;                                       // 0x01D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         quickMenuRowHandle;                                       // 0x01E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               checkForTools;                                            // 0x01F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Onboarding_02_Stash.Onboarding_02_Stash_C");
		return ptr;
	}


	void BindOnStashOpened();
	void CompleteStep();
	void Step3Completed(EYMissionResultType Result);
	void OnSetChanged(class UYStateInventoryComponent* stateInventoryComponent);
	void Step5Completed(EYMissionResultType Result);
	void OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle);
	void Step2Completed(EYMissionResultType Result);
	void ClientBindOnSetChanged();
	void ServerCompleteStep();
	void ClientBindSceneAdded();
	void Step1Completed(EYMissionResultType Result);
	void OnStashOpened();
	void BP_StartMetaQuest();
	void OnStepBind(const struct FYRuntimeInitializationContext& Result);
	void Step4Completed(EYMissionResultType Result);
	void Step6Completed(EYMissionResultType Result);
	void ExecuteUbergraph_Onboarding_02_Stash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
