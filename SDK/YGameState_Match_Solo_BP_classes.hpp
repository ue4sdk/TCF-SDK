#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YGameState_Match_Solo_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YGameState_Match_Solo_BP.YGameState_Match_Solo_BP_C
// 0x0000 (0x05F8 - 0x05F8)
class AYGameState_Match_Solo_BP_C : public AYGameState_Match_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YGameState_Match_Solo_BP.YGameState_Match_Solo_BP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
