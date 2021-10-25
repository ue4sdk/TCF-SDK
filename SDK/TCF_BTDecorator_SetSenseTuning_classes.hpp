#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTDecorator_SetSenseTuning_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C
// 0x00E8 (0x0188 - 0x00A0)
class UBTDecorator_SetSenseTuning_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FYAISenseTuningRow                          SavedSenseTuning;                                         // 0x00A8(0x00D0) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         SenseTurningRow;                                          // 0x0178(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C");
		return ptr;
	}


	bool PerformConditionCheck(class AActor* ownerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ExecuteUbergraph_BTDecorator_SetSenseTuning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
