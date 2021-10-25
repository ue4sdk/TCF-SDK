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

// Enum DLSS.EDLSSSettingOverride
enum class EDLSSSettingOverride : uint8_t
{
	EDLSSSettingOverride__Enabled  = 0,
	EDLSSSettingOverride__Disabled = 1,
	EDLSSSettingOverride__UseProjectSettings = 2,
	EDLSSSettingOverride__EDLSSSettingOverride_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
