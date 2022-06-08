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

// Enum OodleNetworkHandlerComponent.EOodleEnableMode
enum class EOodleEnableMode : uint8_t
{
	EOodleEnableMode__AlwaysEnabled = 0,
	EOodleEnableMode__WhenCompressedPacketReceived = 1,
	EOodleEnableMode__EOodleEnableMode_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
