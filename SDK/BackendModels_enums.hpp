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

// Enum BackendModels.EYAttachmentType
enum class EYAttachmentType : uint8_t
{
	EYAttachmentType__NONE         = 0,
	EYAttachmentType__GRANT        = 1,
	EYAttachmentType__MAX          = 2
};


// Enum BackendModels.EYCharacterCustomizationUpdateResult
enum class EYCharacterCustomizationUpdateResult : uint8_t
{
	EYCharacterCustomizationUpdateResult__OK = 0,
	EYCharacterCustomizationUpdateResult__INVALID_ID = 1,
	EYCharacterCustomizationUpdateResult__UNKNOWN_ERROR = 2,
	EYCharacterCustomizationUpdateResult__EYCharacterCustomizationUpdateResult_MAX = 3
};


// Enum BackendModels.EYSquadInviteResult
enum class EYSquadInviteResult : uint8_t
{
	EYSquadInviteResult__OK        = 0,
	EYSquadInviteResult__TARGET_OFFLINE = 1,
	EYSquadInviteResult__INTERNAL_ERROR = 2,
	EYSquadInviteResult__EYSquadInviteResult_MAX = 3
};


// Enum BackendModels.EYForceStartResult
enum class EYForceStartResult : uint8_t
{
	EYForceStartResult__OK         = 0,
	EYForceStartResult__EMPTY_QUEUE = 1,
	EYForceStartResult__WRONG_GAME_MODE = 2,
	EYForceStartResult__EYForceStartResult_MAX = 3
};


// Enum BackendModels.EYCheatResult
enum class EYCheatResult : uint8_t
{
	EYCheatResult__OK              = 0,
	EYCheatResult__NO_SUCH_USER    = 1,
	EYCheatResult__NO_SUCH_ITEM    = 2,
	EYCheatResult__ALREADY_REMOVED = 3,
	EYCheatResult__NULL_CONTEXT    = 4,
	EYCheatResult__FAILED_REQ_DESERIALIZATION = 5,
	EYCheatResult__FAILED_GET_USERDATA = 6,
	EYCheatResult__WRONG_INPUT_DATA = 7,
	EYCheatResult__EYCheatResult_MAX = 8
};


// Enum BackendModels.EYMatchmakeGameModeType
enum class EYMatchmakeGameModeType : uint8_t
{
	EYMatchmakeGameModeType__NONE  = 0,
	EYMatchmakeGameModeType__SOLO  = 1,
	EYMatchmakeGameModeType__DUO   = 2,
	EYMatchmakeGameModeType__SQUAD = 3,
	EYMatchmakeGameModeType__MAX   = 4
};


// Enum BackendModels.EYUpdateCategory
enum class EYUpdateCategory : uint8_t
{
	EYUpdateCategory__GAME_MODES   = 0,
	EYUpdateCategory__GAME_MAX     = 1
};


// Enum BackendModels.EYClaimContractRewardsStatus
enum class EYClaimContractRewardsStatus : uint8_t
{
	EYClaimContractRewardsStatus__UNKNOWN_ERROR = 0,
	EYClaimContractRewardsStatus__CLAIMING_ONE_TIME_CONTRACT = 1,
	EYClaimContractRewardsStatus__FAILED_FACTION_PARSING = 2,
	EYClaimContractRewardsStatus__FAILED_GETTING_FACTION_PROGRESSION = 3,
	EYClaimContractRewardsStatus__FAILED_GETTING_STATIC_DATA = 4,
	EYClaimContractRewardsStatus__FAILED_GIVING_REWARDS = 5,
	EYClaimContractRewardsStatus__FAILED_REMOVAL_ACTIVE_CONTRACT = 6,
	EYClaimContractRewardsStatus__FAILED_SETTING_DATA = 7,
	EYClaimContractRewardsStatus__NO_ACTIVE_CONTRACT = 8,
	EYClaimContractRewardsStatus__NO_CONTRACTS_BOARDS_DATA_FOUND = 9,
	EYClaimContractRewardsStatus__NO_FACTION_DATA = 10,
	EYClaimContractRewardsStatus__STASH_FULL = 11,
	EYClaimContractRewardsStatus__STASH_LIMIT_NOT_FOUND = 12,
	EYClaimContractRewardsStatus__WRONG_CONTRACT_ID = 13,
	EYClaimContractRewardsStatus__WRONG_FACTION_ID = 14,
	EYClaimContractRewardsStatus__WRONG_FACTION_REP = 15,
	EYClaimContractRewardsStatus__PROGRESS_MISSING = 16,
	EYClaimContractRewardsStatus__FAILED_ACQUIRING_REDIS_LOCK = 17,
	EYClaimContractRewardsStatus__OK = 18,
	EYClaimContractRewardsStatus__MAX = 19
};


// Enum BackendModels.EYActivateContractRequestStatus
enum class EYActivateContractRequestStatus : uint8_t
{
	EYActivateContractRequestStatus__UNKNOWN_ERROR = 0,
	EYActivateContractRequestStatus__CONTRACT_OF_THIS_FACTION_IS_ALREADY_ACTIVE = 1,
	EYActivateContractRequestStatus__FAILED_GETTING_PROGRESS = 2,
	EYActivateContractRequestStatus__FAILED_GETTING_STATIC_DATA = 3,
	EYActivateContractRequestStatus__FAILED_STORING_CONTRACT = 4,
	EYActivateContractRequestStatus__NOT_ENOUGH_MONEY = 5,
	EYActivateContractRequestStatus__NO_ACTIVE_CONTRACT = 6,
	EYActivateContractRequestStatus__NO_CONTRACTS_BOARDS_DATA_FOUND = 7,
	EYActivateContractRequestStatus__WRONG_CONTRACT_ID = 8,
	EYActivateContractRequestStatus__WRONG_FACTION_ID = 9,
	EYActivateContractRequestStatus__WRONG_STORED_FACTION_ID = 10,
	EYActivateContractRequestStatus__ALREADY_ACTIVE = 11,
	EYActivateContractRequestStatus__NOT_UNLOCKED = 12,
	EYActivateContractRequestStatus__JOB_NOT_ON_BOARD = 13,
	EYActivateContractRequestStatus__OK = 14,
	EYActivateContractRequestStatus__MAX = 15
};


// Enum BackendModels.EYRepairItemResult
enum class EYRepairItemResult : uint8_t
{
	EYRepairItemResult__UNKNOWN_ERROR = 0,
	EYRepairItemResult__OK         = 1,
	EYRepairItemResult__NOT_ENOUGH_RESOURCES = 2,
	EYRepairItemResult__PLAYER_INVENTORY_NOT_FOUND = 3,
	EYRepairItemResult__WRONG_ITEMID = 4,
	EYRepairItemResult__WRONG_USERID = 5,
	EYRepairItemResult__MAX        = 6
};


// Enum BackendModels.EYStartItemCraftingResultStatus
enum class EYStartItemCraftingResultStatus : uint8_t
{
	EYStartItemCraftingResultStatus__UNKNOWN_ERROR = 0,
	EYStartItemCraftingResultStatus__OK = 1,
	EYStartItemCraftingResultStatus__STASH_FULL = 2,
	EYStartItemCraftingResultStatus__NOT_ENOUGH_RESOURCES = 3,
	EYStartItemCraftingResultStatus__MAX = 4
};


// Enum BackendModels.EYPurchaseWeaponShopItemStatus
enum class EYPurchaseWeaponShopItemStatus : uint8_t
{
	EYPurchaseWeaponShopItemStatus__UNKNOWN_ERROR = 0,
	EYPurchaseWeaponShopItemStatus__OK = 1,
	EYPurchaseWeaponShopItemStatus__NOT_ENOUGH_RESOURCES = 2,
	EYPurchaseWeaponShopItemStatus__PLAYER_INVENTORY_NOT_FOUND = 3,
	EYPurchaseWeaponShopItemStatus__RECIPE_DATA_NOT_FOUND = 4,
	EYPurchaseWeaponShopItemStatus__STASH_FULL = 5,
	EYPurchaseWeaponShopItemStatus__WRONG_ITEMID = 6,
	EYPurchaseWeaponShopItemStatus__WRONG_USERID = 7,
	EYPurchaseWeaponShopItemStatus__WRONG_SHOPITEMBELONGSTO = 8,
	EYPurchaseWeaponShopItemStatus__MAX = 9
};


// Enum BackendModels.EYResponse
enum class EYResponse : uint8_t
{
	EYResponse__OK                 = 0,
	EYResponse__UNKNOWN            = 1,
	EYResponse__EYResponse_MAX     = 2
};


// Enum BackendModels.EYFortunaPassToastReponseType
enum class EYFortunaPassToastReponseType : uint8_t
{
	EYFortunaPassToastReponseType__UnknownError = 0,
	EYFortunaPassToastReponseType__ServerError = 1,
	EYFortunaPassToastReponseType__StashFull = 2,
	EYFortunaPassToastReponseType__Ok = 3,
	EYFortunaPassToastReponseType__EYFortunaPassToastReponseType_MAX = 4
};


// Enum BackendModels.EYClaimGeneratorIncomeStatus
enum class EYClaimGeneratorIncomeStatus : uint8_t
{
	EYClaimGeneratorIncomeStatus__UNKNOWN_ERROR = 0,
	EYClaimGeneratorIncomeStatus__OK = 1,
	EYClaimGeneratorIncomeStatus__STASH_FULL = 2,
	EYClaimGeneratorIncomeStatus__MAX = 3
};


// Enum BackendModels.EYUpdateGlobalVanityResult
enum class EYUpdateGlobalVanityResult : uint8_t
{
	EYUpdateGlobalVanityResult__OK = 0,
	EYUpdateGlobalVanityResult__INVALID_ID = 1,
	EYUpdateGlobalVanityResult__NOT_OWNED_ITEM = 2,
	EYUpdateGlobalVanityResult__UNKNOWN_ERROR = 3,
	EYUpdateGlobalVanityResult__EYUpdateGlobalVanityResult_MAX = 4
};


// Enum BackendModels.EYClaimGrantState
enum class EYClaimGrantState : uint8_t
{
	EYClaimGrantState__UNCLAIMED   = 0,
	EYClaimGrantState__BEING_CLAIMED = 1,
	EYClaimGrantState__CLAIMED     = 2,
	EYClaimGrantState__EYClaimGrantState_MAX = 3
};


// Enum BackendModels.EYClaimGrantResult
enum class EYClaimGrantResult : uint8_t
{
	EYClaimGrantResult__OK         = 0,
	EYClaimGrantResult__INVALID_ID = 1,
	EYClaimGrantResult__ALREADY_CLAIMED = 2,
	EYClaimGrantResult__WRONG_USER_GUID = 3,
	EYClaimGrantResult__INVALID_GRANT_SETUP = 4,
	EYClaimGrantResult__UNKNOWN_ERROR = 5,
	EYClaimGrantResult__EYClaimGrantResult_MAX = 6
};


// Enum BackendModels.EYGrantType
enum class EYGrantType : uint8_t
{
	EYGrantType__None              = 0,
	EYGrantType__Blueprint         = 1,
	EYGrantType__CustomItem        = 2,
	EYGrantType__Modification      = 3,
	EYGrantType__Vanity            = 4,
	EYGrantType__HardCurrency      = 5,
	EYGrantType__SoftCurrency      = 6,
	EYGrantType__CraftingMaterial  = 7,
	EYGrantType__SeasonXP          = 8,
	EYGrantType__SeasonLevel       = 9,
	EYGrantType__SeasonPass        = 10,
	EYGrantType__LoreItem          = 11,
	EYGrantType__ProspectorLevelXP = 12,
	EYGrantType__InsuranceCurrency = 13,
	EYGrantType__MAX               = 14
};


// Enum BackendModels.EYUpdateReadStateResult
enum class EYUpdateReadStateResult : uint8_t
{
	EYUpdateReadStateResult__OK    = 0,
	EYUpdateReadStateResult__INVALID_ID = 1,
	EYUpdateReadStateResult__NO_UPDATE = 2,
	EYUpdateReadStateResult__UNKNOWN_ERROR = 3,
	EYUpdateReadStateResult__EYUpdateReadStateResult_MAX = 4
};


// Enum BackendModels.EYInboxMessageType
enum class EYInboxMessageType : uint8_t
{
	EYInboxMessageType__None       = 0,
	EYInboxMessageType__FoundersPack = 1,
	EYInboxMessageType__Progression = 2,
	EYInboxMessageType__MAX        = 3
};


// Enum BackendModels.EYInsuranceType
enum class EYInsuranceType : uint8_t
{
	EYInsuranceType__None          = 0,
	EYInsuranceType__Basic         = 1,
	EYInsuranceType__Premium       = 2,
	EYInsuranceType__EYInsuranceType_MAX = 3
};


// Enum BackendModels.EYCompleteInventoryUpdateReason
enum class EYCompleteInventoryUpdateReason : uint8_t
{
	EYCompleteInventoryUpdateReason__NONE = 0,
	EYCompleteInventoryUpdateReason__UI_DRAG = 1,
	EYCompleteInventoryUpdateReason__ITEM_STATE_CHANGED = 2,
	EYCompleteInventoryUpdateReason__END_OF_MATCH_ESCAPED = 3,
	EYCompleteInventoryUpdateReason__END_OF_MATCH_DIED = 4,
	EYCompleteInventoryUpdateReason__CHEAT = 5,
	EYCompleteInventoryUpdateReason__MAX = 6
};


// Enum BackendModels.EYGetUsersCurrenciesResult
enum class EYGetUsersCurrenciesResult : uint8_t
{
	EYGetUsersCurrenciesResult__OK = 0,
	EYGetUsersCurrenciesResult__UNKNOWN_ERROR = 1,
	EYGetUsersCurrenciesResult__EYGetUsersCurrenciesResult_MAX = 2
};


// Enum BackendModels.EYVanityUpdateResult
enum class EYVanityUpdateResult : uint8_t
{
	EYVanityUpdateResult__OK       = 0,
	EYVanityUpdateResult__INVALID_ID = 1,
	EYVanityUpdateResult__INCOMPATIBLE_ITEM = 2,
	EYVanityUpdateResult__TOO_FEW_OWNED_ITEMS = 3,
	EYVanityUpdateResult__UNKNOWN_ERROR = 4,
	EYVanityUpdateResult__EYVanityUpdateResult_MAX = 5
};


// Enum BackendModels.EYCustomizationCategory
enum class EYCustomizationCategory : uint8_t
{
	EYCustomizationCategory__Invalid = 0,
	EYCustomizationCategory__None  = 1,
	EYCustomizationCategory__CharacterDefault = 2,
	EYCustomizationCategory__Head  = 3,
	EYCustomizationCategory__Boots = 4,
	EYCustomizationCategory__Chest = 5,
	EYCustomizationCategory__BaseSuit = 6,
	EYCustomizationCategory__Gloves = 7,
	EYCustomizationCategory__WeaponPreview = 8,
	EYCustomizationCategory__Emote = 9,
	EYCustomizationCategory__WeaponNear = 10,
	EYCustomizationCategory__WeaponDefault = 11,
	EYCustomizationCategory__WeaponFar = 12,
	EYCustomizationCategory__WeaponCharm = 13,
	EYCustomizationCategory__KitPreview = 14,
	EYCustomizationCategory__CategoryPlaceholder12 = 15,
	EYCustomizationCategory__CategoryPlaceholder13 = 16,
	EYCustomizationCategory__Archetype = 17,
	EYCustomizationCategory__MeleeWeapon = 18,
	EYCustomizationCategory__Overview = 19,
	EYCustomizationCategory__Banner = 20,
	EYCustomizationCategory__Spray = 21,
	EYCustomizationCategory__Item  = 22,
	EYCustomizationCategory__Vehicle = 23,
	EYCustomizationCategory__Droppod = 24,
	EYCustomizationCategory__EYCustomizationCategory_MAX = 25
};


// Enum BackendModels.EYDefaultItemSlot
enum class EYDefaultItemSlot : uint8_t
{
	EYDefaultItemSlot__Unassigned  = 0,
	EYDefaultItemSlot__StarterWeapon = 1,
	EYDefaultItemSlot__Gadget      = 2,
	EYDefaultItemSlot__Kit         = 3,
	EYDefaultItemSlot__Ability0    = 4,
	EYDefaultItemSlot__Ability1    = 5,
	EYDefaultItemSlot__Ability2    = 6,
	EYDefaultItemSlot__Ability3    = 7,
	EYDefaultItemSlot__Consumable0 = 8,
	EYDefaultItemSlot__Consumable1 = 9,
	EYDefaultItemSlot__Consumable2 = 10,
	EYDefaultItemSlot__Consumable3 = 11,
	EYDefaultItemSlot__Device0     = 12,
	EYDefaultItemSlot__Device1     = 13,
	EYDefaultItemSlot__Device2     = 14,
	EYDefaultItemSlot__Device3     = 15,
	EYDefaultItemSlot__Miscellaneous0 = 16,
	EYDefaultItemSlot__Miscellaneous1 = 17,
	EYDefaultItemSlot__Miscellaneous2 = 18,
	EYDefaultItemSlot__Miscellaneous3 = 19,
	EYDefaultItemSlot__Shield      = 20,
	EYDefaultItemSlot__EYDefaultItemSlot_MAX = 21
};


// Enum BackendModels.EYCustomizationBodyType
enum class EYCustomizationBodyType : uint8_t
{
	EYCustomizationBodyType__INVALID = 0,
	EYCustomizationBodyType__MaleDefault = 1,
	EYCustomizationBodyType__FemaleDefault = 2,
	EYCustomizationBodyType__Both  = 3,
	EYCustomizationBodyType__EYCustomizationBodyType_MAX = 4
};


// Enum BackendModels.EYVanityType
enum class EYVanityType : uint8_t
{
	EYVanityType__None             = 0,
	EYVanityType__Weapon           = 1,
	EYVanityType__Character        = 2,
	EYVanityType__Melee            = 3,
	EYVanityType__Banner           = 4,
	EYVanityType__DeathEmote       = 5,
	EYVanityType__NormalEmote      = 6,
	EYVanityType__Vehicle          = 7,
	EYVanityType__Droppod          = 8,
	EYVanityType__SocialProfile    = 9,
	EYVanityType__Spray            = 10,
	EYVanityType__WeaponCharm      = 11,
	EYVanityType__Pet              = 12,
	EYVanityType__MaterialVariation = 13,
	EYVanityType__ArcheType        = 14,
	EYVanityType__MAX              = 15
};


// Enum BackendModels.EYModificationSlotType
enum class EYModificationSlotType : uint8_t
{
	EYModificationSlotType__None   = 0,
	EYModificationSlotType__Optics = 1,
	EYModificationSlotType__Magazine = 2,
	EYModificationSlotType__Barrel = 3,
	EYModificationSlotType__Muzzle = 4,
	EYModificationSlotType__Stock  = 5,
	EYModificationSlotType__Ability = 6,
	EYModificationSlotType__ForeGrip = 7,
	EYModificationSlotType__Tactical = 8,
	EYModificationSlotType__AmmoConverter = 9,
	EYModificationSlotType__Receiver = 10,
	EYModificationSlotType__Attachment = 11,
	EYModificationSlotType__ScannerUpgrade1 = 12,
	EYModificationSlotType__ScannerUpgrade2 = 13,
	EYModificationSlotType__ScannerUpgrade3 = 14,
	EYModificationSlotType__ScannerUpgrade4 = 15,
	EYModificationSlotType__RearGrip = 16,
	EYModificationSlotType__MAX    = 17
};


// Enum BackendModels.EYAmmoType
enum class EYAmmoType : uint8_t
{
	EYAmmoType__None               = 0,
	EYAmmoType__Bullet             = 1,
	EYAmmoType__Beam               = 2,
	EYAmmoType__Gauss              = 3,
	EYAmmoType__Explosives         = 4,
	EYAmmoType__EnergyLight        = 5,
	EYAmmoType__EnergyHeavy        = 6,
	EYAmmoType__Shard              = 7,
	EYAmmoType__Missiles           = 8,
	EYAmmoType__Needler            = 9,
	EYAmmoType__PrototypeCategory_01 = 10,
	EYAmmoType__PrototypeCategory_02 = 11,
	EYAmmoType__PrototypeCategory_03 = 12,
	EYAmmoType__PrototypeCategory_04 = 13,
	EYAmmoType__Overheat           = 14,
	EYAmmoType__All                = 15,
	EYAmmoType__MAX                = 16
};


// Enum BackendModels.EYMiscellaneousType
enum class EYMiscellaneousType : uint8_t
{
	EYMiscellaneousType__Invalid   = 0,
	EYMiscellaneousType__None      = 1,
	EYMiscellaneousType__Vehicle   = 2,
	EYMiscellaneousType__MAX       = 3
};


// Enum BackendModels.EYDeviceCategory
enum class EYDeviceCategory : uint8_t
{
	EYDeviceCategory__AssaultRifle = 0,
	EYDeviceCategory__Pistol       = 1,
	EYDeviceCategory__SMG          = 2,
	EYDeviceCategory__SniperRifle  = 3,
	EYDeviceCategory__HeavyWeapon  = 4,
	EYDeviceCategory__Shotgun      = 5,
	EYDeviceCategory__BurstRifle   = 6,
	EYDeviceCategory__Exotic       = 7,
	EYDeviceCategory__MissileLauncher = 8,
	EYDeviceCategory__Scanner      = 9,
	EYDeviceCategory__All          = 10,
	EYDeviceCategory__INVALID      = 11,
	EYDeviceCategory__MAX          = 12
};


// Enum BackendModels.EYDeviceClass
enum class EYDeviceClass : uint8_t
{
	EYDeviceClass__None            = 0,
	EYDeviceClass__Gadget          = 1,
	EYDeviceClass__PrimaryWeapon   = 2,
	EYDeviceClass__SecondaryWeapon = 3,
	EYDeviceClass__Tool            = 4,
	EYDeviceClass__All             = 5,
	EYDeviceClass__MAX             = 6
};


// Enum BackendModels.EYItemType
enum class EYItemType : uint8_t
{
	EYItemType__None               = 0,
	EYItemType__Device             = 1,
	EYItemType__Ability            = 2,
	EYItemType__Kit                = 3,
	EYItemType__Consumable         = 4,
	EYItemType__Mod                = 5,
	EYItemType__Blueprint          = 6,
	EYItemType__Material           = 7,
	EYItemType__Miscellaneous      = 8,
	EYItemType__Currency           = 9,
	EYItemType__Vanity             = 10,
	EYItemType__Experience         = 11,
	EYItemType__Lore               = 12,
	EYItemType__Vehicle            = 13,
	EYItemType__Ammo               = 14,
	EYItemType__Upgrade            = 15,
	EYItemType__Collectible        = 16,
	EYItemType__QuestItem          = 17,
	EYItemType__Shield             = 18,
	EYItemType__ProspectorBadge    = 19,
	EYItemType__TechTreeNode       = 20,
	EYItemType__PlayerQuartersLevel = 21,
	EYItemType__PassiveGenerator   = 22,
	EYItemType__Bag                = 23,
	EYItemType__Helmet             = 24,
	EYItemType__Key                = 25,
	EYItemType__MeleeWeapon        = 26,
	EYItemType__All                = 27,
	EYItemType__MAX                = 28
};


// Enum BackendModels.EYItemOriginType
enum class EYItemOriginType : uint8_t
{
	EYItemOriginType__Undefined    = 0,
	EYItemOriginType__Contract     = 1,
	EYItemOriginType__Craft        = 2,
	EYItemOriginType__Creature     = 3,
	EYItemOriginType__Debug        = 4,
	EYItemOriginType__FortunaPass  = 5,
	EYItemOriginType__FTUE         = 6,
	EYItemOriginType__Generator    = 7,
	EYItemOriginType__Insurance    = 8,
	EYItemOriginType__MapContainerLoot = 9,
	EYItemOriginType__MapPickupLoot = 10,
	EYItemOriginType__MatchSplitStack = 11,
	EYItemOriginType__MatchUnknown = 12,
	EYItemOriginType__PlayFabDashboard = 13,
	EYItemOriginType__PurchaseICA  = 14,
	EYItemOriginType__PurchaseKorolev = 15,
	EYItemOriginType__PurchaseOsiris = 16,
	EYItemOriginType__PurchaseQuickShop = 17,
	EYItemOriginType__Retention    = 18,
	EYItemOriginType__StationSplitStack = 19,
	EYItemOriginType__TocMigration = 20,
	EYItemOriginType__TwitchDrop   = 21,
	EYItemOriginType__Uplink       = 22,
	EYItemOriginType__WeaponAttachment = 23,
	EYItemOriginType__EYItemOriginType_MAX = 24
};


// Enum BackendModels.EYMatchServerSocialAdmissionType
enum class EYMatchServerSocialAdmissionType : uint8_t
{
	EYMatchServerSocialAdmissionType__Mixed = 0,
	EYMatchServerSocialAdmissionType__Solo = 1,
	EYMatchServerSocialAdmissionType__Squad = 2,
	EYMatchServerSocialAdmissionType__EYMatchServerSocialAdmissionType_MAX = 3
};


// Enum BackendModels.EYMatchmakingDebugOption
enum class EYMatchmakingDebugOption : uint8_t
{
	EYMatchmakingDebugOption__None = 0,
	EYMatchmakingDebugOption__ForceMultiplayerStation = 1,
	EYMatchmakingDebugOption__ForceSinglePlayerStation = 2,
	EYMatchmakingDebugOption__EYMatchmakingDebugOption_MAX = 3
};


// Enum BackendModels.EYPlayfabMatchmakingState
enum class EYPlayfabMatchmakingState : uint8_t
{
	EYPlayfabMatchmakingState__Invalid = 0,
	EYPlayfabMatchmakingState__WaitingForPlayers = 1,
	EYPlayfabMatchmakingState__WaitingForMatch = 2,
	EYPlayfabMatchmakingState__WaitingForServer = 3,
	EYPlayfabMatchmakingState__Canceled = 4,
	EYPlayfabMatchmakingState__Matched = 5,
	EYPlayfabMatchmakingState__EYPlayfabMatchmakingState_MAX = 6
};


// Enum BackendModels.EYMatchmakingResult
enum class EYMatchmakingResult : uint8_t
{
	EYMatchmakingResult__OK        = 0,
	EYMatchmakingResult__ALREADY_IN_QUEUE = 1,
	EYMatchmakingResult__ALREADY_IN_ROOM = 2,
	EYMatchmakingResult__NOT_IN_MATCHMAKING = 3,
	EYMatchmakingResult__CANCELED  = 4,
	EYMatchmakingResult__NO_GAME_MODE = 5,
	EYMatchmakingResult__GAME_MODE_INACTIVE = 6,
	EYMatchmakingResult__UNKNOWN_REGION = 7,
	EYMatchmakingResult__CHANGED_REGIONS = 8,
	EYMatchmakingResult__EYMatchmakingResult_MAX = 9
};


// Enum BackendModels.EYMuteResult
enum class EYMuteResult : uint8_t
{
	EYMuteResult__OK               = 0,
	EYMuteResult__NOT_ADMIN        = 1,
	EYMuteResult__INVALID_REASON   = 2,
	EYMuteResult__UNKNOWN          = 3,
	EYMuteResult__EYMuteResult_MAX = 4
};


// Enum BackendModels.EYMuteReason
enum class EYMuteReason : uint8_t
{
	EYMuteReason__INAPROPRIATE_LANGUAGE = 0,
	EYMuteReason__SPAM             = 1,
	EYMuteReason__HATE_SPEECH      = 2,
	EYMuteReason__PLAYER_ABUSE     = 3,
	EYMuteReason__EYMuteReason_MAX = 4
};


// Enum BackendModels.EYChannelType
enum class EYChannelType : uint8_t
{
	EYChannelType__NONE            = 0,
	EYChannelType__SYSTEM          = 1,
	EYChannelType__GLOBAL          = 2,
	EYChannelType__WHISPER         = 3,
	EYChannelType__SQUAD           = 4,
	EYChannelType__TEAM            = 5,
	EYChannelType__MATCH           = 6,
	EYChannelType__SPECTATE        = 7,
	EYChannelType__GLOBAL_EN       = 8,
	EYChannelType__GLOBAL_GER      = 9,
	EYChannelType__GLOBAL_RU       = 10,
	EYChannelType__GLOBAL_FR       = 11,
	EYChannelType__GLOBAL_ES       = 12,
	EYChannelType__GLOBAL_PTBR     = 13,
	EYChannelType__GLOBAL_PL       = 14,
	EYChannelType__GLOBAL_TR       = 15,
	EYChannelType__GLOBAL_ZH       = 16,
	EYChannelType__CHEAT_CHANNEL   = 17,
	EYChannelType__EYChannelType_MAX = 18
};


// Enum BackendModels.EYMetaMissionType
enum class EYMetaMissionType : uint8_t
{
	EYMetaMissionType__Mission     = 0,
	EYMetaMissionType__DailyChallenge = 1,
	EYMetaMissionType__WeeklyChallenge = 2,
	EYMetaMissionType__SeasonChallenge = 3,
	EYMetaMissionType__RepeatedDaily = 4,
	EYMetaMissionType__ShowcaseTitle = 5,
	EYMetaMissionType__PersistentChallenge = 6,
	EYMetaMissionType__None        = 7,
	EYMetaMissionType__EYMetaMissionType_MAX = 8
};


// Enum BackendModels.EYRankedCategory
enum class EYRankedCategory : uint8_t
{
	EYRankedCategory__None         = 0,
	EYRankedCategory__Solo         = 1,
	EYRankedCategory__Duo          = 2,
	EYRankedCategory__Squad        = 3,
	EYRankedCategory__Rewards      = 4,
	EYRankedCategory__MAX          = 5
};


// Enum BackendModels.EYRewardResult
enum class EYRewardResult : uint8_t
{
	EYRewardResult__OK             = 0,
	EYRewardResult__INVALID_REWARD = 1,
	EYRewardResult__EYRewardResult_MAX = 2
};


// Enum BackendModels.EYPlayerRewardSource
enum class EYPlayerRewardSource : uint8_t
{
	EYPlayerRewardSource__IN_GAME  = 0,
	EYPlayerRewardSource__END_OF_MATCH = 1,
	EYPlayerRewardSource__BASE     = 2,
	EYPlayerRewardSource__VICTORY_POINTS_MULTIPLIER = 3,
	EYPlayerRewardSource__EVACUATION = 4,
	EYPlayerRewardSource__SCOREBOARD_PLACEMENT = 5,
	EYPlayerRewardSource__MISSION  = 6,
	EYPlayerRewardSource__GRANTS   = 7,
	EYPlayerRewardSource__DIED     = 8,
	EYPlayerRewardSource__MAX      = 9
};


// Enum BackendModels.EYServerCommand
enum class EYServerCommand : uint8_t
{
	EYServerCommand__OK            = 0,
	EYServerCommand__SHUT_DOWN     = 1,
	EYServerCommand__TRAVEL_BACK   = 2,
	EYServerCommand__EYServerCommand_MAX = 3
};


// Enum BackendModels.EYUserStateChangeType
enum class EYUserStateChangeType : uint8_t
{
	EYUserStateChangeType__None    = 0,
	EYUserStateChangeType__Registered = 1,
	EYUserStateChangeType__Left    = 2,
	EYUserStateChangeType__MAX     = 3
};


// Enum BackendModels.EYGetCurrencyResult
enum class EYGetCurrencyResult : uint8_t
{
	EYGetCurrencyResult__FAILED    = 0,
	EYGetCurrencyResult__SUCCEEDED = 1,
	EYGetCurrencyResult__EYGetCurrencyResult_MAX = 2
};


// Enum BackendModels.EYPurchaseOfferState
enum class EYPurchaseOfferState : uint8_t
{
	EYPurchaseOfferState__UNPURCHASED = 0,
	EYPurchaseOfferState__BEING_PURCHASED = 1,
	EYPurchaseOfferState__PURCHASED = 2,
	EYPurchaseOfferState__EYPurchaseOfferState_MAX = 3
};


// Enum BackendModels.EYPurchaseOfferResult
enum class EYPurchaseOfferResult : uint8_t
{
	EYPurchaseOfferResult__OK      = 0,
	EYPurchaseOfferResult__INVALID_ID = 1,
	EYPurchaseOfferResult__ALREADY_PURCHASED = 2,
	EYPurchaseOfferResult__OFFER_NOT_ACTIVE = 3,
	EYPurchaseOfferResult__NOT_ENOUGH_CURRENCY = 4,
	EYPurchaseOfferResult__INVALID_CURRENCY_TYPE = 5,
	EYPurchaseOfferResult__INVALID_AMOUNT = 6,
	EYPurchaseOfferResult__UNKNOWN_ERROR = 7,
	EYPurchaseOfferResult__EYPurchaseOfferResult_MAX = 8
};


// Enum BackendModels.EYOfferUnavailableReason
enum class EYOfferUnavailableReason : uint8_t
{
	EYOfferUnavailableReason__None = 0,
	EYOfferUnavailableReason__AlreadyPurchased = 1,
	EYOfferUnavailableReason__BeingPurchased = 2,
	EYOfferUnavailableReason__NotEnoughFunds = 3,
	EYOfferUnavailableReason__PurchasedSeasonPass = 4,
	EYOfferUnavailableReason__MaxSeasonLevel = 5,
	EYOfferUnavailableReason__OwningAllVanityItems = 6,
	EYOfferUnavailableReason__QuantityValueTooHigh = 7,
	EYOfferUnavailableReason__OtherOffersRequired = 8,
	EYOfferUnavailableReason__Unknown = 9,
	EYOfferUnavailableReason__MAX  = 10
};


// Enum BackendModels.EYOfferRarity
enum class EYOfferRarity : uint8_t
{
	EYOfferRarity__Invalid         = 0,
	EYOfferRarity__Common          = 1,
	EYOfferRarity__Uncommon        = 2,
	EYOfferRarity__Rare            = 3,
	EYOfferRarity__MAX             = 4
};


// Enum BackendModels.EYShopCategory
enum class EYShopCategory : uint8_t
{
	EYShopCategory__None           = 0,
	EYShopCategory__Special        = 1,
	EYShopCategory__Daily          = 2,
	EYShopCategory__Weekly         = 3,
	EYShopCategory__HardCurrency   = 4,
	EYShopCategory__FounderPacks   = 5,
	EYShopCategory__SeasonPass     = 6,
	EYShopCategory__MAX            = 7
};


// Enum BackendModels.EYPromotionType
enum class EYPromotionType : uint8_t
{
	EYPromotionType__None          = 0,
	EYPromotionType__SpecialDaily  = 1,
	EYPromotionType__SpecialWeekly = 2,
	EYPromotionType__Currency      = 3,
	EYPromotionType__Season        = 4,
	EYPromotionType__StarterPacks  = 5,
	EYPromotionType__MAX           = 6
};


// Enum BackendModels.EYCurrencyType
enum class EYCurrencyType : uint8_t
{
	EYCurrencyType__Invalid        = 0,
	EYCurrencyType__SoftCurrency   = 1,
	EYCurrencyType__HardCurrency   = 2,
	EYCurrencyType__RealCurrency   = 3,
	EYCurrencyType__InsuranceCurrency = 4,
	EYCurrencyType__MAX            = 5
};


// Enum BackendModels.EYSocialRequestResult
enum class EYSocialRequestResult : uint8_t
{
	EYSocialRequestResult__OK      = 0,
	EYSocialRequestResult__GUID_PARSING_FAILED = 1,
	EYSocialRequestResult__GOT_NO_SOCIAL_PROFILES = 2,
	EYSocialRequestResult__UNKNOWN_ERROR = 3,
	EYSocialRequestResult__EYSocialRequestResult_MAX = 4
};


// Enum BackendModels.EYFriendActionResult
enum class EYFriendActionResult : uint8_t
{
	EYFriendActionResult__OK       = 0,
	EYFriendActionResult__INVALID_TARGET = 1,
	EYFriendActionResult__ALREADY_FRIEND = 2,
	EYFriendActionResult__NOT_IN_STATION = 3,
	EYFriendActionResult__EMPTY_PENDING_INVITES = 4,
	EYFriendActionResult__NONEXISTENT_FRIEND_REQUEST = 5,
	EYFriendActionResult__INTERNAL_ERROR = 6,
	EYFriendActionResult__EYFriendActionResult_MAX = 7
};


// Enum BackendModels.EYPlatformTypes
enum class EYPlatformTypes : uint8_t
{
	EYPlatformTypes__INTERNAL      = 0,
	EYPlatformTypes__EGS           = 1,
	EYPlatformTypes__PLAYFAB       = 2,
	EYPlatformTypes__UNITIALIZED   = 3,
	EYPlatformTypes__EYPlatformTypes_MAX = 4
};


// Enum BackendModels.EYGetFriendListResult
enum class EYGetFriendListResult : uint8_t
{
	EYGetFriendListResult__OK      = 0,
	EYGetFriendListResult__UNKNOWN_ERROR = 1,
	EYGetFriendListResult__EYGetFriendListResult_MAX = 2
};


// Enum BackendModels.EYSocialNotificationBackend
enum class EYSocialNotificationBackend : uint8_t
{
	EYSocialNotificationBackend__NONE = 0,
	EYSocialNotificationBackend__ONLINE = 1,
	EYSocialNotificationBackend__OFFLINE = 2,
	EYSocialNotificationBackend__ADDED = 3,
	EYSocialNotificationBackend__MATCH = 4,
	EYSocialNotificationBackend__EYSocialNotificationBackend_MAX = 5
};


// Enum BackendModels.EYSocialGameStateType
enum class EYSocialGameStateType : uint8_t
{
	EYSocialGameStateType__IN_STATION = 0,
	EYSocialGameStateType__IN_MATCH = 1,
	EYSocialGameStateType__UNKNOWN = 2,
	EYSocialGameStateType__EYSocialGameStateType_MAX = 3
};


// Enum BackendModels.EYFriendState
enum class EYFriendState : uint8_t
{
	EYFriendState__NONE            = 0,
	EYFriendState__PENDINGINBOUND  = 1,
	EYFriendState__PENDINGOUTBOUND = 2,
	EYFriendState__ACCEPTED        = 3,
	EYFriendState__BLOCKED         = 4,
	EYFriendState__SUGGESTED       = 5,
	EYFriendState__EYFriendState_MAX = 6
};


// Enum BackendModels.EYSquadUpdateState
enum class EYSquadUpdateState : uint8_t
{
	EYSquadUpdateState__JOINED     = 0,
	EYSquadUpdateState__LEFT       = 1,
	EYSquadUpdateState__GENERIC    = 2,
	EYSquadUpdateState__DISBANDED  = 3,
	EYSquadUpdateState__EYSquadUpdateState_MAX = 4
};


// Enum BackendModels.EYUserState
enum class EYUserState : uint8_t
{
	EYUserState__IN_STATION        = 0,
	EYUserState__IN_MATCH          = 1,
	EYUserState__IN_EOM            = 2,
	EYUserState__IN_MAX            = 3
};


// Enum BackendModels.EYSquadActionResult
enum class EYSquadActionResult : uint8_t
{
	EYSquadActionResult__OK        = 0,
	EYSquadActionResult__INVALID_TARGET = 1,
	EYSquadActionResult__TARGET_OFFLINE = 2,
	EYSquadActionResult__INITIATOR_OFFLINE = 3,
	EYSquadActionResult__INVALID_SQUAD = 4,
	EYSquadActionResult__SQUAD_FULL = 5,
	EYSquadActionResult__INVALID_SQUAD_INVITE = 6,
	EYSquadActionResult__INTERNAL_ERROR = 7,
	EYSquadActionResult__SQUAD_DISBANDED = 8,
	EYSquadActionResult__NO_LEADER = 9,
	EYSquadActionResult__IN_MATCH  = 10,
	EYSquadActionResult__EYSquadActionResult_MAX = 11
};


// Enum BackendModels.EYClientStationRequestResult
enum class EYClientStationRequestResult : uint8_t
{
	EYClientStationRequestResult__INVALID_USERI_ID = 0,
	EYClientStationRequestResult__UNKNOWN = 1,
	EYClientStationRequestResult__PENDING = 2,
	EYClientStationRequestResult__TRAVEL_SINGLEPLAYER = 3,
	EYClientStationRequestResult__OK = 4,
	EYClientStationRequestResult__EYClientStationRequestResult_MAX = 5
};


// Enum BackendModels.EYStationCommandResultType
enum class EYStationCommandResultType : uint8_t
{
	EYStationCommandResultType__UNKNOWN_ERROR = 0,
	EYStationCommandResultType__OK = 1,
	EYStationCommandResultType__SHUTDOWN = 2,
	EYStationCommandResultType__EYStationCommandResultType_MAX = 3
};


// Enum BackendModels.EYMatchOutcome
enum class EYMatchOutcome : uint8_t
{
	EYMatchOutcome__NONE           = 0,
	EYMatchOutcome__END_OF_MATCH_ESCAPED = 1,
	EYMatchOutcome__END_OF_MATCH_DIED_PLAYER = 2,
	EYMatchOutcome__END_OF_MATCH_DIED_CREATURE = 3,
	EYMatchOutcome__END_OF_MATCH_DIED_OTHER = 4,
	EYMatchOutcome__MAX            = 5
};


// Enum BackendModels.EYTwitchDropToastReponseType
enum class EYTwitchDropToastReponseType : uint8_t
{
	EYTwitchDropToastReponseType__UnknownError = 0,
	EYTwitchDropToastReponseType__ServerError = 1,
	EYTwitchDropToastReponseType__StashFull = 2,
	EYTwitchDropToastReponseType__Ok = 3,
	EYTwitchDropToastReponseType__EYTwitchDropToastReponseType_MAX = 4
};


// Enum BackendModels.EYPlayerSessionMatchState
enum class EYPlayerSessionMatchState : uint8_t
{
	EYPlayerSessionMatchState__Invalid = 0,
	EYPlayerSessionMatchState__Match = 1,
	EYPlayerSessionMatchState__Escape = 2,
	EYPlayerSessionMatchState__Pending = 3,
	EYPlayerSessionMatchState__EYPlayerSessionMatchState_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
