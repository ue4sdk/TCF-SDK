#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTTask_Dodge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_Dodge.BTTask_Dodge_C
// 0x0058 (0x0168 - 0x0110)
class UBTTask_Dodge_C : public UYBTTask_PlayAnimation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FBlackboardKeySelector                      KeyTimeDodgeFinished;                                     // 0x0118(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      KeyDodgeMontage;                                          // 0x0140(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BTTask_Dodge.BTTask_Dodge_C");
		return ptr;
	}


	class UAnimMontage* GetAnimationToPlay(bool* allowPhysicsRotationDuringAnimation, bool* finishNodeSuccesfullyIfNoAnimIsProvided);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void BP_OnNodeEnds(bool succeeded);
	void ExecuteUbergraph_BTTask_Dodge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
