#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MatchStates_AlwaysLoaded_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatchStates_AlwaysLoaded.MatchStates_AlwaysLoaded_C
// 0x0000 (0x02C0 - 0x02C0)
class AMatchStates_AlwaysLoaded_C : public AYLevelScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MatchStates_AlwaysLoaded.MatchStates_AlwaysLoaded_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
