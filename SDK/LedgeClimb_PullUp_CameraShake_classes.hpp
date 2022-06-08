#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LedgeClimb_PullUp_CameraShake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LedgeClimb_PullUp_CameraShake.LedgeClimb_PullUp_CameraShake_C
// 0x0000 (0x01B0 - 0x01B0)
class ULedgeClimb_PullUp_CameraShake_C : public UMatineeCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LedgeClimb_PullUp_CameraShake.LedgeClimb_PullUp_CameraShake_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
