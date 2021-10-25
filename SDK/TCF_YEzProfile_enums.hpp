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

// Enum YEzProfile.EYEzProfileRuntimeState
enum class EYEzProfileRuntimeState : uint8_t
{
	EYEzProfileRuntimeState__None  = 0,
	EYEzProfileRuntimeState__ProfileStats = 1,
	EYEzProfileRuntimeState__FinalizingStats = 2,
	EYEzProfileRuntimeState__UploadingFiles = 3,
	EYEzProfileRuntimeState__EYEzProfileRuntimeState_MAX = 4
};


// Enum YEzProfile.EYEZProfileType
enum class EYEZProfileType : uint8_t
{
	EYEZProfileType__None          = 0,
	EYEZProfileType__FullProfile   = 1,
	EYEZProfileType__NetProfile    = 2,
	EYEZProfileType__EYEZProfileType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
