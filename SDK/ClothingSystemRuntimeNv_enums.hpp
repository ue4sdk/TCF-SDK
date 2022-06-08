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

// Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t
{
	EClothingWindMethodNv__Legacy  = 0,
	EClothingWindMethodNv__Accurate = 1,
	EClothingWindMethodNv__EClothingWindMethodNv_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
