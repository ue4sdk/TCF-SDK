#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTTask_PlayMontageAnimation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_PlayMontageAnimation.BTTask_PlayMontageAnimation_C
// 0x0011 (0x0121 - 0x0110)
class UBTTask_PlayMontageAnimation_C : public UYBTTask_PlayAnimation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UAnimMontage*                                PlayMontage;                                              // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Allow_Physics_Rotation_During_Animation;                  // 0x0120(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BTTask_PlayMontageAnimation.BTTask_PlayMontageAnimation_C");
		return ptr;
	}


	class UAnimMontage* GetAnimationToPlay(bool* allowPhysicsRotationDuringAnimation, bool* finishNodeSuccesfullyIfNoAnimIsProvided);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_PlayMontageAnimation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
