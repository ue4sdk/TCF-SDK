// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ping_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ping.PingIP.SendPing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 inHostAdress                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPingIP::SendPing(const struct FString& inHostAdress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ping.PingIP.SendPing"));

	struct
	{
		struct FString                 inHostAdress;
	} params = {};

	params.inHostAdress = inHostAdress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
