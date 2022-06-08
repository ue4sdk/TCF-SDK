#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MatchScreenEndOfMatch_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatchScreenEndOfMatch_BP.MatchScreenEndOfMatch_BP_C
// 0x0000 (0x00C0 - 0x00C0)
class UMatchScreenEndOfMatch_BP_C : public UYMatchScreenEndOfMatch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MatchScreenEndOfMatch_BP.MatchScreenEndOfMatch_BP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
