#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MatchPhaseDirectorComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C
// 0x0038 (0x0118 - 0x00E0)
class UMatchPhaseDirectorComponent_BP_C : public UYMatchPhaseDirectorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FDataTableRowHandle                         MatchFlowRowHandle;                                       // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	TArray<struct FDataTableRowHandle>                 MatchFlowPhaseHandles;                                    // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               useNewMatchPhaseFlow;                                     // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               shouldSkipBlending;                                       // 0x0109(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x010A(0x0006) MISSED OFFSET
	class UDataTable*                                  MatchFlowsDataTable;                                      // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C");
		return ptr;
	}


	void LogMatchFlowPhaseHandles();
	void TrySetupMatchFlowPhaseHandles();
	void StartNextMatchPhase();
	void SetupMatchFlow();
	void FindPreviousMatchPhase(struct FDataTableRowHandle* NewMatchPhase);
	void FindNextMatchPhase(struct FDataTableRowHandle* NewMatchPhase);
	void SetMatchPhase(const struct FDataTableRowHandle& MatchPhaseDefinitionRowHandle, bool DebugSetMatchPhase);
	void StartMatchFlow();
	void ForceSetMatchPhase(const struct FDataTableRowHandle& MatchPhaseDefinitionRowHandle);
	void ReceiveBeginPlay();
	void BP_OnRep_CurrentMatchPhaseData();
	void ExecuteUbergraph_MatchPhaseDirectorComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
