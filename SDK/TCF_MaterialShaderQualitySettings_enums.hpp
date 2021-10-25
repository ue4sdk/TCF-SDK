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

// Enum MaterialShaderQualitySettings.EMobileShadowQuality
enum class EMobileShadowQuality : uint8_t
{
	EMobileShadowQuality__NoFiltering = 0,
	EMobileShadowQuality__PCF_1x1  = 1,
	EMobileShadowQuality__PCF_2x2  = 2,
	EMobileShadowQuality__PCF_3x3  = 3,
	EMobileShadowQuality__EMobileShadowQuality_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
