#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlatformUtils_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YPlatformUtils.YAccountLinkingManager
// 0x00B8 (0x00E0 - 0x0028)
class UYAccountLinkingManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnAccountLinkingResult;                                   // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnAccountLinkingResultAfterTimeout;                       // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0038(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnAccountLinkingResultBI;                                 // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0048(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnAccountLinkingProcessUpdate;                            // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0058(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData04[0x28];                                      // 0x0068(0x0028) MISSED OFFSET
	struct FName                                       m_targetSubsystemName;                                    // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     m_targetPlatformName;                                     // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     m_targetPlatformUserId;                                   // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     m_targetUserIdPlayFabMaster;                              // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     m_sessionToken;                                           // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlatformUtils.YAccountLinkingManager");
		return ptr;
	}


	void StartAccountLinking(const struct FName& selectedPlatform);
	void OnAccountLinkingResultBI__DelegateSignature(const struct FString& targetPlatformUserId, const struct FString& targetUserIdPlayFabMaster, EYAccountLinkingResultCode resultCode);
	void OnAccountLinkingResultAfterTimeout__DelegateSignature(EYAccountLinkingResultCode resultCode);
	void OnAccountLinkingResult__DelegateSignature(EYAccountLinkingResultCode resultCode);
	void OnAccountLinkingProcessUpdate__DelegateSignature(bool isInProcess);
	bool IsLinkingInProcess();
	float GetTimeoutThreshold();
	static class UYAccountLinkingManager* GetAccountLinkingManager(class UObject* objectContext);
};


// Class YPlatformUtils.YAuthenticationManager
// 0x0008 (0x0030 - 0x0028)
class UYAuthenticationManager : public UObject
{
public:
	class UYLegalAgreementsManager*                    m_legalAgreementsManager;                                 // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlatformUtils.YAuthenticationManager");
		return ptr;
	}


	static class UYAuthenticationManager* GetAuthenticationManager(class UObject* objectContext);
};


// Class YPlatformUtils.YFriendsImportManager
// 0x0020 (0x0048 - 0x0028)
class UYFriendsImportManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnFriendsImportResult;                                    // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlatformUtils.YFriendsImportManager");
		return ptr;
	}


	void OnFriendsImportResult__DelegateSignature(EYFriendsImportResultCode resultCode);
	static class UYFriendsImportManager* GetFriendsImportManager(class UObject* objectContext);
};


// Class YPlatformUtils.YLegalAgreementsManager
// 0x0010 (0x0038 - 0x0028)
class UYLegalAgreementsManager : public UObject
{
public:
	TArray<struct FYLocallyAcceptedLegalAgreements>    m_locallyAcceptedLegalAgreements;                         // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlatformUtils.YLegalAgreementsManager");
		return ptr;
	}


	static class UYLegalAgreementsManager* GetLegalAgreementsManager(class UObject* objectContext);
};


// Class YPlatformUtils.YPlatformFunctions
// 0x0000 (0x0028 - 0x0028)
class UYPlatformFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlatformUtils.YPlatformFunctions");
		return ptr;
	}


	static EYGamePlatform GetCurrentlyUsedPlatform();
};


// Class YPlatformUtils.YPlatformUtilsRetrievalInterface
// 0x0000 (0x0028 - 0x0028)
class UYPlatformUtilsRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YPlatformUtils.YPlatformUtilsRetrievalInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
