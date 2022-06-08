#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DaedalicAmazonAWSPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DaedalicAmazonAWSPlugin.DaeAmazonAWS
// 0x0000 (0x0030 - 0x0030)
class UDaeAmazonAWS : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DaedalicAmazonAWSPlugin.DaeAmazonAWS"));
		return ptr;
	}

};


// Class DaedalicAmazonAWSPlugin.DaeAmazonAWSHelper
// 0x0000 (0x0030 - 0x0030)
class UDaeAmazonAWSHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DaedalicAmazonAWSPlugin.DaeAmazonAWSHelper"));
		return ptr;
	}


	static TArray<unsigned char> StringToBytes(const struct FString& S);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
