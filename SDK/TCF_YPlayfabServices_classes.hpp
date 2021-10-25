#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlayfabServices_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YPlayfabServices.YPlayfabService
// 0x0020 (0x0048 - 0x0028)
class UYPlayfabService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlayfabServices.YPlayfabService");
		return ptr;
	}

};


// Class YPlayfabServices.YPlayfabServiceInventory
// 0x0780 (0x07C8 - 0x0048)
class UYPlayfabServiceInventory : public UYPlayfabService
{
public:
	unsigned char                                      UnknownData00[0x780];                                     // 0x0048(0x0780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlayfabServices.YPlayfabServiceInventory");
		return ptr;
	}

};


// Class YPlayfabServices.YPlayfabServiceRoom
// 0x0048 (0x0090 - 0x0048)
class UYPlayfabServiceRoom : public UYPlayfabService
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlayfabServices.YPlayfabServiceRoom");
		return ptr;
	}

};


// Class YPlayfabServices.YPlayfabServicesCommonFunctions
// 0x0000 (0x0028 - 0x0028)
class UYPlayfabServicesCommonFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlayfabServices.YPlayfabServicesCommonFunctions");
		return ptr;
	}

};


// Class YPlayfabServices.YPlayfabServicesMessageManager
// 0x0000 (0x0028 - 0x0028)
class UYPlayfabServicesMessageManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlayfabServices.YPlayfabServicesMessageManager");
		return ptr;
	}

};


// Class YPlayfabServices.YPlayfabServiceVivox
// 0x0080 (0x00C8 - 0x0048)
class UYPlayfabServiceVivox : public UYPlayfabService
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0048(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlayfabServices.YPlayfabServiceVivox");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
