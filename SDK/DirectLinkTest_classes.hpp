#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DirectLinkTest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DirectLinkTest.DirectLinkTestLibrary
// 0x0000 (0x0030 - 0x0030)
class UDirectLinkTestLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DirectLinkTest.DirectLinkTestLibrary"));
		return ptr;
	}


	static bool TestParameters();
	static bool StopSender();
	static bool StopReceiver();
	static bool StartSender();
	static bool StartReceiver();
	static bool SetupSender();
	static bool SetupReceiver();
	static bool SendScene(const struct FString& InFilePath);
	static int MakeEndpoint(const struct FString& NiceName, bool bVerbose);
	static bool DumpReceivedScene();
	static bool DeleteEndpoint(int EndpointId);
	static bool DeleteAllEndpoint();
	static bool AddPublicSource(int EndpointId, const struct FString& SourceName);
	static bool AddPublicDestination(int EndpointId, const struct FString& DestName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
