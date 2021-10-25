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

// Enum ScreenSystem.EYRootZLayer
enum class EYRootZLayer : uint8_t
{
	EYRootZLayer__Screens          = 0,
	EYRootZLayer__NavigationScreen = 1,
	EYRootZLayer__ServerUnavailableScreen = 2,
	EYRootZLayer__Escape           = 3,
	EYRootZLayer__Dialogs          = 4,
	EYRootZLayer__EYRootZLayer_MAX = 5
};


// Enum ScreenSystem.EYButtonsLayout
enum class EYButtonsLayout : uint8_t
{
	EYButtonsLayout__None          = 0,
	EYButtonsLayout__OK            = 1,
	EYButtonsLayout__OKAndCancel   = 2,
	EYButtonsLayout__EYButtonsLayout_MAX = 3
};


// Enum ScreenSystem.EYScreenType
enum class EYScreenType : uint8_t
{
	EYScreenType__None             = 0,
	EYScreenType__LaunchBay        = 1,
	EYScreenType__FortunaPass      = 2,
	EYScreenType__Loadout          = 3,
	EYScreenType__Crafting         = 4,
	EYScreenType__Factions         = 5,
	EYScreenType__Apperence        = 6,
	EYScreenType__Shop             = 7,
	EYScreenType__Inventory        = 8,
	EYScreenType__EYScreenType_MAX = 9
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
