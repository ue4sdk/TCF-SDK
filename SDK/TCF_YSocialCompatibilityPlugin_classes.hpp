#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YSocialCompatibilityPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YSocialCompatibilityPlugin.YSocialCompatibilityFunctions
// 0x0000 (0x0028 - 0x0028)
class UYSocialCompatibilityFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YSocialCompatibilityPlugin.YSocialCompatibilityFunctions");
		return ptr;
	}

};


// Class YSocialCompatibilityPlugin.YSocialCompatibilityManager
// 0x0110 (0x0138 - 0x0028)
class UYSocialCompatibilityManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccessfulSocialProfileRequestDelegate;                 // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnRequestSocialProfilesDelegate;                          // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0038(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0xF0];                                      // 0x0048(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YSocialCompatibilityPlugin.YSocialCompatibilityManager");
		return ptr;
	}

};


// Class YSocialCompatibilityPlugin.YInterfaceSocialCompatibilityInterface
// 0x0000 (0x0028 - 0x0028)
class UYInterfaceSocialCompatibilityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YSocialCompatibilityPlugin.YInterfaceSocialCompatibilityInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
