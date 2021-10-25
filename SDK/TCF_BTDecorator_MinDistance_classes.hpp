#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTDecorator_MinDistance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTDecorator_MinDistance.BTDecorator_MinDistance_C
// 0x0060 (0x0100 - 0x00A0)
class UBTDecorator_MinDistance_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      Key_Location;                                             // 0x00A0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      Key_Actor;                                                // 0x00C8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              MinDistance;                                              // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class APawn*                                       Controlled_Pawn;                                          // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BTDecorator_MinDistance.BTDecorator_MinDistance_C");
		return ptr;
	}


	void DistanceCheck(const struct FVector& TargetLocation, bool* isInDistance);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
