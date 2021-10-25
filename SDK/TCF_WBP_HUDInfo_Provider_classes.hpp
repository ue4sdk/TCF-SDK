#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_HUDInfo_Provider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WBP_HUDInfo_Provider.WBP_HUDInfo_Provider_C
// 0x0000 (0x0090 - 0x0090)
class UWBP_HUDInfo_Provider_C : public UYWidgetProvider_HUDInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WBP_HUDInfo_Provider.WBP_HUDInfo_Provider_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
