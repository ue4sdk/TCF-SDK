#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YSocialCompatibilityPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YSocialCompatibilityPlugin.YSocialCompatibilityFunctions
// 0x0000 (0x0030 - 0x0030)
class UYSocialCompatibilityFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YSocialCompatibilityPlugin.YSocialCompatibilityFunctions"));
		return ptr;
	}

};


// Class YSocialCompatibilityPlugin.YSocialCompatibilityManager
// 0x0110 (0x0140 - 0x0030)
class UYSocialCompatibilityManager : public UObject
{
public:
	struct FMulticastScriptDelegate                    OnSuccessfulSocialProfileRequestDelegate;                 // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnRequestSocialProfilesDelegate;                          // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0050(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YSocialCompatibilityPlugin.YSocialCompatibilityManager"));
		return ptr;
	}

};


// Class YSocialCompatibilityPlugin.YInterfaceSocialCompatibilityInterface
// 0x0000 (0x0030 - 0x0030)
class UYInterfaceSocialCompatibilityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YSocialCompatibilityPlugin.YInterfaceSocialCompatibilityInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
