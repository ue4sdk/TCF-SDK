#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ChaosCloth.EChaosClothTetherMode
enum class EChaosClothTetherMode : uint8_t
{
	EChaosClothTetherMode__FastTetherFastLength = 0,
	EChaosClothTetherMode__AccurateTetherFastLength = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode = 3,
	EChaosClothTetherMode__EChaosClothTetherMode_MAX = 4
};


// Enum ChaosCloth.EChaosWeightMapTarget
enum class EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None    = 0,
	EChaosWeightMapTarget__MaxDistance = 1,
	EChaosWeightMapTarget__BackstopDistance = 2,
	EChaosWeightMapTarget__BackstopRadius = 3,
	EChaosWeightMapTarget__AnimDriveMultiplier = 4,
	EChaosWeightMapTarget__EChaosWeightMapTarget_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
