#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTTask_Friendly_StopMoving_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_Friendly_StopMoving.BTTask_Friendly_StopMoving_C
// 0x0064 (0x0114 - 0x00B0)
class UBTTask_Friendly_StopMoving_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      MyCurrentLocation;                                        // 0x00B8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      Target;                                                   // 0x00E0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     currentLocation;                                          // 0x0108(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTTask_Friendly_StopMoving.BTTask_Friendly_StopMoving_C"));
		return ptr;
	}


	void OnFail_CC0A5099486E38BB454A129DF4BE305C(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_CC0A5099486E38BB454A129DF4BE305C(TEnumAsByte<EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_Friendly_StopMoving(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
