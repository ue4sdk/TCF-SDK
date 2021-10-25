#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YProjectile_BulletWithTrail_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YProjectile_BulletWithTrail_BP.YProjectile_BulletWithTrail_BP_C
// 0x0000 (0x0428 - 0x0428)
class AYProjectile_BulletWithTrail_BP_C : public AYProjectile_Bullet_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass YProjectile_BulletWithTrail_BP.YProjectile_BulletWithTrail_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
