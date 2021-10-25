#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTDecorator_DistanceToTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTDecorator_DistanceToTarget.BTDecorator_DistanceToTarget_C
// 0x002C (0x00CC - 0x00A0)
class UBTDecorator_DistanceToTarget_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      combatTarget;                                             // 0x00A0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              MaxDistance;                                              // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BTDecorator_DistanceToTarget.BTDecorator_DistanceToTarget_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
