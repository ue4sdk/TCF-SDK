#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Basic.hpp"
#include "TCF_YPlayfabServices_enums.hpp"
#include "TCF_BackendModels_classes.hpp"
#include "TCF_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct YPlayfabServices.YPendingPlayfabMessage
// 0x0060
struct FYPendingPlayfabMessage
{
	struct FYPlayfabMessage                            m_message;                                                // 0x0000(0x0040) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	bool                                               m_isServer;                                               // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0041(0x001F) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
