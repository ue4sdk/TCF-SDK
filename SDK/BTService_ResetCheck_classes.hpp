#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTService_ResetCheck_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTService_ResetCheck.BTService_ResetCheck_C
// 0x0080 (0x0120 - 0x00A0)
class UBTService_ResetCheck_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      KeyWantsToReset;                                          // 0x00A8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      KeyHomeLocation;                                          // 0x00D0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      KeyWantsToForceReset;                                     // 0x00F8(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTService_ResetCheck.BTService_ResetCheck_C"));
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
