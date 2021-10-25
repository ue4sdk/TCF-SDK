#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_PowerUp_LootContainer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C
// 0x0030 (0x0511 - 0x04E1)
class AAA_PowerUp_LootContainer_BP_C : public AYLootContainer_Variation_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         LootContainerTypeVisual;                                  // 0x04F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_RepNotify, CPF_NoDestructor)
	struct FDataTableRowHandle                         LootContainerLootList;                                    // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_RepNotify, CPF_NoDestructor)
	bool                                               IsConnectedToConfigurator;                                // 0x0510(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C"));
		return ptr;
	}


	void RegisterWithLootRoom();
	void SetupLootContainer();
	void ResetLoot();
	void UserConstructionScript();
	void ResetPowerUpActor();
	void OnPoweredProgressionLootRoom(int PoweredConnectionsInt);
	void OnLootRoomPowered();
	void ReceiveBeginPlay();
	void OnRelevantToPowerup(bool TRUE);
	void ExecuteUbergraph_AA_PowerUp_LootContainer_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
