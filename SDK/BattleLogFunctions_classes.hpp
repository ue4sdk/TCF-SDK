#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BattleLogFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleLogFunctions.BattleLogFunctions_C
// 0x0000 (0x0030 - 0x0030)
class UBattleLogFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BattleLogFunctions.BattleLogFunctions_C"));
		return ptr;
	}


	static void DetermineEncounterText(class UObject* __WorldContext, struct FYPlayerEncounter* PlayerEncounter, struct FText* Title);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
