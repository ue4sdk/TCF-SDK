#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UI_Command_ChangeScreen_DeveloperCredits_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UI_Command_ChangeScreen_DeveloperCredits_BP.UI_Command_ChangeScreen_DeveloperCredits_BP_C
// 0x0000 (0x0040 - 0x0040)
class UUI_Command_ChangeScreen_DeveloperCredits_BP_C : public UYCommand_TopMenuButton_ChangeScreen
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass UI_Command_ChangeScreen_DeveloperCredits_BP.UI_Command_ChangeScreen_DeveloperCredits_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
