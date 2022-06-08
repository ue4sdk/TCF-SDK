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

// Enum Backend.EYLoginResult
enum class EYLoginResult : uint8_t
{
	EYLoginResult__OK              = 0,
	EYLoginResult__InvalidToken    = 1,
	EYLoginResult__AlreadyConnected = 2,
	EYLoginResult__InvalidVersion  = 3,
	EYLoginResult__BadResponse     = 4,
	EYLoginResult__ServerUnavailable = 5,
	EYLoginResult__SteamUnavailable = 6,
	EYLoginResult__NotLoggedInToSteam = 7,
	EYLoginResult__SteamAuthorizationFailed = 8,
	EYLoginResult__EpicAuthorizationFailed = 9,
	EYLoginResult__AuthorizationFailed = 10,
	EYLoginResult__LegalAgreementsNotAccepted = 11,
	EYLoginResult__AcceptingLegalAgreementsFailed = 12,
	EYLoginResult__IsInLoginQueue  = 13,
	EYLoginResult__EYLoginResult_MAX = 14
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
