#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YAzureFunctionsUtils_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YAzureFunctionsUtils.YAzureFunctionExternalFunctions
// 0x0000 (0x0028 - 0x0028)
class UYAzureFunctionExternalFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YAzureFunctionsUtils.YAzureFunctionExternalFunctions");
		return ptr;
	}

};


// Class YAzureFunctionsUtils.YAzureFunctionsManager
// 0x0050 (0x0078 - 0x0028)
class UYAzureFunctionsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YAzureFunctionsUtils.YAzureFunctionsManager");
		return ptr;
	}

};


// Class YAzureFunctionsUtils.YInterfaceAzureFunctionsRetrivalInterface
// 0x0000 (0x0028 - 0x0028)
class UYInterfaceAzureFunctionsRetrivalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YAzureFunctionsUtils.YInterfaceAzureFunctionsRetrivalInterface");
		return ptr;
	}

};


// Class YAzureFunctionsUtils.YPlayfabCommonRequestsManager
// 0x0050 (0x0078 - 0x0028)
class UYPlayfabCommonRequestsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YAzureFunctionsUtils.YPlayfabCommonRequestsManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
