#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OpenPlayerSupportCommand_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OpenPlayerSupportCommand_BP.OpenPlayerSupportCommand_BP_C
// 0x0008 (0x0038 - 0x0030)
class UOpenPlayerSupportCommand_BP_C : public UYNavigationCommand
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass OpenPlayerSupportCommand_BP.OpenPlayerSupportCommand_BP_C"));
		return ptr;
	}


	void BP_OnExecute(class AYPlayerController* PlayerController);
	void ExecuteUbergraph_OpenPlayerSupportCommand_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
