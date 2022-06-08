#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_06_TalkToBadumCraftingStation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C
// 0x0050 (0x0230 - 0x01E0)
class UOnboarding_06_TalkToBadumCraftingStation_C : public UMS_Line_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         badumSceneRowHandle;                                      // 0x01E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FName                                       badumId;                                                  // 0x01F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       SceneToInteract;                                          // 0x0200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         craftingStationSceneRowHandle;                            // 0x0208(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         craftingStationNpcRowHandle;                              // 0x0218(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FName                                       craftingStationId;                                        // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C"));
		return ptr;
	}


	void GetNPCObjectTransformByRowHandle(const struct FName& NpcRowName, struct FTransform* ActorTransform, bool* FoundActor);
	void GetNPCTransform(const struct FName& NpcRowName, bool* FoundActor, struct FTransform* ActorTransform);
	bool CreateHintMarkersWithNPCNames(const struct FName& ActiveMarkerId, TArray<struct FName>* Array);
	void BP_StartMetaQuest();
	void OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle);
	void ClientBindSceneAdded();
	void Step1Completed(EYMissionResultType Result);
	void ExecuteUbergraph_Onboarding_06_TalkToBadumCraftingStation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
