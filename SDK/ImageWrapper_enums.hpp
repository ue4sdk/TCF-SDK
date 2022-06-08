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

// Enum ImageWrapper.EBitmapCSType
enum class EBitmapCSType : uint8_t
{
	EBitmapCSType__BCST_BLCS_CALIBRATED_RGB = 0,
	EBitmapCSType__BCST_LCS_sRGB   = 1,
	EBitmapCSType__BCST_LCS_WINDOWS_COLOR_SPACE = 2,
	EBitmapCSType__BCST_PROFILE_LINKED = 3,
	EBitmapCSType__BCST_PROFILE_EMBEDDED = 4,
	EBitmapCSType__BCST_MAX        = 5
};


// Enum ImageWrapper.EBitmapHeaderVersion
enum class EBitmapHeaderVersion : uint8_t
{
	EBitmapHeaderVersion__BHV_BITMAPINFOHEADER = 0,
	EBitmapHeaderVersion__BHV_BITMAPV2INFOHEADER = 1,
	EBitmapHeaderVersion__BHV_BITMAPV3INFOHEADER = 2,
	EBitmapHeaderVersion__BHV_BITMAPV4HEADER = 3,
	EBitmapHeaderVersion__BHV_BITMAPV5HEADER = 4,
	EBitmapHeaderVersion__BHV_MAX  = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
