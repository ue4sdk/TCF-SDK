#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayfab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YPlayfab.YPlayfabInstance
// 0x0278 (0x02A8 - 0x0030)
class UYPlayfabInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET
	struct FYPlayfabAuthenticationContext              m_authContext;                                            // 0x00A8(0x0070) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayfabMessage>                    m_completedMessages;                                      // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayfabMessage>                    m_notifyMessages;                                         // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TMap<int, struct FYPendingPlayfabMessage>          m_pendingMessages;                                        // 0x0138(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLoginCompleted;                                         // 0x0188(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0198(0x0020) MISSED OFFSET
	TMap<struct FString, class UYPlayfabService*>      m_serviceToExchange;                                      // 0x01B8(0x0050) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x0208(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlayfab.YPlayfabInstance"));
		return ptr;
	}


	void YOnPlayfabMessageProcessedSuccesfully__DelegateSignature();
	void YOnPlayfabMessageError__DelegateSignature(int httpErrorCode, const struct FString& httpErrorMessage);
	void OnRequestPendingMessage(const struct FYPlayfabMessage& Message, EYPlayfabMessageExecutionType Type);
	void OnRequestMessage(const struct FYPlayfabMessage& Message);
	void OnPendingMessageRequestCompleted(int RequestID);
	void OnNotifyMessage(const struct FYPlayfabMessage& Message);
	void OnMessageProcessedSuccessfullyCallback();
	void OnMessageErrorCallback(int httpErrorCode, const struct FString& errorMessage);
};


// Class YPlayfab.YPlayfabAdminInstance
// 0x0000 (0x02A8 - 0x02A8)
class UYPlayfabAdminInstance : public UYPlayfabInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlayfab.YPlayfabAdminInstance"));
		return ptr;
	}

};


// Class YPlayfab.YPlayfabClientInstance
// 0x0008 (0x02B0 - 0x02A8)
class UYPlayfabClientInstance : public UYPlayfabInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlayfab.YPlayfabClientInstance"));
		return ptr;
	}

};


// Class YPlayfab.YPlayfabServerInstance
// 0x0098 (0x0340 - 0x02A8)
class UYPlayfabServerInstance : public UYPlayfabInstance
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x02A8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlayfab.YPlayfabServerInstance"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
