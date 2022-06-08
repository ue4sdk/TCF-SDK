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

// Enum Prospect.EYTurretState
enum class EYTurretState : uint8_t
{
	EYTurretState__Deploying       = 0,
	EYTurretState__Active          = 1,
	EYTurretState__Destroyed       = 2,
	EYTurretState__EYTurretState_MAX = 3
};


// Enum Prospect.EYAbilityState
enum class EYAbilityState : uint8_t
{
	EYAbilityState__Invalid        = 0,
	EYAbilityState__Ready          = 1,
	EYAbilityState__SpinningUp     = 2,
	EYAbilityState__Activating     = 3,
	EYAbilityState__Active         = 4,
	EYAbilityState__Finished       = 5,
	EYAbilityState__Cooldown       = 6,
	EYAbilityState__EYAbilityState_MAX = 7
};


// Enum Prospect.EYActivityType
enum class EYActivityType : uint8_t
{
	EYActivityType__None           = 0,
	EYActivityType__Area           = 1,
	EYActivityType__AI_Guardians   = 2,
	EYActivityType__AI_Spawning    = 3,
	EYActivityType__BigDrill       = 4,
	EYActivityType__BossHunt       = 5,
	EYActivityType__DataRetrieval  = 6,
	EYActivityType__Delivery       = 7,
	EYActivityType__Deposit        = 8,
	EYActivityType__Dungeon        = 9,
	EYActivityType__Escape         = 10,
	EYActivityType__Flora          = 11,
	EYActivityType__Flora_WaterPlant = 12,
	EYActivityType__Flora_IvyPlant = 13,
	EYActivityType__Flora_DesertPlant = 14,
	EYActivityType__Hunt           = 15,
	EYActivityType__Mineral_AlienCrystals = 16,
	EYActivityType__Mineral_BasicOres = 17,
	EYActivityType__Mineral_HeavyMetals = 18,
	EYActivityType__Mineral_Radioactive = 19,
	EYActivityType__Mineral_Veltecite = 20,
	EYActivityType__MonsterNest    = 21,
	EYActivityType__NoiseTrap_Birds = 22,
	EYActivityType__OilPump_Tier0  = 23,
	EYActivityType__OilPump_Tier1  = 24,
	EYActivityType__OilPump_Tier2  = 25,
	EYActivityType__OilPump_Tier3  = 26,
	EYActivityType__OilPump_Tier4  = 27,
	EYActivityType__PowerUp        = 28,
	EYActivityType__StormSurge     = 29,
	EYActivityType__Tracking       = 30,
	EYActivityType__Train          = 31,
	EYActivityType__Meteor         = 32,
	EYActivityType__Uplink         = 33,
	EYActivityType__LootContainers = 34,
	EYActivityType__LootPoints     = 35,
	EYActivityType__All            = 36,
	EYActivityType__MAX            = 37
};


// Enum Prospect.EYMeshViewState
enum class EYMeshViewState : uint8_t
{
	EYMeshViewState__NoneAssigned  = 0,
	EYMeshViewState__FirstPerson   = 1,
	EYMeshViewState__ThirdPerson   = 2,
	EYMeshViewState__EYMeshViewState_MAX = 3
};


// Enum Prospect.EYPlayerInitializationType
enum class EYPlayerInitializationType : uint8_t
{
	EYPlayerInitializationType__None = 0,
	EYPlayerInitializationType__InventoryData = 1,
	EYPlayerInitializationType__PlayerActorsInitialized = 2,
	EYPlayerInitializationType__CharacterCustomizationInitialized = 3,
	EYPlayerInitializationType__GlobalVanityLoaded = 4,
	EYPlayerInitializationType__ServerInitialized = 5,
	EYPlayerInitializationType__LevelsLoaded = 6,
	EYPlayerInitializationType__EYPlayerInitializationType_MAX = 7
};


// Enum Prospect.EYClimbingStateInternal
enum class EYClimbingStateInternal : uint8_t
{
	EYClimbingStateInternal__None  = 0,
	EYClimbingStateInternal__MovingUp = 1,
	EYClimbingStateInternal__MovingForward = 2,
	EYClimbingStateInternal__MovingDown = 3,
	EYClimbingStateInternal__EYClimbingStateInternal_MAX = 4
};


// Enum Prospect.EYMoveType
enum class EYMoveType : uint8_t
{
	EYMoveType__None               = 0,
	EYMoveType__Climb              = 1,
	EYMoveType__Vault              = 2,
	EYMoveType__EYMoveType_MAX     = 3
};


// Enum Prospect.EYObstacleType
enum class EYObstacleType : uint8_t
{
	EYObstacleType__None           = 0,
	EYObstacleType__WaistHigh      = 1,
	EYObstacleType__ShoulderHigh   = 2,
	EYObstacleType__AboveHead      = 3,
	EYObstacleType__Max            = 4
};


// Enum Prospect.EYInputUIStackType
enum class EYInputUIStackType : uint8_t
{
	EYInputUIStackType__Invalid    = 0,
	EYInputUIStackType__None       = 1,
	EYInputUIStackType__Scene      = 2,
	EYInputUIStackType__GearStore  = 3,
	EYInputUIStackType__SocialInteraction = 4,
	EYInputUIStackType__InputWidget = 5,
	EYInputUIStackType__Chat       = 6,
	EYInputUIStackType__EYInputUIStackType_MAX = 7
};


// Enum Prospect.EYInputActionName
enum class EYInputActionName : uint8_t
{
	EYInputActionName__Turn        = 0,
	EYInputActionName__LookUp      = 1,
	EYInputActionName__SwitchWeapon1 = 2,
	EYInputActionName__SwitchWeapon2 = 3,
	EYInputActionName__SwitchWeapon3 = 4,
	EYInputActionName__SwitchWeapon4 = 5,
	EYInputActionName__SwitchWeapon5 = 6,
	EYInputActionName__SwitchWeapon6 = 7,
	EYInputActionName__SwitchWeapon7 = 8,
	EYInputActionName__SwitchWeapon8 = 9,
	EYInputActionName__SwitchWeapon9 = 10,
	EYInputActionName__NextWeapon  = 11,
	EYInputActionName__PrevWeapon  = 12,
	EYInputActionName__Fire        = 13,
	EYInputActionName__Targeting   = 14,
	EYInputActionName__Reload      = 15,
	EYInputActionName__ActivateAbility1 = 16,
	EYInputActionName__ActivateAbility2 = 17,
	EYInputActionName__Interact    = 18,
	EYInputActionName__Team        = 19,
	EYInputActionName__MatchInventory = 20,
	EYInputActionName__ToggleMap   = 21,
	EYInputActionName__Chat        = 22,
	EYInputActionName__SpectateNext = 23,
	EYInputActionName__SpectatePrev = 24,
	EYInputActionName__SpectateZoomIn = 25,
	EYInputActionName__SpectateZoomOut = 26,
	EYInputActionName__SpectateCamera = 27,
	EYInputActionName__Debug_ToggleMasterDebugWidget = 28,
	EYInputActionName__Social      = 29,
	EYInputActionName__Social_GoThere = 30,
	EYInputActionName__Social_Enemies = 31,
	EYInputActionName__DamageRecap = 32,
	EYInputActionName__Challenge   = 33,
	EYInputActionName__ToggleLobbyHUD = 34,
	EYInputActionName__Emote       = 35,
	EYInputActionName__Banner      = 36,
	EYInputActionName__QuickBuy1   = 37,
	EYInputActionName__QuickBuy2   = 38,
	EYInputActionName__QuickBuy3   = 39,
	EYInputActionName__QuickBuy4   = 40,
	EYInputActionName__Debug_BugIt = 41,
	EYInputActionName__PushToTalk  = 42,
	EYInputActionName__ToggleStationMap = 43,
	EYInputActionName__QuickMenu   = 44,
	EYInputActionName__ActivateConsumable = 45,
	EYInputActionName__ToolWheel   = 46,
	EYInputActionName__ConsumableWheel = 47,
	EYInputActionName__Melee       = 48,
	EYInputActionName__HideHud     = 49,
	EYInputActionName__OpenAttachmentScreen = 50,
	EYInputActionName__AnyKey      = 51,
	EYInputActionName__LookUpController = 52,
	EYInputActionName__TurnController = 53,
	EYInputActionName__UiNextSortingMethod = 54,
	EYInputActionName__MuteIncomingVOIP = 55,
	EYInputActionName__None        = 56,
	EYInputActionName__EYInputActionName_MAX = 57
};


// Enum Prospect.EYPlayerSetType
enum class EYPlayerSetType : uint8_t
{
	EYPlayerSetType__None          = 0,
	EYPlayerSetType__WeaponOne     = 1,
	EYPlayerSetType__WeaponTwo     = 2,
	EYPlayerSetType__WeaponMax     = 3,
	EYPlayerSetType__Shield        = 4,
	EYPlayerSetType__BagItem       = 5,
	EYPlayerSetType__StashItem     = 6,
	EYPlayerSetType__SafeItem      = 7,
	EYPlayerSetType__CorpseContainer = 8,
	EYPlayerSetType__Bag           = 9,
	EYPlayerSetType__Helmet        = 10,
	EYPlayerSetType__MeleeWeapon   = 11,
	EYPlayerSetType__MAX           = 12
};


// Enum Prospect.EYFriendOnlineStatus
enum class EYFriendOnlineStatus : uint8_t
{
	EYFriendOnlineStatus__None     = 0,
	EYFriendOnlineStatus__PlayingThisGame = 1,
	EYFriendOnlineStatus__Online   = 2,
	EYFriendOnlineStatus__PlayingOtherGame = 3,
	EYFriendOnlineStatus__EYFriendOnlineStatus_MAX = 4
};


// Enum Prospect.EYMatchState
enum class EYMatchState : uint8_t
{
	EYMatchState__EnteringMap      = 0,
	EYMatchState__WaitingToStart   = 1,
	EYMatchState__PreMatch         = 2,
	EYMatchState__LaunchingMatch   = 3,
	EYMatchState__SeamlessTravel   = 4,
	EYMatchState__MatchIntro       = 5,
	EYMatchState__MatchInProgress  = 6,
	EYMatchState__MatchEnding      = 7,
	EYMatchState__MatchOver        = 8,
	EYMatchState__DisconnectedPlayers = 9,
	EYMatchState__LeavingMap       = 10,
	EYMatchState__None             = 11,
	EYMatchState__EYMatchState_MAX = 12
};


// Enum Prospect.EYPlayerMatchState
enum class EYPlayerMatchState : uint8_t
{
	EYPlayerMatchState__MatchLevelsLoaded = 0,
	EYPlayerMatchState__ReadiedUp  = 1,
	EYPlayerMatchState__InMatch    = 2,
	EYPlayerMatchState__FinishedMatch = 3,
	EYPlayerMatchState__InEndOfMatch = 4,
	EYPlayerMatchState__EYPlayerMatchState_MAX = 5
};


// Enum Prospect.EYNotificationPlacement
enum class EYNotificationPlacement : uint8_t
{
	EYNotificationPlacement__Center = 0,
	EYNotificationPlacement__RightMiddle = 1,
	EYNotificationPlacement__RightTop = 2,
	EYNotificationPlacement__LeftMiddle = 3,
	EYNotificationPlacement__EYNotificationPlacement_MAX = 4
};


// Enum Prospect.EYNotificationType
enum class EYNotificationType : uint8_t
{
	EYNotificationType__Invalid    = 0,
	EYNotificationType__SimpleText = 1,
	EYNotificationType__ImportantText = 2,
	EYNotificationType__ImmidateText = 3,
	EYNotificationType__EYNotificationType_MAX = 4
};


// Enum Prospect.EYAIState
enum class EYAIState : uint8_t
{
	EYAIState__None                = 0,
	EYAIState__Idle                = 1,
	EYAIState__Investigate         = 2,
	EYAIState__Combat              = 3,
	EYAIState__Reseting            = 4,
	EYAIState__Dead                = 5,
	EYAIState__Suspicious          = 6,
	EYAIState__Resting             = 7,
	EYAIState__Test                = 8,
	EYAIState__EYAIState_MAX       = 9
};


// Enum Prospect.EYEnemyType
enum class EYEnemyType : uint8_t
{
	EYEnemyType__None              = 0,
	EYEnemyType__DebugAutomationTest = 1,
	EYEnemyType__DirtBeast_Melee   = 2,
	EYEnemyType__DirtBeast_RangedShort = 3,
	EYEnemyType__DirtBeast_RangedMedium = 4,
	EYEnemyType__DirtBeast_RangedLong = 5,
	EYEnemyType__DirtBeast_MeleeHeavy = 6,
	EYEnemyType__DirtBeast_RangedHeavy = 7,
	EYEnemyType__DirtBeast_FlyingHeavy = 8,
	EYEnemyType__DirtBeast_Boss    = 9,
	EYEnemyType__Orobot_Melee      = 10,
	EYEnemyType__Orobot_RangedShort = 11,
	EYEnemyType__Orobot_RangedMedium = 12,
	EYEnemyType__Orobot_Walker     = 13,
	EYEnemyType__Orobot_Platform   = 14,
	EYEnemyType__Plunderbot_RangedShort = 15,
	EYEnemyType__Plunderbot_RangedMedium = 16,
	EYEnemyType__Plunderbot_RangedLong = 17,
	EYEnemyType__GlowBeetle_Blast  = 18,
	EYEnemyType__GlowBeetle_Acid   = 19,
	EYEnemyType__GlowBeetle_Summon = 20,
	EYEnemyType__Strider           = 21,
	EYEnemyType__Rattler           = 22,
	EYEnemyType__Weremole          = 23,
	EYEnemyType__Crusher           = 24,
	EYEnemyType__EYEnemyType_MAX   = 25
};


// Enum Prospect.EYSpawnRequestStatus
enum class EYSpawnRequestStatus : uint8_t
{
	EYSpawnRequestStatus__RequiresCharacter = 0,
	EYSpawnRequestStatus__RequiresController = 1,
	EYSpawnRequestStatus__RequiresBehavior = 2,
	EYSpawnRequestStatus__Completed = 3,
	EYSpawnRequestStatus__Failed   = 4,
	EYSpawnRequestStatus__EYSpawnRequestStatus_MAX = 5
};


// Enum Prospect.EYStateChangeType
enum class EYStateChangeType : uint8_t
{
	EYStateChangeType__None        = 0,
	EYStateChangeType__Deactivated = 1,
	EYStateChangeType__Activated   = 2,
	EYStateChangeType__Both        = 3,
	EYStateChangeType__EYStateChangeType_MAX = 4
};


// Enum Prospect.EYLeanTarget
enum class EYLeanTarget : uint8_t
{
	EYLeanTarget__Middle           = 0,
	EYLeanTarget__Left             = 1,
	EYLeanTarget__Right            = 2,
	EYLeanTarget__EYLeanTarget_MAX = 3
};


// Enum Prospect.EYAnnouncementType
enum class EYAnnouncementType : uint8_t
{
	EYAnnouncementType__Play2D     = 0,
	EYAnnouncementType__SpawnAtLocation = 1,
	EYAnnouncementType__SpawnAttached = 2,
	EYAnnouncementType__EYAnnouncementType_MAX = 3
};


// Enum Prospect.EYVoRowType
enum class EYVoRowType : uint8_t
{
	EYVoRowType__Regular           = 0,
	EYVoRowType__FactionOverride   = 1,
	EYVoRowType__PlayerBodyTypeOverride = 2,
	EYVoRowType__EYVoRowType_MAX   = 3
};


// Enum Prospect.EYCharacterVanityResetRequest
enum class EYCharacterVanityResetRequest : uint8_t
{
	EYCharacterVanityResetRequest__Invalid = 0,
	EYCharacterVanityResetRequest__Category = 1,
	EYCharacterVanityResetRequest__Customization = 2,
	EYCharacterVanityResetRequest__EYCharacterVanityResetRequest_MAX = 3
};


// Enum Prospect.EYItemRarityType
enum class EYItemRarityType : uint8_t
{
	EYItemRarityType__Invalid      = 0,
	EYItemRarityType__Common       = 1,
	EYItemRarityType__Uncommon     = 2,
	EYItemRarityType__Rare         = 3,
	EYItemRarityType__Epic         = 4,
	EYItemRarityType__Exotic       = 5,
	EYItemRarityType__Legendary    = 6,
	EYItemRarityType__MAX          = 7
};


// Enum Prospect.EYCharacterCustomizationColorType
enum class EYCharacterCustomizationColorType : uint8_t
{
	EYCharacterCustomizationColorType__Red = 0,
	EYCharacterCustomizationColorType__Blue = 1,
	EYCharacterCustomizationColorType__Green = 2,
	EYCharacterCustomizationColorType__Black = 3,
	EYCharacterCustomizationColorType__Silver = 4,
	EYCharacterCustomizationColorType__Gold = 5,
	EYCharacterCustomizationColorType__Purple = 6,
	EYCharacterCustomizationColorType__Pink = 7,
	EYCharacterCustomizationColorType__Cyan = 8,
	EYCharacterCustomizationColorType__Bronze = 9,
	EYCharacterCustomizationColorType__PrototypeColor_01 = 10,
	EYCharacterCustomizationColorType__PrototypeColor_02 = 11,
	EYCharacterCustomizationColorType__PrototypeColor_03 = 12,
	EYCharacterCustomizationColorType__PrototypeColor_04 = 13,
	EYCharacterCustomizationColorType__PrototypeColor_05 = 14,
	EYCharacterCustomizationColorType__PrototypeColor_06 = 15,
	EYCharacterCustomizationColorType__Invalid = 16,
	EYCharacterCustomizationColorType__EYCharacterCustomizationColorType_MAX = 17
};


// Enum Prospect.EYEquipedWeaponPoseType
enum class EYEquipedWeaponPoseType : uint8_t
{
	EYEquipedWeaponPoseType__Invalid = 0,
	EYEquipedWeaponPoseType__PistolPose = 1,
	EYEquipedWeaponPoseType__RiflePose = 2,
	EYEquipedWeaponPoseType__ScannerPose = 3,
	EYEquipedWeaponPoseType__ConsumableSelfApplicationPose = 4,
	EYEquipedWeaponPoseType__ConsumableThrowablePose = 5,
	EYEquipedWeaponPoseType__ConsumableDeployablePose = 6,
	EYEquipedWeaponPoseType__CustomNonUsedPose_01 = 7,
	EYEquipedWeaponPoseType__HeavyPose = 8,
	EYEquipedWeaponPoseType__CustomNonUsedPose_03 = 9,
	EYEquipedWeaponPoseType__CustomNonUsedPose_04 = 10,
	EYEquipedWeaponPoseType__CustomNonUsedPose_05 = 11,
	EYEquipedWeaponPoseType__CustomNonUsedPose_06 = 12,
	EYEquipedWeaponPoseType__CustomNonUsedPose_07 = 13,
	EYEquipedWeaponPoseType__CustomNonUsedPose_08 = 14,
	EYEquipedWeaponPoseType__CustomNonUsedPose_09 = 15,
	EYEquipedWeaponPoseType__CustomNonUsedPose = 16,
	EYEquipedWeaponPoseType__CustomNonUsedPose01 = 17,
	EYEquipedWeaponPoseType__CustomNonUsedPose02 = 18,
	EYEquipedWeaponPoseType__CustomNonUsedPose03 = 19,
	EYEquipedWeaponPoseType__CustomNonUsedPose04 = 20,
	EYEquipedWeaponPoseType__CustomNonUsedPose05 = 21,
	EYEquipedWeaponPoseType__CustomNonUsedPose06 = 22,
	EYEquipedWeaponPoseType__CustomNonUsedPose07 = 23,
	EYEquipedWeaponPoseType__EYEquipedWeaponPoseType_MAX = 24
};


// Enum Prospect.EYContractStatus
enum class EYContractStatus : uint8_t
{
	EYContractStatus__Invalid      = 0,
	EYContractStatus__Locked       = 1,
	EYContractStatus__Inactive     = 2,
	EYContractStatus__Active       = 3,
	EYContractStatus__Completed    = 4,
	EYContractStatus__RewardsClaimed = 5,
	EYContractStatus__Cancelled    = 6,
	EYContractStatus__MAX          = 7
};


// Enum Prospect.EYDeadDropDepositResult
enum class EYDeadDropDepositResult : uint8_t
{
	EYDeadDropDepositResult__UnknownError = 0,
	EYDeadDropDepositResult__Success = 1,
	EYDeadDropDepositResult__WrongItems = 2,
	EYDeadDropDepositResult__WrongDeadDropLocation = 3,
	EYDeadDropDepositResult__NoDeadDropContract = 4,
	EYDeadDropDepositResult__MAX   = 5
};


// Enum Prospect.EYMapMarkerState
enum class EYMapMarkerState : uint8_t
{
	EYMapMarkerState__INACTIVE     = 0,
	EYMapMarkerState__ACTIVE       = 1,
	EYMapMarkerState__POSTLOBBY    = 2,
	EYMapMarkerState__DESTROYED    = 3,
	EYMapMarkerState__HIDDEN       = 4,
	EYMapMarkerState__REMOVED      = 5,
	EYMapMarkerState__ACTIVE_ANIMATED = 6,
	EYMapMarkerState__MAX          = 7
};


// Enum Prospect.EYHighlightStateChangeType
enum class EYHighlightStateChangeType : uint8_t
{
	EYHighlightStateChangeType__Added = 0,
	EYHighlightStateChangeType__Removed = 1,
	EYHighlightStateChangeType__Notified = 2,
	EYHighlightStateChangeType__EYHighlightStateChangeType_MAX = 3
};


// Enum Prospect.EYContainerType
enum class EYContainerType : uint8_t
{
	EYContainerType__CustomItem    = 0,
	EYContainerType__StandardItem  = 1,
	EYContainerType__Offer         = 2,
	EYContainerType__EYContainerType_MAX = 3
};


// Enum Prospect.EYWheelType
enum class EYWheelType : uint8_t
{
	EYWheelType__None              = 0,
	EYWheelType__Comm              = 1,
	EYWheelType__Vanity            = 2,
	EYWheelType__Social            = 3,
	EYWheelType__Tool              = 4,
	EYWheelType__Consumable        = 5,
	EYWheelType__VanitySelection   = 6,
	EYWheelType__EYWheelType_MAX   = 7
};


// Enum Prospect.EYDBNOTeleportState
enum class EYDBNOTeleportState : uint8_t
{
	EYDBNOTeleportState__None      = 0,
	EYDBNOTeleportState__Teleporting = 1,
	EYDBNOTeleportState__TeleportCompleted = 2,
	EYDBNOTeleportState__EYDBNOTeleportState_MAX = 3
};


// Enum Prospect.EYTeam
enum class EYTeam : uint8_t
{
	EYTeam__Compilexfix            = 0,
	EYTeam__Player                 = 1,
	EYTeam__AI                     = 2,
	EYTeam__PlayerAI               = 3,
	EYTeam__NoTeamId               = 4,
	EYTeam__EYTeam_MAX             = 5
};


// Enum Prospect.EYDamageApplication
enum class EYDamageApplication : uint8_t
{
	EYDamageApplication__Damage    = 0,
	EYDamageApplication__Heal      = 1,
	EYDamageApplication__HealAndDamage = 2,
	EYDamageApplication__EYDamageApplication_MAX = 3
};


// Enum Prospect.EYGameplayContextType
enum class EYGameplayContextType : uint8_t
{
	EYGameplayContextType__Unknown = 0,
	EYGameplayContextType__Weapon  = 1,
	EYGameplayContextType__Ability = 2,
	EYGameplayContextType__Melee   = 3,
	EYGameplayContextType__Storm   = 4,
	EYGameplayContextType__Vehicle = 5,
	EYGameplayContextType__Armor   = 6,
	EYGameplayContextType__Fall    = 7,
	EYGameplayContextType__All     = 8,
	EYGameplayContextType__EYGameplayContextType_MAX = 9
};


// Enum Prospect.EYLandingType
enum class EYLandingType : uint8_t
{
	EYLandingType__Soft            = 0,
	EYLandingType__Medium          = 1,
	EYLandingType__Hard            = 2,
	EYLandingType__EYLandingType_MAX = 3
};


// Enum Prospect.EYLootSourceType
enum class EYLootSourceType : uint8_t
{
	EYLootSourceType__None         = 0,
	EYLootSourceType__Generic      = 1,
	EYLootSourceType__MapLoot      = 2,
	EYLootSourceType__Removed      = 3,
	EYLootSourceType__AILootDrop   = 4,
	EYLootSourceType__PlayerItem   = 5,
	EYLootSourceType__PlayerItemDroppedOnDeath = 6,
	EYLootSourceType__Debug        = 7,
	EYLootSourceType__EYLootSourceType_MAX = 8
};


// Enum Prospect.EYCachedSpawnLocationType
enum class EYCachedSpawnLocationType : uint8_t
{
	EYCachedSpawnLocationType__Invalid = 0,
	EYCachedSpawnLocationType__InMatch = 1,
	EYCachedSpawnLocationType__EYCachedSpawnLocationType_MAX = 2
};


// Enum Prospect.EYServicePingTypes
enum class EYServicePingTypes : uint8_t
{
	EYServicePingTypes__Station    = 0,
	EYServicePingTypes__Matchmaking = 1,
	EYServicePingTypes__EYServicePingTypes_MAX = 2
};


// Enum Prospect.EYGPAModifierType
enum class EYGPAModifierType : uint8_t
{
	EYGPAModifierType__Additive    = 0,
	EYGPAModifierType__Multiplicitive_PreAdd = 1,
	EYGPAModifierType__Division_PreAdd = 2,
	EYGPAModifierType__Multiplicitive_PostAdd = 3,
	EYGPAModifierType__Division_PostAdd = 4,
	EYGPAModifierType__Override    = 5,
	EYGPAModifierType__EYGPAModifierType_MAX = 6
};


// Enum Prospect.EYGameplayAttribute
enum class EYGameplayAttribute : uint8_t
{
	EYGameplayAttribute__None      = 0,
	EYGameplayAttribute__AbilityCooldownTime = 1,
	EYGameplayAttribute__AIAmountAttackPhaseCount = 2,
	EYGameplayAttribute__AIAmountOfShots = 3,
	EYGameplayAttribute__AIRefireTime = 4,
	EYGameplayAttribute__AIStabilityDamageReceived = 5,
	EYGameplayAttribute__BombardmentDamage = 6,
	EYGameplayAttribute__CurrentHealth = 7,
	EYGameplayAttribute__CurrentShield = 8,
	EYGameplayAttribute__DamageEnemyMultiplier = 9,
	EYGameplayAttribute__DamageEnemyWeakAreaMultiplier = 10,
	EYGameplayAttribute__DamageOverTimeEnabled = 11,
	EYGameplayAttribute__DamagePlayerMultiplier = 12,
	EYGameplayAttribute__DamageRadius = 13,
	EYGameplayAttribute__DamageScalingDealt = 14,
	EYGameplayAttribute__DamageScalingDealtAgainstAI = 15,
	EYGameplayAttribute__DamageScalingDealtAgainstPlayers = 16,
	EYGameplayAttribute__DamageScalingReceived = 17,
	EYGameplayAttribute__DamageScalingReceivedFromAI = 18,
	EYGameplayAttribute__DamageScalingReceivedFromPlayers = 19,
	EYGameplayAttribute__DamageSelf = 20,
	EYGameplayAttribute__DamageSelfInvincibility = 21,
	EYGameplayAttribute__FallingDamageReduction = 22,
	EYGameplayAttribute__FallingVelocityReduction = 23,
	EYGameplayAttribute__GravityScaling = 24,
	EYGameplayAttribute__HardLandingDistance = 25,
	EYGameplayAttribute__HealingWardPower = 26,
	EYGameplayAttribute__HealthDegenerationRate = 27,
	EYGameplayAttribute__HealthPlateSightAngle = 28,
	EYGameplayAttribute__HealthRegenerationDelay = 29,
	EYGameplayAttribute__HealthRegenerationRate = 30,
	EYGameplayAttribute__InteractionInteruptTime = 31,
	EYGameplayAttribute__HelmetNV  = 32,
	EYGameplayAttribute__HelmetThermal = 33,
	EYGameplayAttribute__KineticShieldHealth = 34,
	EYGameplayAttribute__MaxHealth = 35,
	EYGameplayAttribute__MaxShield = 36,
	EYGameplayAttribute__MaxSlideSpeed = 37,
	EYGameplayAttribute__MaxSpeed  = 38,
	EYGameplayAttribute__MaxSprintSpeed = 39,
	EYGameplayAttribute__OverallMovementSpeed = 40,
	EYGameplayAttribute__Piercing  = 41,
	EYGameplayAttribute__ProjectileAcceleration = 42,
	EYGameplayAttribute__ProjectileAccelerationDelay = 43,
	EYGameplayAttribute__ProjectileAccelerationMovementSpeed = 44,
	EYGameplayAttribute__ProjectileArmingTime = 45,
	EYGameplayAttribute__ProjectileGravityScale = 46,
	EYGameplayAttribute__ProjectileInitialSpeed = 47,
	EYGameplayAttribute__ProjectileLifeSpan = 48,
	EYGameplayAttribute__ProjectileMaxSpeed = 49,
	EYGameplayAttribute__RadialFalloffMultiplier = 50,
	EYGameplayAttribute__RadialStartFalloffRange = 51,
	EYGameplayAttribute__SpinupDuration = 52,
	EYGameplayAttribute__SprintWhileReloading = 53,
	EYGameplayAttribute__StaminaConsumptionPerWeaponFire = 54,
	EYGameplayAttribute__SuperJumpCooldown = 55,
	EYGameplayAttribute__SuperJumpSpeed = 56,
	EYGameplayAttribute__TargetingFOVSpeed = 57,
	EYGameplayAttribute__TargetingTime = 58,
	EYGameplayAttribute__TargetingTimeFOV = 59,
	EYGameplayAttribute__VehicleBoostCooldown = 60,
	EYGameplayAttribute__VehicleBoostDuration = 61,
	EYGameplayAttribute__VehicleHealth = 62,
	EYGameplayAttribute__VehicleMovementSpeed = 63,
	EYGameplayAttribute__WeakAreaDamageScaling = 64,
	EYGameplayAttribute__WeaponAmmoOnSwitch = 65,
	EYGameplayAttribute__WeaponAmmoConsumptionOnShot = 66,
	EYGameplayAttribute__WeaponAmountOfShots = 67,
	EYGameplayAttribute__WeaponBurstCount = 68,
	EYGameplayAttribute__WeaponBurstInterval = 69,
	EYGameplayAttribute__WeaponClipSize = 70,
	EYGameplayAttribute__WeaponCrouchingRecoil = 71,
	EYGameplayAttribute__WeaponDamageDirect = 72,
	EYGameplayAttribute__WeaponDamageFalloffMultiplier = 73,
	EYGameplayAttribute__WeaponDamageRadial = 74,
	EYGameplayAttribute__WeaponDamageRange = 75,
	EYGameplayAttribute__WeaponDotDamage = 76,
	EYGameplayAttribute__WeaponDotDuration = 77,
	EYGameplayAttribute__WeaponDotInterval = 78,
	EYGameplayAttribute__WeaponEquipTime = 79,
	EYGameplayAttribute__WeaponHideFullScreenWidget = 80,
	EYGameplayAttribute__WeaponIsLooping = 81,
	EYGameplayAttribute__WeaponMaxTraceRange = 82,
	EYGameplayAttribute__WeaponPenetration = 83,
	EYGameplayAttribute__WeaponRecoilCompenstationAmountX = 84,
	EYGameplayAttribute__WeaponRecoilCompenstationAmountY = 85,
	EYGameplayAttribute__WeaponRecoilCompenstationSpeedX = 86,
	EYGameplayAttribute__WeaponRecoilCompenstationSpeedY = 87,
	EYGameplayAttribute__WeaponRecoilCompenstationStartTime = 88,
	EYGameplayAttribute__WeaponRecoilHorizontal = 89,
	EYGameplayAttribute__WeaponRecoilVertical = 90,
	EYGameplayAttribute__WeaponRecoilIncreaseRate = 91,
	EYGameplayAttribute__WeaponRefireAnimationRateScaleMultiplier = 92,
	EYGameplayAttribute__WeaponRefireTime = 93,
	EYGameplayAttribute__WeaponReloadTime = 94,
	EYGameplayAttribute__WeaponScaleOffset = 95,
	EYGameplayAttribute__WeaponSpreadDecreaseRate = 96,
	EYGameplayAttribute__WeaponSpreadIncreaseRate = 97,
	EYGameplayAttribute__WeaponSpreadMax = 98,
	EYGameplayAttribute__WeaponSpreadUnaimed = 99,
	EYGameplayAttribute__WeaponSprintBufferTime = 100,
	EYGameplayAttribute__WeaponTargetingFOV = 101,
	EYGameplayAttribute__WeaponTargetingInterp = 102,
	EYGameplayAttribute__WeaponTargetingRecoil = 103,
	EYGameplayAttribute__WeaponTargetingSpreadMultiplier = 104,
	EYGameplayAttribute__WeaponTargetingMaxSpreadMultiplier = 105,
	EYGameplayAttribute__WeaponTargetingSpreadIncreaseMultiplier = 106,
	EYGameplayAttribute__WeaponUnequipTime = 107,
	EYGameplayAttribute__WeaponRadialDamageImpulse = 108,
	EYGameplayAttribute__WeaponRadialDamageSelfImpulseMultiplier = 109,
	EYGameplayAttribute__WeaponIsSilenced = 110,
	EYGameplayAttribute__WorldTargetingFOV = 111,
	EYGameplayAttribute__ScopeThermal = 112,
	EYGameplayAttribute__ScopeNV   = 113,
	EYGameplayAttribute__XPIncrease = 114,
	EYGameplayAttribute__StaminaConsumptionRate = 115,
	EYGameplayAttribute__MaxStamina = 116,
	EYGameplayAttribute__GPA_HAS_BEEN_REMOVED = 117,
	EYGameplayAttribute__EYGameplayAttribute_MAX = 118
};


// Enum Prospect.EYKeybindingInputDeviceType
enum class EYKeybindingInputDeviceType : uint8_t
{
	EYKeybindingInputDeviceType__None = 0,
	EYKeybindingInputDeviceType__Keyboard = 1,
	EYKeybindingInputDeviceType__GamepadGeneric = 2,
	EYKeybindingInputDeviceType__PS4 = 3,
	EYKeybindingInputDeviceType__XB1 = 4,
	EYKeybindingInputDeviceType__PS5 = 5,
	EYKeybindingInputDeviceType__XBS = 6,
	EYKeybindingInputDeviceType__EYKeybindingInputDeviceType_MAX = 7
};


// Enum Prospect.EYInputBindingCategory
enum class EYInputBindingCategory : uint8_t
{
	EYInputBindingCategory__MatchGeneral = 0,
	EYInputBindingCategory__MatchSpectate = 1,
	EYInputBindingCategory__MatchGearStore = 2,
	EYInputBindingCategory__Station = 3,
	EYInputBindingCategory__General = 4,
	EYInputBindingCategory__MAX    = 5
};


// Enum Prospect.EYWeaponTransportType
enum class EYWeaponTransportType : uint8_t
{
	EYWeaponTransportType__Invalid = 0,
	EYWeaponTransportType__Hitscan = 1,
	EYWeaponTransportType__Projectile = 2,
	EYWeaponTransportType__Sphere  = 3,
	EYWeaponTransportType__PhysicsActor = 4,
	EYWeaponTransportType__Capsule = 5,
	EYWeaponTransportType__EYWeaponTransportType_MAX = 6
};


// Enum Prospect.EYInteractionUpdateType
enum class EYInteractionUpdateType : uint8_t
{
	EYInteractionUpdateType__Start = 0,
	EYInteractionUpdateType__Successful = 1,
	EYInteractionUpdateType__Interrupted = 2,
	EYInteractionUpdateType__MAX   = 3
};


// Enum Prospect.EYInteractionType
enum class EYInteractionType : uint8_t
{
	EYInteractionType__None        = 0,
	EYInteractionType__ExtractionActivation = 1,
	EYInteractionType__Extraction  = 2,
	EYInteractionType__PickUp      = 3,
	EYInteractionType__DBNO_Revive = 4,
	EYInteractionType__DBNO_Execute = 5,
	EYInteractionType__Trophy      = 6,
	EYInteractionType__LootCrate   = 7,
	EYInteractionType__StationSocial = 8,
	EYInteractionType__MAX         = 9
};


// Enum Prospect.EYWeaponSlotType
enum class EYWeaponSlotType : uint8_t
{
	EYWeaponSlotType__Starter      = 0,
	EYWeaponSlotType__Primary      = 1,
	EYWeaponSlotType__Invalid      = 2,
	EYWeaponSlotType__EYWeaponSlotType_MAX = 3
};


// Enum Prospect.EYPerkTarget
enum class EYPerkTarget : uint8_t
{
	EYPerkTarget__Source           = 0,
	EYPerkTarget__Target           = 1,
	EYPerkTarget__EYPerkTarget_MAX = 2
};


// Enum Prospect.EYPerkBool
enum class EYPerkBool : uint8_t
{
	EYPerkBool__None               = 0,
	EYPerkBool__LessThan           = 1,
	EYPerkBool__LessThanOrEqualTo  = 2,
	EYPerkBool__EqualTo            = 3,
	EYPerkBool__GreaterThanOrEqualTo = 4,
	EYPerkBool__GreaterThan        = 5,
	EYPerkBool__EYPerkBool_MAX     = 6
};


// Enum Prospect.EYPerkTrigger
enum class EYPerkTrigger : uint8_t
{
	EYPerkTrigger__GameplayAttribute = 0,
	EYPerkTrigger__AlwaysOn        = 1,
	EYPerkTrigger__OnHit           = 2,
	EYPerkTrigger__OnKill          = 3,
	EYPerkTrigger__OnBeingHit      = 4,
	EYPerkTrigger__OnTargeting     = 5,
	EYPerkTrigger__OnWeaponSwitch  = 6,
	EYPerkTrigger__OnSprinting     = 7,
	EYPerkTrigger__OnFalling       = 8,
	EYPerkTrigger__OnDealingDamageModification = 9,
	EYPerkTrigger__OnHealthChanged = 10,
	EYPerkTrigger__OnTargetingAndFalling = 11,
	EYPerkTrigger__OnSpinUp        = 12,
	EYPerkTrigger__OnMeleeLight    = 13,
	EYPerkTrigger__OnMeleeHeavy    = 14,
	EYPerkTrigger__EYPerkTrigger_MAX = 15
};


// Enum Prospect.EYWeaponVisualState
enum class EYWeaponVisualState : uint8_t
{
	EYWeaponVisualState__Normal    = 0,
	EYWeaponVisualState__PendingTransportRelease = 1,
	EYWeaponVisualState__EYWeaponVisualState_MAX = 2
};


// Enum Prospect.EYPlayerMatchFinishedResult
enum class EYPlayerMatchFinishedResult : uint8_t
{
	EYPlayerMatchFinishedResult__None = 0,
	EYPlayerMatchFinishedResult__Dead = 1,
	EYPlayerMatchFinishedResult__Escaped = 2,
	EYPlayerMatchFinishedResult__EYPlayerMatchFinishedResult_MAX = 3
};


// Enum Prospect.EYStatValueComparison
enum class EYStatValueComparison : uint8_t
{
	EYStatValueComparison__NONE    = 0,
	EYStatValueComparison__LOWER_IS_BETTER = 1,
	EYStatValueComparison__HIGHER_IS_BETTER = 2,
	EYStatValueComparison__MAX     = 3
};


// Enum Prospect.EYStatValueDisplayMethod
enum class EYStatValueDisplayMethod : uint8_t
{
	EYStatValueDisplayMethod__NONE = 0,
	EYStatValueDisplayMethod__INT  = 1,
	EYStatValueDisplayMethod__DECIMAL = 2,
	EYStatValueDisplayMethod__PERCENTAGE = 3,
	EYStatValueDisplayMethod__MAX  = 4
};


// Enum Prospect.EYFaction
enum class EYFaction : uint8_t
{
	EYFaction__Invalid             = 0,
	EYFaction__ICA                 = 1,
	EYFaction__Korolev             = 2,
	EYFaction__Osiris              = 3,
	EYFaction__MAX                 = 4
};


// Enum Prospect.EYPlayerGameDataStateType
enum class EYPlayerGameDataStateType : uint8_t
{
	EYPlayerGameDataStateType__Normal = 0,
	EYPlayerGameDataStateType__MAX = 1
};


// Enum Prospect.EYProgressState
enum class EYProgressState : uint8_t
{
	EYProgressState__Idle          = 0,
	EYProgressState__Running       = 1,
	EYProgressState__Finished      = 2,
	EYProgressState__Stopped       = 3,
	EYProgressState__Paused        = 4,
	EYProgressState__Resumed       = 5,
	EYProgressState__ReverseRunning = 6,
	EYProgressState__EYProgressState_MAX = 7
};


// Enum Prospect.EYChannelContext
enum class EYChannelContext : uint8_t
{
	EYChannelContext__None         = 0,
	EYChannelContext__Text         = 1,
	EYChannelContext__Voice        = 2,
	EYChannelContext__All          = 3,
	EYChannelContext__EYChannelContext_MAX = 4
};


// Enum Prospect.EYGetErrorHandling
enum class EYGetErrorHandling : uint8_t
{
	EYGetErrorHandling__LogAndReturnNull = 0,
	EYGetErrorHandling__ReturnNull = 1,
	EYGetErrorHandling__EYGetErrorHandling_MAX = 2
};


// Enum Prospect.EYInventoryPlayerTypes
enum class EYInventoryPlayerTypes : uint8_t
{
	EYInventoryPlayerTypes__Undefined = 0,
	EYInventoryPlayerTypes__Stash  = 1,
	EYInventoryPlayerTypes__Set    = 2,
	EYInventoryPlayerTypes__Inventory = 3,
	EYInventoryPlayerTypes__Info   = 4,
	EYInventoryPlayerTypes__EYInventoryPlayerTypes_MAX = 5
};


// Enum Prospect.EYSortingMethod
enum class EYSortingMethod : uint8_t
{
	EYSortingMethod__Alphabetical  = 0,
	EYSortingMethod__Rarity        = 1,
	EYSortingMethod__ItemType      = 2,
	EYSortingMethod__Priority      = 3,
	EYSortingMethod__Count         = 4,
	EYSortingMethod__EYSortingMethod_MAX = 5
};


// Enum Prospect.EYInventoryListType
enum class EYInventoryListType : uint8_t
{
	EYInventoryListType__None      = 0,
	EYInventoryListType__CurrentEquipped = 1,
	EYInventoryListType__FullList  = 2,
	EYInventoryListType__EYInventoryListType_MAX = 3
};


// Enum Prospect.EYCameraIntentionType
enum class EYCameraIntentionType : uint8_t
{
	EYCameraIntentionType__None    = 0,
	EYCameraIntentionType__Shop    = 1,
	EYCameraIntentionType__Customization = 2,
	EYCameraIntentionType__Seasons = 3,
	EYCameraIntentionType__Launch  = 4,
	EYCameraIntentionType__All     = 5,
	EYCameraIntentionType__EYCameraIntentionType_MAX = 6
};


// Enum Prospect.EYApperenceCategoriesTypes
enum class EYApperenceCategoriesTypes : uint8_t
{
	EYApperenceCategoriesTypes__Overview = 0,
	EYApperenceCategoriesTypes__Archetype = 1,
	EYApperenceCategoriesTypes__Banner = 2,
	EYApperenceCategoriesTypes__Emote = 3,
	EYApperenceCategoriesTypes__Vehicle = 4,
	EYApperenceCategoriesTypes__Droppod = 5,
	EYApperenceCategoriesTypes__Spray = 6,
	EYApperenceCategoriesTypes__Pet = 7,
	EYApperenceCategoriesTypes__Invalid = 8,
	EYApperenceCategoriesTypes__EYApperenceCategoriesTypes_MAX = 9
};


// Enum Prospect.EYAuthorizationState
enum class EYAuthorizationState : uint8_t
{
	EYAuthorizationState__Init     = 0,
	EYAuthorizationState__LegalAgreementsNotAccepted = 1,
	EYAuthorizationState__InvalidGamePlatform = 2,
	EYAuthorizationState__LoggingIntoPlayFab = 3,
	EYAuthorizationState__NotLoggedInToPlayFab = 4,
	EYAuthorizationState__ServerNotLoggedInToPlayFab = 5,
	EYAuthorizationState__DisconnectedFromBackendRetry = 6,
	EYAuthorizationState__MaintenanceModeCheck = 7,
	EYAuthorizationState__MaintenanceModeRetry = 8,
	EYAuthorizationState__AllowCommunicationWithBackend = 9,
	EYAuthorizationState__NewLegalAgreementsCheck = 10,
	EYAuthorizationState__NewLegalAgreementsNotAccepted = 11,
	EYAuthorizationState__StationPingCheck = 12,
	EYAuthorizationState__StationPingRetry = 13,
	EYAuthorizationState__LoginQueueCheck = 14,
	EYAuthorizationState__LoginQueueRetry = 15,
	EYAuthorizationState__IsPlayerStillOnBattleServerCheck = 16,
	EYAuthorizationState__IsPlayerStillOnBattleServerRetry = 17,
	EYAuthorizationState__CompletelyLoggedIn = 18,
	EYAuthorizationState__EYAuthorizationState_MAX = 19
};


// Enum Prospect.EYInterruptionCause
enum class EYInterruptionCause : uint8_t
{
	EYInterruptionCause__Undefined = 0,
	EYInterruptionCause__ServerCrash = 1,
	EYInterruptionCause__BackendDown = 2,
	EYInterruptionCause__SignalRDown = 3,
	EYInterruptionCause__NoInternet = 4,
	EYInterruptionCause__MAX       = 5
};


// Enum Prospect.EYCustomizationMode
enum class EYCustomizationMode : uint8_t
{
	EYCustomizationMode__None      = 0,
	EYCustomizationMode__Weapon    = 1,
	EYCustomizationMode__PlayerCharacter = 2,
	EYCustomizationMode__CharacterExplicitVisualization = 3,
	EYCustomizationMode__CharacterCustomizationPreview = 4,
	EYCustomizationMode__NewCharacterExplicitVisualization = 5,
	EYCustomizationMode__Emote     = 6,
	EYCustomizationMode__Banner    = 7,
	EYCustomizationMode__Vehicle   = 8,
	EYCustomizationMode__Droppod   = 9,
	EYCustomizationMode__Spray     = 10,
	EYCustomizationMode__Pet       = 11,
	EYCustomizationMode__Melee     = 12,
	EYCustomizationMode__Item      = 13,
	EYCustomizationMode__GenericItem = 14,
	EYCustomizationMode__Bag       = 15,
	EYCustomizationMode__Consumable = 16,
	EYCustomizationMode__Helmet    = 17,
	EYCustomizationMode__Shield    = 18,
	EYCustomizationMode__XpBoost   = 19,
	EYCustomizationMode__MAX       = 20
};


// Enum Prospect.EYLevelStreamingType
enum class EYLevelStreamingType : uint8_t
{
	EYLevelStreamingType__LobbyOnly = 0,
	EYLevelStreamingType__LobbyCritical = 1,
	EYLevelStreamingType__BeforeMatch = 2,
	EYLevelStreamingType__DuringMatch = 3,
	EYLevelStreamingType__EndOfMatch = 4,
	EYLevelStreamingType__MAX      = 5
};


// Enum Prospect.EYMapMarkerType
enum class EYMapMarkerType : uint8_t
{
	EYMapMarkerType__NONE          = 0,
	EYMapMarkerType__PLAYER_MARKER = 1,
	EYMapMarkerType__EXTRACTION_STATION = 2,
	EYMapMarkerType__HUNT          = 3,
	EYMapMarkerType__UPLINK        = 4,
	EYMapMarkerType__MINERALS      = 5,
	EYMapMarkerType__ESCAPE_POD    = 6,
	EYMapMarkerType__SETTLEMENT    = 7,
	EYMapMarkerType__AREA_NAME     = 8,
	EYMapMarkerType__RESOURCE_FARMING = 9,
	EYMapMarkerType__OB_ALPHA      = 10,
	EYMapMarkerType__OB_BETTA      = 11,
	EYMapMarkerType__OB_GAMMA      = 12,
	EYMapMarkerType__MA_ALPHA      = 13,
	EYMapMarkerType__MA_BETTA      = 14,
	EYMapMarkerType__MA_GAMMA      = 15,
	EYMapMarkerType__OB_POWERUP    = 16,
	EYMapMarkerType__MONSTER_DEN   = 17,
	EYMapMarkerType__GEAR_STORE_PURCHASE = 18,
	EYMapMarkerType__NOISE_SOURCE  = 19,
	EYMapMarkerType__OB_TROPHY     = 20,
	EYMapMarkerType__OB_REDTROPHY  = 21,
	EYMapMarkerType__OB_YELLOWTROPHY = 22,
	EYMapMarkerType__OB_GREENTROPHY = 23,
	EYMapMarkerType__OB_BLUETROPHY = 24,
	EYMapMarkerType__OB_PURPLETROPHY = 25,
	EYMapMarkerType__OB_WHITETROPHY = 26,
	EYMapMarkerType__OB_BLACKTROPHY = 27,
	EYMapMarkerType__OB_CURSEDTROPHY = 28,
	EYMapMarkerType__OB_COLLECT    = 29,
	EYMapMarkerType__OB_BOSSHUNT   = 30,
	EYMapMarkerType__OB_SUPERPOWERUP = 31,
	EYMapMarkerType__OB_DELIVERY   = 32,
	EYMapMarkerType__OB_DELIVERYSTATION = 33,
	EYMapMarkerType__MA_DATARETRIVAL = 34,
	EYMapMarkerType__AREABUBBLE    = 35,
	EYMapMarkerType__PLAYER_START  = 36,
	EYMapMarkerType__SOCIAL        = 37,
	EYMapMarkerType__TRACKING      = 38,
	EYMapMarkerType__MOVEMENT_NOISE = 39,
	EYMapMarkerType__OB_DEPOSIT    = 40,
	EYMapMarkerType__OB_DEPOSITFIELD = 41,
	EYMapMarkerType__OB_DEPOSITSTATION = 42,
	EYMapMarkerType__SURVEILLANCE_WARD = 43,
	EYMapMarkerType__OB_SALVAGE    = 44,
	EYMapMarkerType__OB_SALVAGE_SUB_ACTOR = 45,
	EYMapMarkerType__OB_SABOTAGE   = 46,
	EYMapMarkerType__OB_STORMSURGE = 47,
	EYMapMarkerType__OB_STORMSURGE_SUB_ACTOR = 48,
	EYMapMarkerType__OB_BIGDRILL   = 49,
	EYMapMarkerType__OB_Train      = 50,
	EYMapMarkerType__DEBUG_ACTITYLOCATION = 51,
	EYMapMarkerType__VEHICLE       = 52,
	EYMapMarkerType__KILLCONTRACT  = 53,
	EYMapMarkerType__MISSION       = 54,
	EYMapMarkerType__MA_TUTORIALIZATIONACTIVITY = 55,
	EYMapMarkerType__OB_DEPOSIT_EASTER = 56,
	EYMapMarkerType__OB_DEPOSIT_STATION_EASTER = 57,
	EYMapMarkerType__MA_RecallRecharge = 58,
	EYMapMarkerType__MA_VPExtraction = 59,
	EYMapMarkerType__MAX           = 60
};


// Enum Prospect.EYMissionResultType
enum class EYMissionResultType : uint8_t
{
	EYMissionResultType__Active    = 0,
	EYMissionResultType__Failed    = 1,
	EYMissionResultType__StepCompleted = 2,
	EYMissionResultType__MissionCompleted = 3,
	EYMissionResultType__Succeeded = 4,
	EYMissionResultType__EYMissionResultType_MAX = 5
};


// Enum Prospect.EYTechtreeCategoryType
enum class EYTechtreeCategoryType : uint8_t
{
	EYTechtreeCategoryType__None   = 0,
	EYTechtreeCategoryType__Korolev = 1,
	EYTechtreeCategoryType__Osiris = 2,
	EYTechtreeCategoryType__ICA    = 3,
	EYTechtreeCategoryType__Crafting = 4,
	EYTechtreeCategoryType__Mining = 5,
	EYTechtreeCategoryType__Inventory = 6,
	EYTechtreeCategoryType__Generators = 7,
	EYTechtreeCategoryType__Workbench = 8,
	EYTechtreeCategoryType__MAX    = 9
};


// Enum Prospect.EYReportPlayerType
enum class EYReportPlayerType : uint8_t
{
	EYReportPlayerType__Cheating   = 0,
	EYReportPlayerType__AFK        = 1,
	EYReportPlayerType__Toxic      = 2,
	EYReportPlayerType__Griefing   = 3,
	EYReportPlayerType__Invalid    = 4,
	EYReportPlayerType__EYReportPlayerType_MAX = 5
};


// Enum Prospect.EYCustomerServiceRequestType
enum class EYCustomerServiceRequestType : uint8_t
{
	EYCustomerServiceRequestType__BanAppeal = 0,
	EYCustomerServiceRequestType__CheatReport = 1,
	EYCustomerServiceRequestType__OpenQuestion = 2,
	EYCustomerServiceRequestType__TechnicalSupport = 3,
	EYCustomerServiceRequestType__ReportPlayer = 4,
	EYCustomerServiceRequestType__Invalid = 5,
	EYCustomerServiceRequestType__EYCustomerServiceRequestType_MAX = 6
};


// Enum Prospect.EYPlayerSupportResult
enum class EYPlayerSupportResult : uint8_t
{
	EYPlayerSupportResult__Succeeded = 0,
	EYPlayerSupportResult__Failed  = 1,
	EYPlayerSupportResult__Timeout = 2,
	EYPlayerSupportResult__EYPlayerSupportResult_MAX = 3
};


// Enum Prospect.EYReportType
enum class EYReportType : uint8_t
{
	EYReportType__None             = 0,
	EYReportType__ReportPlayer     = 1,
	EYReportType__CustomerService  = 2,
	EYReportType__EYReportType_MAX = 3
};


// Enum Prospect.EYTravelState
enum class EYTravelState : uint8_t
{
	EYTravelState__None            = 0,
	EYTravelState__PendingSession  = 1,
	EYTravelState__ServerValdiation = 2,
	EYTravelState__ResourceCleanup = 3,
	EYTravelState__Travel          = 4,
	EYTravelState__PendingServerTravel = 5,
	EYTravelState__Failure         = 6,
	EYTravelState__Success         = 7,
	EYTravelState__EYTravelState_MAX = 8
};


// Enum Prospect.EYMatchmakingStatus
enum class EYMatchmakingStatus : uint8_t
{
	EYMatchmakingStatus__WaitingForMatchmakingResult = 0,
	EYMatchmakingStatus__TravelingToServer = 1,
	EYMatchmakingStatus__WaitingForServerToSpinUp = 2,
	EYMatchmakingStatus__Failure   = 3,
	EYMatchmakingStatus__FailureTimeout = 4,
	EYMatchmakingStatus__EYMatchmakingStatus_MAX = 5
};


// Enum Prospect.EYSessionEventType
enum class EYSessionEventType : uint8_t
{
	EYSessionEventType__Invalid    = 0,
	EYSessionEventType__Warning    = 1,
	EYSessionEventType__Finishing  = 2,
	EYSessionEventType__MAX        = 3
};


// Enum Prospect.EYGfxQualityPreset
enum class EYGfxQualityPreset : uint8_t
{
	EYGfxQualityPreset__Low        = 0,
	EYGfxQualityPreset__Medium     = 1,
	EYGfxQualityPreset__High       = 2,
	EYGfxQualityPreset__Epic       = 3,
	EYGfxQualityPreset__Custom     = 4,
	EYGfxQualityPreset__EYGfxQualityPreset_MAX = 5
};


// Enum Prospect.EYSquadID
enum class EYSquadID : uint8_t
{
	EYSquadID__SQUAD               = 0,
	EYSquadID__SQUAD01             = 1,
	EYSquadID__SQUAD02             = 2,
	EYSquadID__SQUAD03             = 3,
	EYSquadID__SQUAD04             = 4,
	EYSquadID__SQUAD05             = 5,
	EYSquadID__SQUAD06             = 6,
	EYSquadID__SQUAD07             = 7,
	EYSquadID__SQUAD08             = 8,
	EYSquadID__SQUAD09             = 9,
	EYSquadID__SQUAD_MAX           = 10
};


// Enum Prospect.EYHUDInfoMessageState
enum class EYHUDInfoMessageState : uint8_t
{
	EYHUDInfoMessageState__None    = 0,
	EYHUDInfoMessageState__Active  = 1,
	EYHUDInfoMessageState__Resting = 2,
	EYHUDInfoMessageState__Disabled = 3,
	EYHUDInfoMessageState__MAX     = 4
};


// Enum Prospect.EYHUDInfoPriorityCategory
enum class EYHUDInfoPriorityCategory : uint8_t
{
	EYHUDInfoPriorityCategory__None = 0,
	EYHUDInfoPriorityCategory__EvacInteraction = 1,
	EYHUDInfoPriorityCategory__Interaction = 2,
	EYHUDInfoPriorityCategory__AreaAnnouncement = 3,
	EYHUDInfoPriorityCategory__MAX = 4
};


// Enum Prospect.EYInsuranceStatus
enum class EYInsuranceStatus : uint8_t
{
	EYInsuranceStatus__None        = 0,
	EYInsuranceStatus__Pending     = 1,
	EYInsuranceStatus__InsuredByOwnerInsideInventory = 2,
	EYInsuranceStatus__InsuredByOwnerOutsideInventory = 3,
	EYInsuranceStatus__InsuredByAnotherPlayer = 4,
	EYInsuranceStatus__InsuredBySquadmate = 5,
	EYInsuranceStatus__EYInsuranceStatus_MAX = 6
};


// Enum Prospect.EYItemActionType
enum class EYItemActionType : uint8_t
{
	EYItemActionType__None         = 0,
	EYItemActionType__Equip        = 1,
	EYItemActionType__CloseEquip   = 2,
	EYItemActionType__Unequip      = 3,
	EYItemActionType__Scrap        = 4,
	EYItemActionType__Craft        = 5,
	EYItemActionType__CancelCrafting = 6,
	EYItemActionType__GoToItemDetails = 7,
	EYItemActionType__Purchase     = 8,
	EYItemActionType__PurchasePending = 9,
	EYItemActionType__MAX          = 10
};


// Enum Prospect.EYSeasonCategory
enum class EYSeasonCategory : uint8_t
{
	EYSeasonCategory__SeasonOverview = 0,
	EYSeasonCategory__Challenges   = 1,
	EYSeasonCategory__SeasonChallenges = 2,
	EYSeasonCategory__DailyWeeklyChallenges = 3,
	EYSeasonCategory__EYSeasonCategory_MAX = 4
};


// Enum Prospect.EYShopOfferPurchaseDialogState
enum class EYShopOfferPurchaseDialogState : uint8_t
{
	EYShopOfferPurchaseDialogState__AskingForConfirmation = 0,
	EYShopOfferPurchaseDialogState__PurchasePending = 1,
	EYShopOfferPurchaseDialogState__PurchaseSuccessful = 2,
	EYShopOfferPurchaseDialogState__PurchaseFailed = 3,
	EYShopOfferPurchaseDialogState__EYShopOfferPurchaseDialogState_MAX = 4
};


// Enum Prospect.EYNotificationAction
enum class EYNotificationAction : uint8_t
{
	EYNotificationAction__None     = 0,
	EYNotificationAction__Accept   = 1,
	EYNotificationAction__Decline  = 2,
	EYNotificationAction__Remove   = 3,
	EYNotificationAction__EYNotificationAction_MAX = 4
};


// Enum Prospect.EYNotificationMessageType
enum class EYNotificationMessageType : uint8_t
{
	EYNotificationMessageType__None = 0,
	EYNotificationMessageType__SquadLeft = 1,
	EYNotificationMessageType__SquadJoined = 2,
	EYNotificationMessageType__SquadDisbanded = 3,
	EYNotificationMessageType__SquadFailed = 4,
	EYNotificationMessageType__SquadInvite = 5,
	EYNotificationMessageType__FriendAdded = 6,
	EYNotificationMessageType__FriendOnline = 7,
	EYNotificationMessageType__FriendOffline = 8,
	EYNotificationMessageType__FriendInviteSent = 9,
	EYNotificationMessageType__FriendInvite = 10,
	EYNotificationMessageType__GenericSquad = 11,
	EYNotificationMessageType__GenericFriend = 12,
	EYNotificationMessageType__GenericNotificationMessage = 13,
	EYNotificationMessageType__EYNotificationMessageType_MAX = 14
};


// Enum Prospect.EYNotifcationType
enum class EYNotifcationType : uint8_t
{
	EYNotifcationType__None        = 0,
	EYNotifcationType__Invite      = 1,
	EYNotifcationType__Message     = 2,
	EYNotifcationType__EYNotifcationType_MAX = 3
};


// Enum Prospect.EYPlayerSetTypeSimplified
enum class EYPlayerSetTypeSimplified : uint8_t
{
	EYPlayerSetTypeSimplified__Invalid = 0,
	EYPlayerSetTypeSimplified__StashItem = 1,
	EYPlayerSetTypeSimplified__BagItem = 2,
	EYPlayerSetTypeSimplified__ActiveSlot = 3,
	EYPlayerSetTypeSimplified__EYPlayerSetTypeSimplified_MAX = 4
};


// Enum Prospect.EYItemImprovementScreenSlotType
enum class EYItemImprovementScreenSlotType : uint8_t
{
	EYItemImprovementScreenSlotType__Invalid = 0,
	EYItemImprovementScreenSlotType__SellScreen = 1,
	EYItemImprovementScreenSlotType__StashScreen = 2,
	EYItemImprovementScreenSlotType__MAX = 3
};


// Enum Prospect.EYContractDifficulty
enum class EYContractDifficulty : uint8_t
{
	EYContractDifficulty__Invalid  = 0,
	EYContractDifficulty__Easy     = 1,
	EYContractDifficulty__Medium   = 2,
	EYContractDifficulty__Hard     = 3,
	EYContractDifficulty__MAX      = 4
};


// Enum Prospect.EYObjectivesProgressProcessing
enum class EYObjectivesProgressProcessing : uint8_t
{
	EYObjectivesProgressProcessing__Invalid = 0,
	EYObjectivesProgressProcessing__Sequential = 1,
	EYObjectivesProgressProcessing__Parallel = 2,
	EYObjectivesProgressProcessing__MAX = 3
};


// Enum Prospect.EYKillTypeAction
enum class EYKillTypeAction : uint8_t
{
	EYKillTypeAction__Invalid      = 0,
	EYKillTypeAction__Players      = 1,
	EYKillTypeAction__Creatures    = 2,
	EYKillTypeAction__All          = 3,
	EYKillTypeAction__MAX          = 4
};


// Enum Prospect.EYContractObjectiveType
enum class EYContractObjectiveType : uint8_t
{
	EYContractObjectiveType__Invalid = 0,
	EYContractObjectiveType__Kills = 1,
	EYContractObjectiveType__OwnNumOfItem = 2,
	EYContractObjectiveType__DeadDrop = 3,
	EYContractObjectiveType__VisitArea = 4,
	EYContractObjectiveType__MAX   = 5
};


// Enum Prospect.EYCustomizationModelType
enum class EYCustomizationModelType : uint8_t
{
	EYCustomizationModelType__None = 0,
	EYCustomizationModelType__Persistent = 1,
	EYCustomizationModelType__Pending = 2,
	EYCustomizationModelType__EYCustomizationModelType_MAX = 3
};


// Enum Prospect.EYCharacterItemColumnType
enum class EYCharacterItemColumnType : uint8_t
{
	EYCharacterItemColumnType__Invalid = 0,
	EYCharacterItemColumnType__Item = 1,
	EYCharacterItemColumnType__Color = 2,
	EYCharacterItemColumnType__Archetype = 3,
	EYCharacterItemColumnType__EYCharacterItemColumnType_MAX = 4
};


// Enum Prospect.EYVehicleStateType
enum class EYVehicleStateType : uint8_t
{
	EYVehicleStateType__Invalid    = 0,
	EYVehicleStateType__Landing    = 1,
	EYVehicleStateType__Possesed   = 2,
	EYVehicleStateType__Idle       = 3,
	EYVehicleStateType__Destroyed  = 4,
	EYVehicleStateType__EYVehicleStateType_MAX = 5
};


// Enum Prospect.EYShopTabType
enum class EYShopTabType : uint8_t
{
	EYShopTabType__Buy             = 0,
	EYShopTabType__Sell            = 1,
	EYShopTabType__MAX             = 2
};


// Enum Prospect.EYFadeDirection
enum class EYFadeDirection : uint8_t
{
	EYFadeDirection__FadeIn        = 0,
	EYFadeDirection__FadeOut       = 1,
	EYFadeDirection__EYFadeDirection_MAX = 2
};


// Enum Prospect.EYPlayerStateBlueprint
enum class EYPlayerStateBlueprint : uint8_t
{
	EYPlayerStateBlueprint__None   = 0,
	EYPlayerStateBlueprint__Crouching = 1,
	EYPlayerStateBlueprint__Sprinting = 2,
	EYPlayerStateBlueprint__Targeting = 3,
	EYPlayerStateBlueprint__Reloading = 4,
	EYPlayerStateBlueprint__Firing = 5,
	EYPlayerStateBlueprint__WeaponSwitch = 6,
	EYPlayerStateBlueprint__SpiningUp = 7,
	EYPlayerStateBlueprint__Interacting = 8,
	EYPlayerStateBlueprint__Death  = 9,
	EYPlayerStateBlueprint__ReloadAnimation = 10,
	EYPlayerStateBlueprint__NOTUSED4 = 11,
	EYPlayerStateBlueprint__Melee  = 12,
	EYPlayerStateBlueprint__Emote  = 13,
	EYPlayerStateBlueprint__Inventory = 14,
	EYPlayerStateBlueprint__Slide  = 15,
	EYPlayerStateBlueprint__NOTUSED5 = 16,
	EYPlayerStateBlueprint__NOTUSED6 = 17,
	EYPlayerStateBlueprint__Use    = 18,
	EYPlayerStateBlueprint__NOTUSED7 = 19,
	EYPlayerStateBlueprint__NOTUSED8 = 20,
	EYPlayerStateBlueprint__DBNO   = 21,
	EYPlayerStateBlueprint__Revive = 22,
	EYPlayerStateBlueprint__ReloadAmmo = 23,
	EYPlayerStateBlueprint__NOTUSED9 = 24,
	EYPlayerStateBlueprint__HardLanding = 25,
	EYPlayerStateBlueprint__Prototype = 26,
	EYPlayerStateBlueprint__Vehicle = 27,
	EYPlayerStateBlueprint__VehicleLeaving = 28,
	EYPlayerStateBlueprint__Banner = 29,
	EYPlayerStateBlueprint__NOTUSED3 = 30,
	EYPlayerStateBlueprint__ChargingAttack = 31,
	EYPlayerStateBlueprint__Ability = 32,
	EYPlayerStateBlueprint__NOTUSED1 = 33,
	EYPlayerStateBlueprint__Carrying = 34,
	EYPlayerStateBlueprint__Climbing = 35,
	EYPlayerStateBlueprint__Prone  = 36,
	EYPlayerStateBlueprint__NOTUSED10 = 37,
	EYPlayerStateBlueprint__NOTUSED2 = 38,
	EYPlayerStateBlueprint__MeleeHeavy = 39,
	EYPlayerStateBlueprint__MAX    = 40
};


// Enum Prospect.EYCustomMovementMode
enum class EYCustomMovementMode : uint8_t
{
	CMOVE_Droppod                  = 0,
	CMOVE_LedgeClimbing            = 1,
	CMOVE_MAX                      = 2
};


// Enum Prospect.EYDebugActivitySpawnMode
enum class EYDebugActivitySpawnMode : uint8_t
{
	EYDebugActivitySpawnMode__None = 0,
	EYDebugActivitySpawnMode__DebugSet = 1,
	EYDebugActivitySpawnMode__DebugActivities = 2,
	EYDebugActivitySpawnMode__EYDebugActivitySpawnMode_MAX = 3
};


// Enum Prospect.EYActivityLocationStatus
enum class EYActivityLocationStatus : uint8_t
{
	EYActivityLocationStatus__Free = 0,
	EYActivityLocationStatus__SpawnRequestPending = 1,
	EYActivityLocationStatus__Occupied = 2,
	EYActivityLocationStatus__Depleted = 3,
	EYActivityLocationStatus__OnCooldown = 4,
	EYActivityLocationStatus__EYActivityLocationStatus_MAX = 5
};


// Enum Prospect.EYEnvQueryHightlightMode
enum class EYEnvQueryHightlightMode : uint8_t
{
	EYEnvQueryHightlightMode__All  = 0,
	EYEnvQueryHightlightMode__Best5Pct = 1,
	EYEnvQueryHightlightMode__Best25Pct = 2,
	EYEnvQueryHightlightMode__EYEnvQueryHightlightMode_MAX = 3
};


// Enum Prospect.EYLinkType
enum class EYLinkType : uint8_t
{
	EYLinkType__Evaluation         = 0,
	EYLinkType__Area               = 1,
	EYLinkType__EYLinkType_MAX     = 2
};


// Enum Prospect.EYUIComponentType
enum class EYUIComponentType : uint8_t
{
	EYUIComponentType__Normal      = 0,
	EYUIComponentType__Helper      = 1,
	EYUIComponentType__EYUIComponentType_MAX = 2
};


// Enum Prospect.EYAIAnalyticsTrigger
enum class EYAIAnalyticsTrigger : uint8_t
{
	Invalid                        = 0,
	Died                           = 1,
	Reset                          = 2,
	KilledPlayer                   = 3,
	EYAIAnalyticsTrigger_MAX       = 4
};


// Enum Prospect.EYAIAttackStatus
enum class EYAIAttackStatus : uint8_t
{
	EYAIAttackStatus__Running      = 0,
	EYAIAttackStatus__Finished     = 1,
	EYAIAttackStatus__Cancelled    = 2,
	EYAIAttackStatus__EYAIAttackStatus_MAX = 3
};


// Enum Prospect.EYAIBehaviorReaction
enum class EYAIBehaviorReaction : uint8_t
{
	EYAIBehaviorReaction__None     = 0,
	EYAIBehaviorReaction__Rotate   = 1,
	EYAIBehaviorReaction__LowFeedback = 2,
	EYAIBehaviorReaction__HighFeedback = 3,
	EYAIBehaviorReaction__Investigate = 4,
	EYAIBehaviorReaction__EYAIBehaviorReaction_MAX = 5
};


// Enum Prospect.EYAIReactionContext
enum class EYAIReactionContext : uint8_t
{
	EYAIReactionContext__None      = 0,
	EYAIReactionContext__DamageReaction = 1,
	EYAIReactionContext__EYAIReactionContext_MAX = 2
};


// Enum Prospect.EYAIDetailAggroType
enum class EYAIDetailAggroType : uint8_t
{
	EYAIDetailAggroType__Distance  = 0,
	EYAIDetailAggroType__Token     = 1,
	EYAIDetailAggroType__Visibility = 2,
	EYAIDetailAggroType__DBNO      = 3,
	EYAIDetailAggroType__TargetType = 4,
	EYAIDetailAggroType__DamageReceived = 5,
	EYAIDetailAggroType__Shared    = 6,
	EYAIDetailAggroType__Hearing   = 7,
	EYAIDetailAggroType__FarSight  = 8,
	EYAIDetailAggroType__Max       = 9
};


// Enum Prospect.EYAISenseType
enum class EYAISenseType : uint8_t
{
	EYAISenseType__None            = 0,
	EYAISenseType__Hearing         = 1,
	EYAISenseType__Shared          = 2,
	EYAISenseType__Damage          = 3,
	EYAISenseType__Sight           = 4,
	EYAISenseType__FarSight        = 5,
	EYAISenseType__EYAISenseType_MAX = 6
};


// Enum Prospect.EYAIWeakSpotDeathAnimType
enum class EYAIWeakSpotDeathAnimType : uint8_t
{
	EYAIWeakSpotDeathAnimType__None = 0,
	EYAIWeakSpotDeathAnimType__Head = 1,
	EYAIWeakSpotDeathAnimType__TorsoFront = 2,
	EYAIWeakSpotDeathAnimType__TorsoBack = 3,
	EYAIWeakSpotDeathAnimType__ArmLeft = 4,
	EYAIWeakSpotDeathAnimType__ArmRight = 5,
	EYAIWeakSpotDeathAnimType__LegLeft = 6,
	EYAIWeakSpotDeathAnimType__LegRight = 7,
	EYAIWeakSpotDeathAnimType__EYAIWeakSpotDeathAnimType_MAX = 8
};


// Enum Prospect.EYAIGameModesDebugReference
enum class EYAIGameModesDebugReference : uint8_t
{
	EYAIGameModesDebugReference__Solo = 0,
	EYAIGameModesDebugReference__Duo = 1,
	EYAIGameModesDebugReference__Squad = 2,
	EYAIGameModesDebugReference__EYAIGameModesDebugReference_MAX = 3
};


// Enum Prospect.EYAIFactions
enum class EYAIFactions : uint8_t
{
	EYAIFactions__DirtBeasts       = 0,
	EYAIFactions__Droids           = 1,
	EYAIFactions__Neutral          = 2,
	EYAIFactions__Player           = 3,
	EYAIFactions__EYAIFactions_MAX = 4
};


// Enum Prospect.EYAISpawnContexts
enum class EYAISpawnContexts : uint8_t
{
	EYAISpawnContexts__Normal      = 0,
	EYAISpawnContexts__Stormy      = 1,
	EYAISpawnContexts__Thunderous  = 2,
	EYAISpawnContexts__Hunt        = 3,
	EYAISpawnContexts__Weak        = 4,
	EYAISpawnContexts__Alpha       = 5,
	EYAISpawnContexts__Season      = 6,
	EYAISpawnContexts__EYAISpawnContexts_MAX = 7
};


// Enum Prospect.EYAISquadGenerationTypesToggle
enum class EYAISquadGenerationTypesToggle : uint8_t
{
	EYAISquadGenerationTypesToggle__Enabled = 0,
	EYAISquadGenerationTypesToggle__Disabled = 1,
	EYAISquadGenerationTypesToggle__Forced = 2,
	EYAISquadGenerationTypesToggle__EYAISquadGenerationTypesToggle_MAX = 3
};


// Enum Prospect.EYGenericValues
enum class EYGenericValues : uint8_t
{
	EYGenericValues__I             = 0,
	EYGenericValues__II            = 1,
	EYGenericValues__III           = 2,
	EYGenericValues__IV            = 3,
	EYGenericValues__EYGenericValues_MAX = 4
};


// Enum Prospect.EYNavMeshType
enum class EYNavMeshType : uint8_t
{
	EYNavMeshType__Normal          = 0,
	EYNavMeshType__Hover           = 1,
	EYNavMeshType__Large           = 2,
	EYNavMeshType__EYNavMeshType_MAX = 3
};


// Enum Prospect.EYAggroUpdateState
enum class EYAggroUpdateState : uint8_t
{
	EYAggroUpdateState__None       = 0,
	EYAggroUpdateState__DataPrepared = 1,
	EYAggroUpdateState__InitialAggroCalculated = 2,
	EYAggroUpdateState__TargetAggroMapSorted = 3,
	EYAggroUpdateState__WeightedAggroCalculated = 4,
	EYAggroUpdateState__CharacterAggroDataPrepared = 5,
	EYAggroUpdateState__UpdateFinished = 6,
	EYAggroUpdateState__EYAggroUpdateState_MAX = 7
};


// Enum Prospect.EYBrightcapDropReason
enum class EYBrightcapDropReason : uint8_t
{
	EYBrightcapDropReason__player_damage = 0,
	EYBrightcapDropReason__ai_damage = 1,
	EYBrightcapDropReason__fall_damage = 2,
	EYBrightcapDropReason__delivered = 3,
	EYBrightcapDropReason__EYBrightcapDropReason_MAX = 4
};


// Enum Prospect.EYBrightcapPickupSource
enum class EYBrightcapPickupSource : uint8_t
{
	EYBrightcapPickupSource__spawn = 0,
	EYBrightcapPickupSource__player_drop = 1,
	EYBrightcapPickupSource__enemy_drop = 2,
	EYBrightcapPickupSource__EYBrightcapPickupSource_MAX = 3
};


// Enum Prospect.EYLootAnalyticsAction
enum class EYLootAnalyticsAction : uint8_t
{
	EYLootAnalyticsAction__Dropped = 0,
	EYLootAnalyticsAction__PickedUp = 1,
	EYLootAnalyticsAction__Expired = 2,
	EYLootAnalyticsAction__EYLootAnalyticsAction_MAX = 3
};


// Enum Prospect.EYAudioEffectZoneBoundsType
enum class EYAudioEffectZoneBoundsType : uint8_t
{
	EYAudioEffectZoneBoundsType__Sphere = 0,
	EYAudioEffectZoneBoundsType__Box = 1,
	EYAudioEffectZoneBoundsType__MAX = 2
};


// Enum Prospect.EYAudioEffectZoneEffectType
enum class EYAudioEffectZoneEffectType : uint8_t
{
	EYAudioEffectZoneEffectType__Movement = 0,
	EYAudioEffectZoneEffectType__Reload = 1,
	EYAudioEffectZoneEffectType__MAX = 2
};


// Enum Prospect.EYMetricsType
enum class EYMetricsType : uint8_t
{
	EYMetricsType__Unknown         = 0,
	EYMetricsType__Editor          = 1,
	EYMetricsType__Client          = 2,
	EYMetricsType__Server          = 3,
	EYMetricsType__EYMetricsType_MAX = 4
};


// Enum Prospect.EYAutomationTestResult
enum class EYAutomationTestResult : uint8_t
{
	EYAutomationTestResult__Failed = 0,
	EYAutomationTestResult__Succeeded = 1,
	EYAutomationTestResult__Warning = 2,
	EYAutomationTestResult__Log    = 3,
	EYAutomationTestResult__EYAutomationTestResult_MAX = 4
};


// Enum Prospect.EYBackendValidation
enum class EYBackendValidation : uint8_t
{
	EYBackendValidation__Enabled   = 0,
	EYBackendValidation__Disabled  = 1,
	EYBackendValidation__EYBackendValidation_MAX = 2
};


// Enum Prospect.EYPlayerEncounterType
enum class EYPlayerEncounterType : uint8_t
{
	EYPlayerEncounterType__None    = 0,
	EYPlayerEncounterType__DamageTo = 1,
	EYPlayerEncounterType__DamagedBy = 2,
	EYPlayerEncounterType__Evacuated = 3,
	EYPlayerEncounterType__VoiceOverIP = 4,
	EYPlayerEncounterType__Distance = 5,
	EYPlayerEncounterType__EYPlayerEncounterType_MAX = 6
};


// Enum Prospect.EYEscapeBIHookStep
enum class EYEscapeBIHookStep : uint8_t
{
	EYEscapeBIHookStep__Undefined  = 0,
	EYEscapeBIHookStep__Created    = 1,
	EYEscapeBIHookStep__Triggered  = 2,
	EYEscapeBIHookStep__ShipLanded = 3,
	EYEscapeBIHookStep__Escaped    = 4,
	EYEscapeBIHookStep__CooldownBegin = 5,
	EYEscapeBIHookStep__CooldownEnded = 6,
	EYEscapeBIHookStep__EYEscapeBIHookStep_MAX = 7
};


// Enum Prospect.EYPainTrainStatus
enum class EYPainTrainStatus : uint8_t
{
	EYPainTrainStatus__Captured    = 0,
	EYPainTrainStatus__Lost        = 1,
	EYPainTrainStatus__Finished    = 2,
	EYPainTrainStatus__EYPainTrainStatus_MAX = 3
};


// Enum Prospect.EYLogObjectContext
enum class EYLogObjectContext : uint8_t
{
	EYLogObjectContext__ClassName  = 0,
	EYLogObjectContext__ObjectName = 1,
	EYLogObjectContext__FullName   = 2,
	EYLogObjectContext__EYLogObjectContext_MAX = 3
};


// Enum Prospect.EYLogVerbosity
enum class EYLogVerbosity : uint8_t
{
	EYLogVerbosity__NoLogging      = 0,
	EYLogVerbosity__Fatal          = 1,
	EYLogVerbosity__Error          = 2,
	EYLogVerbosity__Warning        = 3,
	EYLogVerbosity__Display        = 4,
	EYLogVerbosity__Log            = 5,
	EYLogVerbosity__Verbose        = 6,
	EYLogVerbosity__VeryVerbose    = 7,
	EYLogVerbosity__EYLogVerbosity_MAX = 8
};


// Enum Prospect.EYLogCategory
enum class EYLogCategory : uint8_t
{
	EYLogCategory__None            = 0,
	EYLogCategory__LogYAI          = 1,
	EYLogCategory__LogYAbilities   = 2,
	EYLogCategory__LogYActivities  = 3,
	EYLogCategory__LogYAnalytics   = 4,
	EYLogCategory__LogYAudio       = 5,
	EYLogCategory__LogYAutomation  = 6,
	EYLogCategory__LogYContracts   = 7,
	EYLogCategory__LogYCustomization = 8,
	EYLogCategory__LogYFactions    = 9,
	EYLogCategory__LogYGenerators  = 10,
	EYLogCategory__LogYInitialization = 11,
	EYLogCategory__LogYInventory   = 12,
	EYLogCategory__LogYMatch       = 13,
	EYLogCategory__LogYMission     = 14,
	EYLogCategory__LogYPlayer      = 15,
	EYLogCategory__LogYUI          = 16,
	EYLogCategory__LogYVehicle     = 17,
	EYLogCategory__EYLogCategory_MAX = 18
};


// Enum Prospect.EYAnimTaskFinishCondition
enum class EYAnimTaskFinishCondition : uint8_t
{
	EYAnimTaskFinishCondition__MontageEnds = 0,
	EYAnimTaskFinishCondition__MontageBlendsOut = 1,
	EYAnimTaskFinishCondition__TimeBeforeMontageEnds = 2,
	EYAnimTaskFinishCondition__BlackboardBoolValueChanged = 3,
	EYAnimTaskFinishCondition__EYAnimTaskFinishCondition_MAX = 4
};


// Enum Prospect.EYCameraDistanceType
enum class EYCameraDistanceType : uint8_t
{
	EYCameraDistanceType__None     = 0,
	EYCameraDistanceType__Close    = 1,
	EYCameraDistanceType__Middle   = 2,
	EYCameraDistanceType__Far      = 3,
	EYCameraDistanceType__EYCameraDistanceType_MAX = 4
};


// Enum Prospect.EYStateCancelationBehavior
enum class EYStateCancelationBehavior : uint8_t
{
	EYStateCancelationBehavior__Nothing = 0,
	EYStateCancelationBehavior__FirstPerson = 1,
	EYStateCancelationBehavior__ThirdPerson = 2,
	EYStateCancelationBehavior__EYStateCancelationBehavior_MAX = 3
};


// Enum Prospect.EYDeathType
enum class EYDeathType : uint8_t
{
	EYDeathType__Normal            = 0,
	EYDeathType__PlayerExecutionWhileDBNO = 1,
	EYDeathType__Exploding         = 2,
	EYDeathType__EYDeathType_MAX   = 3
};


// Enum Prospect.EYAssetLoadRetrivalRequestType
enum class EYAssetLoadRetrivalRequestType : uint8_t
{
	EYAssetLoadRetrivalRequestType__OnlyFirstPerson = 0,
	EYAssetLoadRetrivalRequestType__OnlyThirdPerson = 1,
	EYAssetLoadRetrivalRequestType__All = 2,
	EYAssetLoadRetrivalRequestType__EYAssetLoadRetrivalRequestType_MAX = 3
};


// Enum Prospect.EYVivoxAudioFadeModel
enum class EYVivoxAudioFadeModel : uint8_t
{
	EYVivoxAudioFadeModel__None    = 0,
	EYVivoxAudioFadeModel__InverseByDistance = 1,
	EYVivoxAudioFadeModel__LinearByDistance = 2,
	EYVivoxAudioFadeModel__ExponentialByDistance = 3,
	EYVivoxAudioFadeModel__EYVivoxAudioFadeModel_MAX = 4
};


// Enum Prospect.EYMissionStatus
enum class EYMissionStatus : uint8_t
{
	EYMissionStatus__Started       = 0,
	EYMissionStatus__Paused        = 1,
	EYMissionStatus__Reset         = 2,
	EYMissionStatus__EYMissionStatus_MAX = 3
};


// Enum Prospect.EYCommWheelEntryTutorialSetting
enum class EYCommWheelEntryTutorialSetting : uint8_t
{
	EYCommWheelEntryTutorialSetting__Always = 0,
	EYCommWheelEntryTutorialSetting__ShowOnlyInTutorial = 1,
	EYCommWheelEntryTutorialSetting__HideInTutorial = 2,
	EYCommWheelEntryTutorialSetting__EYCommWheelEntryTutorialSetting_MAX = 3
};


// Enum Prospect.EYLerpBehavior
enum class EYLerpBehavior : uint8_t
{
	EYLerpBehavior__Constant       = 0,
	EYLerpBehavior__MaxToNone      = 1,
	EYLerpBehavior__NoneToMax      = 2,
	EYLerpBehavior__IntervalLerp   = 3,
	EYLerpBehavior__Blinking       = 4,
	EYLerpBehavior__EYLerpBehavior_MAX = 5
};


// Enum Prospect.EYInputBlockingAssociation
enum class EYInputBlockingAssociation : uint8_t
{
	EYInputBlockingAssociation__Interaction = 0,
	EYInputBlockingAssociation__DBNO = 1,
	EYInputBlockingAssociation__Banner = 2,
	EYInputBlockingAssociation__Intro = 3,
	EYInputBlockingAssociation__EYInputBlockingAssociation_MAX = 4
};


// Enum Prospect.EYQuickMenuSubScreen
enum class EYQuickMenuSubScreen : uint8_t
{
	EYQuickMenuSubScreen__Invalid  = 0,
	EYQuickMenuSubScreen__Play     = 1,
	EYQuickMenuSubScreen__FortunaPass = 2,
	EYQuickMenuSubScreen__Inventory = 3,
	EYQuickMenuSubScreen__Character = 4,
	EYQuickMenuSubScreen__Shop     = 5,
	EYQuickMenuSubScreen__Objectives = 6,
	EYQuickMenuSubScreen__AurumShop = 7,
	EYQuickMenuSubScreen__MAX      = 8
};


// Enum Prospect.EYTravelInstanceType
enum class EYTravelInstanceType : uint8_t
{
	EYTravelInstanceType__Invalid  = 0,
	EYTravelInstanceType__Match    = 1,
	EYTravelInstanceType__Station  = 2,
	EYTravelInstanceType__EYTravelInstanceType_MAX = 3
};


// Enum Prospect.EYStringVisualizationType
enum class EYStringVisualizationType : uint8_t
{
	EYStringVisualizationType__CHAR_PER_CHAR = 0,
	EYStringVisualizationType__RANDOM = 1,
	EYStringVisualizationType__MAX = 2
};


// Enum Prospect.EYActorStorageIntention
enum class EYActorStorageIntention : uint8_t
{
	EYActorStorageIntention__None  = 0,
	EYActorStorageIntention__Store = 1,
	EYActorStorageIntention__Remove = 2,
	EYActorStorageIntention__EYActorStorageIntention_MAX = 3
};


// Enum Prospect.EYDamageComponentType
enum class EYDamageComponentType : uint8_t
{
	EYDamageComponentType__Normal  = 0,
	EYDamageComponentType__Player  = 1,
	EYDamageComponentType__Enemy   = 2,
	EYDamageComponentType__Invincible = 3,
	EYDamageComponentType__Everything = 4,
	EYDamageComponentType__EYDamageComponentType_MAX = 5
};


// Enum Prospect.EYPlayFabStoreCategory
enum class EYPlayFabStoreCategory : uint8_t
{
	EYPlayFabStoreCategory__None   = 0,
	EYPlayFabStoreCategory__SpecialOffers = 1,
	EYPlayFabStoreCategory__StarterPacks = 2,
	EYPlayFabStoreCategory__Aurum  = 3,
	EYPlayFabStoreCategory__EYPlayFabStoreCategory_MAX = 4
};


// Enum Prospect.EYBlueprintCraftingPriceType
enum class EYBlueprintCraftingPriceType : uint8_t
{
	EYBlueprintCraftingPriceType__Material = 0,
	EYBlueprintCraftingPriceType__Currency = 1,
	EYBlueprintCraftingPriceType__Invalid = 2,
	EYBlueprintCraftingPriceType__EYBlueprintCraftingPriceType_MAX = 3
};


// Enum Prospect.EYCraftingUnavailableReason
enum class EYCraftingUnavailableReason : uint8_t
{
	EYCraftingUnavailableReason__None = 0,
	EYCraftingUnavailableReason__ItemOwned = 1,
	EYCraftingUnavailableReason__NotEnoughFunds = 2,
	EYCraftingUnavailableReason__FactionLevelNotReached = 3,
	EYCraftingUnavailableReason__MissionNotConcluded = 4,
	EYCraftingUnavailableReason__RequirredItemNotOwned = 5,
	EYCraftingUnavailableReason__Unknown = 6,
	EYCraftingUnavailableReason__MAX = 7
};


// Enum Prospect.EYBlueprintAvailability
enum class EYBlueprintAvailability : uint8_t
{
	EYBlueprintAvailability__Locked = 0,
	EYBlueprintAvailability__Unlocked = 1,
	EYBlueprintAvailability__Purchasable = 2,
	EYBlueprintAvailability__PurchasePending = 3,
	EYBlueprintAvailability__Obtained = 4,
	EYBlueprintAvailability__Craftable = 5,
	EYBlueprintAvailability__CreatedButNotCraftable = 6,
	EYBlueprintAvailability__CreatedAndCraftable = 7,
	EYBlueprintAvailability__CreatedCraftedCantCraftAgain = 8,
	EYBlueprintAvailability__MAX   = 9
};


// Enum Prospect.EYExperienceType
enum class EYExperienceType : uint8_t
{
	EYExperienceType__None         = 0,
	EYExperienceType__SeasonXP     = 1,
	EYExperienceType__MAX          = 2
};


// Enum Prospect.EYExtractionActorState
enum class EYExtractionActorState : uint8_t
{
	EYExtractionActorState__Inactive = 0,
	EYExtractionActorState__Activating = 1,
	EYExtractionActorState__Active = 2,
	EYExtractionActorState__EYExtractionActorState_MAX = 3
};


// Enum Prospect.EYSlideAnimationState
enum class EYSlideAnimationState : uint8_t
{
	Into                           = 0,
	Loop                           = 1,
	Out                            = 2,
	EYSlideAnimationState_MAX      = 3
};


// Enum Prospect.EYFeet
enum class EYFeet : uint8_t
{
	FrontLeft                      = 0,
	FrontRight                     = 1,
	BackLeft                       = 2,
	BackRight                      = 3,
	EYFeet_MAX                     = 4
};


// Enum Prospect.EYActionType
enum class EYActionType : uint8_t
{
	EYActionType__Invalid          = 0,
	EYActionType__Kills            = 1,
	EYActionType__Contracts        = 2,
	EYActionType__Evac             = 3,
	EYActionType__FactionLevelUp   = 4,
	EYActionType__PlayerQuartersUpgradeFinished = 5,
	EYActionType__TechtreeNodeUpgradeFinished = 6,
	EYActionType__MAX              = 7
};


// Enum Prospect.EYTransitionOption
enum class EYTransitionOption : uint8_t
{
	EYTransitionOption__None       = 0,
	EYTransitionOption__ScreenChange = 1,
	EYTransitionOption__MapTravel  = 2,
	EYTransitionOption__EYTransitionOption_MAX = 3
};


// Enum Prospect.EYEndOfMatchView
enum class EYEndOfMatchView : uint8_t
{
	EYEndOfMatchView__None         = 0,
	EYEndOfMatchView__EscapeSequence = 1,
	EYEndOfMatchView__DeathCamera  = 2,
	EYEndOfMatchView__Spectating   = 3,
	EYEndOfMatchView__Results      = 4,
	EYEndOfMatchView__Rewards      = 5,
	EYEndOfMatchView__EYEndOfMatchView_MAX = 6
};


// Enum Prospect.EYModifierAllowed
enum class EYModifierAllowed : uint8_t
{
	EYModifierAllowed__All         = 0,
	EYModifierAllowed__OnlyAdditions = 1,
	EYModifierAllowed__OnlyMultipliers = 2,
	EYModifierAllowed__EYModifierAllowed_MAX = 3
};


// Enum Prospect.EYGearGroup
enum class EYGearGroup : uint8_t
{
	EYGearGroup__None              = 0,
	EYGearGroup__GearSet           = 1,
	EYGearGroup__Loadout           = 2,
	EYGearGroup__MAX               = 3
};


// Enum Prospect.EYPickupType
enum class EYPickupType : uint8_t
{
	EYPickupType__None             = 0,
	EYPickupType__Currency         = 1,
	EYPickupType__CurrencyBox      = 2,
	EYPickupType__CurrencyPlayerDrop = 3,
	EYPickupType__Crafting         = 4,
	EYPickupType__Weapon           = 5,
	EYPickupType__Ability          = 6,
	EYPickupType__Ammo             = 7,
	EYPickupType__HuntItem         = 8,
	EYPickupType__TrackingItem     = 9,
	EYPickupType__LootCrate        = 10,
	EYPickupType__Vehicle          = 11,
	EYPickupType__Consumable       = 12,
	EYPickupType__AmmoPlayerDrop   = 13,
	EYPickupType__Collectible      = 14,
	EYPickupType__QuestItem        = 15,
	EYPickupType__Shield           = 16,
	EYPickupType__Helmet           = 17,
	EYPickupType__MAX              = 18
};


// Enum Prospect.EYGASAbilityInputID
enum class EYGASAbilityInputID : uint8_t
{
	EYGASAbilityInputID__None      = 0,
	EYGASAbilityInputID__Confirm   = 1,
	EYGASAbilityInputID__Cancel    = 2,
	EYGASAbilityInputID__Ability1  = 3,
	EYGASAbilityInputID__EYGASAbilityInputID_MAX = 4
};


// Enum Prospect.EYPassiveGeneratorRewardType
enum class EYPassiveGeneratorRewardType : uint8_t
{
	EYPassiveGeneratorRewardType__None = 0,
	EYPassiveGeneratorRewardType__Aurum = 1,
	EYPassiveGeneratorRewardType__SoftCurrency = 2,
	EYPassiveGeneratorRewardType__Ammo = 3,
	EYPassiveGeneratorRewardType__Material = 4,
	EYPassiveGeneratorRewardType__Crate = 5,
	EYPassiveGeneratorRewardType__InsuranceClaim = 6,
	EYPassiveGeneratorRewardType__MAX = 7
};


// Enum Prospect.EYHitZone
enum class EYHitZone : uint8_t
{
	EYHitZone__None                = 0,
	EYHitZone__Default             = 1,
	EYHitZone__Head                = 2,
	EYHitZone__ArmRight            = 3,
	EYHitZone__ArmLeft             = 4,
	EYHitZone__LegRight            = 5,
	EYHitZone__LegLeft             = 6,
	EYHitZone__EYHitZone_MAX       = 7
};


// Enum Prospect.EYImpactActorRotation
enum class EYImpactActorRotation : uint8_t
{
	EYImpactActorRotation__UpVector_ImpactNormal = 0,
	EYImpactActorRotation__UpVector_OwnerForwardVector = 1,
	EYImpactActorRotation__UpVector_MAX = 2
};


// Enum Prospect.EYInputKeyType
enum class EYInputKeyType : uint8_t
{
	EYInputKeyType__ActionKey      = 0,
	EYInputKeyType__AxisKey        = 1,
	EYInputKeyType__EYInputKeyType_MAX = 2
};


// Enum Prospect.EYStackManagement
enum class EYStackManagement : uint8_t
{
	EYStackManagement__Pop         = 0,
	EYStackManagement__Handled     = 1,
	EYStackManagement__Invalid     = 2,
	EYStackManagement__EYStackManagement_MAX = 3
};


// Enum Prospect.EYInsuranceClaimResult
enum class EYInsuranceClaimResult : uint8_t
{
	EYInsuranceClaimResult__Success = 0,
	EYInsuranceClaimResult__UnknownError = 1,
	EYInsuranceClaimResult__ClaimPending = 2,
	EYInsuranceClaimResult__NoAvailablePackage = 3,
	EYInsuranceClaimResult__StashFull = 4,
	EYInsuranceClaimResult__EYInsuranceClaimResult_MAX = 5
};


// Enum Prospect.EYInventoryAudioActionPerformed
enum class EYInventoryAudioActionPerformed : uint8_t
{
	EYInventoryAudioActionPerformed__Moved = 0,
	EYInventoryAudioActionPerformed__Swapped = 1,
	EYInventoryAudioActionPerformed__Dropped = 2,
	EYInventoryAudioActionPerformed__Attached = 3,
	EYInventoryAudioActionPerformed__EYInventoryAudioActionPerformed_MAX = 4
};


// Enum Prospect.EYInventoryPlace
enum class EYInventoryPlace : uint8_t
{
	EYInventoryPlace__None         = 0,
	EYInventoryPlace__Stash        = 1,
	EYInventoryPlace__ActiveSet    = 2,
	EYInventoryPlace__Safe         = 3,
	EYInventoryPlace__EYInventoryPlace_MAX = 4
};


// Enum Prospect.EYItemChangeContext
enum class EYItemChangeContext : uint8_t
{
	EYItemChangeContext__Normal    = 0,
	EYItemChangeContext__Cheat     = 1,
	EYItemChangeContext__EYItemChangeContext_MAX = 2
};


// Enum Prospect.EYSortingResultCode
enum class EYSortingResultCode : uint8_t
{
	EYSortingResultCode__LessThen  = 0,
	EYSortingResultCode__Equal     = 1,
	EYSortingResultCode__GreaterThen = 2,
	EYSortingResultCode__EYSortingResultCode_MAX = 3
};


// Enum Prospect.EYItemStatsCategory
enum class EYItemStatsCategory : uint8_t
{
	EYItemStatsCategory__None      = 0,
	EYItemStatsCategory__Weapon    = 1,
	EYItemStatsCategory__Gadget    = 2,
	EYItemStatsCategory__Ability   = 3,
	EYItemStatsCategory__Mod       = 4,
	EYItemStatsCategory__MeleeWeapon = 5,
	EYItemStatsCategory__EYItemStatsCategory_MAX = 6
};


// Enum Prospect.EYItemStatsType
enum class EYItemStatsType : uint8_t
{
	EYItemStatsType__None          = 0,
	EYItemStatsType__AttachToOwner = 1,
	EYItemStatsType__Accuracy      = 2,
	EYItemStatsType__Ammo          = 3,
	EYItemStatsType__Armor         = 4,
	EYItemStatsType__BurstInterval = 5,
	EYItemStatsType__Burst         = 6,
	EYItemStatsType__BagCapacity   = 7,
	EYItemStatsType__Cooldown      = 8,
	EYItemStatsType__DamageApplication = 9,
	EYItemStatsType__DamageAgainstEnemy = 10,
	EYItemStatsType__DamageAgainstPlayer = 11,
	EYItemStatsType__DamageResistancePlayer = 12,
	EYItemStatsType__DamageResistanceEnemy = 13,
	EYItemStatsType__DamageSelfInvincibility = 14,
	EYItemStatsType__Durability    = 15,
	EYItemStatsType__Duration      = 16,
	EYItemStatsType__DefaultSpread = 17,
	EYItemStatsType__DPS           = 18,
	EYItemStatsType__DirectCloseRange = 19,
	EYItemStatsType__DirectMaximumDistance = 20,
	EYItemStatsType__DirectDamageFalloff = 21,
	EYItemStatsType__Equip         = 22,
	EYItemStatsType__Health        = 23,
	EYItemStatsType__MaxSpread     = 24,
	EYItemStatsType__MaximumDistanceByActivation = 25,
	EYItemStatsType__MaximumDistance = 26,
	EYItemStatsType__MovementSpeedChange = 27,
	EYItemStatsType__NumberApplied = 28,
	EYItemStatsType__PerShotDamage = 29,
	EYItemStatsType__ProjectileSpeed = 30,
	EYItemStatsType__ProjectileLifetime = 31,
	EYItemStatsType__ProjectileGravityScale = 32,
	EYItemStatsType__Piercing      = 33,
	EYItemStatsType__Penetration   = 34,
	EYItemStatsType__ExplosiveCorpse = 35,
	EYItemStatsType__RadialDamage  = 36,
	EYItemStatsType__Radius        = 37,
	EYItemStatsType__RadiusDamageEnabled = 38,
	EYItemStatsType__Range         = 39,
	EYItemStatsType__RefireTime    = 40,
	EYItemStatsType__Reload        = 41,
	EYItemStatsType__Recoil        = 42,
	EYItemStatsType__RecoilVariance = 43,
	EYItemStatsType__RoundsPerMinute = 44,
	EYItemStatsType__RoundsPerSecond = 45,
	EYItemStatsType__Spinup        = 46,
	EYItemStatsType__Speed         = 47,
	EYItemStatsType__Stability     = 48,
	EYItemStatsType__Shield        = 49,
	EYItemStatsType__TargetingSpeed = 50,
	EYItemStatsType__TimeToActivateFromReady = 51,
	EYItemStatsType__TotalDamage   = 52,
	EYItemStatsType__WeakAreaDamage = 53,
	EYItemStatsType__WeaponSprintBufferTime = 54,
	EYItemStatsType__WeaponBurstInterval = 55,
	EYItemStatsType__WeaponRecoilCompenstationStartTime = 56,
	EYItemStatsType__WeaponRecoilCompensationAmountX = 57,
	EYItemStatsType__WeaponRecoilCompensationAmountY = 58,
	EYItemStatsType__WeaponRecoilCompensationSpeedX = 59,
	EYItemStatsType__WeaponRecoilCompensationSpeedY = 60,
	EYItemStatsType__WeaponScaleOffset = 61,
	EYItemStatsType__WeaponSpreadIncrease = 62,
	EYItemStatsType__WeaponSpreadDecrease = 63,
	EYItemStatsType__RadialDamageFalloffMultiplier = 64,
	EYItemStatsType__RadialDamageStartFalloffRange = 65,
	EYItemStatsType__VehicleBoostCooldown = 66,
	EYItemStatsType__VehicleBoostSpeed = 67,
	EYItemStatsType__VehicleBoostDuration = 68,
	EYItemStatsType__AccelerationMultiplier = 69,
	EYItemStatsType__EYItemStatsType_MAX = 70
};


// Enum Prospect.EYItemTooltipType
enum class EYItemTooltipType : uint8_t
{
	EYItemTooltipType__None        = 0,
	EYItemTooltipType__Weapon      = 1,
	EYItemTooltipType__Ability     = 2,
	EYItemTooltipType__Gadget      = 3,
	EYItemTooltipType__Kit         = 4,
	EYItemTooltipType__Mod         = 5,
	EYItemTooltipType__Vanity      = 6,
	EYItemTooltipType__Material    = 7,
	EYItemTooltipType__Blueprint   = 8,
	EYItemTooltipType__Consumable  = 9,
	EYItemTooltipType__EYItemTooltipType_MAX = 10
};


// Enum Prospect.EYInputKeybindingType
enum class EYInputKeybindingType : uint8_t
{
	EYInputKeybindingType__Primary = 0,
	EYInputKeybindingType__Secondary = 1,
	EYInputKeybindingType__Gamepad = 2,
	EYInputKeybindingType__EYInputKeybindingType_MAX = 3
};


// Enum Prospect.EYLootContainerWidgetType
enum class EYLootContainerWidgetType : uint8_t
{
	EYLootContainerWidgetType__Undefined = 0,
	EYLootContainerWidgetType__Bag = 1,
	EYLootContainerWidgetType__Corpse = 2,
	EYLootContainerWidgetType__DeadDrop = 3,
	EYLootContainerWidgetType__EYLootContainerWidgetType_MAX = 4
};


// Enum Prospect.EYLootTier
enum class EYLootTier : uint8_t
{
	EYLootTier__Tier_01            = 0,
	EYLootTier__Tier_02            = 1,
	EYLootTier__Tier_03            = 2,
	EYLootTier__Tier_04            = 3,
	EYLootTier__Tier_05            = 4,
	EYLootTier__Tier_MAX           = 5
};


// Enum Prospect.EYLootVelocityType
enum class EYLootVelocityType : uint8_t
{
	EYLootVelocityType__Regular    = 0,
	EYLootVelocityType__ViewDirectionDependant = 1,
	EYLootVelocityType__EYLootVelocityType_MAX = 2
};


// Enum Prospect.EYLootContainerTier
enum class EYLootContainerTier : uint8_t
{
	EYLootContainerTier__Tier_01   = 0,
	EYLootContainerTier__Tier_02   = 1,
	EYLootContainerTier__Tier_03   = 2,
	EYLootContainerTier__Tier_04   = 3,
	EYLootContainerTier__Tier_05   = 4,
	EYLootContainerTier__Tier_MAX  = 5
};


// Enum Prospect.EYMatchMapDifficulty
enum class EYMatchMapDifficulty : uint8_t
{
	EYMatchMapDifficulty__Invalid  = 0,
	EYMatchMapDifficulty__Unknown  = 1,
	EYMatchMapDifficulty__VeryEasy = 2,
	EYMatchMapDifficulty__Easy     = 3,
	EYMatchMapDifficulty__Normal   = 4,
	EYMatchMapDifficulty__Hard     = 5,
	EYMatchMapDifficulty__VeryHard = 6,
	EYMatchMapDifficulty__Extreme  = 7,
	EYMatchMapDifficulty__MAX      = 8
};


// Enum Prospect.EYMapType
enum class EYMapType : uint8_t
{
	EYMapType__None                = 0,
	EYMapType__Map01               = 1,
	EYMapType__Map02               = 2,
	EYMapType__Map03               = 3,
	EYMapType__Map04               = 4,
	EYMapType__MAX                 = 5
};


// Enum Prospect.EYMatchmakingCountryOverrideOptions
enum class EYMatchmakingCountryOverrideOptions : uint8_t
{
	EYMatchmakingCountryOverrideOptions__Allow = 0,
	EYMatchmakingCountryOverrideOptions__ForceRedirect = 1,
	EYMatchmakingCountryOverrideOptions__MAX = 2
};


// Enum Prospect.EYMatchmakingRegionOverrideOptions
enum class EYMatchmakingRegionOverrideOptions : uint8_t
{
	EYMatchmakingRegionOverrideOptions__Allow = 0,
	EYMatchmakingRegionOverrideOptions__Redirect = 1,
	EYMatchmakingRegionOverrideOptions__Default = 2,
	EYMatchmakingRegionOverrideOptions__MAX = 3
};


// Enum Prospect.EYMatchmakingUsersSplitOptions
enum class EYMatchmakingUsersSplitOptions : uint8_t
{
	EYMatchmakingUsersSplitOptions__None = 0,
	EYMatchmakingUsersSplitOptions__SplitNewUsers = 1,
	EYMatchmakingUsersSplitOptions__MAX = 2
};


// Enum Prospect.EYMatchmakingUsersAmountOptions
enum class EYMatchmakingUsersAmountOptions : uint8_t
{
	EYMatchmakingUsersAmountOptions__None = 0,
	EYMatchmakingUsersAmountOptions__FullestFirst = 1,
	EYMatchmakingUsersAmountOptions__EmptiestFirst = 2,
	EYMatchmakingUsersAmountOptions__MAX = 3
};


// Enum Prospect.EYMatchmakingMapOptions
enum class EYMatchmakingMapOptions : uint8_t
{
	EYMatchmakingMapOptions__None  = 0,
	EYMatchmakingMapOptions__Strict = 1,
	EYMatchmakingMapOptions__Flexible = 2,
	EYMatchmakingMapOptions__MAX   = 3
};


// Enum Prospect.EYEndOfMatchWidgetType
enum class EYEndOfMatchWidgetType : uint8_t
{
	EYEndOfMatchWidgetType__EvacFailed = 0,
	EYEndOfMatchWidgetType__EvacSuccess = 1,
	EYEndOfMatchWidgetType__Missions = 2,
	EYEndOfMatchWidgetType__Contracts = 3,
	EYEndOfMatchWidgetType__Encounters = 4,
	EYEndOfMatchWidgetType__Honors = 5,
	EYEndOfMatchWidgetType__PlayerProgression = 6,
	EYEndOfMatchWidgetType__SeasonProgression = 7,
	EYEndOfMatchWidgetType__MAX    = 8
};


// Enum Prospect.EYMineralTier
enum class EYMineralTier : uint8_t
{
	EYMineralTier__Low             = 0,
	EYMineralTier__Medium          = 1,
	EYMineralTier__High            = 2,
	EYMineralTier__EYMineralTier_MAX = 3
};


// Enum Prospect.EYUnlockedTypes
enum class EYUnlockedTypes : uint8_t
{
	EYUnlockedTypes__None          = 0,
	EYUnlockedTypes__Attachment    = 1,
	EYUnlockedTypes__Upgrade       = 2,
	EYUnlockedTypes__MAX           = 3
};


// Enum Prospect.EYOverrideShowWeapon
enum class EYOverrideShowWeapon : uint8_t
{
	EYOverrideShowWeapon__DontChangeDefaultWeaponSetting = 0,
	EYOverrideShowWeapon__OverrideWithShowWeapon = 1,
	EYOverrideShowWeapon__OverrideWithHideWeapon = 2,
	EYOverrideShowWeapon__EYOverrideShowWeapon_MAX = 3
};


// Enum Prospect.EYNotificationsDisplayType
enum class EYNotificationsDisplayType : uint8_t
{
	EYNotificationsDisplayType__None = 0,
	EYNotificationsDisplayType__StationOnly = 1,
	EYNotificationsDisplayType__StationWithPermanence = 2,
	EYNotificationsDisplayType__MatchAndStation = 3,
	EYNotificationsDisplayType__MAX = 4
};


// Enum Prospect.EYNotificationsCategory
enum class EYNotificationsCategory : uint8_t
{
	EYNotificationsCategory__None  = 0,
	EYNotificationsCategory__Workbench = 1,
	EYNotificationsCategory__PlayerQuarters = 2,
	EYNotificationsCategory__FriendsStatus = 3,
	EYNotificationsCategory__FriendInvites = 4,
	EYNotificationsCategory__SquadUpdates = 5,
	EYNotificationsCategory__SquadInvites = 6,
	EYNotificationsCategory__FortunaPass = 7,
	EYNotificationsCategory__Service = 8,
	EYNotificationsCategory__Account = 9,
	EYNotificationsCategory__MAX   = 10
};


// Enum Prospect.EYNotificationsPriority
enum class EYNotificationsPriority : uint8_t
{
	EYNotificationsPriority__None  = 0,
	EYNotificationsPriority__Low   = 1,
	EYNotificationsPriority__Medium = 2,
	EYNotificationsPriority__Warning = 3,
	EYNotificationsPriority__High  = 4,
	EYNotificationsPriority__MAX   = 5
};


// Enum Prospect.EYNPCType
enum class EYNPCType : uint8_t
{
	EYNPCType__Environment         = 0,
	EYNPCType__Loadout             = 1,
	EYNPCType__Shop                = 2,
	EYNPCType__Appearence          = 3,
	EYNPCType__FortunaPass         = 4,
	EYNPCType__Play                = 5,
	EYNPCType__ICA                 = 6,
	EYNPCType__Korolev             = 7,
	EYNPCType__Osiris              = 8,
	EYNPCType__Badum               = 9,
	EYNPCType__EYNPCType_MAX       = 10
};


// Enum Prospect.EYOnboardingQuestType
enum class EYOnboardingQuestType : uint8_t
{
	EYOnboardingQuestType__None    = 0,
	EYOnboardingQuestType__TalkToNPC = 1,
	EYOnboardingQuestType__Kill    = 2,
	EYOnboardingQuestType__GoTo    = 3,
	EYOnboardingQuestType__Buy     = 4,
	EYOnboardingQuestType__Craft   = 5,
	EYOnboardingQuestType__Scrap   = 6,
	EYOnboardingQuestType__EYOnboardingQuestType_MAX = 7
};


// Enum Prospect.EYPlayerAwarenessNotificationType
enum class EYPlayerAwarenessNotificationType : uint8_t
{
	EYPlayerAwarenessNotificationType__NONE = 0,
	EYPlayerAwarenessNotificationType__TeamMateDBNO = 1,
	EYPlayerAwarenessNotificationType__TeamMateTakeDamageByHostilePlayer = 2,
	EYPlayerAwarenessNotificationType__TeamMateDealDamageToHostilePlayer = 3,
	EYPlayerAwarenessNotificationType__TeamMateShieldBroken = 4,
	EYPlayerAwarenessNotificationType__LocalPlayerTargeted = 5,
	EYPlayerAwarenessNotificationType__MAX = 6
};


// Enum Prospect.EYDebugServerRetrievalType
enum class EYDebugServerRetrievalType : uint8_t
{
	EYDebugServerRetrievalType__None = 0,
	EYDebugServerRetrievalType__Initialization = 1,
	EYDebugServerRetrievalType__EYDebugServerRetrievalType_MAX = 2
};


// Enum Prospect.EYDebugEventType
enum class EYDebugEventType : uint8_t
{
	EYDebugEventType__AudioMixModifiers = 0,
	EYDebugEventType__Announcements = 1,
	EYDebugEventType__InputMode    = 2,
	EYDebugEventType__PlayerInitialization = 3,
	EYDebugEventType__EYDebugEventType_MAX = 4
};


// Enum Prospect.EYUICursorVisibility
enum class EYUICursorVisibility : uint8_t
{
	EYUICursorVisibility__NotVisible = 0,
	EYUICursorVisibility__Visible  = 1,
	EYUICursorVisibility__EYUICursorVisibility_MAX = 2
};


// Enum Prospect.EYUIOptionExclusiveOption
enum class EYUIOptionExclusiveOption : uint8_t
{
	EYUIOptionExclusiveOption__NotExclusive = 0,
	EYUIOptionExclusiveOption__Exclusive = 1,
	EYUIOptionExclusiveOption__EYUIOptionExclusiveOption_MAX = 2
};


// Enum Prospect.EYPodSpawningTypeContext
enum class EYPodSpawningTypeContext : uint8_t
{
	EYPodSpawningTypeContext__NoneAssigned = 0,
	EYPodSpawningTypeContext__Customization = 1,
	EYPodSpawningTypeContext__Lobby = 2,
	EYPodSpawningTypeContext__Intro = 3,
	EYPodSpawningTypeContext__InGame = 4,
	EYPodSpawningTypeContext__EYPodSpawningTypeContext_MAX = 5
};


// Enum Prospect.EYMatchInstanceType
enum class EYMatchInstanceType : uint8_t
{
	EYMatchInstanceType__None      = 0,
	EYMatchInstanceType__Room      = 1,
	EYMatchInstanceType__Station   = 2,
	EYMatchInstanceType__EYMatchInstanceType_MAX = 3
};


// Enum Prospect.EYProspectorLevelRewardType
enum class EYProspectorLevelRewardType : uint8_t
{
	EYProspectorLevelRewardType__None = 0,
	EYProspectorLevelRewardType__Border = 1,
	EYProspectorLevelRewardType__Icon = 2,
	EYProspectorLevelRewardType__BorderAndIcon = 3,
	EYProspectorLevelRewardType__EYProspectorLevelRewardType_MAX = 4
};


// Enum Prospect.EYClassRepNodeMapping
enum class EYClassRepNodeMapping : uint8_t
{
	EYClassRepNodeMapping__Undefined = 0,
	EYClassRepNodeMapping__NotRouted = 1,
	EYClassRepNodeMapping__RelevantAllConnections = 2,
	EYClassRepNodeMapping__PlayerCharacter = 3,
	EYClassRepNodeMapping__Spatialize_Static = 4,
	EYClassRepNodeMapping__Spatialize_Dynamic = 5,
	EYClassRepNodeMapping__Spatialize_Dormancy = 6,
	EYClassRepNodeMapping__EYClassRepNodeMapping_MAX = 7
};


// Enum Prospect.EYResourceAtomicState
enum class EYResourceAtomicState : uint8_t
{
	EYResourceAtomicState__None    = 0,
	EYResourceAtomicState__Pending = 1,
	EYResourceAtomicState__Completed = 2,
	EYResourceAtomicState__EYResourceAtomicState_MAX = 3
};


// Enum Prospect.EYRetentionBonusEntryType
enum class EYRetentionBonusEntryType : uint8_t
{
	EYRetentionBonusEntryType__None = 0,
	EYRetentionBonusEntryType__Item = 1,
	EYRetentionBonusEntryType__Archetype = 2,
	EYRetentionBonusEntryType__Virtual = 3,
	EYRetentionBonusEntryType__EYRetentionBonusEntryType_MAX = 4
};


// Enum Prospect.EYRewardType
enum class EYRewardType : uint8_t
{
	EYRewardType__None             = 0,
	EYRewardType__Currency         = 1,
	EYRewardType__Material         = 2,
	EYRewardType__Reputation       = 3,
	EYRewardType__SeasonXP         = 4,
	EYRewardType__ProspectorLevel  = 5,
	EYRewardType__Ammo             = 6,
	EYRewardType__Weapon           = 7,
	EYRewardType__Consumable       = 8,
	EYRewardType__Armor            = 9,
	EYRewardType__Bag              = 10,
	EYRewardType__MAX              = 11
};


// Enum Prospect.EYSceneState
enum class EYSceneState : uint8_t
{
	EYSceneState__None             = 0,
	EYSceneState__Normal           = 1,
	EYSceneState__Detail           = 2,
	EYSceneState__MAX              = 3
};


// Enum Prospect.EYActionMuteHistoryResult
enum class EYActionMuteHistoryResult : uint8_t
{
	EYActionMuteHistoryResult__Ok  = 0,
	EYActionMuteHistoryResult__Mute = 1,
	EYActionMuteHistoryResult__SpecificUserMute = 2,
	EYActionMuteHistoryResult__EYActionMuteHistoryResult_MAX = 3
};


// Enum Prospect.EYPendingResolveType
enum class EYPendingResolveType : uint8_t
{
	EYPendingResolveType__None     = 0,
	EYPendingResolveType__Pending  = 1,
	EYPendingResolveType__Resolved = 2,
	EYPendingResolveType__EYPendingResolveType_MAX = 3
};


// Enum Prospect.EYSocialUICategory
enum class EYSocialUICategory : uint8_t
{
	EYSocialUICategory__FriendInvites = 0,
	EYSocialUICategory__SquadInvites = 1,
	EYSocialUICategory__Online     = 2,
	EYSocialUICategory__Offline    = 3,
	EYSocialUICategory__Blocked    = 4,
	EYSocialUICategory__SearchResults = 5,
	EYSocialUICategory__EYSocialUICategory_MAX = 6
};


// Enum Prospect.EYUserInviteStatus
enum class EYUserInviteStatus : uint8_t
{
	EYUserInviteStatus__Unknown    = 0,
	EYUserInviteStatus__Friends    = 1,
	EYUserInviteStatus__PendingInbound = 2,
	EYUserInviteStatus__PendingOutbound = 3,
	EYUserInviteStatus__Blocked    = 4,
	EYUserInviteStatus__EYUserInviteStatus_MAX = 5
};


// Enum Prospect.EYSortingRequestType
enum class EYSortingRequestType : uint8_t
{
	EYSortingRequestType__None     = 0,
	EYSortingRequestType__Owned    = 1,
	EYSortingRequestType__FactionReputation = 2,
	EYSortingRequestType__EYSortingRequestType_MAX = 3
};


// Enum Prospect.EYSplineMovementInitBPType
enum class EYSplineMovementInitBPType : uint8_t
{
	EYSplineMovementInitBPType__NONE = 0,
	EYSplineMovementInitBPType__SplineComponentSet = 1,
	EYSplineMovementInitBPType__MovementActorSet = 2,
	EYSplineMovementInitBPType__MAX = 3
};


// Enum Prospect.EYStatOperator
enum class EYStatOperator : uint8_t
{
	EYStatOperator__NONE           = 0,
	EYStatOperator__ADD            = 1,
	EYStatOperator__SUBTRACT       = 2,
	EYStatOperator__MULTIPLY       = 3,
	EYStatOperator__DIVIDE         = 4,
	EYStatOperator__LOWEST         = 5,
	EYStatOperator__HIGHEST        = 6,
	EYStatOperator__MAX            = 7
};


// Enum Prospect.EYTechTreeNodePerkType
enum class EYTechTreeNodePerkType : uint8_t
{
	EYTechTreeNodePerkType__None   = 0,
	EYTechTreeNodePerkType__IncreaseStashSize = 1,
	EYTechTreeNodePerkType__IncreaseBagSize = 2,
	EYTechTreeNodePerkType__PassiveKMarkGenHour = 3,
	EYTechTreeNodePerkType__PassiveAurumGenDay = 4,
	EYTechTreeNodePerkType__IncreasePassiveKMarkGenCap = 5,
	EYTechTreeNodePerkType__IncreasePassiveAurumGenCap = 6,
	EYTechTreeNodePerkType__DailyCrate = 7,
	EYTechTreeNodePerkType__ReduceUpgradingTimePerc = 8,
	EYTechTreeNodePerkType__MAX    = 9
};


// Enum Prospect.EYTransitionRequest
enum class EYTransitionRequest : uint8_t
{
	EYTransitionRequest__None      = 0,
	EYTransitionRequest__Reset     = 1,
	EYTransitionRequest__FindCamera = 2,
	EYTransitionRequest__ExplicitViewTarget = 3,
	EYTransitionRequest__EYTransitionRequest_MAX = 4
};


// Enum Prospect.EYTransponderMode
enum class EYTransponderMode : uint8_t
{
	EYTransponderMode__Friendly    = 0,
	EYTransponderMode__Hostile     = 1,
	EYTransponderMode__EYTransponderMode_MAX = 2
};


// Enum Prospect.EYDebugAutoEquipSlots
enum class EYDebugAutoEquipSlots : uint8_t
{
	EYDebugAutoEquipSlots__Kit     = 0,
	EYDebugAutoEquipSlots__Weapon  = 1,
	EYDebugAutoEquipSlots__AbilityOne = 2,
	EYDebugAutoEquipSlots__AbilityTwo = 3,
	EYDebugAutoEquipSlots__EYDebugAutoEquipSlots_MAX = 4
};


// Enum Prospect.EYSensitivityMode
enum class EYSensitivityMode : uint8_t
{
	EYSensitivityMode__Regular     = 0,
	EYSensitivityMode__AimingDownSights = 1,
	EYSensitivityMode__Scoped      = 2,
	EYSensitivityMode__PerScope    = 3,
	EYSensitivityMode__EYSensitivityMode_MAX = 4
};


// Enum Prospect.EYWeaponVanityItemDisplayType
enum class EYWeaponVanityItemDisplayType : uint8_t
{
	EYWeaponVanityItemDisplayType__Invalid = 0,
	EYWeaponVanityItemDisplayType__CanBeApplied = 1,
	EYWeaponVanityItemDisplayType__UsedOnSpecificItem = 2,
	EYWeaponVanityItemDisplayType__IsLocked = 3,
	EYWeaponVanityItemDisplayType__EYWeaponVanityItemDisplayType_MAX = 4
};


// Enum Prospect.EYCustomizationPreviewScreen
enum class EYCustomizationPreviewScreen : uint8_t
{
	EYCustomizationPreviewScreen__None = 0,
	EYCustomizationPreviewScreen__CharacterCustomization = 1,
	EYCustomizationPreviewScreen__FortunaPass = 2,
	EYCustomizationPreviewScreen__PremiumShop = 3,
	EYCustomizationPreviewScreen__EYCustomizationPreviewScreen_MAX = 4
};


// Enum Prospect.EYVehicleSoundType
enum class EYVehicleSoundType : uint8_t
{
	EYVehicleSoundType__Movement   = 0,
	EYVehicleSoundType__Boost      = 1,
	EYVehicleSoundType__Idle       = 2,
	EYVehicleSoundType__EYVehicleSoundType_MAX = 3
};


// Enum Prospect.EYVirtualCursorState
enum class EYVirtualCursorState : uint8_t
{
	EYVirtualCursorState__None     = 0,
	EYVirtualCursorState__Idle     = 1,
	EYVirtualCursorState__Hovering = 2,
	EYVirtualCursorState__EYVirtualCursorState_MAX = 3
};


// Enum Prospect.EYVivoxChannelState
enum class EYVivoxChannelState : uint8_t
{
	EYVivoxChannelState__None      = 0,
	EYVivoxChannelState__Disconnected = 1,
	EYVivoxChannelState__PendingVivoxDisconnection = 2,
	EYVivoxChannelState__Logout    = 3,
	EYVivoxChannelState__PendingBackendTokenJoin = 4,
	EYVivoxChannelState__PendingVivoxExecutionState = 5,
	EYVivoxChannelState__PendingVivoxChannelJoin = 6,
	EYVivoxChannelState__Connected = 7,
	EYVivoxChannelState__EYVivoxChannelState_MAX = 8
};


// Enum Prospect.EYVolumeBusType
enum class EYVolumeBusType : uint8_t
{
	EYVolumeBusType__Master        = 0,
	EYVolumeBusType__Music         = 1,
	EYVolumeBusType__Sfx           = 2,
	EYVolumeBusType__VO            = 3,
	EYVolumeBusType__UI            = 4,
	EYVolumeBusType__HitMarker     = 5,
	EYVolumeBusType__MAX           = 6
};


// Enum Prospect.EYVoPlayerBodyType
enum class EYVoPlayerBodyType : uint8_t
{
	EYVoPlayerBodyType__Default    = 0,
	EYVoPlayerBodyType__Male1      = 1,
	EYVoPlayerBodyType__Female1    = 2,
	EYVoPlayerBodyType__EYVoPlayerBodyType_MAX = 3
};


// Enum Prospect.EYScopeType
enum class EYScopeType : uint8_t
{
	EYScopeType__None              = 0,
	EYScopeType__ADS               = 1,
	EYScopeType__TwoTimes          = 2,
	EYScopeType__FourTimes         = 3,
	EYScopeType__SixTimes          = 4,
	EYScopeType__EightTimes        = 5,
	EYScopeType__MAX               = 6
};


// Enum Prospect.EYWeaponAnimationPlayState
enum class EYWeaponAnimationPlayState : uint8_t
{
	EYWeaponAnimationPlayState__None = 0,
	EYWeaponAnimationPlayState__FirstPerson = 1,
	EYWeaponAnimationPlayState__ThirdPerson = 2,
	EYWeaponAnimationPlayState__Weapon = 3,
	EYWeaponAnimationPlayState__WeaponThirdPerson = 4,
	EYWeaponAnimationPlayState__EYWeaponAnimationPlayState_MAX = 5
};


// Enum Prospect.EYEquipedAnimationWeaponType
enum class EYEquipedAnimationWeaponType : uint8_t
{
	EYEquipedAnimationWeaponType__Invalid = 0,
	EYEquipedAnimationWeaponType__Pistol = 1,
	EYEquipedAnimationWeaponType__SMG = 2,
	EYEquipedAnimationWeaponType__Rifle = 3,
	EYEquipedAnimationWeaponType__Scanner = 4,
	EYEquipedAnimationWeaponType__Sniper = 5,
	EYEquipedAnimationWeaponType__Shotgun = 6,
	EYEquipedAnimationWeaponType__HuntingRifle = 7,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon_03 = 8,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon_04 = 9,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon_05 = 10,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon_06 = 11,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon_07 = 12,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon_08 = 13,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon_09 = 14,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon = 15,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon01 = 16,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon02 = 17,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon03 = 18,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon04 = 19,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon05 = 20,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon06 = 21,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon07 = 22,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon08 = 23,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon09 = 24,
	EYEquipedAnimationWeaponType__CustonNotUsedWeapon10 = 25,
	EYEquipedAnimationWeaponType__EYEquipedAnimationWeaponType_MAX = 26
};


// Enum Prospect.EYWeaponPlayState
enum class EYWeaponPlayState : uint8_t
{
	EYWeaponPlayState__Invalid     = 0,
	EYWeaponPlayState__Equip       = 1,
	EYWeaponPlayState__Fire        = 2,
	EYWeaponPlayState__FireMiss    = 3,
	EYWeaponPlayState__Unequip     = 4,
	EYWeaponPlayState__Reload      = 5,
	EYWeaponPlayState__StopFire    = 6,
	EYWeaponPlayState__Spinup      = 7,
	EYWeaponPlayState__Use         = 8,
	EYWeaponPlayState__FireTargeting = 9,
	EYWeaponPlayState__StopFireTargeting = 10,
	EYWeaponPlayState__ReloadFirstAmmo = 11,
	EYWeaponPlayState__ReloadLoop  = 12,
	EYWeaponPlayState__ReloadOut   = 13,
	EYWeaponPlayState__ReloadOutEmpty = 14,
	EYWeaponPlayState__MeleeLight  = 15,
	EYWeaponPlayState__MeleeLightImpact = 16,
	EYWeaponPlayState__MeleeHeavy  = 17,
	EYWeaponPlayState__MeleeHeavyImpact = 18,
	EYWeaponPlayState__MAX         = 19
};


// Enum Prospect.EYTraceShapeType
enum class EYTraceShapeType : uint8_t
{
	EYTraceShapeType__LineTrace    = 0,
	EYTraceShapeType__Capsule      = 1,
	EYTraceShapeType__EYTraceShapeType_MAX = 2
};


// Enum Prospect.EYLimitType
enum class EYLimitType : uint8_t
{
	EYLimitType__Min               = 0,
	EYLimitType__Max               = 1
};


// Enum Prospect.EYVFX_WeaponType
enum class EYVFX_WeaponType : uint8_t
{
	EYVFX_WeaponType__None         = 0,
	EYVFX_WeaponType__Pistol       = 1,
	EYVFX_WeaponType__SMG          = 2,
	EYVFX_WeaponType__LMG          = 3,
	EYVFX_WeaponType__Assault      = 4,
	EYVFX_WeaponType__SemiAuto     = 5,
	EYVFX_WeaponType__Shotgun      = 6,
	EYVFX_WeaponType__EYVFX_MAX    = 7
};


// Enum Prospect.EYTransportHitType
enum class EYTransportHitType : uint8_t
{
	EYTransportHitType__All        = 0,
	EYTransportHitType__Enemy      = 1,
	EYTransportHitType__Friendly   = 2,
	EYTransportHitType__None       = 3,
	EYTransportHitType__EYTransportHitType_MAX = 4
};


// Enum Prospect.EYWeaponTransportHitResultType
enum class EYWeaponTransportHitResultType : uint8_t
{
	EYWeaponTransportHitResultType__NormalBehavior = 0,
	EYWeaponTransportHitResultType__NoImpactRetrace = 1,
	EYWeaponTransportHitResultType__NotifyTransportComponentIgnoreImpact = 2,
	EYWeaponTransportHitResultType__ImpactRetrace = 3,
	EYWeaponTransportHitResultType__EYWeaponTransportHitResultType_MAX = 4
};


// Enum Prospect.EYWheelInputResponse
enum class EYWheelInputResponse : uint8_t
{
	Denied                         = 0,
	Accepted                       = 1,
	TabAction                      = 2,
	EYWheelInputResponse_MAX       = 3
};


// Enum Prospect.EYRequeueingState
enum class EYRequeueingState : uint8_t
{
	EYRequeueingState__NoRequeuing = 0,
	EYRequeueingState__WaitingForPremadeTeammates = 1,
	EYRequeueingState__NotMatchmaking = 2,
	EYRequeueingState__Matchmaking = 3,
	EYRequeueingState__PlayerMatched = 4,
	EYRequeueingState__EYRequeueingState_MAX = 5
};


// Enum Prospect.EYItemStatsState
enum class EYItemStatsState : uint8_t
{
	EYItemStatsState__Invalid      = 0,
	EYItemStatsState__Basic        = 1,
	EYItemStatsState__Detailed     = 2,
	EYItemStatsState__EYItemStatsState_MAX = 3
};


// Enum Prospect.EYItemDetailWidgets
enum class EYItemDetailWidgets : uint8_t
{
	EYItemDetailWidgets__None      = 0,
	EYItemDetailWidgets__InventoryItem = 1,
	EYItemDetailWidgets__BlueprintItem = 2,
	EYItemDetailWidgets__EYItemDetailWidgets_MAX = 3
};


// Enum Prospect.EYMapLayerIndex
enum class EYMapLayerIndex : uint8_t
{
	EYMapLayerIndex__BACKGROUND    = 0,
	EYMapLayerIndex__ACTIVITIES    = 1,
	EYMapLayerIndex__PLAYERS       = 2,
	EYMapLayerIndex__SOCIALACTOR   = 3,
	EYMapLayerIndex__MAX           = 4
};


// Enum Prospect.EYQuickActionClick
enum class EYQuickActionClick : uint8_t
{
	EYQuickActionClick__None       = 0,
	EYQuickActionClick__MuteChat   = 1,
	EYQuickActionClick__MuteVoice  = 2,
	EYQuickActionClick__ReportPlayer = 3,
	EYQuickActionClick__AddFriend  = 4,
	EYQuickActionClick__BlockPlayer = 5,
	EYQuickActionClick__EYQuickActionClick_MAX = 6
};


// Enum Prospect.EYVanityViewDialogOptions
enum class EYVanityViewDialogOptions : uint8_t
{
	EYVanityViewDialogOptions__None = 0,
	EYVanityViewDialogOptions__ConfirmChanges = 1,
	EYVanityViewDialogOptions__SceneChange = 2,
	EYVanityViewDialogOptions__EYVanityViewDialogOptions_MAX = 3
};


// Enum Prospect.EYVanitySelectionState
enum class EYVanitySelectionState : uint8_t
{
	EYVanitySelectionState__None   = 0,
	EYVanitySelectionState__Categories = 1,
	EYVanitySelectionState__Items  = 2,
	EYVanitySelectionState__EYVanitySelectionState_MAX = 3
};


// Enum Prospect.EYVisibilityBranch
enum class EYVisibilityBranch : uint8_t
{
	EYVisibilityBranch__Visible    = 0,
	EYVisibilityBranch__NotVisible = 1,
	EYVisibilityBranch__EYVisibilityBranch_MAX = 2
};


// Enum Prospect.EYTimerDisplayType
enum class EYTimerDisplayType : uint8_t
{
	EYTimerDisplayType__Custom     = 0,
	EYTimerDisplayType__HoursMinutesSeconds = 1,
	EYTimerDisplayType__DaysHoursMinutes = 2,
	EYTimerDisplayType__DaysHoursMinutesSeconds = 3,
	EYTimerDisplayType__EYTimerDisplayType_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
