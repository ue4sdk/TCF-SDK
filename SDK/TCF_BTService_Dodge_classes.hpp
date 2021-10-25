#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTService_Dodge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTService_Dodge.BTService_Dodge_C
// 0x00F8 (0x0190 - 0x0098)
class UBTService_Dodge_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FBlackboardKeySelector                      KeyDodgeMontage;                                          // 0x00A0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	class UAnimInstance*                               AnimInstanceOwner;                                        // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DodgeValueCurrent;                                        // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      KeyTimeLastDodge;                                         // 0x00D8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	class AYAICharacter*                               AICharacterOwner;                                         // 0x0100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxCurrentPossibleDodgeDistance;                          // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      KeyCombatTarget;                                          // 0x0110(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      KeyIsDodgeBlocked;                                        // 0x0138(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      KeyStabilityAnimationInfo;                                // 0x0160(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               MostRecentDodgeIsRight;                                   // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	float                                              DodgeEvalDistanceConsidereEqual;                          // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BTService_Dodge.BTService_Dodge_C");
		return ptr;
	}


	void EvaluateDodgeAnim(bool TryOtherDirectionAsFallback, class UAnimMontage** DodgeMontage);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnTakeDamage_Event(const struct FYDealtDamageData& Data);
	void ExecuteUbergraph_BTService_Dodge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
