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

// Enum OpenXRHandTracking.EQuatSwizzleAxisB
enum class EQuatSwizzleAxisB : uint8_t
{
	EQuatSwizzleAxisB__X           = 0,
	EQuatSwizzleAxisB__Y           = 1,
	EQuatSwizzleAxisB__Z           = 2,
	EQuatSwizzleAxisB__W           = 3,
	EQuatSwizzleAxisB__MinusX      = 4,
	EQuatSwizzleAxisB__MinusY      = 5,
	EQuatSwizzleAxisB__MinusZ      = 6,
	EQuatSwizzleAxisB__MinusW      = 7,
	EQuatSwizzleAxisB__EQuatSwizzleAxisB_MAX = 8
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
