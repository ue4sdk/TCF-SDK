#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ping_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Ping.PingIP
// 0x0030 (0x0060 - 0x0030)
class UPingIP : public UObject
{
public:
	struct FMulticastScriptDelegate                    OnPingComplete;                                           // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPingFailure;                                            // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TargetHost;                                               // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Ping.PingIP"));
		return ptr;
	}


	void SendPing(const struct FString& inHostAdress);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
