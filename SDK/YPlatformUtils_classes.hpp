#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlatformUtils_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YPlatformUtils.YAccountLinkingManager
// 0x00B8 (0x00E8 - 0x0030)
class UYAccountLinkingManager : public UObject
{
public:
	struct FMulticastScriptDelegate                    OnAccountLinkingResult;                                   // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAccountLinkingResultAfterTimeout;                       // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAccountLinkingResultBI;                                 // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAccountLinkingProcessUpdate;                            // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) MISSED OFFSET
	struct FName                                       m_targetSubsystemName;                                    // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     m_targetPlatformName;                                     // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     m_targetPlatformUserId;                                   // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     m_targetUserIdPlayFabMaster;                              // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     m_sessionToken;                                           // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlatformUtils.YAccountLinkingManager"));
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


// Class YPlatformUtils.YFriendsImportManager
// 0x0010 (0x0040 - 0x0030)
class UYFriendsImportManager : public UObject
{
public:
	struct FMulticastScriptDelegate                    OnFriendsImportResult;                                    // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlatformUtils.YFriendsImportManager"));
		return ptr;
	}


	void OnFriendsImportResult__DelegateSignature(EYFriendsImportResultCode resultCode);
	static class UYFriendsImportManager* GetFriendsImportManager(class UObject* objectContext);
};


// Class YPlatformUtils.YLegalAgreementsManager
// 0x0018 (0x0048 - 0x0030)
class UYLegalAgreementsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	TArray<struct FYLocallyAcceptedLegalAgreements>    m_locallyAcceptedLegalAgreements;                         // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlatformUtils.YLegalAgreementsManager"));
		return ptr;
	}


	static class UYLegalAgreementsManager* GetLegalAgreementsManager(class UObject* objectContext);
};


// Class YPlatformUtils.YPlatformFunctions
// 0x0000 (0x0030 - 0x0030)
class UYPlatformFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlatformUtils.YPlatformFunctions"));
		return ptr;
	}


	static bool IsPlatformOverlayEnabled(class UObject* objectContext);
	static EYGamePlatform GetCurrentlyUsedPlatform(class UObject* objectContext);
};


// Class YPlatformUtils.YPlatformUtilsRetrievalInterface
// 0x0000 (0x0030 - 0x0030)
class UYPlatformUtilsRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlatformUtils.YPlatformUtilsRetrievalInterface"));
		return ptr;
	}

};


// Class YPlatformUtils.YPlatformUtilsSettings
// 0x0008 (0x0048 - 0x0040)
class UYPlatformUtilsSettings : public UDeveloperSettings
{
public:
	bool                                               m_enableLegalAgreementsInPIE;                             // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YPlatformUtils.YPlatformUtilsSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
