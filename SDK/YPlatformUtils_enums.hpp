#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum YPlatformUtils.EYAccountLinkingResultCode
enum class EYAccountLinkingResultCode : uint8_t
{
	EYAccountLinkingResultCode__Success = 0,
	EYAccountLinkingResultCode__Failure_InvalidTargetPlatform = 1,
	EYAccountLinkingResultCode__Failure_WontLoginToCurrentPlatform = 2,
	EYAccountLinkingResultCode__Failure_NoPlayFabAccountExists = 3,
	EYAccountLinkingResultCode__Failure_TooManyPlayFabAccountsExist = 4,
	EYAccountLinkingResultCode__Failure_PlatformAccountAlreadyLinked = 5,
	EYAccountLinkingResultCode__Failure_CouldNotMergeAccountData = 6,
	EYAccountLinkingResultCode__Failure_Internal = 7,
	EYAccountLinkingResultCode__Failure_Azure = 8,
	EYAccountLinkingResultCode__Failure_PlayFab = 9,
	EYAccountLinkingResultCode__Failure_Timeout = 10,
	EYAccountLinkingResultCode__Failure_Unknown = 11,
	EYAccountLinkingResultCode__EYAccountLinkingResultCode_MAX = 12
};


// Enum YPlatformUtils.EYFriendsImportResultCode
enum class EYFriendsImportResultCode : uint8_t
{
	EYFriendsImportResultCode__Success = 0,
	EYFriendsImportResultCode__Failure_NoUsersToImport = 1,
	EYFriendsImportResultCode__Failure_UnsupportedPlatform = 2,
	EYFriendsImportResultCode__Failure_Internal = 3,
	EYFriendsImportResultCode__Failure_Azure = 4,
	EYFriendsImportResultCode__Failure_PlayFab = 5,
	EYFriendsImportResultCode__Failure_Unknown = 6,
	EYFriendsImportResultCode__Failure_InvalidRequest = 7,
	EYFriendsImportResultCode__Failure_EgsRequest = 8,
	EYFriendsImportResultCode__EYFriendsImportResultCode_MAX = 9
};


// Enum YPlatformUtils.EYAuthenticationState
enum class EYAuthenticationState : uint8_t
{
	EYAuthenticationState__Init    = 0,
	EYAuthenticationState__LegalAgreementsNotAccepted = 1,
	EYAuthenticationState__NotLoggedInToPlayFab = 2,
	EYAuthenticationState__ServerNotLoggedInToPlayFab = 3,
	EYAuthenticationState__DisconnectedFromBackend = 4,
	EYAuthenticationState__MaintenanceMode = 5,
	EYAuthenticationState__CompletelyLoggedIn = 6,
	EYAuthenticationState__EYAuthenticationState_MAX = 7
};


// Enum YPlatformUtils.EYGamePlatform
enum class EYGamePlatform : uint8_t
{
	EYGamePlatform__NONE           = 0,
	EYGamePlatform__EPIC           = 1,
	EYGamePlatform__STEAM          = 2,
	EYGamePlatform__ALL            = 3,
	EYGamePlatform__EYGamePlatform_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
