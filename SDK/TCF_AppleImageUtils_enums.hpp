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

// Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t
{
	EAppleTextureType__Unknown     = 0,
	EAppleTextureType__Image       = 1,
	EAppleTextureType__PixelBuffer = 2,
	EAppleTextureType__Surface     = 3,
	EAppleTextureType__MetalTexture = 4,
	EAppleTextureType__EAppleTextureType_MAX = 5
};


// Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8_t
{
	ETextureRotationDirection__None = 0,
	ETextureRotationDirection__Left = 1,
	ETextureRotationDirection__Right = 2,
	ETextureRotationDirection__Down = 3,
	ETextureRotationDirection__LeftMirrored = 4,
	ETextureRotationDirection__RightMirrored = 5,
	ETextureRotationDirection__DownMirrored = 6,
	ETextureRotationDirection__UpMirrored = 7,
	ETextureRotationDirection__ETextureRotationDirection_MAX = 8
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
