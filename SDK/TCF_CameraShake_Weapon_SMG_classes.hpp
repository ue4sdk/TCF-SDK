#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_CameraShake_Weapon_SMG_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraShake_Weapon_SMG.CameraShake_Weapon_SMG_C
// 0x0000 (0x0180 - 0x0180)
class UCameraShake_Weapon_SMG_C : public UDropPodIntro_Impact_CameraShake_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CameraShake_Weapon_SMG.CameraShake_Weapon_SMG_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif