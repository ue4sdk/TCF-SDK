#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Backend_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Backend.YBackendInstance
// 0x0020 (0x0050 - 0x0030)
class UYBackendInstance : public UObject
{
public:
	class UYPlayfabInstance*                           m_playfabInstance;                                        // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Backend.YBackendInstance"));
		return ptr;
	}


	void OnPlayfabServerLogin(bool succeded, const struct FString& playfabTitleId);
	static bool IsUsingExperimentalBackendLogin();
};


// Class Backend.YInterfaceBackendInstanceRetrival
// 0x0000 (0x0030 - 0x0030)
class UYInterfaceBackendInstanceRetrival : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Backend.YInterfaceBackendInstanceRetrival"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
