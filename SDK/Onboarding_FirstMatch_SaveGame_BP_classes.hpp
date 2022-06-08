#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_FirstMatch_SaveGame_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Onboarding_FirstMatch_SaveGame_BP.Onboarding_FirstMatch_SaveGame_BP_C
// 0x0001 (0x0031 - 0x0030)
class UOnboarding_FirstMatch_SaveGame_BP_C : public USaveGame
{
public:
	bool                                               EscapedSucessfully;                                       // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Onboarding_FirstMatch_SaveGame_BP.Onboarding_FirstMatch_SaveGame_BP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
