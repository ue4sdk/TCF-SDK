#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_OpenDeveloperCreditsCommand_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OpenDeveloperCreditsCommand_BP.OpenDeveloperCreditsCommand_BP_C
// 0x0008 (0x0040 - 0x0038)
class UOpenDeveloperCreditsCommand_BP_C : public UYOpenSettingsCommand
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass OpenDeveloperCreditsCommand_BP.OpenDeveloperCreditsCommand_BP_C");
		return ptr;
	}


	bool BP_IsAvailable(class AYPlayerController* PlayerController);
	void BP_OnExecute(class AYPlayerController* PlayerController);
	void ExecuteUbergraph_OpenDeveloperCreditsCommand_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
