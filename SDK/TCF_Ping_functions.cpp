// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Ping_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ping.PingIP.SendPing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ipAddress                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           useUdp                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPingIP::SendPing(const struct FString& ipAddress, bool useUdp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ping.PingIP.SendPing");

	struct
	{
		struct FString                 ipAddress;
		bool                           useUdp;
	} params;

	params.ipAddress = ipAddress;
	params.useUdp = useUdp;

	UObject::ProcessEvent(fn, &params);
}


// Function Ping.PingIP.PollThread
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPingIP::PollThread()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ping.PingIP.PollThread");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
