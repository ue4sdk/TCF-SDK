#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlayfab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YPlayfab.YPlayfabInstance
// 0x0250 (0x0278 - 0x0028)
class UYPlayfabInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET
	struct FYPlayfabAuthenticationContext              m_authContext;                                            // 0x00A0(0x0068) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayfabMessage>                    m_completedMessages;                                      // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayfabMessage>                    m_notifyMessages;                                         // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TMap<int, struct FYPendingPlayfabMessage>          m_pendingMessages;                                        // 0x0128(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoginCompleted;                                         // 0x0178(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0178(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TMap<struct FString, class UYPlayfabService*>      m_serviceToExchange;                                      // 0x0188(0x0050) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x01D8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlayfab.YPlayfabInstance");
		return ptr;
	}


	void OnRequestPendingMessage(const struct FYPlayfabMessage& Message, EYPlayfabMessageExecutionType Type);
	void OnRequestMessage(const struct FYPlayfabMessage& Message);
	void OnPendingMessageRequestCompleted(int RequestID);
	void OnNotifyMessage(const struct FYPlayfabMessage& Message);
};


// Class YPlayfab.YPlayfabAdminInstance
// 0x0000 (0x0278 - 0x0278)
class UYPlayfabAdminInstance : public UYPlayfabInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlayfab.YPlayfabAdminInstance");
		return ptr;
	}

};


// Class YPlayfab.YPlayfabClientInstance
// 0x0008 (0x0280 - 0x0278)
class UYPlayfabClientInstance : public UYPlayfabInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0278(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlayfab.YPlayfabClientInstance");
		return ptr;
	}

};


// Class YPlayfab.YPlayfabCommonFunctions
// 0x0000 (0x0028 - 0x0028)
class UYPlayfabCommonFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlayfab.YPlayfabCommonFunctions");
		return ptr;
	}

};


// Class YPlayfab.YPlayfabServerInstance
// 0x0088 (0x0300 - 0x0278)
class UYPlayfabServerInstance : public UYPlayfabInstance
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0278(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlayfab.YPlayfabServerInstance");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
