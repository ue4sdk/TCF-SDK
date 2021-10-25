#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTTask_Friendly_Curious_GoTo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_Friendly_Curious_GoTo.BTTask_Friendly_Curious_GoTo_C
// 0x0090 (0x0138 - 0x00A8)
class UBTTask_Friendly_Curious_GoTo_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AAICtrl_Friendly_Base_BP_C*                  AICtrlRef;                                                // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FBlackboardKeySelector                      TargetToFollow;                                           // 0x00B8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      Alerted;                                                  // 0x00E0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              AcceptanceRadius;                                         // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      IsCreatureHappy;                                          // 0x0110(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTTask_Friendly_Curious_GoTo.BTTask_Friendly_Curious_GoTo_C"));
		return ptr;
	}


	void OnFail_9E09628B482FB6B88D1E56952E98243E(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_9E09628B482FB6B88D1E56952E98243E(TEnumAsByte<EPathFollowingResult> MovementResult);
	void ReceiveExecute(class AActor* ownerActor);
	void ExecuteUbergraph_BTTask_Friendly_Curious_GoTo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
