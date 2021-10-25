#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTTask_Friendly_SetAlerted_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_Friendly_SetAlerted.BTTask_Friendly_SetAlerted_C
// 0x0068 (0x0110 - 0x00A8)
class UBTTask_Friendly_SetAlerted_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AAICtrl_Friendly_Base_BP_C*                  AICtrlRef;                                                // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FBlackboardKeySelector                      Alerted;                                                  // 0x00B8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EAI_Friendly_States>                   AI_Friendly_States;                                       // 0x00E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BB_AI_Friendly_States;                                    // 0x00E8(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTTask_Friendly_SetAlerted.BTTask_Friendly_SetAlerted_C"));
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_Friendly_SetAlerted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
