#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OpenBugReporterCommand_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OpenBugReporterCommand_BP.OpenBugReporterCommand_BP_C
// 0x0008 (0x0038 - 0x0030)
class UOpenBugReporterCommand_BP_C : public UYNavigationCommand
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass OpenBugReporterCommand_BP.OpenBugReporterCommand_BP_C"));
		return ptr;
	}


	bool BP_IsAvailable(class AYPlayerController* PlayerController);
	void BP_OnExecute(class AYPlayerController* PlayerController);
	void ExecuteUbergraph_OpenBugReporterCommand_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
