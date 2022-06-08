#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OpenNotificationsLogCommand_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OpenNotificationsLogCommand_BP.OpenNotificationsLogCommand_BP_C
// 0x0008 (0x0048 - 0x0040)
class UOpenNotificationsLogCommand_BP_C : public UYOpenSettingsCommand
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass OpenNotificationsLogCommand_BP.OpenNotificationsLogCommand_BP_C"));
		return ptr;
	}


	void BP_OnExecute(class AYPlayerController* PlayerController);
	void ExecuteUbergraph_OpenNotificationsLogCommand_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
