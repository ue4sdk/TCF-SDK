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

// Enum Landmass.EBrushFalloffMode
enum class EBrushFalloffMode : uint8_t
{
	EBrushFalloffMode__Angle       = 0,
	EBrushFalloffMode__Width       = 1,
	EBrushFalloffMode__EBrushFalloffMode_MAX = 2
};


// Enum Landmass.EBrushBlendType
enum class EBrushBlendType : uint8_t
{
	EBrushBlendType__AlphaBlend    = 0,
	EBrushBlendType__Min           = 1,
	EBrushBlendType__Max           = 2,
	EBrushBlendType__Additive      = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
