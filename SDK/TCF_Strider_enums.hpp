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

// Enum Strider.ESlopeWarpQuality
enum class ESlopeWarpQuality : uint8_t
{
	ESlopeWarpQuality__Capsule     = 0,
	ESlopeWarpQuality__PerFootRay  = 1,
	ESlopeWarpQuality__PerFootShape = 2,
	ESlopeWarpQuality__LODBased    = 3,
	ESlopeWarpQuality__ESlopeWarpQuality_MAX = 4
};


// Enum Strider.ESlopeRollCompensation
enum class ESlopeRollCompensation : uint8_t
{
	ESlopeRollCompensation__None   = 0,
	ESlopeRollCompensation__AdjustHips = 1,
	ESlopeRollCompensation__AdjustFeet = 2,
	ESlopeRollCompensation__ESlopeRollCompensation_MAX = 3
};


// Enum Strider.ESlopeDetectionMode
enum class ESlopeDetectionMode : uint8_t
{
	ESlopeDetectionMode__ManualSlope = 0,
	ESlopeDetectionMode__AutomaticSlope = 1,
	ESlopeDetectionMode__ESlopeDetectionMode_MAX = 2
};


// Enum Strider.EStrideVectorMethod
enum class EStrideVectorMethod : uint8_t
{
	EStrideVectorMethod__ManualVelocity = 0,
	EStrideVectorMethod__ActorVelocity = 1,
	EStrideVectorMethod__EStrideVectorMethod_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
