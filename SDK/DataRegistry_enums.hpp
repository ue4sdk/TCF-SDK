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

// Enum DataRegistry.EDataRegistryAcquireStatus
enum class EDataRegistryAcquireStatus : uint8_t
{
	EDataRegistryAcquireStatus__NotStarted = 0,
	EDataRegistryAcquireStatus__WaitingForInitialAcquire = 1,
	EDataRegistryAcquireStatus__InitialAcquireFinished = 2,
	EDataRegistryAcquireStatus__WaitingForResources = 3,
	EDataRegistryAcquireStatus__AcquireFinished = 4,
	EDataRegistryAcquireStatus__AcquireError = 5,
	EDataRegistryAcquireStatus__DoesNotExist = 6,
	EDataRegistryAcquireStatus__EDataRegistryAcquireStatus_MAX = 7
};


// Enum DataRegistry.EMetaDataRegistrySourceAssetUsage
enum class EMetaDataRegistrySourceAssetUsage : uint8_t
{
	EMetaDataRegistrySourceAssetUsage__NoAssets = 0,
	EMetaDataRegistrySourceAssetUsage__SearchAssets = 1,
	EMetaDataRegistrySourceAssetUsage__RegisterAssets = 2,
	EMetaDataRegistrySourceAssetUsage__SearchAndRegisterAssets = 3,
	EMetaDataRegistrySourceAssetUsage__EMetaDataRegistrySourceAssetUsage_MAX = 4
};


// Enum DataRegistry.EDataRegistrySubsystemGetItemResult
enum class EDataRegistrySubsystemGetItemResult : uint8_t
{
	EDataRegistrySubsystemGetItemResult__Found = 0,
	EDataRegistrySubsystemGetItemResult__NotFound = 1,
	EDataRegistrySubsystemGetItemResult__EDataRegistrySubsystemGetItemResult_MAX = 2
};


// Enum DataRegistry.EDataRegistryAvailability
enum class EDataRegistryAvailability : uint8_t
{
	EDataRegistryAvailability__DoesNotExist = 0,
	EDataRegistryAvailability__Unknown = 1,
	EDataRegistryAvailability__Remote = 2,
	EDataRegistryAvailability__OnDisk = 3,
	EDataRegistryAvailability__LocalAsset = 4,
	EDataRegistryAvailability__PreCached = 5,
	EDataRegistryAvailability__EDataRegistryAvailability_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
