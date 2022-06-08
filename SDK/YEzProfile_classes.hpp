#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YEzProfile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YEzProfile.YEZProfileManager
// 0x00E0 (0x0110 - 0x0030)
class UYEZProfileManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	struct FString                                     m_uploadShare;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYEzProfileInitializationData               m_initializationData;                                     // 0x0058(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FYEzProfileRuntimeData                      m_runtimeData;                                            // 0x0070(0x0080) (CPF_NativeAccessSpecifierPublic)
	float                                              m_defaultEZProfileTime;                                   // 0x00F0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              m_defaultEZNetProfileTime;                                // 0x00F4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YEzProfile.YEZProfileManager"));
		return ptr;
	}


	static bool StartEZProfile(class UObject* objCtx, class UYEZProfileManager* Instance, const struct FYEzProfileInitializationData& initializationData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
