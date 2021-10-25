#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AC_Uplink_HardDriveSlot_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C
// 0x00A8 (0x02E8 - 0x0240)
class AAC_Uplink_HardDriveSlot_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               InteractionCollider;                                      // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UYObjectInteractionComponent*                YObjectInteraction;                                       // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSuccessInteracted;                                      // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0258(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               HasHardDrive;                                             // 0x0268(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFailedInteract;                                         // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0269(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnLookedAt;                                               // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0280(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               BlockInteraction;                                         // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	float                                              InteractionBlockTime;                                     // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       DriveMissingText;                                         // 0x0298(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       InsertDriveText;                                          // 0x02B0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class AYPlayerController_Match*                    interactingPlayer;                                        // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       RemoveDriveText;                                          // 0x02D0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AC_Uplink_HardDriveSlot_BP.AC_Uplink_HardDriveSlot_BP_C"));
		return ptr;
	}


	void OnRep_HasHardDrive();
	void CanInteract(class AYPlayerController_Match* interactingPlayer, bool* CanInteract);
	void BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer, bool perfectInteraction);
	void BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnObjectInteractionDetected__DelegateSignature();
	void HardDriveEntered();
	void HardDriveRemoved();
	void OnInteractSuccessfull();
	void OntnteractFailed();
	void ExecuteUbergraph_AC_Uplink_HardDriveSlot_BP(int EntryPoint);
	void OnLookedAt__DelegateSignature(bool CanInteract);
	void OnFailedInteract__DelegateSignature(class AYPlayerController_Match* PlayerInteracting);
	void OnSuccessInteracted__DelegateSignature(class AYPlayerController_Match* interactingPlayer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
