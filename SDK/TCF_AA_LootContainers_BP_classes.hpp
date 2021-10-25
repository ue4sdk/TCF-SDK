#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_LootContainers_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_LootContainers_BP.AA_LootContainers_BP_C
// 0x0027 (0x0508 - 0x04E1)
class AAA_LootContainers_BP_C : public AYLootContainer_Variation_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UYActivityComponent*                         YActivityComponent;                                       // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         LootContainerDefinition_PlacedInLevel;                    // 0x04F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_LootContainers_BP.AA_LootContainers_BP_C"));
		return ptr;
	}


	struct FString GetDebugDescription();
	struct FCoreUObject_FColor GetDrawDebugLineColor();
	struct FVector GetDrawDebugLineTo();
	void BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_1_OnSetupComplete__DelegateSignature();
	void TryMarkAsDepleted();
	void BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_3_OnSetupComplete__DelegateSignature();
	void ReceiveBeginPlay();
	void OnInteractedWith();
	void ExecuteUbergraph_AA_LootContainers_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
