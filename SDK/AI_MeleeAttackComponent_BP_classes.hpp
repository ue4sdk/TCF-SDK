#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AI_MeleeAttackComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AI_MeleeAttackComponent_BP.AI_MeleeAttackComponent_BP_C
// 0x0000 (0x0248 - 0x0248)
class UAI_MeleeAttackComponent_BP_C : public UYMeleeAttackComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AI_MeleeAttackComponent_BP.AI_MeleeAttackComponent_BP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
