#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_PowerUp_LootRoom_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C
// 0x0060 (0x02A0 - 0x0240)
class AAA_PowerUp_LootRoom_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPowerUpComponent_C*                         PowerUpComponent;                                         // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_WallSocket;                                            // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBillboardComponent*                         Billboard;                                                // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              ConnectedActors;                                          // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	TArray<class AAA_PowerUp_LootContainer_BP_C*>      LootActors;                                               // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	TArray<class AActor*>                              EnabledPedestals;                                         // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               IsConnectedToConfigurator;                                // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	float                                              FindLootRadius;                                           // 0x029C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C"));
		return ptr;
	}


	void GetLootRoomActors();
	void DebugShowConnectedLoot();
	void OnRep_EnabledPedestals();
	void ResetLootActors(bool* SUCCESS);
	void UserConstructionScript();
	void OnPoweredProgressionLootRoom(int PoweredConnectionsInt);
	void OnLootRoomPowered();
	void ResetPowerUpActor();
	void BndEvt__AA_PowerUp_LootRoom_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnPowerStatusChanged__DelegateSignature(bool IsPowered);
	void BndEvt__AA_PowerUp_LootRoom_BP_PowerUpComponent_K2Node_ComponentBoundEvent_2_OnPowerSourceEnabled__DelegateSignature(class AActor* Actor);
	void BndEvt__AA_PowerUp_LootRoom_BP_PowerUpComponent_K2Node_ComponentBoundEvent_3_OnPowerSourceDisabled__DelegateSignature(class AActor* Actor);
	void OnRelevantToPowerup(bool TRUE);
	void ExecuteUbergraph_AA_PowerUp_LootRoom_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
