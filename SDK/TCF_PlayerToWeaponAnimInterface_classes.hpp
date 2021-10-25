#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerToWeaponAnimInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C
// 0x0000 (0x0028 - 0x0028)
class UPlayerToWeaponAnimInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PlayerToWeaponAnimInterface.PlayerToWeaponAnimInterface_C");
		return ptr;
	}


	void UpdateRecallmesh(bool RecallState);
	void SendTurnDeltaOffsetToWeapon(float DYaw, float DPitch);
	void IsFirstPersonWeapon(bool IsFirstPerson);
	void WalkOut();
	void LightImpact();
	void jumpLand();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
