#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YProjectile_CreatureGrenade_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YProjectile_CreatureGrenade_BP.YProjectile_CreatureGrenade_BP_C
// 0x0008 (0x03E0 - 0x03D8)
class AYProjectile_CreatureGrenade_BP_C : public AYProjectile_BP_C
{
public:
	class UAudioComponent*                             Audio_AI_GrenadeLoop;                                     // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YProjectile_CreatureGrenade_BP.YProjectile_CreatureGrenade_BP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
