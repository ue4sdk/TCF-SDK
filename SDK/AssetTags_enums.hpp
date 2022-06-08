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

// Enum AssetTags.ECollectionScriptingShareType
enum class ECollectionScriptingShareType : uint8_t
{
	ECollectionScriptingShareType__Local = 0,
	ECollectionScriptingShareType__Private = 1,
	ECollectionScriptingShareType__Shared = 2,
	ECollectionScriptingShareType__ECollectionScriptingShareType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
