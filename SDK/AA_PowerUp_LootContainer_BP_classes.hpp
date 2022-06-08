#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_PowerUp_LootContainer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C
// 0x002A (0x058A - 0x0560)
class AAA_PowerUp_LootContainer_BP_C : public AYLootContainer_Variation_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         LootContainerType;                                        // 0x0568(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_NoDestructor)
	struct FDataTableRowHandle                         LootContainerLootListLEGACY;                              // 0x0578(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_NoDestructor)
	bool                                               IsConnectedToConfigurator;                                // 0x0588(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	EYLootContainerTier                                LootTierEditable;                                         // 0x0589(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C"));
		return ptr;
	}


	void RegisterWithLootRoom();
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
