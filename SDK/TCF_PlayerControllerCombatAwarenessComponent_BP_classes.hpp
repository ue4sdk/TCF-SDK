#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerControllerCombatAwarenessComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerControllerCombatAwarenessComponent_BP.PlayerControllerCombatAwarenessComponent_BP_C
// 0x0000 (0x0178 - 0x0178)
class UPlayerControllerCombatAwarenessComponent_BP_C : public UYPlayerControllerAwarenessComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PlayerControllerCombatAwarenessComponent_BP.PlayerControllerCombatAwarenessComponent_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
