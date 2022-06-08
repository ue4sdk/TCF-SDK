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

// Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None        = 0,
	EUdpMessageFormat__Json        = 1,
	EUdpMessageFormat__TaggedProperty = 2,
	EUdpMessageFormat__CborPlatformEndianness = 3,
	EUdpMessageFormat__CborStandardEndianness = 4,
	EUdpMessageFormat__EUdpMessageFormat_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
