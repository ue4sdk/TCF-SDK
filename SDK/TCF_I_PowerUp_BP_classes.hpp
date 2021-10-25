#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_I_PowerUp_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass I_PowerUp_BP.I_PowerUp_BP_C
// 0x0000 (0x0028 - 0x0028)
class UI_PowerUp_BP_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass I_PowerUp_BP.I_PowerUp_BP_C"));
		return ptr;
	}


	void OnRelevantToPowerup(bool TRUE);
	void OnLootRoomPowered();
	void OnPoweredProgressionLootRoom(int PoweredConnectionsInt);
	void ResetPowerUpActor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
