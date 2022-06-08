#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AL_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AL_Base_BP.AL_Base_BP_C
// 0x0059 (0x04C1 - 0x0468)
class AAL_Base_BP_C : public AYActivityLocationLinked
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBillboardComponent*                         BillboardEditor;                                          // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                    // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       LocationName;                                             // 0x0480(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       LocationSpecificID;                                       // 0x04A0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               DisableSpawnWeightInTutorial;                             // 0x04C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AL_Base_BP.AL_Base_BP_C"));
		return ptr;
	}


	void GetLootSpawnData(struct FDataTableRowHandle* LootDefinitionRow, EYLootContainerTier* lootTier, bool* IsContainer);
	void GetDebugDepletedTimeStatus(struct FString* DebugCooldownTimer);
	void GetActivityRow(bool* FoundRow, struct FYActivityDataTableRow* Out_Row);
	void GetDebugCooldownTimeStatus(struct FString* DebugCooldownTimer);
	struct FString GetDebugDescription();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AL_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
