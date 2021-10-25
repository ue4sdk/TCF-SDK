#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayFabCommon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlayFabCommon.PlayFabAuthenticationContext
// 0x0040 (0x0068 - 0x0028)
class UPlayFabAuthenticationContext : public UObject
{
public:
	struct FString                                     ClientSessionTicket;                                      // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     EntityToken;                                              // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     DeveloperSecretKey;                                       // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     PlayFabId;                                                // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlayFabCommon.PlayFabAuthenticationContext");
		return ptr;
	}


	void SetPlayFabId(const struct FString& InKey);
	void SetEntityToken(const struct FString& InToken);
	void SetDeveloperSecretKey(const struct FString& InKey);
	void SetClientSessionTicket(const struct FString& InTicket);
	struct FString GetPlayFabId();
	struct FString GetEntityToken();
	struct FString GetDeveloperSecretKey();
	struct FString GetClientSessionTicket();
	void ForgetAllCredentials();
	void ClientAdminSecurityCheck();
};


// Class PlayFabCommon.PlayFabRuntimeSettings
// 0x0030 (0x0058 - 0x0028)
class UPlayFabRuntimeSettings : public UObject
{
public:
	struct FString                                     ProductionEnvironmentURL;                                 // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TitleId;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DeveloperSecretKey;                                       // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlayFabCommon.PlayFabRuntimeSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
