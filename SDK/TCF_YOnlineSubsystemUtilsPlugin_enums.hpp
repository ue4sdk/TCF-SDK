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

// Enum YOnlineSubsystemUtilsPlugin.EYPlayfabLoginType
enum class EYPlayfabLoginType : uint8_t
{
	EYPlayfabLoginType__Invalid    = 0,
	EYPlayfabLoginType__Custom     = 1,
	EYPlayfabLoginType__PlayfabAccount = 2,
	EYPlayfabLoginType__AlreadyLoggedIn = 3,
	EYPlayfabLoginType__EpicLogin  = 4,
	EYPlayfabLoginType__EosToken   = 5,
	EYPlayfabLoginType__EosDevTool = 6,
	EYPlayfabLoginType__Steam      = 7,
	EYPlayfabLoginType__EYPlayfabLoginType_MAX = 8
};


// Enum YOnlineSubsystemUtilsPlugin.EYAuthorizationUsageType
enum class EYAuthorizationUsageType : uint8_t
{
	EYAuthorizationUsageType__Internal = 0,
	EYAuthorizationUsageType__Steam = 1,
	EYAuthorizationUsageType__EGS  = 2,
	EYAuthorizationUsageType__Playfab = 3,
	EYAuthorizationUsageType__Custom = 4,
	EYAuthorizationUsageType__EYAuthorizationUsageType_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
