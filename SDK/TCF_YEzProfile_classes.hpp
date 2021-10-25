#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YEzProfile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YEzProfile.YEZProfileManager
// 0x00B0 (0x00D8 - 0x0028)
class UYEZProfileManager : public UObject
{
public:
	struct FString                                     m_uploadShare;                                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYEzProfileInitializationData               m_initializationData;                                     // 0x0038(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FYEzProfileRuntimeData                      m_runtimeData;                                            // 0x0050(0x0080) (CPF_NativeAccessSpecifierPublic)
	float                                              m_defaultEZProfileTime;                                   // 0x00D0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              m_defaultEZNetProfileTime;                                // 0x00D4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YEzProfile.YEZProfileManager");
		return ptr;
	}


	static bool StartEZProfile(class UObject* objCtx, class UYEZProfileManager* Instance, const struct FYEzProfileInitializationData& initializationData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
