#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MatchPhaseDirectorComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C
// 0x0040 (0x0128 - 0x00E8)
class UMatchPhaseDirectorComponent_BP_C : public UYMatchPhaseDirectorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         MatchFlowRowHandle;                                       // 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	TArray<struct FDataTableRowHandle>                 MatchFlowPhaseHandles;                                    // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               useNewMatchPhaseFlow;                                     // 0x0110(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               shouldSkipBlending;                                       // 0x0111(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0112(0x0006) MISSED OFFSET
	class UDataTable*                                  MatchFlowsDataTable;                                      // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                PlayerSpawningToggleTimerHandle;                          // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C"));
		return ptr;
	}


	void FindValidVariationIndicesForTag(const struct FGameplayTag& GroupTag, TArray<struct FYMatchPhaseVisualVariation>* Variations, bool* FoundAtLeastOne, TArray<int>* ValidIndices);
	void FindVisualVariationForNextPhase(const struct FDataTableRowHandle& NextMatchPhaseRowHandle, int* Index);
	void SetPlayerSpawningDisabled();
	void SetPlayerSpawningEnabled();
	void SetPlayerSpawningTimer(bool enableSpawning, float Delay);
	void LogMatchFlowPhaseHandles();
	void TrySetupMatchFlowPhaseHandles();
	void StartNextMatchPhase();
	void SetupMatchFlow();
	void FindPreviousMatchPhase(struct FDataTableRowHandle* NewMatchPhase);
	void FindNextMatchPhase(struct FDataTableRowHandle* NewMatchPhase);
	void SetMatchPhase(const struct FDataTableRowHandle& MatchPhaseDefinitionRowHandle, int visualVariationIndex, bool ForceTransition);
	void StartMatchFlow();
	void ForceSetMatchPhase(const struct FDataTableRowHandle& MatchPhaseDefinitionRowHandle, int VariationIndex, bool ForceTransition);
	void ReceiveBeginPlay();
	void BP_OnRep_CurrentMatchPhaseData();
	void ExecuteUbergraph_MatchPhaseDirectorComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
