#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_InteractionAnimComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InteractionAnimComponent_BP.InteractionAnimComponent_BP_C
// 0x0020 (0x00D0 - 0x00B0)
class UInteractionAnimComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USkeletalMeshComponent*                      FirstPersonSkeletalMeshComponent;                         // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AStaticMeshActor*                            SpawnedPickupMeshVisualActor;                             // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                PickUpAnimationMontage;                                   // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass InteractionAnimComponent_BP.InteractionAnimComponent_BP_C");
		return ptr;
	}


	void SpawnPickUpMesh(class UStaticMesh* StaticMesh);
	void OnNotifyEnd_EAEB331B430B0C93C3C593A0F4ABDF02(const struct FName& NotifyName);
	void OnNotifyBegin_EAEB331B430B0C93C3C593A0F4ABDF02(const struct FName& NotifyName);
	void OnInterrupted_EAEB331B430B0C93C3C593A0F4ABDF02(const struct FName& NotifyName);
	void OnBlendOut_EAEB331B430B0C93C3C593A0F4ABDF02(const struct FName& NotifyName);
	void OnCompleted_EAEB331B430B0C93C3C593A0F4ABDF02(const struct FName& NotifyName);
	void PlaySpecialPickupAnimation(class UStaticMesh* StaticMesh, EYItemRarityType itemRarity);
	void ReceiveBeginPlay();
	void TryDestroyPickUpItem();
	void ExecuteUbergraph_InteractionAnimComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
