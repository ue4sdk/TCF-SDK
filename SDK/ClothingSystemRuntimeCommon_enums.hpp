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

// Enum ClothingSystemRuntimeCommon.EClothMassMode
enum class EClothMassMode : uint8_t
{
	EClothMassMode__UniformMass    = 0,
	EClothMassMode__TotalMass      = 1,
	EClothMassMode__Density        = 2,
	EClothMassMode__MaxClothMassMode = 3,
	EClothMassMode__EClothMassMode_MAX = 4
};


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
	EWeightMapTargetCommon__AnimDriveStiffness = 4,
	EWeightMapTargetCommon__AnimDriveDamping = 5,
	EWeightMapTargetCommon__EWeightMapTargetCommon_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
