#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTDecorator_FocusPointBasedOnBone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTDecorator_FocusPointBasedOnBone.BTDecorator_FocusPointBasedOnBone_C
// 0x0010 (0x00B0 - 0x00A0)
class UBTDecorator_FocusPointBasedOnBone_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       BoneName;                                                 // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTDecorator_FocusPointBasedOnBone.BTDecorator_FocusPointBasedOnBone_C"));
		return ptr;
	}


	bool PerformConditionCheck(class AActor* ownerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ExecuteUbergraph_BTDecorator_FocusPointBasedOnBone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
