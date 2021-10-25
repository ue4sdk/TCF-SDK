#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Interface_EQSTesting__BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_EQSTesting__BP.Interface_EQSTesting__BP_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_EQSTesting__BP_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Interface_EQSTesting__BP.Interface_EQSTesting__BP_C");
		return ptr;
	}


	void GetCombatTarget(class AActor** CombatTargetActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
