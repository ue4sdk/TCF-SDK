#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SettingsMenu_SBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsMenu_SBP.SettingsMenu_SBP_C
// 0x0008 (0x00B8 - 0x00B0)
class USettingsMenu_SBP_C : public UYScreenBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsMenu_SBP.SettingsMenu_SBP_C");
		return ptr;
	}


	void OnStateExitedEvent();
	void BP_OnWidgetLoaded();
	void OnStateEnteredEvent();
	void ExecuteUbergraph_SettingsMenu_SBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
