#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_NPC_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPC_Base_BP.NPC_Base_BP_C
// 0x0052 (0x0792 - 0x0740)
class ANPC_Base_BP_C : public AYNPCCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UYMapMarkerComponent*                        YMapMarker;                                               // 0x0748(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYObjectInteractionComponent*                YObjectInteraction;                                       // 0x0750(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             Emote_Lobby_HollogramSpawn;                               // 0x0758(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FName                                       CurrentArchetype;                                         // 0x0760(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EYCustomizationBodyType                            bodyType;                                                 // 0x0768(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	float                                              interactionPointerRotation;                               // 0x076C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DisableAnimUpdateDistance;                                // 0x0770(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0774(0x0004) MISSED OFFSET
	class APawn*                                       localPlayerChar;                                          // 0x0778(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>              SkeletalMeshComponents;                                   // 0x0780(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               IsOptimizationEnabled;                                    // 0x0790(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               QuestCompleted;                                           // 0x0791(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass NPC_Base_BP.NPC_Base_BP_C");
		return ptr;
	}


	void SendBIStationInteractionEvent();
	void UpdateAnimDistanceTicking();
	void OnRep_ShowcaseData();
	void onArchetypeChanged(const struct FName& archetypeId);
	void BP_OnActiveCustomizationDataChanged(const struct FYActiveCustomizationData& newCustomizationData);
	void BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnPlayerInteractionStarted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer);
	void BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_2_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer, bool perfectInteraction);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnSceneRemoved_Event_1(const struct FDataTableRowHandle& sceneRowHandle);
	void ExecuteUbergraph_NPC_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
