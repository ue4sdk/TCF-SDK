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

// Enum YBattleEye.EYPlayerBattleEyeActionType
enum class EYPlayerBattleEyeActionType : uint8_t
{
	EYPlayerBattleEyeActionType__Ban = 0,
	EYPlayerBattleEyeActionType__Kick = 1,
	EYPlayerBattleEyeActionType__UnBan = 2,
	EYPlayerBattleEyeActionType__Message = 3,
	EYPlayerBattleEyeActionType__Invalid = 4,
	EYPlayerBattleEyeActionType__EYPlayerBattleEyeActionType_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
