#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTTask_Friendly_Curious_LastLoc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_Friendly_Curious_LastLoc.BTTask_Friendly_Curious_LastLoc_C
// 0x00A0 (0x0150 - 0x00B0)
class UBTTask_Friendly_Curious_LastLoc_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      Alerted;                                                  // 0x00B8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	class AAICtrl_Friendly_Base_BP_C*                  AICtrlRef;                                                // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FBlackboardKeySelector                      TargetLocation;                                           // 0x00E8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      HomeLocation;                                             // 0x0110(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     TargetLocationVector;                                     // 0x0138(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	class AAIChar_Friendly_Base_BP_C*                  AICharFriendly;                                           // 0x0148(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTTask_Friendly_Curious_LastLoc.BTTask_Friendly_Curious_LastLoc_C"));
		return ptr;
	}


	void OnFail_D59B7E524308BDC7B05F3B842BD486B4(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_D59B7E524308BDC7B05F3B842BD486B4(TEnumAsByte<EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_Friendly_Curious_LastLoc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
