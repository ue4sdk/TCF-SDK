#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerToWeaponAnimInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C
// 0x0000 (0x0030 - 0x0030)
class UPlayerToWeaponAnimInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C"));
		return ptr;
	}


	void UpdateRecallmesh(bool RecallState);
	void SendTurnDeltaOffsetToWeapon(float DYaw, float DPitch);
	void IsFirstPersonWeapon(bool IsFirstPerson);
	void WalkOut();
	void LightImpact();
	void JumpLand();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
