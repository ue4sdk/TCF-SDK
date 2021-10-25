#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Basic.hpp"
#include "TCF_BackendModels_classes.hpp"
#include "TCF_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct YAzureFunctionsUtils.YAzureFunctionResult
// 0x0048
struct FYAzureFunctionResult
{
	struct FString                                     m_jsonData;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_errorMessage;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_origin;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_sentJsonData;                                           // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_success;                                                // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct YAzureFunctionsUtils.YPlayfabRedeemCouponResult
// 0x0028
struct FYPlayfabRedeemCouponResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SUCCESS;                                                  // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FYCustomItemInfo>                    GrantedItems;                                             // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct YAzureFunctionsUtils.YPlayfabStoreItemEntry
// 0x0080
struct FYPlayfabStoreItemEntry
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     StoreId;                                                  // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Catalog;                                                  // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, int>                          virtualCurrencyPrices;                                    // 0x0030(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct YAzureFunctionsUtils.YPlayfabStoreItemsResult
// 0x0030
struct FYPlayfabStoreItemsResult
{
	struct FString                                     StoreId;                                                  // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     CatalogVersion;                                           // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYPlayfabStoreItemEntry>             storeItems;                                               // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct YAzureFunctionsUtils.YPlayfabUserAccountInfo
// 0x0020
struct FYPlayfabUserAccountInfo
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     userDisplayName;                                          // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct YAzureFunctionsUtils.YPendingDelegateExecution
// 0x0028
struct FYPendingDelegateExecution
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct YAzureFunctionsUtils.YPlayfabPurchaseItemResult
// 0x0038
struct FYPlayfabPurchaseItemResult
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SUCCESS;                                                  // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FString>                             grantedBundles;                                           // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FYCustomItemInfo>                    GrantedItems;                                             // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct YAzureFunctionsUtils.YPlayfabTitleDataRetrival
// 0x0050
struct FYPlayfabTitleDataRetrival
{
	TMap<struct FString, struct FString>               m_keyToData;                                              // 0x0000(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct YAzureFunctionsUtils.YSetUserDataResult
// 0x0001
struct FYSetUserDataResult
{
	bool                                               m_success;                                                // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct YAzureFunctionsUtils.YSetUserDataRequest
// 0x0068
struct FYSetUserDataRequest
{
	TMap<struct FString, struct FString>               m_keysValues;                                             // 0x0000(0x0050) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_playfabId;                                              // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_readOnly;                                               // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct YAzureFunctionsUtils.YGetUserDataResult
// 0x0050
struct FYGetUserDataResult
{
	TMap<struct FString, struct FString>               m_keyPair;                                                // 0x0000(0x0050) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct YAzureFunctionsUtils.YGetUserDataRequest
// 0x0028
struct FYGetUserDataRequest
{
	TArray<struct FString>                             m_keys;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     m_playfabId;                                              // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               m_readOnly;                                               // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
