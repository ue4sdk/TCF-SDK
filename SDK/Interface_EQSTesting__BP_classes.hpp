#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Interface_EQSTesting__BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_EQSTesting__BP.Interface_EQSTesting__BP_C
// 0x0000 (0x0030 - 0x0030)
class UInterface_EQSTesting__BP_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Interface_EQSTesting__BP.Interface_EQSTesting__BP_C"));
		return ptr;
	}


	void GetCombatTarget(class AActor** CombatTargetActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
