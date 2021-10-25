#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SignalR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SignalR.YSignalRInstance
// 0x0098 (0x00C0 - 0x0028)
class UYSignalRInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SignalR.YSignalRInstance");
		return ptr;
	}

};


// Class SignalR.YInterfaceSignalRRetrivalInterface
// 0x0000 (0x0028 - 0x0028)
class UYInterfaceSignalRRetrivalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SignalR.YInterfaceSignalRRetrivalInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
