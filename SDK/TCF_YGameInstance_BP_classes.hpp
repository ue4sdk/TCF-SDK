#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YGameInstance_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YGameInstance_BP.YGameInstance_BP_C
// 0x0008 (0x04E8 - 0x04E0)
class UYGameInstance_BP_C : public UYGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass YGameInstance_BP.YGameInstance_BP_C");
		return ptr;
	}


	void BP_OnFindReplaysComplete(TArray<struct FS_ReplayInfo> AllReplays);
	void BP_OnInit(class UWorld* World);
	void HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer);
	void HandleTravelError(TEnumAsByte<ETravelFailure> FailureType);
	void logError(const struct FString& ErrorMessage);
	void ExecuteUbergraph_YGameInstance_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
