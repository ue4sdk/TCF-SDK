#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTDecorator_SetAIState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTDecorator_SetAIState.BTDecorator_SetAIState_C
// 0x0038 (0x00D8 - 0x00A0)
class UBTDecorator_SetAIState_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	EYAIState                                          NewAIState;                                               // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      AIStateKey;                                               // 0x00B0(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BTDecorator_SetAIState.BTDecorator_SetAIState_C");
		return ptr;
	}


	bool PerformConditionCheck(class AActor* ownerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTDecorator_SetAIState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
