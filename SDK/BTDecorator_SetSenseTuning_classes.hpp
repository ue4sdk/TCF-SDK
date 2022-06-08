#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTDecorator_SetSenseTuning_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C
// 0x00F8 (0x01A0 - 0x00A8)
class UBTDecorator_SetSenseTuning_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FYAISenseTuningRow                          SavedSenseTuning;                                         // 0x00B0(0x00E0) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         SenseTurningRow;                                          // 0x0190(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C"));
		return ptr;
	}


	bool PerformConditionCheck(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ExecuteUbergraph_BTDecorator_SetSenseTuning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
