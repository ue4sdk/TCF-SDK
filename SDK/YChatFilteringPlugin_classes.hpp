#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YChatFilteringPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YChatFilteringPlugin.YChatFilterDataObject
// 0x0020 (0x0050 - 0x0030)
class UYChatFilterDataObject : public UObject
{
public:
	TArray<struct FYFilterWordEntry>                   m_cachedWords;                                            // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYFilterWordEntry>                   m_regexWords;                                             // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YChatFilteringPlugin.YChatFilterDataObject"));
		return ptr;
	}

};


// Class YChatFilteringPlugin.YChatFilterExternalFunctions
// 0x0000 (0x0030 - 0x0030)
class UYChatFilterExternalFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YChatFilteringPlugin.YChatFilterExternalFunctions"));
		return ptr;
	}


	static bool ContainsProfanity(class UYChatFilterDataObject* Data, const struct FString& inString, struct FString* outString);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
