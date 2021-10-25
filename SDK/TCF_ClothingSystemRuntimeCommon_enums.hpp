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

// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8_t
{
	EClothingWindMethod_Legacy__Legacy = 0,
	EClothingWindMethod_Legacy__Accurate = 1,
	EClothingWindMethod_Legacy__EClothingWindMethod_MAX = 2
};


// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t
{
	EWeightMapTargetCommon__None   = 0,
	EWeightMapTargetCommon__MaxDistance = 1,
	EWeightMapTargetCommon__BackstopDistance = 2,
	EWeightMapTargetCommon__BackstopRadius = 3,
	EWeightMapTargetCommon__AnimDriveMultiplier = 4,
	EWeightMapTargetCommon__EWeightMapTargetCommon_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
