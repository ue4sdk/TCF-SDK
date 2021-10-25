#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_MeteorRockBigActor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C
// 0x001E (0x03A0 - 0x0382)
class AAA_MeteorRockBigActor_BP_C : public AAC_MeteorRockBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ULootSpawnVolume_Component_BP_C*             LootSpawnVolume_Component_BP_Core;                        // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                               // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C"));
		return ptr;
	}


	bool CanMeteorBeCollapsed();
	void FX_MeteorImpact();
	void FX_MeteorFlightAlpha(float Alpha);
	void OnMeteorLanded_Server();
	void BndEvt__LootSpawnVolume_Component_BP_Core_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature(TArray<class AYPickupActor*>* LootActors);
	void BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature(TArray<class AYPickupActor*>* LootActors);
	void ExecuteUbergraph_AA_MeteorRockBigActor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
