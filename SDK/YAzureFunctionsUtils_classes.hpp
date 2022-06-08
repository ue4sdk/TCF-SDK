#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YAzureFunctionsUtils_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YAzureFunctionsUtils.YAzureExternalFunctions
// 0x0000 (0x0030 - 0x0030)
class UYAzureExternalFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YAzureFunctionsUtils.YAzureExternalFunctions"));
		return ptr;
	}

};


// Class YAzureFunctionsUtils.YAzureFunctionsManager
// 0x0080 (0x00B0 - 0x0030)
class UYAzureFunctionsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YAzureFunctionsUtils.YAzureFunctionsManager"));
		return ptr;
	}

};


// Class YAzureFunctionsUtils.YInterfaceAzureFunctionsRetrivalInterface
// 0x0000 (0x0030 - 0x0030)
class UYInterfaceAzureFunctionsRetrivalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YAzureFunctionsUtils.YInterfaceAzureFunctionsRetrivalInterface"));
		return ptr;
	}

};


// Class YAzureFunctionsUtils.YPlayfabCommonRequestsManager
// 0x0050 (0x0080 - 0x0030)
class UYPlayfabCommonRequestsManager : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YAzureFunctionsUtils.YPlayfabCommonRequestsManager"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
