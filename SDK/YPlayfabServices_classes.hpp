#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayfabServices_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YPlayfabServices.YPlayfabService
// 0x0040 (0x0070 - 0x0030)
class UYPlayfabService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlayfabServices.YPlayfabService"));
		return ptr;
	}

};


// Class YPlayfabServices.YPlayfabServiceAccountManagement
// 0x0000 (0x0070 - 0x0070)
class UYPlayfabServiceAccountManagement : public UYPlayfabService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlayfabServices.YPlayfabServiceAccountManagement"));
		return ptr;
	}

};


// Class YPlayfabServices.YPlayfabServiceInventory
// 0x0320 (0x0390 - 0x0070)
class UYPlayfabServiceInventory : public UYPlayfabService
{
public:
	unsigned char                                      UnknownData00[0x320];                                     // 0x0070(0x0320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlayfabServices.YPlayfabServiceInventory"));
		return ptr;
	}

};


// Class YPlayfabServices.YPlayfabServicesCommonFunctions
// 0x0000 (0x0030 - 0x0030)
class UYPlayfabServicesCommonFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlayfabServices.YPlayfabServicesCommonFunctions"));
		return ptr;
	}

};


// Class YPlayfabServices.YPlayfabServicesMessageManager
// 0x0000 (0x0030 - 0x0030)
class UYPlayfabServicesMessageManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlayfabServices.YPlayfabServicesMessageManager"));
		return ptr;
	}

};


// Class YPlayfabServices.YPlayfabServiceVivox
// 0x0080 (0x00F0 - 0x0070)
class UYPlayfabServiceVivox : public UYPlayfabService
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0070(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlayfabServices.YPlayfabServiceVivox"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
