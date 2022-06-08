#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SignalR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SignalR.YSignalRInstance
// 0x00D8 (0x0108 - 0x0030)
class UYSignalRInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0030(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SignalR.YSignalRInstance"));
		return ptr;
	}


	void OnHandshakeReceived();
	void OnConnectionError(const struct FString& Error);
	void OnConnectionClosedNotClean();
};


// Class SignalR.YInterfaceSignalRRetrievalInterface
// 0x0000 (0x0030 - 0x0030)
class UYInterfaceSignalRRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SignalR.YInterfaceSignalRRetrievalInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
