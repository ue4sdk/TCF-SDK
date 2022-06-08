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

// Enum PlayFab.EGameBuildStatus
enum class EGameBuildStatus : uint8_t
{
	EGameBuildStatus__pfenum_Available = 0,
	EGameBuildStatus__pfenum_Validating = 1,
	EGameBuildStatus__pfenum_InvalidBuildPackage = 2,
	EGameBuildStatus__pfenum_Processing = 3,
	EGameBuildStatus__pfenum_FailedToProcess = 4,
	EGameBuildStatus__pfenum_MAX   = 5
};


// Enum PlayFab.EStatisticResetIntervalOption
enum class EStatisticResetIntervalOption : uint8_t
{
	EStatisticResetIntervalOption__pfenum_Never = 0,
	EStatisticResetIntervalOption__pfenum_Hour = 1,
	EStatisticResetIntervalOption__pfenum_Day = 2,
	EStatisticResetIntervalOption__pfenum_Week = 3,
	EStatisticResetIntervalOption__pfenum_Month = 4,
	EStatisticResetIntervalOption__pfenum_MAX = 5
};


// Enum PlayFab.EStatisticAggregationMethod
enum class EStatisticAggregationMethod : uint8_t
{
	EStatisticAggregationMethod__pfenum_Last = 0,
	EStatisticAggregationMethod__pfenum_Min = 1,
	EStatisticAggregationMethod__pfenum_Max = 2,
	EStatisticAggregationMethod__pfenum_Sum = 3
};


// Enum PlayFab.ERegion
enum class ERegion : uint8_t
{
	ERegion__pfenum_USCentral      = 0,
	ERegion__pfenum_USEast         = 1,
	ERegion__pfenum_EUWest         = 2,
	ERegion__pfenum_Singapore      = 3,
	ERegion__pfenum_Japan          = 4,
	ERegion__pfenum_Brazil         = 5,
	ERegion__pfenum_Australia      = 6,
	ERegion__pfenum_MAX            = 7
};


// Enum PlayFab.EPfSourceType
enum class EPfSourceType : uint8_t
{
	EPfSourceType__pfenum_Admin    = 0,
	EPfSourceType__pfenum_BackEnd  = 1,
	EPfSourceType__pfenum_GameClient = 2,
	EPfSourceType__pfenum_GameServer = 3,
	EPfSourceType__pfenum_Partner  = 4,
	EPfSourceType__pfenum_Custom   = 5,
	EPfSourceType__pfenum_API      = 6,
	EPfSourceType__pfenum_MAX      = 7
};


// Enum PlayFab.EAuthTokenType
enum class EAuthTokenType : uint8_t
{
	EAuthTokenType__pfenum_Email   = 0,
	EAuthTokenType__pfenum_MAX     = 1
};


// Enum PlayFab.ETaskInstanceStatus
enum class ETaskInstanceStatus : uint8_t
{
	ETaskInstanceStatus__pfenum_Succeeded = 0,
	ETaskInstanceStatus__pfenum_Starting = 1,
	ETaskInstanceStatus__pfenum_InProgress = 2,
	ETaskInstanceStatus__pfenum_Failed = 3,
	ETaskInstanceStatus__pfenum_Aborted = 4,
	ETaskInstanceStatus__pfenum_Stalled = 5,
	ETaskInstanceStatus__pfenum_MAX = 6
};


// Enum PlayFab.EResolutionOutcome
enum class EResolutionOutcome : uint8_t
{
	EResolutionOutcome__pfenum_Revoke = 0,
	EResolutionOutcome__pfenum_Reinstate = 1,
	EResolutionOutcome__pfenum_Manual = 2,
	EResolutionOutcome__pfenum_MAX = 3
};


// Enum PlayFab.EPushSetupPlatform
enum class EPushSetupPlatform : uint8_t
{
	EPushSetupPlatform__pfenum_GCM = 0,
	EPushSetupPlatform__pfenum_APNS = 1,
	EPushSetupPlatform__pfenum_APNS_SANDBOX = 2,
	EPushSetupPlatform__pfenum_MAX = 3
};


// Enum PlayFab.EScheduledTaskType
enum class EScheduledTaskType : uint8_t
{
	EScheduledTaskType__pfenum_CloudScript = 0,
	EScheduledTaskType__pfenum_ActionsOnPlayerSegment = 1,
	EScheduledTaskType__pfenum_CloudScriptAzureFunctions = 2,
	EScheduledTaskType__pfenum_InsightsScheduledScaling = 3,
	EScheduledTaskType__pfenum_MAX = 4
};


// Enum PlayFab.EUserDataPermission
enum class EUserDataPermission : uint8_t
{
	EUserDataPermission__pfenum_Private = 0,
	EUserDataPermission__pfenum_Public = 1,
	EUserDataPermission__pfenum_MAX = 2
};


// Enum PlayFab.ELoginIdentityProvider
enum class ELoginIdentityProvider : uint8_t
{
	ELoginIdentityProvider__pfenum_Unknown = 0,
	ELoginIdentityProvider__pfenum_PlayFab = 1,
	ELoginIdentityProvider__pfenum_Custom = 2,
	ELoginIdentityProvider__pfenum_GameCenter = 3,
	ELoginIdentityProvider__pfenum_GooglePlay = 4,
	ELoginIdentityProvider__pfenum_Steam = 5,
	ELoginIdentityProvider__pfenum_XBoxLive = 6,
	ELoginIdentityProvider__pfenum_PSN = 7,
	ELoginIdentityProvider__pfenum_Kongregate = 8,
	ELoginIdentityProvider__pfenum_Facebook = 9,
	ELoginIdentityProvider__pfenum_IOSDevice = 10,
	ELoginIdentityProvider__pfenum_AndroidDevice = 11,
	ELoginIdentityProvider__pfenum_Twitch = 12,
	ELoginIdentityProvider__pfenum_WindowsHello = 13,
	ELoginIdentityProvider__pfenum_GameServer = 14,
	ELoginIdentityProvider__pfenum_CustomServer = 15,
	ELoginIdentityProvider__pfenum_NintendoSwitch = 16,
	ELoginIdentityProvider__pfenum_FacebookInstantGames = 17,
	ELoginIdentityProvider__pfenum_OpenIdConnect = 18,
	ELoginIdentityProvider__pfenum_Apple = 19,
	ELoginIdentityProvider__pfenum_NintendoSwitchAccount = 20,
	ELoginIdentityProvider__pfenum_MAX = 21
};


// Enum PlayFab.EIdentifiedDeviceType
enum class EIdentifiedDeviceType : uint8_t
{
	EIdentifiedDeviceType__pfenum_Unknown = 0,
	EIdentifiedDeviceType__pfenum_XboxOne = 1,
	EIdentifiedDeviceType__pfenum_Scarlett = 2,
	EIdentifiedDeviceType__pfenum_MAX = 3
};


// Enum PlayFab.EMatchmakeStatus
enum class EMatchmakeStatus : uint8_t
{
	EMatchmakeStatus__pfenum_Complete = 0,
	EMatchmakeStatus__pfenum_Waiting = 1,
	EMatchmakeStatus__pfenum_GameNotFound = 2,
	EMatchmakeStatus__pfenum_NoAvailableSlots = 3,
	EMatchmakeStatus__pfenum_SessionClosed = 4,
	EMatchmakeStatus__pfenum_MAX   = 5
};


// Enum PlayFab.ETransactionStatus
enum class ETransactionStatus : uint8_t
{
	ETransactionStatus__pfenum_CreateCart = 0,
	ETransactionStatus__pfenum_Init = 1,
	ETransactionStatus__pfenum_Approved = 2,
	ETransactionStatus__pfenum_Succeeded = 3,
	ETransactionStatus__pfenum_FailedByProvider = 4,
	ETransactionStatus__pfenum_DisputePending = 5,
	ETransactionStatus__pfenum_RefundPending = 6,
	ETransactionStatus__pfenum_Refunded = 7,
	ETransactionStatus__pfenum_RefundFailed = 8,
	ETransactionStatus__pfenum_ChargedBack = 9,
	ETransactionStatus__pfenum_FailedByUber = 10,
	ETransactionStatus__pfenum_FailedByPlayFab = 11,
	ETransactionStatus__pfenum_Revoked = 12,
	ETransactionStatus__pfenum_TradePending = 13,
	ETransactionStatus__pfenum_Traded = 14,
	ETransactionStatus__pfenum_Upgraded = 15,
	ETransactionStatus__pfenum_StackPending = 16,
	ETransactionStatus__pfenum_Stacked = 17,
	ETransactionStatus__pfenum_Other = 18,
	ETransactionStatus__pfenum_Failed = 19,
	ETransactionStatus__pfenum_MAX = 20
};


// Enum PlayFab.ECloudScriptRevisionOption
enum class ECloudScriptRevisionOption : uint8_t
{
	ECloudScriptRevisionOption__pfenum_Live = 0,
	ECloudScriptRevisionOption__pfenum_Latest = 1,
	ECloudScriptRevisionOption__pfenum_Specific = 2,
	ECloudScriptRevisionOption__pfenum_MAX = 3
};


// Enum PlayFab.ETradeStatus
enum class ETradeStatus : uint8_t
{
	ETradeStatus__pfenum_Invalid   = 0,
	ETradeStatus__pfenum_Opening   = 1,
	ETradeStatus__pfenum_Open      = 2,
	ETradeStatus__pfenum_Accepting = 3,
	ETradeStatus__pfenum_Accepted  = 4,
	ETradeStatus__pfenum_Filled    = 5,
	ETradeStatus__pfenum_Cancelled = 6,
	ETradeStatus__pfenum_MAX       = 7
};


// Enum PlayFab.EAdActivity
enum class EAdActivity : uint8_t
{
	EAdActivity__pfenum_Opened     = 0,
	EAdActivity__pfenum_Closed     = 1,
	EAdActivity__pfenum_Start      = 2,
	EAdActivity__pfenum_End        = 3,
	EAdActivity__pfenum_MAX        = 4
};


// Enum PlayFab.EExperimentType
enum class EExperimentType : uint8_t
{
	EExperimentType__pfenum_Active = 0,
	EExperimentType__pfenum_Snapshot = 1,
	EExperimentType__pfenum_MAX    = 2
};


// Enum PlayFab.EOperationTypes
enum class EOperationTypes : uint8_t
{
	EOperationTypes__pfenum_Created = 0,
	EOperationTypes__pfenum_Updated = 1,
	EOperationTypes__pfenum_Deleted = 2,
	EOperationTypes__pfenum_None   = 3,
	EOperationTypes__pfenum_MAX    = 4
};


// Enum PlayFab.EAzureVmSize
enum class EAzureVmSize : uint8_t
{
	EAzureVmSize__pfenum_Standard_A1 = 0,
	EAzureVmSize__pfenum_Standard_A2 = 1,
	EAzureVmSize__pfenum_Standard_A3 = 2,
	EAzureVmSize__pfenum_Standard_A4 = 3,
	EAzureVmSize__pfenum_Standard_A1_v2 = 4,
	EAzureVmSize__pfenum_Standard_A2_v2 = 5,
	EAzureVmSize__pfenum_Standard_A4_v2 = 6,
	EAzureVmSize__pfenum_Standard_A8_v2 = 7,
	EAzureVmSize__pfenum_Standard_D1_v2 = 8,
	EAzureVmSize__pfenum_Standard_D2_v2 = 9,
	EAzureVmSize__pfenum_Standard_D3_v2 = 10,
	EAzureVmSize__pfenum_Standard_D4_v2 = 11,
	EAzureVmSize__pfenum_Standard_D5_v2 = 12,
	EAzureVmSize__pfenum_Standard_D2_v3 = 13,
	EAzureVmSize__pfenum_Standard_D4_v3 = 14,
	EAzureVmSize__pfenum_Standard_D8_v3 = 15,
	EAzureVmSize__pfenum_Standard_D16_v3 = 16,
	EAzureVmSize__pfenum_Standard_F1 = 17,
	EAzureVmSize__pfenum_Standard_F2 = 18,
	EAzureVmSize__pfenum_Standard_F4 = 19,
	EAzureVmSize__pfenum_Standard_F8 = 20,
	EAzureVmSize__pfenum_Standard_F16 = 21,
	EAzureVmSize__pfenum_Standard_F2s_v2 = 22,
	EAzureVmSize__pfenum_Standard_F4s_v2 = 23,
	EAzureVmSize__pfenum_Standard_F8s_v2 = 24,
	EAzureVmSize__pfenum_Standard_F16s_v2 = 25,
	EAzureVmSize__pfenum_Standard_D2as_v4 = 26,
	EAzureVmSize__pfenum_Standard_D4as_v4 = 27,
	EAzureVmSize__pfenum_Standard_D8as_v4 = 28,
	EAzureVmSize__pfenum_Standard_D16as_v4 = 29,
	EAzureVmSize__pfenum_Standard_MAX = 30
};


// Enum PlayFab.EContainerFlavor
enum class EContainerFlavor : uint8_t
{
	EContainerFlavor__pfenum_ManagedWindowsServerCore = 0,
	EContainerFlavor__pfenum_CustomLinux = 1,
	EContainerFlavor__pfenum_ManagedWindowsServerCorePreview = 2,
	EContainerFlavor__pfenum_Invalid = 3,
	EContainerFlavor__pfenum_MAX   = 4
};


// Enum PlayFab.ETitleMultiplayerServerEnabledStatus
enum class ETitleMultiplayerServerEnabledStatus : uint8_t
{
	ETitleMultiplayerServerEnabledStatus__pfenum_Initializing = 0,
	ETitleMultiplayerServerEnabledStatus__pfenum_Enabled = 1,
	ETitleMultiplayerServerEnabledStatus__pfenum_Disabled = 2,
	ETitleMultiplayerServerEnabledStatus__pfenum_MAX = 3
};


// Enum PlayFab.EPlayerConnectionState
enum class EPlayerConnectionState : uint8_t
{
	EPlayerConnectionState__pfenum_Unassigned = 0,
	EPlayerConnectionState__pfenum_Connecting = 1,
	EPlayerConnectionState__pfenum_Participating = 2,
	EPlayerConnectionState__pfenum_Participated = 3,
	EPlayerConnectionState__pfenum_MAX = 4
};


// Enum PlayFab.EGameInstanceState
enum class EGameInstanceState : uint8_t
{
	EGameInstanceState__pfenum_Open = 0,
	EGameInstanceState__pfenum_Closed = 1,
	EGameInstanceState__pfenum_MAX = 2
};


// Enum PlayFab.EServerType
enum class EServerType : uint8_t
{
	EServerType__pfenum_Container  = 0,
	EServerType__pfenum_Process    = 1,
	EServerType__pfenum_MAX        = 2
};


// Enum PlayFab.EProtocolType
enum class EProtocolType : uint8_t
{
	EProtocolType__pfenum_TCP      = 0,
	EProtocolType__pfenum_UDP      = 1,
	EProtocolType__pfenum_MAX      = 2
};


// Enum PlayFab.EOsPlatform
enum class EOsPlatform : uint8_t
{
	EOsPlatform__pfenum_Windows    = 0,
	EOsPlatform__pfenum_Linux      = 1,
	EOsPlatform__pfenum_MAX        = 2
};


// Enum PlayFab.ECancellationReason
enum class ECancellationReason : uint8_t
{
	ECancellationReason__pfenum_Requested = 0,
	ECancellationReason__pfenum_Internal = 1,
	ECancellationReason__pfenum_Timeout = 2,
	ECancellationReason__pfenum_MAX = 3
};


// Enum PlayFab.EAzureVmFamily
enum class EAzureVmFamily : uint8_t
{
	EAzureVmFamily__pfenum_A       = 0,
	EAzureVmFamily__pfenum_Av2     = 1,
	EAzureVmFamily__pfenum_Dv2     = 2,
	EAzureVmFamily__pfenum_Dv3     = 3,
	EAzureVmFamily__pfenum_F       = 4,
	EAzureVmFamily__pfenum_Fsv2    = 5,
	EAzureVmFamily__pfenum_Dasv4   = 6,
	EAzureVmFamily__pfenum_MAX     = 7
};


// Enum PlayFab.EAzureRegion
enum class EAzureRegion : uint8_t
{
	EAzureRegion__pfenum_AustraliaEast = 0,
	EAzureRegion__pfenum_AustraliaSoutheast = 1,
	EAzureRegion__pfenum_BrazilSouth = 2,
	EAzureRegion__pfenum_CentralUs = 3,
	EAzureRegion__pfenum_EastAsia  = 4,
	EAzureRegion__pfenum_EastUs    = 5,
	EAzureRegion__pfenum_EastUs2   = 6,
	EAzureRegion__pfenum_JapanEast = 7,
	EAzureRegion__pfenum_JapanWest = 8,
	EAzureRegion__pfenum_NorthCentralUs = 9,
	EAzureRegion__pfenum_NorthEurope = 10,
	EAzureRegion__pfenum_SouthCentralUs = 11,
	EAzureRegion__pfenum_SoutheastAsia = 12,
	EAzureRegion__pfenum_WestEurope = 13,
	EAzureRegion__pfenum_WestUs    = 14,
	EAzureRegion__pfenum_ChinaEast2 = 15,
	EAzureRegion__pfenum_ChinaNorth2 = 16,
	EAzureRegion__pfenum_SouthAfricaNorth = 17,
	EAzureRegion__pfenum_CentralUsEuap = 18,
	EAzureRegion__pfenum_WestCentralUs = 19,
	EAzureRegion__pfenum_MAX       = 20
};


// Enum PlayFab.EExperimentState
enum class EExperimentState : uint8_t
{
	EExperimentState__pfenum_New   = 0,
	EExperimentState__pfenum_Started = 1,
	EExperimentState__pfenum_Stopped = 2,
	EExperimentState__pfenum_Deleted = 3,
	EExperimentState__pfenum_MAX   = 4
};


// Enum PlayFab.EAnalysisTaskState
enum class EAnalysisTaskState : uint8_t
{
	EAnalysisTaskState__pfenum_Waiting = 0,
	EAnalysisTaskState__pfenum_ReadyForSubmission = 1,
	EAnalysisTaskState__pfenum_SubmittingToPipeline = 2,
	EAnalysisTaskState__pfenum_Running = 3,
	EAnalysisTaskState__pfenum_Completed = 4,
	EAnalysisTaskState__pfenum_Failed = 5,
	EAnalysisTaskState__pfenum_Canceled = 6,
	EAnalysisTaskState__pfenum_MAX = 7
};


// Enum PlayFab.ETriggerType
enum class ETriggerType : uint8_t
{
	ETriggerType__pfenum_HTTP      = 0,
	ETriggerType__pfenum_Queue     = 1,
	ETriggerType__pfenum_MAX       = 2
};


// Enum PlayFab.EUserOrigination
enum class EUserOrigination : uint8_t
{
	EUserOrigination__pfenum_Organic = 0,
	EUserOrigination__pfenum_Steam = 1,
	EUserOrigination__pfenum_Google = 2,
	EUserOrigination__pfenum_Amazon = 3,
	EUserOrigination__pfenum_Facebook = 4,
	EUserOrigination__pfenum_Kongregate = 5,
	EUserOrigination__pfenum_GamersFirst = 6,
	EUserOrigination__pfenum_Unknown = 7,
	EUserOrigination__pfenum_IOS   = 8,
	EUserOrigination__pfenum_LoadTest = 9,
	EUserOrigination__pfenum_Android = 10,
	EUserOrigination__pfenum_PSN   = 11,
	EUserOrigination__pfenum_GameCenter = 12,
	EUserOrigination__pfenum_CustomId = 13,
	EUserOrigination__pfenum_XboxLive = 14,
	EUserOrigination__pfenum_Parse = 15,
	EUserOrigination__pfenum_Twitch = 16,
	EUserOrigination__pfenum_WindowsHello = 17,
	EUserOrigination__pfenum_ServerCustomId = 18,
	EUserOrigination__pfenum_NintendoSwitchDeviceId = 19,
	EUserOrigination__pfenum_FacebookInstantGamesId = 20,
	EUserOrigination__pfenum_OpenIdConnect = 21,
	EUserOrigination__pfenum_Apple = 22,
	EUserOrigination__pfenum_NintendoSwitchAccount = 23,
	EUserOrigination__pfenum_MAX   = 24
};


// Enum PlayFab.ETitleActivationStatus
enum class ETitleActivationStatus : uint8_t
{
	ETitleActivationStatus__pfenum_None = 0,
	ETitleActivationStatus__pfenum_ActivatedTitleKey = 1,
	ETitleActivationStatus__pfenum_PendingSteam = 2,
	ETitleActivationStatus__pfenum_ActivatedSteam = 3,
	ETitleActivationStatus__pfenum_RevokedSteam = 4,
	ETitleActivationStatus__pfenum_MAX = 5
};


// Enum PlayFab.ESubscriptionProviderStatus
enum class ESubscriptionProviderStatus : uint8_t
{
	ESubscriptionProviderStatus__pfenum_NoError = 0,
	ESubscriptionProviderStatus__pfenum_Cancelled = 1,
	ESubscriptionProviderStatus__pfenum_UnknownError = 2,
	ESubscriptionProviderStatus__pfenum_BillingError = 3,
	ESubscriptionProviderStatus__pfenum_ProductUnavailable = 4,
	ESubscriptionProviderStatus__pfenum_CustomerDidNotAcceptPriceChange = 5,
	ESubscriptionProviderStatus__pfenum_FreeTrial = 6,
	ESubscriptionProviderStatus__pfenum_PaymentPending = 7,
	ESubscriptionProviderStatus__pfenum_MAX = 8
};


// Enum PlayFab.EStatisticVersionStatus
enum class EStatisticVersionStatus : uint8_t
{
	EStatisticVersionStatus__pfenum_Active = 0,
	EStatisticVersionStatus__pfenum_SnapshotPending = 1,
	EStatisticVersionStatus__pfenum_Snapshot = 2,
	EStatisticVersionStatus__pfenum_ArchivalPending = 3,
	EStatisticVersionStatus__pfenum_Archived = 4,
	EStatisticVersionStatus__pfenum_MAX = 5
};


// Enum PlayFab.EStatisticVersionArchivalStatus
enum class EStatisticVersionArchivalStatus : uint8_t
{
	EStatisticVersionArchivalStatus__pfenum_NotScheduled = 0,
	EStatisticVersionArchivalStatus__pfenum_Scheduled = 1,
	EStatisticVersionArchivalStatus__pfenum_Queued = 2,
	EStatisticVersionArchivalStatus__pfenum_InProgress = 3,
	EStatisticVersionArchivalStatus__pfenum_Complete = 4,
	EStatisticVersionArchivalStatus__pfenum_MAX = 5
};


// Enum PlayFab.EResultTableNodeType
enum class EResultTableNodeType : uint8_t
{
	EResultTableNodeType__pfenum_ItemId = 0,
	EResultTableNodeType__pfenum_TableId = 1,
	EResultTableNodeType__pfenum_MAX = 2
};


// Enum PlayFab.EPushNotificationPlatform
enum class EPushNotificationPlatform : uint8_t
{
	EPushNotificationPlatform__pfenum_ApplePushNotificationService = 0,
	EPushNotificationPlatform__pfenum_GoogleCloudMessaging = 1,
	EPushNotificationPlatform__pfenum_MAX = 2
};


// Enum PlayFab.EEmailVerificationStatus
enum class EEmailVerificationStatus : uint8_t
{
	EEmailVerificationStatus__pfenum_Unverified = 0,
	EEmailVerificationStatus__pfenum_Pending = 1,
	EEmailVerificationStatus__pfenum_Confirmed = 2,
	EEmailVerificationStatus__pfenum_MAX = 3
};


// Enum PlayFab.EEffectType
enum class EEffectType : uint8_t
{
	EEffectType__pfenum_Allow      = 0,
	EEffectType__pfenum_Deny       = 1,
	EEffectType__pfenum_MAX        = 2
};


// Enum PlayFab.ECurrency
enum class ECurrency : uint8_t
{
	ECurrency__pfenum_AED          = 0,
	ECurrency__pfenum_AFN          = 1,
	ECurrency__pfenum_ALL          = 2,
	ECurrency__pfenum_AMD          = 3,
	ECurrency__pfenum_ANG          = 4,
	ECurrency__pfenum_AOA          = 5,
	ECurrency__pfenum_ARS          = 6,
	ECurrency__pfenum_AUD          = 7,
	ECurrency__pfenum_AWG          = 8,
	ECurrency__pfenum_AZN          = 9,
	ECurrency__pfenum_BAM          = 10,
	ECurrency__pfenum_BBD          = 11,
	ECurrency__pfenum_BDT          = 12,
	ECurrency__pfenum_BGN          = 13,
	ECurrency__pfenum_BHD          = 14,
	ECurrency__pfenum_BIF          = 15,
	ECurrency__pfenum_BMD          = 16,
	ECurrency__pfenum_BND          = 17,
	ECurrency__pfenum_BOB          = 18,
	ECurrency__pfenum_BRL          = 19,
	ECurrency__pfenum_BSD          = 20,
	ECurrency__pfenum_BTN          = 21,
	ECurrency__pfenum_BWP          = 22,
	ECurrency__pfenum_BYR          = 23,
	ECurrency__pfenum_BZD          = 24,
	ECurrency__pfenum_CAD          = 25,
	ECurrency__pfenum_CDF          = 26,
	ECurrency__pfenum_CHF          = 27,
	ECurrency__pfenum_CLP          = 28,
	ECurrency__pfenum_CNY          = 29,
	ECurrency__pfenum_COP          = 30,
	ECurrency__pfenum_CRC          = 31,
	ECurrency__pfenum_CUC          = 32,
	ECurrency__pfenum_CUP          = 33,
	ECurrency__pfenum_CVE          = 34,
	ECurrency__pfenum_CZK          = 35,
	ECurrency__pfenum_DJF          = 36,
	ECurrency__pfenum_DKK          = 37,
	ECurrency__pfenum_DOP          = 38,
	ECurrency__pfenum_DZD          = 39,
	ECurrency__pfenum_EGP          = 40,
	ECurrency__pfenum_ERN          = 41,
	ECurrency__pfenum_ETB          = 42,
	ECurrency__pfenum_EUR          = 43,
	ECurrency__pfenum_FJD          = 44,
	ECurrency__pfenum_FKP          = 45,
	ECurrency__pfenum_GBP          = 46,
	ECurrency__pfenum_GEL          = 47,
	ECurrency__pfenum_GGP          = 48,
	ECurrency__pfenum_GHS          = 49,
	ECurrency__pfenum_GIP          = 50,
	ECurrency__pfenum_GMD          = 51,
	ECurrency__pfenum_GNF          = 52,
	ECurrency__pfenum_GTQ          = 53,
	ECurrency__pfenum_GYD          = 54,
	ECurrency__pfenum_HKD          = 55,
	ECurrency__pfenum_HNL          = 56,
	ECurrency__pfenum_HRK          = 57,
	ECurrency__pfenum_HTG          = 58,
	ECurrency__pfenum_HUF          = 59,
	ECurrency__pfenum_IDR          = 60,
	ECurrency__pfenum_ILS          = 61,
	ECurrency__pfenum_IMP          = 62,
	ECurrency__pfenum_INR          = 63,
	ECurrency__pfenum_IQD          = 64,
	ECurrency__pfenum_IRR          = 65,
	ECurrency__pfenum_ISK          = 66,
	ECurrency__pfenum_JEP          = 67,
	ECurrency__pfenum_JMD          = 68,
	ECurrency__pfenum_JOD          = 69,
	ECurrency__pfenum_JPY          = 70,
	ECurrency__pfenum_KES          = 71,
	ECurrency__pfenum_KGS          = 72,
	ECurrency__pfenum_KHR          = 73,
	ECurrency__pfenum_KMF          = 74,
	ECurrency__pfenum_KPW          = 75,
	ECurrency__pfenum_KRW          = 76,
	ECurrency__pfenum_KWD          = 77,
	ECurrency__pfenum_KYD          = 78,
	ECurrency__pfenum_KZT          = 79,
	ECurrency__pfenum_LAK          = 80,
	ECurrency__pfenum_LBP          = 81,
	ECurrency__pfenum_LKR          = 82,
	ECurrency__pfenum_LRD          = 83,
	ECurrency__pfenum_LSL          = 84,
	ECurrency__pfenum_LYD          = 85,
	ECurrency__pfenum_MAD          = 86,
	ECurrency__pfenum_MDL          = 87,
	ECurrency__pfenum_MGA          = 88,
	ECurrency__pfenum_MKD          = 89,
	ECurrency__pfenum_MMK          = 90,
	ECurrency__pfenum_MNT          = 91,
	ECurrency__pfenum_MOP          = 92,
	ECurrency__pfenum_MRO          = 93,
	ECurrency__pfenum_MUR          = 94,
	ECurrency__pfenum_MVR          = 95,
	ECurrency__pfenum_MWK          = 96,
	ECurrency__pfenum_MXN          = 97,
	ECurrency__pfenum_MYR          = 98,
	ECurrency__pfenum_MZN          = 99,
	ECurrency__pfenum_NAD          = 100,
	ECurrency__pfenum_NGN          = 101,
	ECurrency__pfenum_NIO          = 102,
	ECurrency__pfenum_NOK          = 103,
	ECurrency__pfenum_NPR          = 104,
	ECurrency__pfenum_NZD          = 105,
	ECurrency__pfenum_OMR          = 106,
	ECurrency__pfenum_PAB          = 107,
	ECurrency__pfenum_PEN          = 108,
	ECurrency__pfenum_PGK          = 109,
	ECurrency__pfenum_PHP          = 110,
	ECurrency__pfenum_PKR          = 111,
	ECurrency__pfenum_PLN          = 112,
	ECurrency__pfenum_PYG          = 113,
	ECurrency__pfenum_QAR          = 114,
	ECurrency__pfenum_RON          = 115,
	ECurrency__pfenum_RSD          = 116,
	ECurrency__pfenum_RUB          = 117,
	ECurrency__pfenum_RWF          = 118,
	ECurrency__pfenum_SAR          = 119,
	ECurrency__pfenum_SBD          = 120,
	ECurrency__pfenum_SCR          = 121,
	ECurrency__pfenum_SDG          = 122,
	ECurrency__pfenum_SEK          = 123,
	ECurrency__pfenum_SGD          = 124,
	ECurrency__pfenum_SHP          = 125,
	ECurrency__pfenum_SLL          = 126,
	ECurrency__pfenum_SOS          = 127,
	ECurrency__pfenum_SPL          = 128,
	ECurrency__pfenum_SRD          = 129,
	ECurrency__pfenum_STD          = 130,
	ECurrency__pfenum_SVC          = 131,
	ECurrency__pfenum_SYP          = 132,
	ECurrency__pfenum_SZL          = 133,
	ECurrency__pfenum_THB          = 134,
	ECurrency__pfenum_TJS          = 135,
	ECurrency__pfenum_TMT          = 136,
	ECurrency__pfenum_TND          = 137,
	ECurrency__pfenum_TOP          = 138,
	ECurrency__pfenum_TRY          = 139,
	ECurrency__pfenum_TTD          = 140,
	ECurrency__pfenum_TVD          = 141,
	ECurrency__pfenum_TWD          = 142,
	ECurrency__pfenum_TZS          = 143,
	ECurrency__pfenum_UAH          = 144,
	ECurrency__pfenum_UGX          = 145,
	ECurrency__pfenum_USD          = 146,
	ECurrency__pfenum_UYU          = 147,
	ECurrency__pfenum_UZS          = 148,
	ECurrency__pfenum_VEF          = 149,
	ECurrency__pfenum_VND          = 150,
	ECurrency__pfenum_VUV          = 151,
	ECurrency__pfenum_WST          = 152,
	ECurrency__pfenum_XAF          = 153,
	ECurrency__pfenum_XCD          = 154,
	ECurrency__pfenum_XDR          = 155,
	ECurrency__pfenum_XOF          = 156,
	ECurrency__pfenum_XPF          = 157,
	ECurrency__pfenum_YER          = 158,
	ECurrency__pfenum_ZAR          = 159,
	ECurrency__pfenum_ZMW          = 160,
	ECurrency__pfenum_ZWD          = 161,
	ECurrency__pfenum_MAX          = 162
};


// Enum PlayFab.ECountryCode
enum class ECountryCode : uint8_t
{
	ECountryCode__pfenum_AF        = 0,
	ECountryCode__pfenum_AX        = 1,
	ECountryCode__pfenum_AL        = 2,
	ECountryCode__pfenum_DZ        = 3,
	ECountryCode__pfenum_AS        = 4,
	ECountryCode__pfenum_AD        = 5,
	ECountryCode__pfenum_AO        = 6,
	ECountryCode__pfenum_AI        = 7,
	ECountryCode__pfenum_AQ        = 8,
	ECountryCode__pfenum_AG        = 9,
	ECountryCode__pfenum_AR        = 10,
	ECountryCode__pfenum_AM        = 11,
	ECountryCode__pfenum_AW        = 12,
	ECountryCode__pfenum_AU        = 13,
	ECountryCode__pfenum_AT        = 14,
	ECountryCode__pfenum_AZ        = 15,
	ECountryCode__pfenum_BS        = 16,
	ECountryCode__pfenum_BH        = 17,
	ECountryCode__pfenum_BD        = 18,
	ECountryCode__pfenum_BB        = 19,
	ECountryCode__pfenum_BY        = 20,
	ECountryCode__pfenum_BE        = 21,
	ECountryCode__pfenum_BZ        = 22,
	ECountryCode__pfenum_BJ        = 23,
	ECountryCode__pfenum_BM        = 24,
	ECountryCode__pfenum_BT        = 25,
	ECountryCode__pfenum_BO        = 26,
	ECountryCode__pfenum_BQ        = 27,
	ECountryCode__pfenum_BA        = 28,
	ECountryCode__pfenum_BW        = 29,
	ECountryCode__pfenum_BV        = 30,
	ECountryCode__pfenum_BR        = 31,
	ECountryCode__pfenum_IO        = 32,
	ECountryCode__pfenum_BN        = 33,
	ECountryCode__pfenum_BG        = 34,
	ECountryCode__pfenum_BF        = 35,
	ECountryCode__pfenum_BI        = 36,
	ECountryCode__pfenum_KH        = 37,
	ECountryCode__pfenum_CM        = 38,
	ECountryCode__pfenum_CA        = 39,
	ECountryCode__pfenum_CV        = 40,
	ECountryCode__pfenum_KY        = 41,
	ECountryCode__pfenum_CF        = 42,
	ECountryCode__pfenum_TD        = 43,
	ECountryCode__pfenum_CL        = 44,
	ECountryCode__pfenum_CN        = 45,
	ECountryCode__pfenum_CX        = 46,
	ECountryCode__pfenum_CC        = 47,
	ECountryCode__pfenum_CO        = 48,
	ECountryCode__pfenum_KM        = 49,
	ECountryCode__pfenum_CG        = 50,
	ECountryCode__pfenum_CD        = 51,
	ECountryCode__pfenum_CK        = 52,
	ECountryCode__pfenum_CR        = 53,
	ECountryCode__pfenum_CI        = 54,
	ECountryCode__pfenum_HR        = 55,
	ECountryCode__pfenum_CU        = 56,
	ECountryCode__pfenum_CW        = 57,
	ECountryCode__pfenum_CY        = 58,
	ECountryCode__pfenum_CZ        = 59,
	ECountryCode__pfenum_DK        = 60,
	ECountryCode__pfenum_DJ        = 61,
	ECountryCode__pfenum_DM        = 62,
	ECountryCode__pfenum_DO        = 63,
	ECountryCode__pfenum_EC        = 64,
	ECountryCode__pfenum_EG        = 65,
	ECountryCode__pfenum_SV        = 66,
	ECountryCode__pfenum_GQ        = 67,
	ECountryCode__pfenum_ER        = 68,
	ECountryCode__pfenum_EE        = 69,
	ECountryCode__pfenum_ET        = 70,
	ECountryCode__pfenum_FK        = 71,
	ECountryCode__pfenum_FO        = 72,
	ECountryCode__pfenum_FJ        = 73,
	ECountryCode__pfenum_FI        = 74,
	ECountryCode__pfenum_FR        = 75,
	ECountryCode__pfenum_GF        = 76,
	ECountryCode__pfenum_PF        = 77,
	ECountryCode__pfenum_TF        = 78,
	ECountryCode__pfenum_GA        = 79,
	ECountryCode__pfenum_GM        = 80,
	ECountryCode__pfenum_GE        = 81,
	ECountryCode__pfenum_DE        = 82,
	ECountryCode__pfenum_GH        = 83,
	ECountryCode__pfenum_GI        = 84,
	ECountryCode__pfenum_GR        = 85,
	ECountryCode__pfenum_GL        = 86,
	ECountryCode__pfenum_GD        = 87,
	ECountryCode__pfenum_GP        = 88,
	ECountryCode__pfenum_GU        = 89,
	ECountryCode__pfenum_GT        = 90,
	ECountryCode__pfenum_GG        = 91,
	ECountryCode__pfenum_GN        = 92,
	ECountryCode__pfenum_GW        = 93,
	ECountryCode__pfenum_GY        = 94,
	ECountryCode__pfenum_HT        = 95,
	ECountryCode__pfenum_HM        = 96,
	ECountryCode__pfenum_VA        = 97,
	ECountryCode__pfenum_HN        = 98,
	ECountryCode__pfenum_HK        = 99,
	ECountryCode__pfenum_HU        = 100,
	ECountryCode__pfenum_IS        = 101,
	ECountryCode__pfenum_IN        = 102,
	ECountryCode__pfenum_ID        = 103,
	ECountryCode__pfenum_IR        = 104,
	ECountryCode__pfenum_IQ        = 105,
	ECountryCode__pfenum_IE        = 106,
	ECountryCode__pfenum_IM        = 107,
	ECountryCode__pfenum_IL        = 108,
	ECountryCode__pfenum_IT        = 109,
	ECountryCode__pfenum_JM        = 110,
	ECountryCode__pfenum_JP        = 111,
	ECountryCode__pfenum_JE        = 112,
	ECountryCode__pfenum_JO        = 113,
	ECountryCode__pfenum_KZ        = 114,
	ECountryCode__pfenum_KE        = 115,
	ECountryCode__pfenum_KI        = 116,
	ECountryCode__pfenum_KP        = 117,
	ECountryCode__pfenum_KR        = 118,
	ECountryCode__pfenum_KW        = 119,
	ECountryCode__pfenum_KG        = 120,
	ECountryCode__pfenum_LA        = 121,
	ECountryCode__pfenum_LV        = 122,
	ECountryCode__pfenum_LB        = 123,
	ECountryCode__pfenum_LS        = 124,
	ECountryCode__pfenum_LR        = 125,
	ECountryCode__pfenum_LY        = 126,
	ECountryCode__pfenum_LI        = 127,
	ECountryCode__pfenum_LT        = 128,
	ECountryCode__pfenum_LU        = 129,
	ECountryCode__pfenum_MO        = 130,
	ECountryCode__pfenum_MK        = 131,
	ECountryCode__pfenum_MG        = 132,
	ECountryCode__pfenum_MW        = 133,
	ECountryCode__pfenum_MY        = 134,
	ECountryCode__pfenum_MV        = 135,
	ECountryCode__pfenum_ML        = 136,
	ECountryCode__pfenum_MT        = 137,
	ECountryCode__pfenum_MH        = 138,
	ECountryCode__pfenum_MQ        = 139,
	ECountryCode__pfenum_MR        = 140,
	ECountryCode__pfenum_MU        = 141,
	ECountryCode__pfenum_YT        = 142,
	ECountryCode__pfenum_MX        = 143,
	ECountryCode__pfenum_FM        = 144,
	ECountryCode__pfenum_MD        = 145,
	ECountryCode__pfenum_MC        = 146,
	ECountryCode__pfenum_MN        = 147,
	ECountryCode__pfenum_ME        = 148,
	ECountryCode__pfenum_MS        = 149,
	ECountryCode__pfenum_MA        = 150,
	ECountryCode__pfenum_MZ        = 151,
	ECountryCode__pfenum_MM        = 152,
	ECountryCode__pfenum_NA        = 153,
	ECountryCode__pfenum_NR        = 154,
	ECountryCode__pfenum_NP        = 155,
	ECountryCode__pfenum_NL        = 156,
	ECountryCode__pfenum_NC        = 157,
	ECountryCode__pfenum_NZ        = 158,
	ECountryCode__pfenum_NI        = 159,
	ECountryCode__pfenum_NE        = 160,
	ECountryCode__pfenum_NG        = 161,
	ECountryCode__pfenum_NU        = 162,
	ECountryCode__pfenum_NF        = 163,
	ECountryCode__pfenum_MP        = 164,
	ECountryCode__pfenum_NO        = 165,
	ECountryCode__pfenum_OM        = 166,
	ECountryCode__pfenum_PK        = 167,
	ECountryCode__pfenum_PW        = 168,
	ECountryCode__pfenum_PS        = 169,
	ECountryCode__pfenum_PA        = 170,
	ECountryCode__pfenum_PG        = 171,
	ECountryCode__pfenum_PY        = 172,
	ECountryCode__pfenum_PE        = 173,
	ECountryCode__pfenum_PH        = 174,
	ECountryCode__pfenum_PN        = 175,
	ECountryCode__pfenum_PL        = 176,
	ECountryCode__pfenum_PT        = 177,
	ECountryCode__pfenum_PR        = 178,
	ECountryCode__pfenum_QA        = 179,
	ECountryCode__pfenum_RE        = 180,
	ECountryCode__pfenum_RO        = 181,
	ECountryCode__pfenum_RU        = 182,
	ECountryCode__pfenum_RW        = 183,
	ECountryCode__pfenum_BL        = 184,
	ECountryCode__pfenum_SH        = 185,
	ECountryCode__pfenum_KN        = 186,
	ECountryCode__pfenum_LC        = 187,
	ECountryCode__pfenum_MF        = 188,
	ECountryCode__pfenum_PM        = 189,
	ECountryCode__pfenum_VC        = 190,
	ECountryCode__pfenum_WS        = 191,
	ECountryCode__pfenum_SM        = 192,
	ECountryCode__pfenum_ST        = 193,
	ECountryCode__pfenum_SA        = 194,
	ECountryCode__pfenum_SN        = 195,
	ECountryCode__pfenum_RS        = 196,
	ECountryCode__pfenum_SC        = 197,
	ECountryCode__pfenum_SL        = 198,
	ECountryCode__pfenum_SG        = 199,
	ECountryCode__pfenum_SX        = 200,
	ECountryCode__pfenum_SK        = 201,
	ECountryCode__pfenum_SI        = 202,
	ECountryCode__pfenum_SB        = 203,
	ECountryCode__pfenum_SO        = 204,
	ECountryCode__pfenum_ZA        = 205,
	ECountryCode__pfenum_GS        = 206,
	ECountryCode__pfenum_SS        = 207,
	ECountryCode__pfenum_ES        = 208,
	ECountryCode__pfenum_LK        = 209,
	ECountryCode__pfenum_SD        = 210,
	ECountryCode__pfenum_SR        = 211,
	ECountryCode__pfenum_SJ        = 212,
	ECountryCode__pfenum_SZ        = 213,
	ECountryCode__pfenum_SE        = 214,
	ECountryCode__pfenum_CH        = 215,
	ECountryCode__pfenum_SY        = 216,
	ECountryCode__pfenum_TW        = 217,
	ECountryCode__pfenum_TJ        = 218,
	ECountryCode__pfenum_TZ        = 219,
	ECountryCode__pfenum_TH        = 220,
	ECountryCode__pfenum_TL        = 221,
	ECountryCode__pfenum_TG        = 222,
	ECountryCode__pfenum_TK        = 223,
	ECountryCode__pfenum_TO        = 224,
	ECountryCode__pfenum_TT        = 225,
	ECountryCode__pfenum_TN        = 226,
	ECountryCode__pfenum_TR        = 227,
	ECountryCode__pfenum_TM        = 228,
	ECountryCode__pfenum_TC        = 229,
	ECountryCode__pfenum_TV        = 230,
	ECountryCode__pfenum_UG        = 231,
	ECountryCode__pfenum_UA        = 232,
	ECountryCode__pfenum_AE        = 233,
	ECountryCode__pfenum_GB        = 234,
	ECountryCode__pfenum_US        = 235,
	ECountryCode__pfenum_UM        = 236,
	ECountryCode__pfenum_UY        = 237,
	ECountryCode__pfenum_UZ        = 238,
	ECountryCode__pfenum_VU        = 239,
	ECountryCode__pfenum_VE        = 240,
	ECountryCode__pfenum_VN        = 241,
	ECountryCode__pfenum_VG        = 242,
	ECountryCode__pfenum_VI        = 243,
	ECountryCode__pfenum_WF        = 244,
	ECountryCode__pfenum_EH        = 245,
	ECountryCode__pfenum_YE        = 246,
	ECountryCode__pfenum_ZM        = 247,
	ECountryCode__pfenum_ZW        = 248,
	ECountryCode__pfenum_MAX       = 249
};


// Enum PlayFab.EContinentCode
enum class EContinentCode : uint8_t
{
	EContinentCode__pfenum_AF      = 0,
	EContinentCode__pfenum_AN      = 1,
	EContinentCode__pfenum_AS      = 2,
	EContinentCode__pfenum_EU      = 3,
	EContinentCode__pfenum_NA      = 4,
	EContinentCode__pfenum_OC      = 5,
	EContinentCode__pfenum_SA      = 6,
	EContinentCode__pfenum_MAX     = 7
};


// Enum PlayFab.EConditionals
enum class EConditionals : uint8_t
{
	EConditionals__pfenum_Any      = 0,
	EConditionals__pfenum_True     = 1,
	EConditionals__pfenum_False    = 2,
	EConditionals__pfenum_MAX      = 3
};


// Enum PlayFab.EPFJson
enum class EPFJson : uint8_t
{
	EPFJson__None                  = 0,
	EPFJson__Null                  = 1,
	EPFJson__String                = 2,
	EPFJson__Number                = 3,
	EPFJson__Boolean               = 4,
	EPFJson__Array                 = 5,
	EPFJson__Object                = 6,
	EPFJson__EPFJson_MAX           = 7
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
