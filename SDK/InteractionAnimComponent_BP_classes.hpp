#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InteractionAnimComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InteractionAnimComponent_BP.InteractionAnimComponent_BP_C
// 0x0042 (0x00FA - 0x00B8)
class UInteractionAnimComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USkeletalMeshComponent*                      FirstPersonSkeletalMeshComponent;                         // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AStaticMeshActor*                            SpawnedPickupMeshVisualActor;                             // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                PickUpAnimationMontage;                                   // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnInteractionTriggered;                                   // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnInteractionStopped;                                     // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               IsPlayingInstantInteraction;                              // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsLongInteractingActive;                                  // 0x00F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass InteractionAnimComponent_BP.InteractionAnimComponent_BP_C"));
		return ptr;
	}


	void OnRep_IsLongInteracting();
	void GetPickUpInteractionActor(class AYPickupActor** AsYPickup_Actor);
	void RetrieveMesh(class UStaticMesh** AsStatic_Mesh);
	void TryPrepareSpecialAnimation(bool* IsSpecial);
	class UYPlayerInteractionComponent* GetPlayerInteractionComponent();
	void IsInstantInteraction(bool* shouldPlayQuickInteraction);
	void TrySpawnSpecialPickUpMesh();
	void ReceiveBeginPlay();
	void TryDestroySpecialStaticMesh();
	void BP_OnInteractionStarted_Event_1(class UYPlayerInteractionComponent* Component);
	void BP_OnInteractionEnded_Event_1(class UYPlayerInteractionComponent* Component);
	void BP_OnControllerChanged_Event_1(class AController* Controller);
	void SetupBindings();
	void SetIsLongInteractionActive(bool IsLongInteractingActive);
	void ExecuteUbergraph_InteractionAnimComponent_BP(int EntryPoint);
	void OnInteractionStopped__DelegateSignature();
	void OnInteractionTriggered__DelegateSignature(bool IsInstantInteraction, bool IsSpecial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
