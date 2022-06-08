#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Player_ABP_Interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Player_ABP_Interface.Player_ABP_Interface_C
// 0x0000 (0x0030 - 0x0030)
class UPlayer_ABP_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Player_ABP_Interface.Player_ABP_Interface_C"));
		return ptr;
	}


	void SetUnarmedMode(bool Unarmed);
	void DisableWeaponSway();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
