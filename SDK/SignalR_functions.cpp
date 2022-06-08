// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SignalR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SignalR.YSignalRInstance.OnHandshakeReceived
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UYSignalRInstance::OnHandshakeReceived()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SignalR.YSignalRInstance.OnHandshakeReceived"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SignalR.YSignalRInstance.OnConnectionError
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Error                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYSignalRInstance::OnConnectionError(const struct FString& Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SignalR.YSignalRInstance.OnConnectionError"));

	struct
	{
		struct FString                 Error;
	} params = {};

	params.Error = Error;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SignalR.YSignalRInstance.OnConnectionClosedNotClean
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UYSignalRInstance::OnConnectionClosedNotClean()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SignalR.YSignalRInstance.OnConnectionClosedNotClean"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
