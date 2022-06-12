#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_Keyroom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_Keyroom.AA_Keyroom_C
// 0x0100 (0x0350 - 0x0250)
class AAA_Keyroom_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                               // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBillboardComponent*                         Billboard;                                                // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                    // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYAreaStatusNotifyComponent*                 YAreaStatusNotify;                                        // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSet<class AAL_Base_BP_C*>                         LootLocations;                                            // 0x0278(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	struct FDataTableRowHandle                         ContainerDefinition;                                      // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	EYLootContainerTier                                lootTier;                                                 // 0x02D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	TMap<class AAL_Base_BP_C*, class AActor*>          SpawnedActors;                                            // 0x02E0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FString                                     KeyRoomName;                                              // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	TArray<class UBillboardComponent*>                 SpawnedBillboardComponents;                               // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_Keyroom.AA_Keyroom_C"));
		return ptr;
	}


	void Re_SetLootCrates(TMap<class AAL_Base_BP_C*, class AActor*> SpawnedLoot);
	void SpawnSingleLoot(TMap<class AAL_Base_BP_C*, class AActor*> SpawnedLoot, TMap<class AAL_Base_BP_C*, class AActor*>* SpawnedLootUpdate);
	void ShowConnectedActors();
	void ClearLoot(TMap<class AAL_Base_BP_C*, class AActor*> LootToClear);
	void SpawnLoot(TSet<class AAL_Base_BP_C*> LootLocations, TMap<class AAL_Base_BP_C*, class AActor*>* SpawnedActors);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__AA_Keyroom_YAreaStatusNotify_K2Node_ComponentBoundEvent_0_OnAreaRespawned__DelegateSignature();
	void ExecuteUbergraph_AA_Keyroom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
