#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "BackendModels_enums.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BackendModels.YPlayfabMessage
// 0x0040
struct FYPlayfabMessage
{
	struct FString                                     m_userId;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_service;                                                // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UScriptStruct*                               m_desiredStruct;                                          // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_jsonData;                                               // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_requestHandle;                                          // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YMessage
// 0x0028
struct FYMessage
{
	struct FString                                     from;                                                     // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Msg;                                                      // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYChannelType                                      ChannelType;                                              // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YInsuredItem
// 0x0018
struct FYInsuredItem
{
	struct FString                                     m_instanceId;                                             // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYInsuranceType                                    m_insurance;                                              // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YPurchaseInsuranceRequest
// 0x0018
struct FYPurchaseInsuranceRequest
{
	int                                                m_tokens;                                                 // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FYInsuredItem>                       m_items;                                                  // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUserMatchmakingSettings
// 0x0038
struct FYUserMatchmakingSettings
{
	bool                                               isReadyForMatch;                                          // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     selectedMapName;                                          // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSecretLeader;                                           // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FYPurchaseInsuranceRequest                  purchaseInsuranceRequest;                                 // 0x0020(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlatformEntry
// 0x0018
struct FYPlatformEntry
{
	EYPlatformTypes                                    Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ID;                                                       // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YTimestamp
// 0x0008
struct FYTimestamp
{
	int64_t                                            Seconds;                                                  // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YQuestState
// 0x0040
struct FYQuestState
{
	struct FString                                     questId;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Completed;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYMetaMissionType                                  Type;                                                     // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FYTimestamp                                 updated;                                                  // 0x0020(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     backendId;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                remainingUnits;                                           // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YCompleteQuestState
// 0x0040
struct FYCompleteQuestState
{
	struct FYQuestState                                questState;                                               // 0x0000(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YCraftedBlueprintInfo
// 0x0040
struct FYCraftedBlueprintInfo
{
	struct FName                                       blueprintName;                                            // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     shopItemBelongsTo;                                        // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     itemBackendId;                                            // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     baseItemId;                                               // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                purchaseAmount;                                           // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YFactionProgress
// 0x0018
struct FYFactionProgress
{
	struct FName                                       factionId;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                reputation;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                standingRank;                                             // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Points;                                                   // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSocialPresenceEntry
// 0x0038
struct FYSocialPresenceEntry
{
	EYSocialGameStateType                              State;                                                    // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     squadId;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                squadSize;                                                // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     socialRowId;                                              // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                prospectorLevelXP;                                        // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YSocialProfileEntry
// 0x0088
struct FYSocialProfileEntry
{
	struct FString                                     internalUserId;                                           // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     epicId;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Username;                                                 // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYSocialPresenceEntry                       presence;                                                 // 0x0030(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FString                                     productUserId;                                            // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetCompletedContractsResult
// 0x0010
struct FYGetCompletedContractsResult
{
	TArray<struct FString>                             contractsIds;                                             // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YCurrencyItem
// 0x0018
struct FYCurrencyItem
{
	struct FString                                     currencyName;                                             // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Amount;                                                   // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YUserCurrenciesItems
// 0x0020
struct FYUserCurrenciesItems
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      currencies;                                               // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUpdatedFactionProgression
// 0x0028
struct FYUpdatedFactionProgression
{
	struct FString                                     m_userId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_faction;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_factionProgression;                                     // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YModItems
// 0x0010
struct FYModItems
{
	TArray<int>                                        M;                                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YItemOriginBackend
// 0x0030
struct FYItemOriginBackend
{
	struct FString                                     T;                                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     P;                                                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     G;                                                        // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YCustomItemInfo
// 0x00A0
struct FYCustomItemInfo
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     baseItemId;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                primaryVanityId;                                          // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                secondaryVanityId;                                        // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Amount;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                durability;                                               // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYModItems                                  modData;                                                  // 0x0030(0x0010) (CPF_NativeAccessSpecifierPublic)
	struct FString                                     insurance;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     insuranceOwnerPlayfabId;                                  // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     insuredAttachmentId;                                      // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYItemOriginBackend                         Origin;                                                   // 0x0070(0x0030) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YInstanceUpdateAmount
// 0x0018
struct FYInstanceUpdateAmount
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Amount;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YPlayerReward
// 0x0018
struct FYPlayerReward
{
	struct FString                                     RewardId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Amount;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYPlayerRewardSource                               Source;                                                   // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct BackendModels.YShopOffer
// 0x0018
struct FYShopOffer
{
	struct FString                                     shopOfferRowId;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYPurchaseOfferState                               purchaseState;                                            // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YStoreRotationData
// 0x0018
struct FYStoreRotationData
{
	struct FString                                     StoreId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   expirationData;                                           // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YFriendAction
// 0x0018
struct FYFriendAction
{
	struct FString                                     internalUserId;                                           // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYFriendState                                      stateToChangeTo;                                          // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YFriendActionResponse
// 0x0038
struct FYFriendActionResponse
{
	struct FString                                     errorMessage;                                             // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OperationId;                                              // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     targetUserId;                                             // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYFriendActionResult                               Result;                                                   // 0x0030(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YInsuredAttachment
// 0x0028
struct FYInsuredAttachment
{
	struct FString                                     m_baseItemInstanceId;                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_attachmentId;                                           // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_modShortId;                                             // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YMissionProgressionUpdated
// 0x0048
struct FYMissionProgressionUpdated
{
	struct FString                                     m_userId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_currentMissionID;                                       // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_progress;                                               // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FYCustomItemInfo>                    m_rewards;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      m_updatedCurrencies;                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerQuarterStatus
// 0x0010
struct FYPlayerQuarterStatus
{
	int                                                Level;                                                    // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FYTimestamp                                 upgradeStartedTime;                                       // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YTechTreeNodeStatus
// 0x0020
struct FYTechTreeNodeStatus
{
	struct FString                                     nodeId;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FYTimestamp                                 upgradeStartedTime;                                       // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YCurrency
// 0x0004
struct FYCurrency
{
	int                                                hardCurrency;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerSeasonGrant
// 0x0038
struct FYPlayerSeasonGrant
{
	int                                                Level;                                                    // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     grantRowId;                                               // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     grantId;                                                  // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     seasonRowId;                                              // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerSeasonGrants
// 0x0020
struct FYPlayerSeasonGrants
{
	struct FString                                     seasonRowId;                                              // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayerSeasonGrant>                 grants;                                                   // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerSeasonsData
// 0x0038
struct FYPlayerSeasonsData
{
	struct FName                                       seasonRowId;                                              // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     startDateTime;                                            // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     endDateTime;                                              // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                xp;                                                       // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               hasPaidPass;                                              // 0x0030(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YShopPromotion
// 0x0050
struct FYShopPromotion
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     shopPromotionRowId;                                       // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYPromotionType                                    promotionType;                                            // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     startDateTime;                                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                layoutIdx;                                                // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FString>                             shopOfferRowIds;                                          // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMutingState
// 0x0020
struct FYMutingState
{
	bool                                               m_isMuted;                                                // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              m_durationMuted;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              m_timeStartedMuted;                                       // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
	int                                                m_amountOfTimeMuted;                                      // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYMuteReason                                       m_reason;                                                 // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct BackendModels.YAttachment
// 0x0028
struct FYAttachment
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYAttachmentType                                   attachmentType;                                           // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     attachmentTypeId;                                         // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YBackendInsuranceInvoice
// 0x0020
struct FYBackendInsuranceInvoice
{
	TArray<struct FYCurrencyItem>                      costs;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             itemInstanceIds;                                          // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YBackendInsuredAttachment
// 0x0028
struct FYBackendInsuredAttachment
{
	struct FString                                     baseItemInstanceId;                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     attachmentId;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                modShortId;                                               // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YBackendInsuredAttachments
// 0x0010
struct FYBackendInsuredAttachments
{
	TArray<struct FYBackendInsuredAttachment>          attachments;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YBackendInsurancePayoutPackage
// 0x0028
struct FYBackendInsurancePayoutPackage
{
	bool                                               processingSeenByUser;                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               seenByUser;                                               // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                softCurrency;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    Items;                                                    // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               atLeastOneVoidedByOthers;                                 // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               atLeastOneVoidedBySquad;                                  // 0x0019(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	struct FYTimestamp                                 UnlockTimeUtc;                                            // 0x0020(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YBackendClaimInsurancePayoutPackageResult
// 0x0030
struct FYBackendClaimInsurancePayoutPackageResult
{
	int                                                Index;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FYBackendInsurancePayoutPackage             Package;                                                  // 0x0008(0x0028) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YBackendInsuranceClaims
// 0x0010
struct FYBackendInsuranceClaims
{
	TArray<struct FYBackendInsurancePayoutPackage>     packages;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YBackendInvalidateInsuranceResult
// 0x0010
struct FYBackendInvalidateInsuranceResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGameServerRequest
// 0x0010
struct FYGameServerRequest
{
	struct FString                                     secret;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YAttachmentInsuranceInfo
// 0x0028
struct FYAttachmentInsuranceInfo
{
	struct FString                                     insuredAttachmentId;                                      // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYInsuranceType                                    insurance;                                                // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     insuranceOwnerPlayfabId;                                  // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YBackendInvalidateInsuranceRequest
// 0x0030 (0x0040 - 0x0010)
struct FYBackendInvalidateInsuranceRequest : public FYGameServerRequest
{
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    Items;                                                    // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYAttachmentInsuranceInfo>           attachments;                                              // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YVanityMaterialItem
// 0x0018
struct FYVanityMaterialItem
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaterialIndex;                                            // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YCharacterVanity
// 0x00C0
struct FYCharacterVanity
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYVanityMaterialItem                        head_item;                                                // 0x0010(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FYVanityMaterialItem                        boots_item;                                               // 0x0028(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FYVanityMaterialItem                        chest_item;                                               // 0x0040(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FYVanityMaterialItem                        glove_item;                                               // 0x0058(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FYVanityMaterialItem                        base_suit_item;                                           // 0x0070(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FYVanityMaterialItem                        melee_weapon_item;                                        // 0x0088(0x0018) (CPF_NativeAccessSpecifierPublic)
	int                                                body_type;                                                // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FString                                     archetype_id;                                             // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                slot_index;                                               // 0x00B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YSetActiveCharacterVanityResponse
// 0x00C0
struct FYSetActiveCharacterVanityResponse
{
	struct FYCharacterVanity                           returnVanity;                                             // 0x0000(0x00C0) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugGrantAllVanityItemsRequest
// 0x0020
struct FYDebugGrantAllVanityItemsRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     vanityType;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetActiveCharacterVanityServerRequest
// 0x00D0 (0x00E0 - 0x0010)
struct FYSetActiveCharacterVanityServerRequest : public FYGameServerRequest
{
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYCharacterVanity                           desiredVanity;                                            // 0x0020(0x00C0) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetActiveCharacterVanityRequest
// 0x00C0
struct FYSetActiveCharacterVanityRequest
{
	struct FYCharacterVanity                           desiredVanity;                                            // 0x0000(0x00C0) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetActiveCharacterArchetypeResponse
// 0x00C8
struct FYSetActiveCharacterArchetypeResponse
{
	bool                                               success;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FYCharacterVanity                           returnVanity;                                             // 0x0008(0x00C0) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetActiveCharacterArchetypeRequest
// 0x0010
struct FYSetActiveCharacterArchetypeRequest
{
	struct FString                                     archetypeId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetCharacterVanityResponse
// 0x00D8
struct FYGetCharacterVanityResponse
{
	bool                                               success;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FYCharacterVanity                           returnVanity;                                             // 0x0008(0x00C0) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCharacterVanity>                   notActiveCharacterVanity;                                 // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetCharacterVanityServerRequest
// 0x0010 (0x0020 - 0x0010)
struct FYGetCharacterVanityServerRequest : public FYGameServerRequest
{
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetCharacterVanityRequest
// 0x0001
struct FYGetCharacterVanityRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugModifyUserSkills
// 0x0018
struct FYDebugModifyUserSkills
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                skill;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                deviation;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugResetAllFactionsProgressionResponse
// 0x0020
struct FYDebugResetAllFactionsProgressionResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugResetAllFactionsProgressionRequest
// 0x0001
struct FYDebugResetAllFactionsProgressionRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugAddFactionProgressResponse
// 0x0038
struct FYDebugAddFactionProgressResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     factionId;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                reputation;                                               // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugAddFactionProgressRequest
// 0x0018
struct FYDebugAddFactionProgressRequest
{
	struct FString                                     factionId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                reputationIncrement;                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugResetFactionProgressResponse
// 0x0038
struct FYDebugResetFactionProgressResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     factionId;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                reputation;                                               // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugResetFactionProgressRequest
// 0x0010
struct FYDebugResetFactionProgressRequest
{
	struct FString                                     factionId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSendInboxMessage
// 0x0028
struct FYDebugSendInboxMessage
{
	struct FString                                     messageRowId;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYAttachmentType                                   attachmentType;                                           // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     attachmentTypeRowId;                                      // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YClearInventory
// 0x0010
struct FBackendModels_FYClearInventory
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YInviteToSquadByNameResponse
// 0x0001
struct FYInviteToSquadByNameResponse
{
	EYSquadInviteResult                                Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YInviteToSquadByName
// 0x0010
struct FYInviteToSquadByName
{
	struct FString                                     targetName;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YResetSession
// 0x0010
struct FYResetSession
{
	struct FString                                     ServerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YShowCraftingMaterials
// 0x0010
struct FYShowCraftingMaterials
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRemoveAllCraftingMaterials
// 0x0010
struct FYRemoveAllCraftingMaterials
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetCraftingMaterialAmount
// 0x0028
struct FYSetCraftingMaterialAmount
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     materialName;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Amount;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YResetAllRooms
// 0x0001
struct FYResetAllRooms
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YRoomInfo
// 0x0040
struct FYRoomInfo
{
	struct FString                                     roomId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ServerId;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             Players;                                                  // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                   // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRooms
// 0x0020
struct FYRooms
{
	TArray<struct FYRoomInfo>                          waitingRooms;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYRoomInfo>                          playingRooms;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YListRooms
// 0x0001
struct FYListRooms
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YQueueDetails
// 0x0038
struct FYQueueDetails
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isRanked;                                                 // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Region;                                                   // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             Players;                                                  // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YQueueuingPlayers
// 0x0020
struct FYQueueuingPlayers
{
	TArray<struct FYQueueDetails>                      queues;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     exchangeActive;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YListQueues
// 0x0001
struct FYListQueues
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YForceStartResponse
// 0x0001
struct FYForceStartResponse
{
	EYForceStartResult                                 Error;                                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YForceStartMatch
// 0x0028
struct FYForceStartMatch
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isRanked;                                                 // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Region;                                                   // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YInventoryItems
// 0x0018
struct FYInventoryItems
{
	EYCheatResult                                      Status;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FYCustomItemInfo>                    Items;                                                    // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YShowItems
// 0x0010
struct FYShowItems
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YCheatResponse
// 0x0001
struct FYCheatResponse
{
	EYCheatResult                                      Status;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugResetPlayerResult
// 0x0018
struct FYDebugResetPlayerResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               success;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugResetPlayerRequest
// 0x0010
struct FYDebugResetPlayerRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugResetAllGeneratorsResult
// 0x0018
struct FYDebugResetAllGeneratorsResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYCheatResult                                      Status;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugResetAllGenerators
// 0x0010
struct FYDebugResetAllGenerators
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugResetGeneratorResult
// 0x0028
struct FYDebugResetGeneratorResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     generatorId;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYCheatResult                                      Status;                                                   // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugResetGenerator
// 0x0020
struct FYDebugResetGenerator
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     generatorId;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugResetTechTreeResult
// 0x0018
struct FYDebugResetTechTreeResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYCheatResult                                      Status;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugResetTechTree
// 0x0010
struct FBackendModels_FYDebugResetTechTree
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSetTechTreeNodeEntry
// 0x0018
struct FYDebugSetTechTreeNodeEntry
{
	struct FString                                     nodeId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugSetTechTreeNodeLevelResult
// 0x0028
struct FYDebugSetTechTreeNodeLevelResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYDebugSetTechTreeNodeEntry>         nodesThatChanged;                                         // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	EYCheatResult                                      Status;                                                   // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugSetTechTreeNodeLevel
// 0x0020
struct FBackendModels_FYDebugSetTechTreeNodeLevel
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYDebugSetTechTreeNodeEntry>         nodesToChange;                                            // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSetPlayerQuartersLevelResult
// 0x0018
struct FYDebugSetPlayerQuartersLevelResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYCheatResult                                      Status;                                                   // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugSetPlayerQuartersLevel
// 0x0018
struct FBackendModels_FYDebugSetPlayerQuartersLevel
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugSetBagLimit
// 0x0018
struct FBackendModels_FYDebugSetBagLimit
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                bagLimit;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugSetStashLimit
// 0x0018
struct FBackendModels_FYDebugSetStashLimit
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                stashLimit;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YRemoveAllCustomItems
// 0x0010
struct FYRemoveAllCustomItems
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRemoveCustomItem
// 0x0020
struct FYRemoveCustomItem
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugAddCustomItem
// 0x0020
struct FYDebugAddCustomItem
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     baseItemId;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YLiveEventModifier
// 0x0020
struct FYLiveEventModifier
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YLiveEventModifiersConfiguration
// 0x0010
struct FYLiveEventModifiersConfiguration
{
	TArray<struct FYLiveEventModifier>                 liveEventModifiers;                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YLiveEventModifiersConfigurationRequest
// 0x0001
struct FYLiveEventModifiersConfigurationRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YTournamentDataUpdatedPushMessage
// 0x0018
struct FYTournamentDataUpdatedPushMessage
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isAllowed;                                                // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YTournamentDataRemoveUser
// 0x0010
struct FYTournamentDataRemoveUser
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YTournamentDataAddUser
// 0x0010
struct FYTournamentDataAddUser
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YTournamentDataResponse
// 0x0018
struct FYTournamentDataResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isAllowed;                                                // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YTournamentDataRequest
// 0x0010
struct FYTournamentDataRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YConfigurationKickUser
// 0x0010
struct FYConfigurationKickUser
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGameModeConfig
// 0x0005
struct FYGameModeConfig
{
	EYMatchmakeGameModeType                            m_gameModeType;                                           // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_isRanked;                                               // 0x0001(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_isEnabled;                                              // 0x0002(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_isAlwaysVisible;                                        // 0x0003(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_isTournamentMode;                                       // 0x0004(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YConfigEntry
// 0x0020
struct FYConfigEntry
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     jsonData;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YClientConfiguration
// 0x0030
struct FYClientConfiguration
{
	struct FString                                     surveyLink;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYConfigEntry>                       dataTablesData;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     matchmakingExchange;                                      // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YClientConfiguratonUpdated
// 0x0030
struct FYClientConfiguratonUpdated
{
	struct FYClientConfiguration                       config;                                                   // 0x0000(0x0030) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMapData
// 0x0018
struct FYMapData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                weight;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YMapRotationData
// 0x0010
struct FYMapRotationData
{
	TArray<struct FYMapData>                           maps;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGameModeConfigEntry
// 0x0038
struct FYGameModeConfigEntry
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ranked;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     jsonData;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYMapRotationData                           mapRotationData;                                          // 0x0028(0x0010) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGameModeConfigurationUpdated
// 0x0038
struct FYGameModeConfigurationUpdated
{
	struct FYGameModeConfigEntry                       updatedData;                                              // 0x0000(0x0038) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YConfigurationUpdated
// 0x0028
struct FYConfigurationUpdated
{
	EYUpdateCategory                                   Category;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FYConfigEntry                               Data;                                                     // 0x0008(0x0020) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YConfiguration
// 0x0010
struct FYConfiguration
{
	TArray<struct FYGameModeConfigEntry>               GameModes;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetClientConfiguration
// 0x0001
struct FYGetClientConfiguration
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetConfiguration
// 0x0001
struct FYGetConfiguration
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YUpdatePlayerActiveContractsResult
// 0x0020
struct FYUpdatePlayerActiveContractsResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YContractProgressData
// 0x0020
struct FYContractProgressData
{
	struct FString                                     contractId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        newProgress;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUpdatePlayerActiveContractsRequest
// 0x0020 (0x0030 - 0x0010)
struct FYUpdatePlayerActiveContractsRequest : public FYGameServerRequest
{
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYContractProgressData>              contractsProgress;                                        // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YActiveContractPlayerData
// 0x0020
struct FYActiveContractPlayerData
{
	struct FString                                     contractId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        progress;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YFactionContractData
// 0x0010
struct FYFactionContractData
{
	struct FString                                     contractId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YFactionContractsData
// 0x0020
struct FYFactionContractsData
{
	struct FString                                     factionId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYFactionContractData>               contracts;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YFactionsContractsData
// 0x0018
struct FYFactionsContractsData
{
	TArray<struct FYFactionContractsData>              boards;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYTimestamp                                 lastBoardRefreshTimeUtc;                                  // 0x0010(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetPlayerContractsResult
// 0x0050
struct FYGetPlayerContractsResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYActiveContractPlayerData>          activeContracts;                                          // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYFactionsContractsData                     factionsContracts;                                        // 0x0030(0x0018) (CPF_NativeAccessSpecifierPublic)
	int                                                refreshHours24UtcFromBackend;                             // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetActiveContractsResult
// 0x0030
struct FYGetActiveContractsResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYActiveContractPlayerData>          contracts;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetActiveContractsRequest
// 0x0010 (0x0020 - 0x0010)
struct FYGetActiveContractsRequest : public FYGameServerRequest
{
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerFactionProgressData
// 0x0018
struct FYPlayerFactionProgressData
{
	struct FString                                     factionId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                currentProgression;                                       // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YClaimCompletedActiveContractRewardsResult
// 0x00A0
struct FYClaimCompletedActiveContractRewardsResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     claimedContractId;                                        // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     newContractIdOnBoard;                                     // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    ItemsGranted;                                             // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    itemsUpdatedOrRemoved;                                    // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYPlayerFactionProgressData                 playerFactionProgressData;                                // 0x0070(0x0018) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYActiveContractPlayerData>          contractsActivated;                                       // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	EYClaimContractRewardsStatus                       Status;                                                   // 0x0098(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                updatedSeasonXp;                                          // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YClaimCompletedActiveContractRewardsRequest
// 0x0020
struct FYClaimCompletedActiveContractRewardsRequest
{
	struct FString                                     contractId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             contractsToUnlock;                                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YCancelActiveContractResult
// 0x0030
struct FYCancelActiveContractResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     contractId;                                               // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YCancelActiveContractRequest
// 0x0010
struct FYCancelActiveContractRequest
{
	struct FString                                     contractId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerContractsInfoUpdated
// 0x0028
struct FYPlayerContractsInfoUpdated
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYFactionContractsData>              factionsContracts;                                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYTimestamp                                 lastBoardRefreshTimeUtc;                                  // 0x0020(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YActiveContractsInfoUpdated
// 0x0020
struct FYActiveContractsInfoUpdated
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYActiveContractPlayerData>          activeContracts;                                          // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YActivateContractResult
// 0x0058
struct FYActivateContractResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYActiveContractPlayerData                  activatedContract;                                        // 0x0030(0x0020) (CPF_NativeAccessSpecifierPublic)
	EYActivateContractRequestStatus                    Status;                                                   // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YActivateContractRequest
// 0x0010
struct FYActivateContractRequest
{
	struct FString                                     contractId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YActiveContractAndCorrespondingFaction
// 0x0020
struct FYActiveContractAndCorrespondingFaction
{
	struct FString                                     contractId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     factionId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugForceRefreshContractsBoardsResult
// 0x0048
struct FYDebugForceRefreshContractsBoardsResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYActiveContractPlayerData>          activeContracts;                                          // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYFactionsContractsData                     factionsContracts;                                        // 0x0030(0x0018) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugForceRefreshContractsBoardsRequest
// 0x0001
struct FYDebugForceRefreshContractsBoardsRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugClearSpecificCompletedContractResult
// 0x0020
struct FYDebugClearSpecificCompletedContractResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugClearSpecificCompletedContractRequest
// 0x0020
struct FYDebugClearSpecificCompletedContractRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     contractId;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugClearAllCompletedContractsResult
// 0x0020
struct FYDebugClearAllCompletedContractsResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugClearAllCompletedContractsRequest
// 0x0010
struct FYDebugClearAllCompletedContractsRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugRemoveAllActiveContractsResult
// 0x0030
struct FYDebugRemoveAllActiveContractsResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             cancelledContractsIds;                                    // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugRemoveAllActiveContractsRequest
// 0x0010
struct FYDebugRemoveAllActiveContractsRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugGivePlayerContractRewardsResult
// 0x0068
struct FYDebugGivePlayerContractRewardsResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     contractId;                                               // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    itemsGrantedOrUpdated;                                    // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYPlayerFactionProgressData                 playerFactionProgressData;                                // 0x0050(0x0018) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugGivePlayerContractRewardsRequest
// 0x0020
struct FYDebugGivePlayerContractRewardsRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     contractId;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSetActiveContractProgressResult
// 0x0048
struct FYDebugSetActiveContractProgressResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     contractId;                                               // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                newProgress;                                              // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FYCustomItemInfo>                    updatedItems;                                             // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSetActiveContractProgressRequest
// 0x0028
struct FYDebugSetActiveContractProgressRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     contractId;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                objectiveIndex;                                           // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                newProgress;                                              // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugActivateContractResult
// 0x0058
struct FYDebugActivateContractResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYActiveContractPlayerData                  activatedContract;                                        // 0x0030(0x0020) (CPF_NativeAccessSpecifierPublic)
	EYActivateContractRequestStatus                    Status;                                                   // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugActivateContractRequest
// 0x0020
struct FYDebugActivateContractRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     contractId;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YItemCurrentlyBeingCrafted
// 0x0018
struct FYItemCurrentlyBeingCrafted
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYTimestamp                                 utcTimestampWhenCraftingStarted;                          // 0x0010(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRepairItemResult
// 0x0040
struct FYRepairItemResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    changedItems;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRepairItemRequest
// 0x0010
struct FYRepairItemRequest
{
	struct FString                                     instanceId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSellItemsClientResult
// 0x0068
struct FYSellItemsClientResult
{
	struct FString                                     Error;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             scrappedItemIds;                                          // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    changedItems;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYPlayerFactionProgressData                 playerFactionProgressionData;                             // 0x0050(0x0018) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSellInventoryUpdate
// 0x0030
struct FYSellInventoryUpdate
{
	TArray<struct FString>                             itemsToRemove;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    itemsToAdd;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    itemsToUpdateAmount;                                      // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSellItemsClientRequest
// 0x0050
struct FYSellItemsClientRequest
{
	TArray<struct FString>                             ids;                                                      // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     factionId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYSellInventoryUpdate                       inventoryUpdateData;                                      // 0x0020(0x0030) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YCraftedItemData
// 0x0020
struct FYCraftedItemData
{
	TArray<struct FYCustomItemInfo>                    itemsGrantedOrUpdated;                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     blueprintName;                                            // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSkipItemCraftingClientResult
// 0x0050
struct FYSkipItemCraftingClientResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYCraftedItemData                           craftedItemData;                                          // 0x0020(0x0020) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSkipItemCraftingClientRequest
// 0x0001
struct FYSkipItemCraftingClientRequest
{
	bool                                               useOptionalCosts;                                         // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStopItemCraftingClientResult
// 0x0040
struct FYStopItemCraftingClientResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYCraftedItemData                           craftedItemData;                                          // 0x0020(0x0020) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStopItemCraftingClientRequest
// 0x0001
struct FYStopItemCraftingClientRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YStartItemCraftingClientResult
// 0x0050
struct FYStartItemCraftingClientResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    changedItems;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             deletedItemsIds;                                          // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStartItemCraftingClientRequest
// 0x0010
struct FYStartItemCraftingClientRequest
{
	struct FString                                     baseItemId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPurchaseWeaponShopItemResult
// 0x0068
struct FYPurchaseWeaponShopItemResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    itemsGrantedOrUpdated;                                    // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                itemRarity;                                               // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                purchaseAmount;                                           // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     blueprintName;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     shopItemBelongsTo;                                        // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPurchaseWeaponShopItemRequest
// 0x0038
struct FYPurchaseWeaponShopItemRequest
{
	struct FString                                     blueprintName;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                blueprintRarity;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                purchaseAmount;                                           // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     baseItemId;                                               // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     shopItemBelongsTo;                                        // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugRevokeEntitlement
// 0x0010
struct FYDebugRevokeEntitlement
{
	struct FString                                     entitlementName;                                          // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugClearEntitlements
// 0x0010
struct FYDebugClearEntitlements
{
	struct FString                                     epicAccountId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YEntitlements
// 0x0010
struct FYEntitlements
{
	TArray<struct FName>                               entitlements;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YFetchEntitlements
// 0x0020
struct FYFetchEntitlements
{
	struct FString                                     epicAccountId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     epicAccessToken;                                          // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUserData
// 0x0030
struct FYUserData
{
	struct FString                                     epicId;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Username;                                                 // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetUsersDataResponse
// 0x0018
struct FYGetUsersDataResponse
{
	TArray<struct FYUserData>                          usersData;                                                // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	EYResponse                                         Result;                                                   // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetUsersDataByNamesRequest
// 0x0010
struct FYGetUsersDataByNamesRequest
{
	TArray<struct FString>                             userNames;                                                // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetUsersDataByUserIdsRequest
// 0x0010
struct FYGetUsersDataByUserIdsRequest
{
	TArray<struct FString>                             userIds;                                                  // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetUsersDataByEpicIdsRequest
// 0x0010
struct FYGetUsersDataByEpicIdsRequest
{
	TArray<struct FString>                             epicIds;                                                  // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetFactionsProgressionResult
// 0x0010
struct FYGetFactionsProgressionResult
{
	TArray<struct FYPlayerFactionProgressData>         factions;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetFactionsProgressionRequest
// 0x0020
struct FYGetFactionsProgressionRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetFortunaPassDailyResetTimeResult
// 0x0020
struct FYSetFortunaPassDailyResetTimeResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetFortunaPassDailyResetTimeRequest
// 0x0008
struct FYSetFortunaPassDailyResetTimeRequest
{
	struct FYTimestamp                                 minutesToReset;                                           // 0x0000(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestFortunaPassSkipToLevelRequest
// 0x0004
struct FYRequestFortunaPassSkipToLevelRequest
{
	int                                                Level;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestFortunaPassSkipToLevelResult
// 0x0028
struct FYRequestFortunaPassSkipToLevelResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYFortunaPassToastReponseType                      errorType;                                                // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                updatedAurumBalance;                                      // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSetFortunaPassPremiumUnlockRequest
// 0x0001
struct FYDebugSetFortunaPassPremiumUnlockRequest
{
	bool                                               newState;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestUnlockFortunaPassPremiumTrackResult
// 0x0028
struct FYRequestUnlockFortunaPassPremiumTrackResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYFortunaPassToastReponseType                      errorType;                                                // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                updatedAurumBalance;                                      // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestUnlockFortunaPassPremiumTrackRequest
// 0x0001
struct FYRequestUnlockFortunaPassPremiumTrackRequest
{
	bool                                               withSkipLevels;                                           // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YFortunaPassClaimRewardsRequest
// 0x0050
struct FYFortunaPassClaimRewardsRequest
{
	TSet<struct FName>                                 rewardsIds;                                               // 0x0000(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YFortunaPassClaimRewardsResult
// 0x0048
struct FYFortunaPassClaimRewardsResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYFortunaPassToastReponseType                      errorType;                                                // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FYCustomItemInfo>                    GrantedItems;                                             // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YResetFortunaPassActionsCapPlayerResult
// 0x0020
struct FYResetFortunaPassActionsCapPlayerResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YResetFortunaPassActionsCapPlayerRequest
// 0x0001
struct FYResetFortunaPassActionsCapPlayerRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YCompletedActionUserData
// 0x0018
struct FYCompletedActionUserData
{
	struct FString                                     ActionId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumOfTimesActionCompleted;                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YCompletedActionsUserData
// 0x0058
struct FYCompletedActionsUserData
{
	TMap<struct FString, struct FYCompletedActionUserData> actions;                                                  // 0x0000(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FYTimestamp                                 lastDailyCapResetTimeUtc;                                 // 0x0050(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStoreUpdatedPlayerActionsDediResult
// 0x0080
struct FYStoreUpdatedPlayerActionsDediResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                totalSeasonXp;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FYCompletedActionsUserData                  updatedActions;                                           // 0x0028(0x0058) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStoreUpdatedPlayerActionsDediRequest
// 0x0070 (0x0080 - 0x0010)
struct FYStoreUpdatedPlayerActionsDediRequest : public FYGameServerRequest
{
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYCompletedActionsUserData                  progressedOrNewActions;                                   // 0x0020(0x0058) (CPF_NativeAccessSpecifierPublic)
	int                                                gainedSeasonXp;                                           // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YPassiveGenerator
// 0x0018
struct FYPassiveGenerator
{
	struct FString                                     generatorId;                                              // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYTimestamp                                 lastClaimTime;                                            // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPassiveGeneratorCrateResultsReceived
// 0x0038
struct FYPassiveGeneratorCrateResultsReceived
{
	struct FYPassiveGenerator                          Source;                                                   // 0x0000(0x0018) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      currencies;                                               // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    customItems;                                              // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPassiveGeneratorsUpdated
// 0x0020
struct FYPassiveGeneratorsUpdated
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPassiveGenerator>                  updatedGenerators;                                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YClaimGeneratorIncomeClientResult
// 0x0058
struct FYClaimGeneratorIncomeClientResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     generatorId;                                              // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrenciesBalances;                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    GrantedItems;                                             // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYTimestamp                                 lastClaimTime;                                            // 0x0050(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YClaimGeneratorIncomeClientRequest
// 0x0010
struct FYClaimGeneratorIncomeClientRequest
{
	struct FString                                     generatorId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGlobalVanityData
// 0x0090
struct FYGlobalVanityData
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYVanityMaterialItem>                bannerItems;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYVanityMaterialItem                        deathEmote_item;                                          // 0x0020(0x0018) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYVanityMaterialItem>                normalEmoteItems;                                         // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYVanityMaterialItem                        droppod_item;                                             // 0x0048(0x0018) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYVanityMaterialItem>                sprayItems;                                               // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYVanityMaterialItem                        pet_item;                                                 // 0x0070(0x0018) (CPF_NativeAccessSpecifierPublic)
	int                                                slot_index;                                               // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YGlobalVanityUpdateResultData
// 0x0098
struct FYGlobalVanityUpdateResultData
{
	EYUpdateGlobalVanityResult                         returnResult;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FYGlobalVanityData                          globalVanity;                                             // 0x0008(0x0090) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugUpdateGlobalVanityData
// 0x0028
struct FYDebugUpdateGlobalVanityData
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                       // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                variation;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YUpdateGlobalVanity
// 0x0028
struct FYUpdateGlobalVanity
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                       // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                variation;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Slot;                                                     // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetPlayerGlobalVanity
// 0x0010
struct FYGetPlayerGlobalVanity
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YActiveGlobalVanity
// 0x0020
struct FYActiveGlobalVanity
{
	TArray<struct FString>                             activeGlobalVanityIds;                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     droppodId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSetActiveGlobalVanityResponse
// 0x0030
struct FYDebugSetActiveGlobalVanityResponse
{
	struct FYActiveGlobalVanity                        activeVanity;                                             // 0x0000(0x0020) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    updatedVanityItems;                                       // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetActiveGlobalVanityResponse
// 0x0020
struct FYSetActiveGlobalVanityResponse
{
	struct FYActiveGlobalVanity                        activeVanity;                                             // 0x0000(0x0020) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetActiveGlobalVanityServerRequest
// 0x0030 (0x0040 - 0x0010)
struct FYSetActiveGlobalVanityServerRequest : public FYGameServerRequest
{
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYActiveGlobalVanity                        activeVanity;                                             // 0x0020(0x0020) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetActiveGlobalVanityRequest
// 0x0020
struct FYSetActiveGlobalVanityRequest
{
	struct FYActiveGlobalVanity                        activeVanity;                                             // 0x0000(0x0020) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetActiveGlobalVanityResponse
// 0x0020
struct FYGetActiveGlobalVanityResponse
{
	struct FYActiveGlobalVanity                        activeVanity;                                             // 0x0000(0x0020) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetActiveGlobalVanityServerRequest
// 0x0010 (0x0020 - 0x0010)
struct FYGetActiveGlobalVanityServerRequest : public FYGameServerRequest
{
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetActiveGlobalVanityRequest
// 0x0001
struct FYGetActiveGlobalVanityRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetGlobalVanity
// 0x0010
struct FYGetGlobalVanity
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGrant
// 0x0028
struct FYGrant
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     grantRowId;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYClaimGrantState                                  claimState;                                               // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YClaimGrantsResponseInfo
// 0x0030
struct FYClaimGrantsResponseInfo
{
	EYClaimGrantResult                                 claimGrantResult;                                         // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FYGrant                                     grant;                                                    // 0x0008(0x0028) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YClaimGrantsResponse
// 0x0010
struct FYClaimGrantsResponse
{
	TArray<struct FYClaimGrantsResponseInfo>           claimGrantsResponseInfos;                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YClaimGrants
// 0x0010
struct FYClaimGrants
{
	TArray<struct FString>                             grantIds;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGrantsData
// 0x0010
struct FYGrantsData
{
	TArray<struct FYGrant>                             grants;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetGrantsData
// 0x0001
struct FYGetGrantsData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YGrantEntry
// 0x0020
struct FYGrantEntry
{
	EYGrantType                                        m_grantType;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         m_grantTypeRowHandle;                                     // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                m_amount;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YGrantRow
// 0x0018 (0x0020 - 0x0008)
struct FYGrantRow : public FTableRowBase
{
	TArray<struct FYGrantEntry>                        m_grants;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               m_autoClaim;                                              // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YUpdateReadStateResponse
// 0x0020
struct FYUpdateReadStateResponse
{
	EYUpdateReadStateResult                            returnResult;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     messageId;                                                // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               hasRead;                                                  // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YUpdateReadState
// 0x0018
struct FYUpdateReadState
{
	struct FString                                     messageId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               hasRead;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YInboxMessageRemoved
// 0x0010
struct FYInboxMessageRemoved
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YInboxMessage
// 0x0040
struct FYInboxMessage
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     inboxMessageRowId;                                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYAttachment>                        attachments;                                              // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FYTimestamp                                 receivedDate;                                             // 0x0030(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               hasRead;                                                  // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YInboxMessagesDataUpdated
// 0x0010
struct FYInboxMessagesDataUpdated
{
	TArray<struct FYInboxMessage>                      inboxMessages;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetInboxMessagesData
// 0x0001
struct FYGetInboxMessagesData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YEntitlementRow
// 0x0030 (0x0038 - 0x0008)
struct FYEntitlementRow : public FTableRowBase
{
	struct FString                                     m_entitlementName;                                        // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         m_messageId;                                              // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>                 m_grants;                                                 // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YInboxMessageRow
// 0x0090 (0x0098 - 0x0008)
struct FYInboxMessageRow : public FTableRowBase
{
	EYInboxMessageType                                 m_messageType;                                            // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_autoOpen;                                               // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   m_bannerImage;                                            // 0x0010(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       m_sender;                                                 // 0x0038(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FText                                       m_subject;                                                // 0x0058(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FText                                       m_message;                                                // 0x0078(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestCheatUpgradeNode
// 0x0010
struct FYRequestCheatUpgradeNode
{
	struct FString                                     nodeId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YModifyCustomItemResult
// 0x0038
struct FYModifyCustomItemResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               success;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FYCustomItemInfo>                    itemsUpdated;                                             // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             itemsRemoved;                                             // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YModifyCustomItem
// 0x00C0
struct FYModifyCustomItem
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYCustomItemInfo                            itemToUpdate;                                             // 0x0010(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FString                                     modIdUsed;                                                // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUpdateCustomItemsResult
// 0x0018
struct FYUpdateCustomItemsResult
{
	bool                                               success;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     UserId;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUpdateCustomItemsRequest
// 0x0020
struct FYUpdateCustomItemsRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    itemsToUpdate;                                            // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerSet
// 0x0070
struct FYPlayerSet
{
	struct FString                                     shield;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     helmet;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     weaponOne;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     weaponTwo;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     bag;                                                      // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     bagItemsAsJsonStr;                                        // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     safeItemsAsJsonStr;                                       // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerSetItemsEntry
// 0x0080
struct FYPlayerSetItemsEntry
{
	struct FYPlayerSet                                 SetData;                                                  // 0x0000(0x0070) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    Items;                                                    // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetUpdated
// 0x0090
struct FYSetUpdated
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYPlayerSetItemsEntry                       newSet;                                                   // 0x0010(0x0080) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUpdateMatchInventoryRequest
// 0x00E8 (0x00F8 - 0x0010)
struct FYUpdateMatchInventoryRequest : public FYGameServerRequest
{
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYCompleteInventoryUpdateReason                    Reason;                                                   // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FYPlayerSet                                 newSet;                                                   // 0x0028(0x0070) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    itemsToAdd;                                               // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    itemsToUpdateAmount;                                      // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             itemsToRemove;                                            // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             itemsToProcessInsurance;                                  // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             attachmentsInsuredByOwner;                                // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYAttachmentInsuranceInfo>           attachmentsInsuredByOthers;                               // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUpdateInventoryResultBase
// 0x00C8
struct FYUpdateInventoryResultBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     UserId;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYPlayerSet                                 newSet;                                                   // 0x0028(0x0070) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    itemsAdded;                                               // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             itemsUpdated;                                             // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             itemsRemoved;                                             // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUpdateMatchInventoryResult
// 0x0000 (0x00C8 - 0x00C8)
struct FYUpdateMatchInventoryResult : public FYUpdateInventoryResultBase
{

};

// ScriptStruct BackendModels.YUpdateStationInventoryResult
// 0x0000 (0x00C8 - 0x00C8)
struct FYUpdateStationInventoryResult : public FYUpdateInventoryResultBase
{

};

// ScriptStruct BackendModels.YUpdateStationInventoryRequest
// 0x00A0
struct FYUpdateStationInventoryRequest
{
	struct FYPlayerSet                                 newSet;                                                   // 0x0000(0x0070) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    itemsToAdd;                                               // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    itemsToUpdateAmount;                                      // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             itemsToRemove;                                            // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRemoveInventoryItemRequest
// 0x0020
struct FYRemoveInventoryItemRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             itemIdsToRemove;                                          // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetPlayerSetsResult
// 0x0018
struct FYGetPlayerSetsResult
{
	bool                                               success;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FYPlayerSetItemsEntry>               entries;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetPlayersSets
// 0x0010
struct FYGetPlayersSets
{
	TArray<struct FString>                             userIds;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetUsersCurrenciesResult
// 0x0018
struct FYGetUsersCurrenciesResult
{
	EYGetUsersCurrenciesResult                         Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FYUserCurrenciesItems>               currencyItems;                                            // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetUsersCurrencies
// 0x0010
struct FYGetUsersCurrencies
{
	TArray<struct FString>                             userIds;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetUserCharacterVisualizationData
// 0x0010
struct FYGetUserCharacterVisualizationData
{
	TArray<struct FString>                             UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YVanityBackendItemInfo
// 0x0018
struct FYVanityBackendItemInfo
{
	struct FString                                     vanity_id;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Amount;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YLoreBackendItemInfo
// 0x0018
struct FYLoreBackendItemInfo
{
	struct FString                                     loreItemId;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Amount;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YInventory
// 0x0060
struct FYInventory
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYUserCurrenciesItems                       Currency;                                                 // 0x0010(0x0020) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    Items;                                                    // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYVanityBackendItemInfo>             vanity;                                                   // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYLoreBackendItemInfo>               loreItems;                                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YInventoryUpdated
// 0x0060
struct FYInventoryUpdated
{
	struct FYInventory                                 Inventory;                                                // 0x0000(0x0060) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YVanityClearCustomItem
// 0x0028
struct FYVanityClearCustomItem
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     custom_id;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                slotId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YVanityAmountUpdatedData
// 0x0010
struct FYVanityAmountUpdatedData
{
	TArray<struct FYVanityBackendItemInfo>             updatedVanityItems;                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YVanityUpdateAmountResultData
// 0x0018
struct FYVanityUpdateAmountResultData
{
	EYVanityUpdateResult                               returnResult;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FYVanityAmountUpdatedData                   vanityAmountUpdated;                                      // 0x0008(0x0010) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YVanitySetCustomItemResultData
// 0x0038
struct FYVanitySetCustomItemResultData
{
	EYVanityUpdateResult                               return_result;                                            // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     UserId;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    updated_items;                                            // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYVanityBackendItemInfo>             updated_vanity_items;                                     // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YVanitySetCustomItemData
// 0x0038
struct FYVanitySetCustomItemData
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     custom_id;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     vanity_id;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                slotId;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YCharacterVanityUpdateArchetype
// 0x0020
struct FYCharacterVanityUpdateArchetype
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     archetype_id;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YCharacterCustomizationSetCharacterSlot
// 0x0018
struct FYCharacterCustomizationSetCharacterSlot
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                requested_slot;                                           // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YCharacterVanityResetAppearance
// 0x0010
struct FYCharacterVanityResetAppearance
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YCharacterVanityUpdateBodyPart
// 0x0038
struct FYCharacterVanityUpdateBodyPart
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                       // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                material_index;                                           // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     archetypeId;                                              // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YLoreItemsAdded
// 0x0010
struct FYLoreItemsAdded
{
	TArray<struct FYLoreBackendItemInfo>               loreItems;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YItemsRemoved
// 0x0020
struct FYItemsRemoved
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             removedItems;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YBagLimitUpdated
// 0x0018
struct FYBagLimitUpdated
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                bagLimit;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YStashLimitUpdated
// 0x0018
struct FYStashLimitUpdated
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                stashLimit;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YItemsUpdated
// 0x0020
struct FYItemsUpdated
{
	TArray<struct FYCustomItemInfo>                    updatedItems;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YCurrenciesUpdated
// 0x0020
struct FYCurrenciesUpdated
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      updatedCurrencies;                                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetAllPlayfabUserDataResult
// 0x0018
struct FYGetAllPlayfabUserDataResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               success;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetAllPlayfabUserData
// 0x0010
struct FYGetAllPlayfabUserData
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerQuartersLevelResultData
// 0x0020
struct FYPlayerQuartersLevelResultData
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FYTimestamp                                 upgradeStartedTime;                                       // 0x0018(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetPlayerQuartersLevel
// 0x0010
struct FYGetPlayerQuartersLevel
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetPlayerInventoriesResult
// 0x0018
struct FYGetPlayerInventoriesResult
{
	bool                                               success;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FYInventory>                         entries;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerInventoryLimitResultData
// 0x0020
struct FYPlayerInventoryLimitResultData
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                inventoryStashLimit;                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                inventoryBagLimit;                                        // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                inventorySafeLimit;                                       // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetPlayerInventoriesLimitsResult
// 0x0018
struct FYGetPlayerInventoriesLimitsResult
{
	bool                                               success;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FYPlayerInventoryLimitResultData>    entries;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YItemMetaData
// 0x0028
struct FYItemMetaData
{
	int                                                A;                                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                D;                                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     I;                                                        // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     IO;                                                       // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YInventoryInfoUserEntry
// 0x0008
struct FYInventoryInfoUserEntry
{
	int                                                inventoryStashLimit;                                      // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                inventoryBagLimit;                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugOnPlayerLoginTOCMigrationRequest
// 0x0010
struct FYDebugOnPlayerLoginTOCMigrationRequest
{
	struct FString                                     epicId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YOnPlayerLoginTOCMigrationResponse
// 0x0001
struct FYOnPlayerLoginTOCMigrationResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YOnPlayerLoginTOCMigrationRequest
// 0x0010
struct FYOnPlayerLoginTOCMigrationRequest
{
	struct FString                                     epicId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetPlayerInventories
// 0x0010
struct FYGetPlayerInventories
{
	TArray<struct FString>                             userIds;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetPlayerInventoryLimit
// 0x0010
struct FYGetPlayerInventoryLimit
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetInventory
// 0x0010
struct FYGetInventory
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YItemAmountToUpdateData
// 0x0001
struct FYItemAmountToUpdateData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YMetaDefaultItemDataTableRow
// 0x0028 (0x0030 - 0x0008)
struct FYMetaDefaultItemDataTableRow : public FTableRowBase
{
	EYDefaultItemSlot                                  Slot;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         default_vanity;                                           // 0x0010(0x0010) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         default_secondary_vanity;                                 // 0x0020(0x0010) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YItemStatOldValNewVal
// 0x000C
struct FYItemStatOldValNewVal
{
	int                                                m_itemStatType;                                           // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_currentVal;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_newVal;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YVanityData
// 0x0008
struct FYVanityData
{
	int                                                P;                                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                S;                                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugGrantItemResponse
// 0x0030
struct FYDebugGrantItemResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    updatedItems;                                             // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugGrantItemRequest
// 0x0020
struct FYDebugGrantItemRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugGrantVanityResponse
// 0x0030
struct FYDebugGrantVanityResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    updatedVanityItems;                                       // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugGrantVanityRequest
// 0x0020
struct FYDebugGrantVanityRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     vanityId;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugRemoveAllItemsFromPlayerResponse
// 0x0030
struct FYDebugRemoveAllItemsFromPlayerResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    returnedItems;                                            // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugRemoveAllItemsFromPlayerRequest
// 0x0010
struct FYDebugRemoveAllItemsFromPlayerRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugRemoveAllMaterialsFromPlayerResponse
// 0x0030
struct FYDebugRemoveAllMaterialsFromPlayerResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    returnedMaterials;                                        // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugRemoveAllMaterialsFromPlayerRequest
// 0x0010
struct FYDebugRemoveAllMaterialsFromPlayerRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSetAllCraftingMaterialsAmountResponse
// 0x0030
struct FYDebugSetAllCraftingMaterialsAmountResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    changedMaterials;                                         // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSetAllCraftingMaterialsAmount
// 0x0018
struct FYDebugSetAllCraftingMaterialsAmount
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                materialAmount;                                           // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugSetCraftingMaterialAmountResponse
// 0x0030
struct FYDebugSetCraftingMaterialAmountResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    changedMaterial;                                          // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSetCraftingMaterialAmount
// 0x0028
struct FYDebugSetCraftingMaterialAmount
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     materialName;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                materialAmount;                                           // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugVanityUpdateAmount
// 0x0028
struct FYDebugVanityUpdateAmount
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     vanity_id;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Amount;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugGiveCurrenciesResult
// 0x0020
struct FYDebugGiveCurrenciesResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      updatedCurrencies;                                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugGiveCurrenciesRequest
// 0x0030
struct FYDebugGiveCurrenciesRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     userPlatform;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      currencies;                                               // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUserStatisticsEntry
// 0x0018
struct FYUserStatisticsEntry
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Value;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YMatchmakingDebugSessionUserInfo
// 0x0048
struct FYMatchmakingDebugSessionUserInfo
{
	struct FString                                     SessionId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     mapName;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                playersCount;                                             // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               allowsJoinDueToStorm;                                     // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               activeDeathCooldown;                                      // 0x0025(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isBeginnerSession;                                        // 0x0026(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
	int64_t                                            transitionTime;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                   // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYMatchServerSocialAdmissionType                   socialAdmissionType;                                      // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                nvr;                                                      // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMatchmakingListDebugUserInfoResult
// 0x0048
struct FYMatchmakingListDebugUserInfoResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                userNVR;                                                  // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FYUserStatisticsEntry>               Statistics;                                               // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               isBeginner;                                               // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FYMatchmakingDebugSessionUserInfo>   matchmakingSessionsUserInfo;                              // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                dataTableDeathCooldownMinutes;                            // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               dataTableBeginnerFlagEnabled;                             // 0x0044(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               featureToggleSplitSoloAndSquadMatchesEnabled;             // 0x0045(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
};

// ScriptStruct BackendModels.YEmptyRequest
// 0x0001
struct FYEmptyRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YResetSessionsAndCreateNewRequestResult
// 0x0001
struct FYResetSessionsAndCreateNewRequestResult
{
	bool                                               success;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YResetSessionsAndCreateNewRequestRequest
// 0x0020
struct FYResetSessionsAndCreateNewRequestRequest
{
	struct FString                                     desiredRegion;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                shutdownType;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                newStationServers;                                        // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                newMatchServers;                                          // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YRequestMaintenanceModeStateResult
// 0x0001
struct FYRequestMaintenanceModeStateResult
{
	bool                                               Enabled;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestIsPlayerStillOnBattleServerResult
// 0x0018
struct FYRequestIsPlayerStillOnBattleServerResult
{
	bool                                               isStillOnBattleServer;                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     infoStillOnBattleServer;                                  // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGameInfo
// 0x0038
struct FYGameInfo
{
	struct FString                                     roomId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     matchMap;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               hasSquads;                                                // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               beginnerServer;                                           // 0x0031(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               allowBIEvents;                                            // 0x0032(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isRanked;                                                 // 0x0033(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               useReplicationGraph;                                      // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct BackendModels.YRequestServerMapResult
// 0x0038
struct FYRequestServerMapResult
{
	struct FYGameInfo                                  GameInfo;                                                 // 0x0000(0x0038) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestServerMapRequest
// 0x0010 (0x0020 - 0x0010)
struct FYRequestServerMapRequest : public FYGameServerRequest
{
	struct FString                                     SessionId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YServerUpdateConnectedPlayerResult
// 0x0002
struct FYServerUpdateConnectedPlayerResult
{
	EYUserStateChangeType                              userState;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               transactionSuccess;                                       // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YServerUpdateConnectedPlayer
// 0x0028 (0x0038 - 0x0010)
struct FYServerUpdateConnectedPlayer : public FYGameServerRequest
{
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYUserStateChangeType                              userState;                                                // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YRefreshSessionMatchmakingNVRRequest
// 0x0020
struct FYRefreshSessionMatchmakingNVRRequest
{
	struct FString                                     SessionId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             userIds;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMatchConnectionData
// 0x0038
struct FYMatchConnectionData
{
	struct FString                                     addr;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ServerId;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               connectSinglePlayer;                                      // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isMatch;                                                  // 0x0031(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct BackendModels.YRequestServerSessionStateResult
// 0x0040
struct FYRequestServerSessionStateResult
{
	struct FYMatchConnectionData                       connectionData;                                           // 0x0000(0x0038) (CPF_NativeAccessSpecifierPublic)
	int                                                retryCounter;                                             // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               canGoToSession;                                           // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               shouldCancel;                                             // 0x003D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct BackendModels.YRequestServerSessionStateRequest
// 0x0018
struct FYRequestServerSessionStateRequest
{
	struct FString                                     SessionId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                amountRequests;                                           // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YEnterMatchmakingResult
// 0x0028
struct FYEnterMatchmakingResult
{
	bool                                               success;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               maintenanceMode;                                          // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               singleplayerStation;                                      // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                numAttempts;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                             // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YEnterMatchAzureFunction
// 0x0058
struct FYEnterMatchAzureFunction
{
	struct FString                                     optimalRegion;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isMatch;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     mapName;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     squad_id;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYPurchaseInsuranceRequest                  purchaseInsuranceRequest;                                 // 0x0038(0x0018) (CPF_NativeAccessSpecifierPublic)
	bool                                               bypassMaintenanceMode;                                    // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugEnterMatchAzureFunction
// 0x0008 (0x0060 - 0x0058)
struct FYDebugEnterMatchAzureFunction : public FYEnterMatchAzureFunction
{
	EYMatchmakingDebugOption                           debugOption;                                              // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetQueueStatisticsResult
// 0x0008
struct FYGetQueueStatisticsResult
{
	int                                                m_usersSearching;                                         // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              m_averageSearchTime;                                      // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetQueueStatistics
// 0x0001
struct FYGetQueueStatistics
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YEnterMatchResult
// 0x0040
struct FYEnterMatchResult
{
	bool                                               m_succeeded;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     m_matchTicket;                                            // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_ip;                                                     // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_region;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_port;                                                   // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YEnterMatch
// 0x0010
struct FYEnterMatch
{
	struct FString                                     m_matchTicket;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPollMatchmakingStateResult
// 0x0028
struct FYPollMatchmakingStateResult
{
	EYPlayfabMatchmakingState                          m_state;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     m_matchmakingTicket;                                      // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_matchTicket;                                            // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPollMatchmakingState
// 0x0001
struct FYPollMatchmakingState
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YClientAvgQueueTime
// 0x0004
struct FYClientAvgQueueTime
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YCancelMatchmakingAllDebug
// 0x0001
struct FYCancelMatchmakingAllDebug
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YCurrentQueueInfo
// 0x0028
struct FYCurrentQueueInfo
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                numPlayers;                                               // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                roomSize;                                                 // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YQueueDisbanded
// 0x0020
struct FYQueueDisbanded
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerMatched
// 0x0010
struct FYPlayerMatched
{
	struct FString                                     matchTicketId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMatchmakingResponse
// 0x0030
struct FYMatchmakingResponse
{
	EYMatchmakingResult                                Error;                                                    // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     GameMode;                                                 // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                   // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isRanked;                                                 // 0x0028(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                estimatedTimeSeconds;                                     // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMatchmakingRegionEndpointEntry
// 0x0020
struct FYMatchmakingRegionEndpointEntry
{
	struct FString                                     Region;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     endpoint;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRegionEndpoints
// 0x0010
struct FYRegionEndpoints
{
	TArray<struct FYMatchmakingRegionEndpointEntry>    entries;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMaintenanceModeState
// 0x0001
struct FYMaintenanceModeState
{
	bool                                               bypassMaintenanceMode;                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestRegionEndpoints
// 0x0001
struct FYRequestRegionEndpoints
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YNotifyUpdatedProfanitylist
// 0x0020
struct FYNotifyUpdatedProfanitylist
{
	TArray<struct FString>                             profanityList;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             regexProfanityList;                                       // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetProfanityList
// 0x0001
struct FYGetProfanityList
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YMutedNotification
// 0x0008
struct FYMutedNotification
{
	int                                                durationSeconds;                                          // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYMuteReason                                       Reason;                                                   // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct BackendModels.YMuteResult
// 0x0001
struct FYMuteResult
{
	EYMuteResult                                       Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMute
// 0x0018
struct FYMute
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                durationSeconds;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYMuteReason                                       Reason;                                                   // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct BackendModels.YAnnouncement
// 0x0018
struct FYAnnouncement
{
	struct FString                                     Msg;                                                      // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYChannelType                                      ChannelType;                                              // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YSquadMessage
// 0x0030
struct FYSquadMessage
{
	struct FString                                     from;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Msg;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     squadId;                                                  // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSendAnnouncement
// 0x0010
struct FYSendAnnouncement
{
	struct FString                                     Msg;                                                      // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YBroadcast
// 0x0020
struct FYBroadcast
{
	struct FString                                     from;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Msg;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YWhisper
// 0x0030
struct FYWhisper
{
	struct FString                                     from;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Msg;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     to;                                                       // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugResetActionsDailyCapXPResult
// 0x0020
struct FYDebugResetActionsDailyCapXPResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugResetActionsDailyCapXPRequest
// 0x0001
struct FYDebugResetActionsDailyCapXPRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugSetActionNumOfTimesExecutedResult
// 0x0030
struct FYDebugSetActionNumOfTimesExecutedResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     setActionId;                                              // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSetActionNumOfTimesExecutedRequest
// 0x0018
struct FYDebugSetActionNumOfTimesExecutedRequest
{
	struct FString                                     ActionId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                progress;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugResetActionNumOfTimesExecutedResult
// 0x0030
struct FYDebugResetActionNumOfTimesExecutedResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     resetActionId;                                            // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugResetActionNumOfTimesExecutedRequest
// 0x0010
struct FYDebugResetActionNumOfTimesExecutedRequest
{
	struct FString                                     ActionId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayFabPlayerProfile
// 0x0030
struct FYPlayFabPlayerProfile
{
	struct FString                                     AvatarUrl;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerId;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayfabExecuteCloudscriptMessage
// 0x0020
struct FYPlayfabExecuteCloudscriptMessage
{
	struct FString                                     m_functionName;                                           // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_jsonData;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayfabExecuteEventMessage
// 0x0080
struct FYPlayfabExecuteEventMessage
{
	struct FString                                     m_userId;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_service;                                                // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_eventName;                                              // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, int>                          m_keyToJsons;                                             // 0x0030(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YQueryFactionProgressionRequest
// 0x0001
struct FYQueryFactionProgressionRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YRerollDailyIncompleteChallengeResponse
// 0x00A0
struct FYRerollDailyIncompleteChallengeResponse
{
	bool                                               rerollWasSuccessful;                                      // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FYQuestState                                removedChallengeData;                                     // 0x0008(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FYQuestState                                newChallengeData;                                         // 0x0048(0x0040) (CPF_NativeAccessSpecifierPublic)
	int                                                playerNumOfRerollTokens;                                  // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     UserId;                                                   // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRerollDailyIncompleteChallengeClient
// 0x0010
struct FYRerollDailyIncompleteChallengeClient
{
	struct FString                                     challengeName;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSetCompositeProgress
// 0x0028
struct FYDebugSetCompositeProgress
{
	struct FString                                     parentQuestId;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     compositeName;                                            // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Count;                                                    // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Completed;                                                // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugStartMission
// 0x0020
struct FYDebugStartMission
{
	struct FString                                     missionArcId;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     missionId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugGiveRerollTokensResponse
// 0x0018
struct FYDebugGiveRerollTokensResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                playerNumOfRerollTokens;                                  // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugGiveRerollTokens
// 0x0004
struct FBackendModels_FYDebugGiveRerollTokens
{
	int                                                numOfTokensToGiveToThePlayer;                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugResetAllChallengesProgress
// 0x0001
struct FYDebugResetAllChallengesProgress
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugClearAllMissions
// 0x0001
struct FYDebugClearAllMissions
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugRerollDailyChallenges
// 0x0001
struct FBackendModels_FYDebugRerollDailyChallenges
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugRerollWeeklyChallenges
// 0x0001
struct FBackendModels_FYDebugRerollWeeklyChallenges
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YResetMission
// 0x0020
struct FYResetMission
{
	struct FString                                     missionArcId;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     missionId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetMissionAcknowledged
// 0x0020
struct FYSetMissionAcknowledged
{
	struct FString                                     missionArcId;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     missionId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetMissionActive
// 0x0038
struct FYSetMissionActive
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     missionArcId;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     missionId;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               newState;                                                 // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YMissionState
// 0x0028
struct FYMissionState
{
	struct FString                                     missionId;                                                // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     missionArcId;                                             // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Count;                                                    // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Completed;                                                // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsActive;                                                 // 0x0025(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               acknowledged;                                             // 0x0026(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               receivedReward;                                           // 0x0027(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YCompositeQuestProgress
// 0x0028
struct FYCompositeQuestProgress
{
	struct FString                                     parentQuestId;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     compositeName;                                            // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Count;                                                    // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Completed;                                                // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct BackendModels.YMissionUpdateDataEntry
// 0x0038
struct FYMissionUpdateDataEntry
{
	struct FYMissionState                              missionState;                                             // 0x0000(0x0028) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCompositeQuestProgress>            compositeProgress;                                        // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetMissionsCompleted
// 0x0020
struct FYSetMissionsCompleted
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYMissionUpdateDataEntry>            entries;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetMissionsCount
// 0x0020
struct FYSetMissionsCount
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYMissionUpdateDataEntry>            entries;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetMissionsResponse
// 0x0020
struct FYGetMissionsResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYMissionUpdateDataEntry>            missions;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMissionCompletedResult
// 0x0048
struct FYMissionCompletedResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     currentMissionID;                                         // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    rewards;                                                  // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      updatedCurrencies;                                        // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                progress;                                                 // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YRequestMissionCompleted
// 0x0010
struct FYRequestMissionCompleted
{
	struct FString                                     currentMissionID;                                         // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestActiveMissionResult
// 0x0028
struct FYRequestActiveMissionResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     currentMissionID;                                         // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                progress;                                                 // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugSetActiveOnboardingMissionRequest
// 0x0028
struct FYDebugSetActiveOnboardingMissionRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     currentMissionID;                                         // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                progress;                                                 // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               showPopup;                                                // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct BackendModels.YRequestActiveMission
// 0x0010
struct FYRequestActiveMission
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMissionUpdateResult
// 0x0048
struct FYMissionUpdateResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     currentMissionID;                                         // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    rewards;                                                  // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                progress;                                                 // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YRequestMissionUpdate
// 0x0048
struct FYRequestMissionUpdate
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     currentMissionID;                                         // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     currentStepName;                                          // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                progress;                                                 // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     currentRoomId;                                            // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugResetOnboaringProgress
// 0x0010
struct FYDebugResetOnboaringProgress
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerInfoUserDataEntry
// 0x000C
struct FYPlayerInfoUserDataEntry
{
	int                                                inventoryStashLimit;                                      // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                inventoryBagLimit;                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                inventorySafeLimit;                                       // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMissionProgressionInfo
// 0x0018
struct FYMissionProgressionInfo
{
	struct FString                                     currentMissionID;                                         // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                progress;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetMissions
// 0x0010
struct FYGetMissions
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YQuestsUpdatedMessage
// 0x0020
struct FYQuestsUpdatedMessage
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYQuestState>                        quests;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YQuestUpdateDataEntry
// 0x0028
struct FYQuestUpdateDataEntry
{
	struct FString                                     questId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     backendId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Count;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YSetQuestCompleted
// 0x0020
struct FYSetQuestCompleted
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYQuestUpdateDataEntry>              entries;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSetQuestsCount
// 0x0020
struct FYSetQuestsCount
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYQuestUpdateDataEntry>              entries;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetQuestsResponse
// 0x0028
struct FYGetQuestsResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYQuestState>                        quests;                                                   // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                playerNumOfRerollTokens;                                  // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetDailyChallengesResponse
// 0x0028
struct FYGetDailyChallengesResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYQuestState>                        quests;                                                   // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                playerNumOfRerollTokens;                                  // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetDailyChallengesClient
// 0x0001
struct FYGetDailyChallengesClient
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetQuestsClient
// 0x0001
struct FYGetQuestsClient
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetQuestsBS
// 0x0010
struct FYGetQuestsBS
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRewardsSent
// 0x0001
struct FYRewardsSent
{
	EYRewardResult                                     Status;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugGiveProspectorLevelXP
// 0x0004
struct FYDebugGiveProspectorLevelXP
{
	int                                                xpIncrement;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRewardProgression
// 0x0028
struct FYRewardProgression
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayerReward>                      factionProgressionRewards;                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                seasonXp;                                                 // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                prospectorLevelXP;                                        // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRewardInventory
// 0x0038
struct FYRewardInventory
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayerReward>                      Materials;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayerReward>                      currencies;                                               // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	EYPlayerRewardSource                               Source;                                                   // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugMatchHasEnded
// 0x0001
struct FBackendModels_FYDebugMatchHasEnded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YPreviousMatchHasEnded
// 0x0001
struct FYPreviousMatchHasEnded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YConnect
// 0x0020
struct FYConnect
{
	struct FString                                     addr;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     roomId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMatchHasEnded
// 0x0010
struct FYMatchHasEnded
{
	TArray<struct FString>                             users;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerLeftMatch
// 0x0010
struct FYPlayerLeftMatch
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerFinishedMatch
// 0x0010
struct FYPlayerFinishedMatch
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGameOver
// 0x0001
struct FYGameOver
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YRoomSquad
// 0x0020
struct FYRoomSquad
{
	struct FString                                     squadId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             users;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRoomPlayer
// 0x0020
struct FYRoomPlayer
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSquadModeInfo
// 0x0020
struct FYSquadModeInfo
{
	TArray<struct FYRoomSquad>                         squads;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYRoomPlayer>                        users;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSingleModeInfo
// 0x0010
struct FYSingleModeInfo
{
	TArray<struct FYRoomPlayer>                        users;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetRoomInfo
// 0x0010
struct FYGetRoomInfo
{
	struct FString                                     roomId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YMapLoaded
// 0x0001
struct FYMapLoaded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YServerCommand
// 0x0001
struct FYServerCommand
{
	EYServerCommand                                    Command;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YServerReady
// 0x0010
struct FYServerReady
{
	struct FString                                     networkAddress;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerSeasonGrantsChanged
// 0x0020
struct FYPlayerSeasonGrantsChanged
{
	struct FString                                     seasonRowId;                                              // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayerSeasonGrant>                 grants;                                                   // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerActiveSeasonChanged
// 0x0001
struct FYPlayerActiveSeasonChanged
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetPlayerSeasonGrants
// 0x0001
struct FYGetPlayerSeasonGrants
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetPlayerActiveSeason
// 0x0001
struct FYGetPlayerActiveSeason
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YUserStateChange
// 0x0038
struct FYUserStateChange
{
	EYUserStateChangeType                              m_stateChange;                                            // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     m_userId;                                                 // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_controllerName;                                         // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYUserStateChangeType                              m_playfabAckedState;                                      // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0029(0x000F) MISSED OFFSET
};

// ScriptStruct BackendModels.YStoreRotationDataResponse
// 0x0020
struct FYStoreRotationDataResponse
{
	struct FString                                     StoreId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     expirationData;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStoresRotationDataResponse
// 0x0050
struct FYStoresRotationDataResponse
{
	struct FYStoreRotationDataResponse                 dailyStoreData;                                           // 0x0000(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FYStoreRotationDataResponse                 weeklyStoreData;                                          // 0x0020(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YShopRelevantDataUpdated
// 0x0028
struct FYShopRelevantDataUpdated
{
	struct FYCurrency                                  Currency;                                                 // 0x0000(0x0004) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FYShopPromotion>                     shopPromotions;                                           // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYShopOffer>                         shopOffers;                                               // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSimulateDateTimeShop
// 0x0010
struct FYDebugSimulateDateTimeShop
{
	struct FString                                     DateTime;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugForceRotate
// 0x0001
struct FYDebugForceRotate
{
	EYPromotionType                                    rotationType;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugPurchaseOffer
// 0x0018
struct FBackendModels_FYDebugPurchaseOffer
{
	struct FString                                     shopOfferId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                quantity;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugAddCurrency
// 0x0004
struct FYDebugAddCurrency
{
	int                                                Value;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPurchaseShopOfferResponse
// 0x0030
struct FYPurchaseShopOfferResponse
{
	EYPurchaseOfferResult                              returnResult;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FYShopOffer                                 shopOffer;                                                // 0x0008(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FString                                     TransactionId;                                            // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPurchaseShopOffer
// 0x0018
struct FYPurchaseShopOffer
{
	struct FString                                     shopOfferId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                quantity;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetActiveOffers
// 0x0001
struct FYGetActiveOffers
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YActiveOffers
// 0x0010
struct FYActiveOffers
{
	TArray<struct FYShopOffer>                         shopOffers;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetActivePromotions
// 0x0001
struct FYGetActivePromotions
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YActivePromotions
// 0x0010
struct FYActivePromotions
{
	TArray<struct FYShopPromotion>                     shopPromotions;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetCurrencyResult
// 0x0008
struct FYGetCurrencyResult
{
	struct FYCurrency                                  Currency;                                                 // 0x0000(0x0004) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EYGetCurrencyResult                                Result;                                                   // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetCurrency
// 0x0001
struct FYGetCurrency
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YShopOfferRow
// 0x00F8 (0x0100 - 0x0008)
struct FYShopOfferRow : public FTableRowBase
{
	struct FString                                     m_epicOfferId;                                            // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       m_name;                                                   // 0x0018(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FText                                       m_description;                                            // 0x0038(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FText                                       m_flavor;                                                 // 0x0058(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FText                                       m_offerCategory;                                          // 0x0078(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   m_banner;                                                 // 0x0098(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYCurrencyType                                     m_currencyType;                                           // 0x00C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	int                                                m_price;                                                  // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYOfferRarity                                      m_offerRarity;                                            // 0x00C8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_isOneTimePurchase;                                      // 0x00C9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_isSeasonLevel;                                          // 0x00CA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5];                                       // 0x00CB(0x0005) MISSED OFFSET
	struct FDataTableRowHandle                         m_grantRowId;                                             // 0x00D0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         m_entitlementRowId;                                       // 0x00E0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             m_requiredOfferIds;                                       // 0x00F0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YShopPromotionRow
// 0x0038 (0x0040 - 0x0008)
struct FYShopPromotionRow : public FTableRowBase
{
	EYPromotionType                                    m_promotionType;                                          // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     m_startDateTime;                                          // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            m_utcStartDateTime;                                       // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_layoutIdx;                                              // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FDataTableRowHandle>                 m_shopOffers;                                             // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetSignalRConnectionResult
// 0x0020
struct FYGetSignalRConnectionResult
{
	struct FString                                     URL;                                                      // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AccessToken;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetSignalRConnection
// 0x0010
struct FYGetSignalRConnection
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSimplePlayerProfile
// 0x0020
struct FYSimplePlayerProfile
{
	struct FString                                     PlayFabId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPendingFriendRequestsResponse
// 0x0010
struct FYPendingFriendRequestsResponse
{
	TArray<struct FYSimplePlayerProfile>               invites;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YBaseSocialNotificationResponse
// 0x0020
struct FYBaseSocialNotificationResponse
{
	struct FString                                     PlayFabId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YBaseSocialResponse
// 0x0020
struct FYBaseSocialResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YBaseSocialRequest
// 0x0020
struct FYBaseSocialRequest
{
	struct FString                                     targetPlayFabId;                                          // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     screen;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugAddRandomFriendsResult
// 0x0001
struct FYDebugAddRandomFriendsResult
{
	EYSocialRequestResult                              Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugAddRandomFriends
// 0x0018
struct FYDebugAddRandomFriends
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Amount;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YExecuteFriendStateChangeUserName
// 0x0028
struct FYExecuteFriendStateChangeUserName
{
	struct FString                                     internalUserId;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Username;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYFriendState                                      stateToChangeTo;                                          // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugExecuteSocialPresence
// 0x0018
struct FYDebugExecuteSocialPresence
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYSocialGameStateType                              State;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YExecuteSocialPresenceStateResult
// 0x0018
struct FYExecuteSocialPresenceStateResult
{
	EYSocialRequestResult                              Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     UserId;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YExecuteSocialPresenceState
// 0x0018
struct FYExecuteSocialPresenceState
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYSocialGameStateType                              State;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugSocialNotification
// 0x0018
struct FYDebugSocialNotification
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Type;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YSocialPresenceUpdated
// 0x0048
struct FYSocialPresenceUpdated
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYSocialPresenceEntry                       entry;                                                    // 0x0010(0x0038) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerProfile
// 0x0028
struct FYPlayerProfile
{
	struct FString                                     internalUserId;                                           // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     rowId;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                prospectorLevelXP;                                        // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YSocialProfileUpdated
// 0x0028
struct FYSocialProfileUpdated
{
	struct FYPlayerProfile                             entry;                                                    // 0x0000(0x0028) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUpdatePlayerPresenceStateRequest
// 0x0001
struct FYUpdatePlayerPresenceStateRequest
{
	bool                                               inMatch;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YOnPlayerPresenceStateChangedEvent
// 0x0018
struct FYOnPlayerPresenceStateChangedEvent
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYSocialGameStateType                              presenceState;                                            // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YFriendEntry
// 0x0050
struct FYFriendEntry
{
	struct FString                                     internalUserId;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYFriendState                                      State;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FYSocialPresenceEntry                       presence;                                                 // 0x0018(0x0038) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSocialFriendStateUpdated
// 0x0060
struct FYSocialFriendStateUpdated
{
	struct FString                                     internalUserId;                                           // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYFriendEntry                               friendEntry;                                              // 0x0010(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSocialNotificationUpdate
// 0x00A0
struct FYSocialNotificationUpdate
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Type;                                                     // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FYSocialProfileEntry                        entry;                                                    // 0x0018(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugActionTowardsUserName
// 0x0028
struct FYDebugActionTowardsUserName
{
	struct FString                                     ownerInternalUserId;                                      // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     friendActionUserName;                                     // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                actionRequest;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YSearchSocialProfilesResult
// 0x0020
struct FYSearchSocialProfilesResult
{
	EYSocialRequestResult                              Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FYSocialProfileEntry>                entries;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                searchRequest;                                            // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               includePresence;                                          // 0x001C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct BackendModels.YSearchSocialProfiles
// 0x0018
struct FYSearchSocialProfiles
{
	struct FString                                     Username;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                searchRequest;                                            // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               includePresence;                                          // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetSocialProfilesResult
// 0x0020
struct FYGetSocialProfilesResult
{
	EYSocialRequestResult                              Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FYSocialProfileEntry>                entries;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               includePresence;                                          // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                requestHandle;                                            // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayFabFriend
// 0x0028
struct FYPlayFabFriend
{
	struct FString                                     FriendPlayFabId;                                          // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYFriendState                                      State;                                                    // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     TitleDisplayName;                                         // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayFabFriendWithState
// 0x0030
struct FYPlayFabFriendWithState
{
	struct FYPlayFabFriend                             PlayerInfo;                                               // 0x0000(0x0028) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	EYSocialGameStateType                              PlayerOnlineState;                                        // 0x0028(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YAcceptFriendRequestResult
// 0x0048
struct FYAcceptFriendRequestResult
{
	struct FYPlayFabFriendWithState                    friendInfo;                                               // 0x0000(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FString                                     OperationId;                                              // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYFriendActionResult                               Result;                                                   // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetSocialProfiles
// 0x0030
struct FYGetSocialProfiles
{
	TArray<struct FYPlatformEntry>                     entries;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               includePresence;                                          // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     contextString;                                            // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                requestHandle;                                            // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YFriendListUpdated
// 0x0020
struct FYFriendListUpdated
{
	struct FString                                     internalUserId;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYFriendEntry>                       updatedFriends;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YExecuteFriendStateChangeReturnData
// 0x0028
struct FYExecuteFriendStateChangeReturnData
{
	EYGetFriendListResult                              Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     internalUserId;                                           // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYFriendEntry>                       updatedFriends;                                           // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YExecuteFriendStateChange
// 0x0020
struct FYExecuteFriendStateChange
{
	struct FString                                     internalUserId;                                           // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYFriendAction>                      friendExecutionStates;                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUserFriendList
// 0x0020
struct FYUserFriendList
{
	TArray<struct FYFriendEntry>                       entries;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ownerFriendInternalUserId;                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetFriendListReturnData
// 0x0030
struct FYGetFriendListReturnData
{
	struct FString                                     internalUserId;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYUserFriendList                            friendList;                                               // 0x0010(0x0020) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YFriendActionUserName
// 0x0028
struct FYFriendActionUserName
{
	struct FString                                     desiredUserName;                                          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYFriendAction                              friendAction;                                             // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YAddFriendMessage
// 0x0038
struct FYAddFriendMessage
{
	bool                                               sendNotification;                                         // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FYPlayFabFriendWithState                    PlayFabFriendWithState;                                   // 0x0008(0x0030) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetUserFriendList
// 0x0010
struct FYGetUserFriendList
{
	struct FString                                     internalUserId;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSquadMemberReadyUpNotification
// 0x0048
struct FYSquadMemberReadyUpNotification
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYUserMatchmakingSettings                   matchmakingSettings;                                      // 0x0010(0x0038) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSquadMatchmakingReadyResponse
// 0x0002
struct FYSquadMatchmakingReadyResponse
{
	EYSquadActionResult                                Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isSquadReadyForMatch;                                     // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSquadMatchmakingReady
// 0x0048
struct FYSquadMatchmakingReady
{
	struct FString                                     squadId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYUserMatchmakingSettings                   matchmakingSettings;                                      // 0x0010(0x0038) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSquadMemberSelectedMap
// 0x0020
struct FYSquadMemberSelectedMap
{
	struct FString                                     squadId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     selectedMapName;                                          // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSquadInviteExpired
// 0x0020
struct FYSquadInviteExpired
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TargetId;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSquadDisbanded
// 0x0010
struct FYSquadDisbanded
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSquadSecretLeaderResponse
// 0x0001
struct FYSquadSecretLeaderResponse
{
	bool                                               isSecretLeader;                                           // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YLeaveSquadResponse
// 0x0001
struct FYLeaveSquadResponse
{
	EYSquadActionResult                                Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YLeaveSquad
// 0x0010
struct FBackendModels_FYLeaveSquad
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSquadInviteDeclined
// 0x0010
struct FYSquadInviteDeclined
{
	struct FString                                     TargetId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDeclineSquadInviteResponse
// 0x0018
struct FYDeclineSquadInviteResponse
{
	EYSquadActionResult                                Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     inviteId;                                                 // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDeclineSquadInvite
// 0x0010
struct FBackendModels_FYDeclineSquadInvite
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayFabSquadMember
// 0x0070
struct FYPlayFabSquadMember
{
	struct FYPlayFabPlayerProfile                      Profile;                                                  // 0x0000(0x0030) (CPF_NativeAccessSpecifierPublic)
	EYUserState                                        onlineState;                                              // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FYUserMatchmakingSettings                   matchmakingSettings;                                      // 0x0038(0x0038) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayFabSquad
// 0x0020
struct FYPlayFabSquad
{
	struct FString                                     squadId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayFabSquadMember>                Members;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSquadInviteResponse
// 0x0038
struct FYSquadInviteResponse
{
	EYSquadActionResult                                Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     inviteId;                                                 // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYPlayFabSquad                              squad;                                                    // 0x0018(0x0020) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YAcceptSquadInvite
// 0x0030
struct FBackendModels_FYAcceptSquadInvite
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     requesterPlayerId;                                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     squadId;                                                  // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSquadMemberBE
// 0x0018
struct FYSquadMemberBE
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYUserState                                        State;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YSquad
// 0x0020
struct FYSquad
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYSquadMemberBE>                     Members;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSquadUpdated
// 0x0020
struct FYSquadUpdated
{
	struct FYSquad                                     squad;                                                    // 0x0000(0x0020) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestUserStateUpdateBroadcastToFriends
// 0x0010
struct FYRequestUserStateUpdateBroadcastToFriends
{
	TArray<struct FString>                             Friends;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YClientUserInfo
// 0x0018
struct FYClientUserInfo
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYUserState                                        State;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                squadSize;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YUserInfosUpdated
// 0x0010
struct FYUserInfosUpdated
{
	TArray<struct FYClientUserInfo>                    clientUserInfos;                                          // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestUserInfos
// 0x0010
struct FYRequestUserInfos
{
	TArray<struct FString>                             userIds;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayFabBaseSquadRequest
// 0x0010
struct FYPlayFabBaseSquadRequest
{
	struct FString                                     squadId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayFabAcceptSquadInvite
// 0x0028
struct FYPlayFabAcceptSquadInvite
{
	struct FYPlayFabSquad                              squadInfo;                                                // 0x0000(0x0020) (CPF_NativeAccessSpecifierPublic)
	EYSquadActionResult                                Result;                                                   // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YSendSquadInviteResponse
// 0x0028
struct FYSendSquadInviteResponse
{
	EYSquadActionResult                                Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FYPlayFabSquad                              squadInfo;                                                // 0x0008(0x0020) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestCurrentSquadInfo
// 0x0001
struct FYRequestCurrentSquadInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YSquadInvite
// 0x0050
struct FYSquadInvite
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     fromId;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     requesterDisplayName;                                     // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TargetId;                                                 // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     squadId;                                                  // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPendingSquadInvites
// 0x0010
struct FYPendingSquadInvites
{
	TArray<struct FYSquadInvite>                       invites;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestPendingSquadInvites
// 0x0001
struct FYRequestPendingSquadInvites
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YSquadInviteAdded
// 0x0050
struct FYSquadInviteAdded
{
	struct FYSquadInvite                               invite;                                                   // 0x0000(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YInviteToSquadResponse
// 0x0058
struct FYInviteToSquadResponse
{
	EYSquadActionResult                                Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FYSquadInvite                               invite;                                                   // 0x0008(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerDisconnectNotification
// 0x0010
struct FYPlayerDisconnectNotification
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YInviteToSquad
// 0x0020
struct FYInviteToSquad
{
	struct FString                                     fromId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TargetId;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPersistentMatch
// 0x0080
struct FYPersistentMatch
{
	struct FString                                     ServerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     State;                                                    // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isMatch;                                                  // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     mapName;                                                  // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                   // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            transitionTime;                                           // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             userIds;                                                  // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             userNames;                                                // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YListPersistentMatchesResult
// 0x0010
struct FYListPersistentMatchesResult
{
	TArray<struct FYPersistentMatch>                   Results;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YListPersistentSessionRequestsResult
// 0x0008
struct FYListPersistentSessionRequestsResult
{
	bool                                               success;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                numServersShutdown;                                       // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugMatchmakingSetUserNVRRequest
// 0x0004
struct FYDebugMatchmakingSetUserNVRRequest
{
	int                                                nvr;                                                      // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugMatchmakingSetSessionNVRRequest
// 0x0018
struct FYDebugMatchmakingSetSessionNVRRequest
{
	struct FString                                     SessionId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                nvr;                                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YListPersistentSessionRequests
// 0x0010
struct FYListPersistentSessionRequests
{
	struct FString                                     desiredRegion;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YListPersistentMatches
// 0x0001
struct FYListPersistentMatches
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YPersistentSessionResetResult
// 0x0008
struct FYPersistentSessionResetResult
{
	bool                                               success;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                numServersShutdown;                                       // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPersistentSessionResetRequest
// 0x0010
struct FYPersistentSessionResetRequest
{
	struct FString                                     desiredRegion;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPersistentMatchReset
// 0x0010
struct FYPersistentMatchReset
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugRequestShardStationChange
// 0x0018
struct FYDebugRequestShardStationChange
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                shardIndex;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YRequestUserChangeStation
// 0x0048
struct FYRequestUserChangeStation
{
	struct FString                                     Context;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYMatchConnectionData                       connectData;                                              // 0x0010(0x0038) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestLeaveStationInfo
// 0x0018
struct FYRequestLeaveStationInfo
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isMatch;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YStationInfoProto
// 0x0040
struct FYStationInfoProto
{
	struct FString                                     stationInfo;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                numUsers;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     battleServerInfo;                                         // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             userIds;                                                  // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                shardIndex;                                               // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YServerReport
// 0x0010
struct FYServerReport
{
	TArray<struct FYStationInfoProto>                  infos;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YServerReportResult
// 0x0010
struct FYServerReportResult
{
	struct FYServerReport                              serverData;                                               // 0x0000(0x0010) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetServerStateReport
// 0x0001
struct FYGetServerStateReport
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YStationPingEntry
// 0x0020
struct FYStationPingEntry
{
	struct FString                                     Region;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     endpoint;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStationLoginUserEntry
// 0x0010
struct FYStationLoginUserEntry
{
	TArray<struct FYStationPingEntry>                  entries;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestStationConnectResult
// 0x0040
struct FYRequestStationConnectResult
{
	EYClientStationRequestResult                       Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FYMatchConnectionData                       connectData;                                              // 0x0008(0x0038) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStationUserPings
// 0x0018
struct FYStationUserPings
{
	struct FString                                     Region;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Ping;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YRequestStationConnect
// 0x0030
struct FYRequestStationConnect
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               isDevelopment;                                            // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FYStationUserPings>                  userPings;                                                // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               isMatch;                                                  // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YStationServerCommandResult
// 0x0018
struct FYStationServerCommandResult
{
	EYStationCommandResultType                         Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Context;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStationReadyResult
// 0x0010
struct FYStationReadyResult
{
	struct FString                                     serverAddress;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YServerUsersConnected
// 0x0010
struct FYServerUsersConnected
{
	TArray<struct FString>                             userIds;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStationServerPlayerLeft
// 0x0010
struct FYStationServerPlayerLeft
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YServerShutdown
// 0x0010
struct FYServerShutdown
{
	struct FString                                     Region;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStationServerReady
// 0x0010
struct FYStationServerReady
{
	struct FString                                     serverAddress;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStationMapLoaded
// 0x0001
struct FYStationMapLoaded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YReportEndOfMatchCheatStatisticsResponse
// 0x0028
struct FYReportEndOfMatchCheatStatisticsResponse
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Error;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ErrorCode;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YReportEndOfMatchCheatStatisticsRequest
// 0x0090 (0x00A0 - 0x0010)
struct FYReportEndOfMatchCheatStatisticsRequest : public FYGameServerRequest
{
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_01;                                       // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_02;                                       // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_03;                                       // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_04;                                       // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_05;                                       // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_06;                                       // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_07;                                       // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_08;                                       // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_09;                                       // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_11;                                       // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_cheatDetected_12;                                       // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                m_cheatDetected_13;                                       // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_14;                                       // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_cheatDetected_15;                                       // 0x0054(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                m_cheatDetected_16;                                       // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_17;                                       // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_18;                                       // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_19;                                       // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_20;                                       // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_21;                                       // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_22;                                       // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_23;                                       // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_24;                                       // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_25;                                       // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_26;                                       // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_27;                                       // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_28;                                       // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_29;                                       // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_30;                                       // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_31;                                       // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                m_cheatDetected_32;                                       // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YReportEndOfMatchStatisticsRequest
// 0x0028 (0x0038 - 0x0010)
struct FYReportEndOfMatchStatisticsRequest : public FYGameServerRequest
{
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYMatchOutcome                                     Outcome;                                                  // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                killsPlayers;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                killsCreatures;                                           // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                damagePlayers;                                            // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                damageCreatures;                                          // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                matchDurationMinutes;                                     // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerSkillData
// 0x0018
struct FYPlayerSkillData
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                skill;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                deviation;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YModifyPlayerSkillsResult
// 0x0018
struct FYModifyPlayerSkillsResult
{
	bool                                               succeeded;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FYPlayerSkillData>                   entries;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YModifySkillEntry
// 0x0018
struct FYModifySkillEntry
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                skill;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                deviation;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YModifyPlayerSkills
// 0x0010
struct FYModifyPlayerSkills
{
	TArray<struct FYModifySkillEntry>                  entries;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetPlayerSkillsResult
// 0x0018
struct FYGetPlayerSkillsResult
{
	bool                                               succeeded;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FYPlayerSkillData>                   Data;                                                     // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetPlayerSkills
// 0x0010
struct FYGetPlayerSkills
{
	TArray<struct FString>                             uniqueIds;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerRankedSeasonGamemodeData
// 0x0028
struct FYPlayerRankedSeasonGamemodeData
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                rank;                                                     // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                highestRank;                                              // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRankSeasonData
// 0x0020
struct FYRankSeasonData
{
	struct FString                                     seasonId;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayerRankedSeasonGamemodeData>    playersRankedSeasonData;                                  // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRankSeasonsData
// 0x0010
struct FYRankSeasonsData
{
	TArray<struct FYRankSeasonData>                    rankSeasons;                                              // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayersRankedSeasonData
// 0x0010
struct FYPlayersRankedSeasonData
{
	TArray<struct FYPlayerRankedSeasonGamemodeData>    playersRankedSeasonArray;                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerRankedGamemodeData
// 0x0018
struct FYPlayerRankedGamemodeData
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                rank;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                highestRank;                                              // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerRankedSeasonData
// 0x0020
struct FYPlayerRankedSeasonData
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayerRankedGamemodeData>          playerRankedGamemodesData;                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetBatchedRankedSeasonsResponse
// 0x0040
struct FYGetBatchedRankedSeasonsResponse
{
	struct FYRankSeasonsData                           hofData;                                                  // 0x0000(0x0010) (CPF_NativeAccessSpecifierPublic)
	struct FYPlayersRankedSeasonData                   topNPlayersActiveRankedSeason;                            // 0x0010(0x0010) (CPF_NativeAccessSpecifierPublic)
	struct FYPlayerRankedSeasonData                    localPlayerRankedSeasonData;                              // 0x0020(0x0020) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetBatchedRankedSeasonsRequest
// 0x0004
struct FYGetBatchedRankedSeasonsRequest
{
	int                                                numTopPlayers;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YClientSkillUpdated
// 0x0008
struct FYClientSkillUpdated
{
	int                                                skill;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                deviation;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPastSeasonSummary
// 0x0020
struct FYPastSeasonSummary
{
	struct FString                                     seasonId;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYPlayersRankedSeasonData                   Summary;                                                  // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerRankUpdatedForGameMode
// 0x0020
struct FYPlayerRankUpdatedForGameMode
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                oldRank;                                                  // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                newRank;                                                  // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                highestRank;                                              // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugCheckPastSeasonRewardsResponse
// 0x0001
struct FYDebugCheckPastSeasonRewardsResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugCheckPastSeasonRewards
// 0x0001
struct FYDebugCheckPastSeasonRewards
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugGiveSeasonRewardsResponse
// 0x0001
struct FYDebugGiveSeasonRewardsResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugGiveSeasonRewards
// 0x0001
struct FYDebugGiveSeasonRewards
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugResetPlayerAllGamemodesRankRequest
// 0x0001
struct FYDebugResetPlayerAllGamemodesRankRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YDebugResetPlayerGamemodeRankRequest
// 0x0010
struct FYDebugResetPlayerGamemodeRankRequest
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugSetPlayerGamemodeRankRequest
// 0x0018
struct FYDebugSetPlayerGamemodeRankRequest
{
	int                                                rank;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     GameMode;                                                 // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YDebugGivePlayerGamemodeRankRequest
// 0x0018
struct FYDebugGivePlayerGamemodeRankRequest
{
	int                                                rankIncrement;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     GameMode;                                                 // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetCompetitorsDataRequest
// 0x0008
struct FYGetCompetitorsDataRequest
{
	int                                                playersAbove;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                playersBelow;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetTopNPlayersNSeasonsRequest
// 0x0001
struct FYGetTopNPlayersNSeasonsRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetTopNPlayersActiveRankedSeasonRequest
// 0x0004
struct FYGetTopNPlayersActiveRankedSeasonRequest
{
	int                                                numTopPlayers;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGivePlayerSeasonGamemodeRankResponse
// 0x0001
struct FYGivePlayerSeasonGamemodeRankResponse
{
	bool                                               success;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGivePlayerSeasonGamemodeRankRequest
// 0x0028
struct FYGivePlayerSeasonGamemodeRankRequest
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                rankIncrement;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YGetPlayersActiveRankedSeasonBattleServerRequest
// 0x0020
struct FYGetPlayersActiveRankedSeasonBattleServerRequest
{
	TArray<struct FString>                             otherPlayersIds;                                          // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     playerOwnId;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetPlayersActiveRankedSeasonClientRequest
// 0x0010
struct FYGetPlayersActiveRankedSeasonClientRequest
{
	TArray<struct FString>                             otherPlayersIds;                                          // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayersRankedSeasonsData
// 0x0020
struct FYPlayersRankedSeasonsData
{
	TArray<struct FString>                             seasonIds;                                                // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayersRankedSeasonData>           playersRankedSeasonsArray;                                // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YRequestUserUnlockedTechTreeNodes
// 0x0010
struct FYRequestUserUnlockedTechTreeNodes
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerQuartersLevelUpdated
// 0x0020
struct FYPlayerQuartersLevelUpdated
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FYTimestamp                                 upgradeStartedTime;                                       // 0x0018(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YTechTreeNodesUpdated
// 0x0020
struct FYTechTreeNodesUpdated
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYTechTreeNodeStatus>                updatedNodes;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetPassiveGenerators
// 0x0010
struct FYGetPassiveGenerators
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YGetTechTreeNodes
// 0x0010
struct FYGetTechTreeNodes
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSkipTechTreeNodeUpgradeClientResult
// 0x0070
struct FYSkipTechTreeNodeUpgradeClientResult
{
	struct FString                                     Error;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYTechTreeNodeStatus                        upgradedNode;                                             // 0x0020(0x0020) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    changedItems;                                             // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             deletedItems;                                             // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSkipTechTreeNodeUpgradeClientRequest
// 0x0001
struct FYSkipTechTreeNodeUpgradeClientRequest
{
	bool                                               useOptionalCosts;                                         // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YTechTreeNodeUpgradePurchaseClientResult
// 0x0070
struct FYTechTreeNodeUpgradePurchaseClientResult
{
	struct FString                                     Error;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYTechTreeNodeStatus                        upgradedNode;                                             // 0x0020(0x0020) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    changedItems;                                             // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             deletedItems;                                             // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YTechTreeNodeUpgradePurchaseClientRequest
// 0x0001
struct FYTechTreeNodeUpgradePurchaseClientRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YStartTechTreeNodeUpgradeClientResult
// 0x0070
struct FYStartTechTreeNodeUpgradeClientResult
{
	struct FString                                     Error;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYTechTreeNodeStatus                        upgradedNode;                                             // 0x0020(0x0020) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    changedItems;                                             // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             deletedItems;                                             // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStartTechTreeNodeUpgradeClientRequest
// 0x0008
struct FYStartTechTreeNodeUpgradeClientRequest
{
	struct FName                                       nodeId;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSkipPlayerQuarterUpgradeClientResult
// 0x0060
struct FYSkipPlayerQuarterUpgradeClientResult
{
	struct FString                                     Error;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NewLevel;                                                 // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FYTimestamp                                 upgradeStartedTime;                                       // 0x0028(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    changedItems;                                             // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             deletedItems;                                             // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSkipPlayerQuarterUpgradeClientRequest
// 0x0001
struct FYSkipPlayerQuarterUpgradeClientRequest
{
	bool                                               useOptionalCosts;                                         // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerQuarterUpgradePurchaseClientResult
// 0x0060
struct FYPlayerQuarterUpgradePurchaseClientResult
{
	struct FString                                     Error;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NewLevel;                                                 // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FYTimestamp                                 upgradeStartedTime;                                       // 0x0028(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    changedItems;                                             // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             deletedItems;                                             // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YPlayerQuarterUpgradePurchaseClientRequest
// 0x0001
struct FYPlayerQuarterUpgradePurchaseClientRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YStartPlayerQuarterUpgradeClientResult
// 0x0060
struct FYStartPlayerQuarterUpgradeClientResult
{
	struct FString                                     Error;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UserId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NewLevel;                                                 // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FYTimestamp                                 upgradeStartedTime;                                       // 0x0028(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCurrencyItem>                      changedCurrencies;                                        // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    changedItems;                                             // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             deletedItems;                                             // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YStartPlayerQuarterUpgradeClientRequest
// 0x0001
struct FYStartPlayerQuarterUpgradeClientRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YTechTreeNodesStatuses
// 0x0020
struct FYTechTreeNodesStatuses
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYTechTreeNodeStatus>                nodes;                                                    // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YTwitchDropsClaimPackageResult
// 0x0028
struct FYTwitchDropsClaimPackageResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    GrantedItems;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	EYTwitchDropToastReponseType                       responseType;                                             // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct BackendModels.YTwitchDropsClaimPackageRequest
// 0x0010
struct FYTwitchDropsClaimPackageRequest
{
	struct FString                                     PackageId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YTwitchDropRewardResult
// 0x0010
struct FYTwitchDropRewardResult
{
	struct FString                                     ItemPlayfabId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YTwitchDropPackageResult
// 0x0038
struct FYTwitchDropPackageResult
{
	struct FString                                     PackageId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYTwitchDropRewardResult>            rewards;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DropId;                                                   // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FYTimestamp                                 UnlockTimeUtc;                                            // 0x0030(0x0008) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YTwitchDropDataResult
// 0x0010
struct FYTwitchDropDataResult
{
	TArray<struct FYTwitchDropPackageResult>           packages;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YSessionUserData
// 0x0020
struct FYSessionUserData
{
	struct FString                                     activeSessionId;                                          // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           utcLastTimeChanged;                                       // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                matchState;                                               // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct BackendModels.YVivoxSettingsData
// 0x0038
struct FYVivoxSettingsData
{
	struct FString                                     vivoxServer;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     vivoxDomain;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     vivoxIssuer;                                              // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct BackendModels.YVivoxJoinTokenRequest
// 0x0038
struct FYVivoxJoinTokenRequest
{
	struct FString                                     Username;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Channel;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EYChannelType                                      ChannelType;                                              // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               hasText;                                                  // 0x0021(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               hasAudio;                                                 // 0x0022(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
	struct FString                                     channelId;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YVivoxJoinData
// 0x0048
struct FYVivoxJoinData
{
	struct FYVivoxJoinTokenRequest                     Request;                                                  // 0x0000(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                    // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YVivoxGetServerSettings
// 0x0001
struct FYVivoxGetServerSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct BackendModels.YVivoxLoginTokenRequest
// 0x0010
struct FYVivoxLoginTokenRequest
{
	struct FString                                     Username;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct BackendModels.YVivoxLoginData
// 0x0020
struct FYVivoxLoginData
{
	struct FYVivoxLoginTokenRequest                    Request;                                                  // 0x0000(0x0010) (CPF_NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
