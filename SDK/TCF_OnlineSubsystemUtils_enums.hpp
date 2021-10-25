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

// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8_t
{
	EInAppPurchaseStatus__Invalid  = 0,
	EInAppPurchaseStatus__Failed   = 1,
	EInAppPurchaseStatus__Deferred = 2,
	EInAppPurchaseStatus__Canceled = 3,
	EInAppPurchaseStatus__Purchased = 4,
	EInAppPurchaseStatus__Restored = 5,
	EInAppPurchaseStatus__EInAppPurchaseStatus_MAX = 6
};


// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	EOnlineProxyStoreOfferDiscountType__NotOnSale = 0,
	EOnlineProxyStoreOfferDiscountType__Percentage = 1,
	EOnlineProxyStoreOfferDiscountType__DiscountAmount = 2,
	EOnlineProxyStoreOfferDiscountType__PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType__EOnlineProxyStoreOfferDiscountType_MAX = 4
};


// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid = 0,
	EBeaconConnectionState__Closed = 1,
	EBeaconConnectionState__Pending = 2,
	EBeaconConnectionState__Open   = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX = 4
};


// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending = 0,
	EClientRequestType__ExistingSessionReservation = 1,
	EClientRequestType__ReservationUpdate = 2,
	EClientRequestType__EmptyServerReservation = 3,
	EClientRequestType__Reconnect  = 4,
	EClientRequestType__Abandon    = 5,
	EClientRequestType__ReservationRemoveMembers = 6,
	EClientRequestType__EClientRequestType_MAX = 7
};


// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult = 0,
	EPartyReservationResult__RequestPending = 1,
	EPartyReservationResult__GeneralError = 2,
	EPartyReservationResult__PartyLimitReached = 3,
	EPartyReservationResult__IncorrectPlayerCount = 4,
	EPartyReservationResult__RequestTimedOut = 5,
	EPartyReservationResult__ReservationDuplicate = 6,
	EPartyReservationResult__ReservationNotFound = 7,
	EPartyReservationResult__ReservationAccepted = 8,
	EPartyReservationResult__ReservationDenied = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction = 10,
	EPartyReservationResult__ReservationDenied_Banned = 11,
	EPartyReservationResult__ReservationRequestCanceled = 12,
	EPartyReservationResult__ReservationInvalid = 13,
	EPartyReservationResult__BadSessionId = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult__EPartyReservationResult_MAX = 16
};


// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t
{
	ESpectatorClientRequestType__NonePending = 0,
	ESpectatorClientRequestType__ExistingSessionReservation = 1,
	ESpectatorClientRequestType__ReservationUpdate = 2,
	ESpectatorClientRequestType__EmptyServerReservation = 3,
	ESpectatorClientRequestType__Reconnect = 4,
	ESpectatorClientRequestType__Abandon = 5,
	ESpectatorClientRequestType__ESpectatorClientRequestType_MAX = 6
};


// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t
{
	ESpectatorReservationResult__NoResult = 0,
	ESpectatorReservationResult__RequestPending = 1,
	ESpectatorReservationResult__GeneralError = 2,
	ESpectatorReservationResult__SpectatorLimitReached = 3,
	ESpectatorReservationResult__IncorrectPlayerCount = 4,
	ESpectatorReservationResult__RequestTimedOut = 5,
	ESpectatorReservationResult__ReservationDuplicate = 6,
	ESpectatorReservationResult__ReservationNotFound = 7,
	ESpectatorReservationResult__ReservationAccepted = 8,
	ESpectatorReservationResult__ReservationDenied = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction = 10,
	ESpectatorReservationResult__ReservationDenied_Banned = 11,
	ESpectatorReservationResult__ReservationRequestCanceled = 12,
	ESpectatorReservationResult__ReservationInvalid = 13,
	ESpectatorReservationResult__BadSessionId = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult__ESpectatorReservationResult_MAX = 16
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
