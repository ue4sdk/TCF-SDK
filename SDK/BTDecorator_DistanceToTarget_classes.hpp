#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTDecorator_DistanceToTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTDecorator_DistanceToTarget.BTDecorator_DistanceToTarget_C
// 0x002C (0x00D4 - 0x00A8)
class UBTDecorator_DistanceToTarget_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      combatTarget;                                             // 0x00A8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              MaxDistance;                                              // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTDecorator_DistanceToTarget.BTDecorator_DistanceToTarget_C"));
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
