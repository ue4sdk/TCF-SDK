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

// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
	EFrameNumberDisplayFormats__NonDropFrameTimecode = 0,
	EFrameNumberDisplayFormats__DropFrameTimecode = 1,
	EFrameNumberDisplayFormats__Seconds = 2,
	EFrameNumberDisplayFormats__Frames = 3,
	EFrameNumberDisplayFormats__MAX_Count = 4,
	EFrameNumberDisplayFormats__EFrameNumberDisplayFormats_MAX = 5
};


// Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t
{
	ETimedDataInputState__Connected = 0,
	ETimedDataInputState__Unresponsive = 1,
	ETimedDataInputState__Disconnected = 2,
	ETimedDataInputState__ETimedDataInputState_MAX = 3
};


// Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t
{
	ETimedDataInputEvaluationType__None = 0,
	ETimedDataInputEvaluationType__Timecode = 1,
	ETimedDataInputEvaluationType__PlatformTime = 2,
	ETimedDataInputEvaluationType__ETimedDataInputEvaluationType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
