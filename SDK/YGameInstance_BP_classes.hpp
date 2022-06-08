#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YGameInstance_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YGameInstance_BP.YGameInstance_BP_C
// 0x0008 (0x0558 - 0x0550)
class UYGameInstance_BP_C : public UYGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YGameInstance_BP.YGameInstance_BP_C"));
		return ptr;
	}


	void BP_OnInit(class UWorld* World);
	void HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer);
	void HandleTravelError(TEnumAsByte<ETravelFailure> FailureType);
	void logError(const struct FString& errorMessage);
	void ExecuteUbergraph_YGameInstance_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
