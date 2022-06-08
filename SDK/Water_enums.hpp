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

// Enum Water.EBuoyancyEvent
enum class EBuoyancyEvent : uint8_t
{
	EBuoyancyEvent__EnteredWaterBody = 0,
	EBuoyancyEvent__ExitedWaterBody = 1,
	EBuoyancyEvent__EBuoyancyEvent_MAX = 2
};


// Enum Water.EWaveSpectrumType
enum class EWaveSpectrumType : uint8_t
{
	EWaveSpectrumType__Phillips    = 0,
	EWaveSpectrumType__PiersonMoskowitz = 1,
	EWaveSpectrumType__JONSWAP     = 2,
	EWaveSpectrumType__EWaveSpectrumType_MAX = 3
};


// Enum Water.EWaterBrushBlendType
enum class EWaterBrushBlendType : uint8_t
{
	EWaterBrushBlendType__AlphaBlend = 0,
	EWaterBrushBlendType__Min      = 1,
	EWaterBrushBlendType__Max      = 2,
	EWaterBrushBlendType__Additive = 3
};


// Enum Water.EWaterBodyType
enum class EWaterBodyType : uint8_t
{
	EWaterBodyType__River          = 0,
	EWaterBodyType__Lake           = 1,
	EWaterBodyType__Ocean          = 2,
	EWaterBodyType__Transition     = 3,
	EWaterBodyType__Num            = 4,
	EWaterBodyType__EWaterBodyType_MAX = 5
};


// Enum Water.EWaterBrushFalloffMode
enum class EWaterBrushFalloffMode : uint8_t
{
	EWaterBrushFalloffMode__Angle  = 0,
	EWaterBrushFalloffMode__Width  = 1,
	EWaterBrushFalloffMode__EWaterBrushFalloffMode_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
