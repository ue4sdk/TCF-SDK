#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YGameAnalytics_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YGameAnalytics.YAnalyticsSender
// 0x00E0 (0x0110 - 0x0030)
class UYAnalyticsSender : public UObject
{
public:
	unsigned char                                      UnknownData00[0xDC];                                      // 0x0030(0x00DC) MISSED OFFSET
	bool                                               m_isShutdownInitiated;                                    // 0x010C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x010D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YGameAnalytics.YAnalyticsSender"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
