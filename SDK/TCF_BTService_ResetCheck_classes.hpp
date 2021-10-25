#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTService_ResetCheck_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTService_ResetCheck.BTService_ResetCheck_C
// 0x006C (0x0104 - 0x0098)
class UBTService_ResetCheck_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FBlackboardKeySelector                      KeyWantsToReset;                                          // 0x00A0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      KeyHomeLocation;                                          // 0x00C8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     LastLocationChecked;                                      // 0x00F0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastTimeChecked;                                          // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastDistanceResultChecked;                                // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BTService_ResetCheck.BTService_ResetCheck_C");
		return ptr;
	}


	void DetermineBugItGoString(const struct FVector& Location, struct FString* Result);
	void Get_BehaviorInfoStringFromCharacter(class AActor* ControlledActor, struct FString* Result);
	void GetBlackboardInfoString(class AActor* ControlledActor, struct FString* Result);
	void DoResetCheck(class UObject* Object);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_ResetCheck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
