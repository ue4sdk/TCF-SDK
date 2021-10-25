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

// Enum YInitializationPlugin.EYInitializationRequestSettingTypes
enum class EYInitializationRequestSettingTypes : uint8_t
{
	EYInitializationRequestSettingTypes__Invalid = 0,
	EYInitializationRequestSettingTypes__AllComplete = 1,
	EYInitializationRequestSettingTypes__IgnoreCharacterCustomization = 2,
	EYInitializationRequestSettingTypes__EYInitializationRequestSettingTypes_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
