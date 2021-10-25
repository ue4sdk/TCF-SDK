#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_DaedalicAmazonAWSPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DaedalicAmazonAWSPlugin.DaeAmazonAWS
// 0x0000 (0x0028 - 0x0028)
class UDaeAmazonAWS : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DaedalicAmazonAWSPlugin.DaeAmazonAWS");
		return ptr;
	}

};


// Class DaedalicAmazonAWSPlugin.DaeAmazonAWSHelper
// 0x0000 (0x0028 - 0x0028)
class UDaeAmazonAWSHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DaedalicAmazonAWSPlugin.DaeAmazonAWSHelper");
		return ptr;
	}


	static TArray<unsigned char> StringToBytes(const struct FString& S);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
