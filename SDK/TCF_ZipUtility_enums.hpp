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

// Enum ZipUtility.ZipUtilityCompressionLevel
enum class EZipUtilityCompressionLevel : uint8_t
{
	COMPRESSION_LEVEL_NONE         = 0,
	COMPRESSION_LEVEL_FAST         = 1,
	COMPRESSION_LEVEL_NORMAL       = 2,
	COMPRESSION_LEVEL_MAX          = 3
};


// Enum ZipUtility.EZipUtilityCompressionFormat
enum class EZipUtilityCompressionFormat : uint8_t
{
	EZipUtilityCompressionFormat__COMPRESSION_FORMAT_UNKNOWN = 0,
	EZipUtilityCompressionFormat__COMPRESSION_FORMAT_SEVEN_ZIP = 1,
	EZipUtilityCompressionFormat__COMPRESSION_FORMAT_ZIP = 2,
	EZipUtilityCompressionFormat__COMPRESSION_FORMAT_GZIP = 3,
	EZipUtilityCompressionFormat__COMPRESSION_FORMAT_BZIP2 = 4,
	EZipUtilityCompressionFormat__COMPRESSION_FORMAT_RAR = 5,
	EZipUtilityCompressionFormat__COMPRESSION_FORMAT_TAR = 6,
	EZipUtilityCompressionFormat__COMPRESSION_FORMAT_ISO = 7,
	EZipUtilityCompressionFormat__COMPRESSION_FORMAT_CAB = 8,
	EZipUtilityCompressionFormat__COMPRESSION_FORMAT_LZMA = 9,
	EZipUtilityCompressionFormat__COMPRESSION_FORMAT_LZMA86 = 10,
	EZipUtilityCompressionFormat__COMPRESSION_FORMAT_MAX = 11
};


// Enum ZipUtility.EZipUtilityCompletionState
enum class EZipUtilityCompletionState : uint8_t
{
	SUCCESS                        = 0,
	FAILURE_NOT_FOUND              = 1,
	FAILURE_UNKNOWN                = 2,
	EZipUtilityCompletionState_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
