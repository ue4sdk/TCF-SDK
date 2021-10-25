#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_OnlineSubsystemPlayfab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemPlayfab.OnlinePlayFabInterfaceBase
// 0x0010 (0x0038 - 0x0028)
class UOnlinePlayFabInterfaceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OnlineSubsystemPlayfab.OnlinePlayFabInterfaceBase");
		return ptr;
	}

};


// Class OnlineSubsystemPlayfab.OnlineAccountManagementPlayFab
// 0x0000 (0x0038 - 0x0038)
class UOnlineAccountManagementPlayFab : public UOnlinePlayFabInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OnlineSubsystemPlayfab.OnlineAccountManagementPlayFab");
		return ptr;
	}

};


// Class OnlineSubsystemPlayfab.YOnlineSubsystemPlayfabExternalFunctions
// 0x0008 (0x0030 - 0x0028)
class UYOnlineSubsystemPlayfabExternalFunctions : public UObject
{
public:
	struct FYPlayfabCommonSettings                     m_commonSettings;                                         // 0x0028(0x0008) (CPF_Config, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OnlineSubsystemPlayfab.YOnlineSubsystemPlayfabExternalFunctions");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
