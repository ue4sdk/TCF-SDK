#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTTask_ClearAllAggroTargets_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_ClearAllAggroTargets.BTTask_ClearAllAggroTargets_C
// 0x0018 (0x00C0 - 0x00A8)
class UBTTask_ClearAllAggroTargets_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TArray<struct FBlackboardKeySelector>              KeysToClear;                                              // 0x00B0(0x0010) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BTTask_ClearAllAggroTargets.BTTask_ClearAllAggroTargets_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_ClearAllAggroTargets(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
