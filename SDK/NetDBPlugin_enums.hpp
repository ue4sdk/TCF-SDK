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

// Enum NetDBPlugin.EDatabaseType
enum class EDatabaseType : uint8_t
{
	EDatabaseType__DT_PostgreSQL   = 0,
	EDatabaseType__DT_NoDB         = 1,
	EDatabaseType__DT_MAX          = 2
};


// Enum NetDBPlugin.EDataType
enum class EDataType : uint8_t
{
	EDataType__DT_INT              = 0,
	EDataType__DT_STRING           = 1,
	EDataType__DT_FLOAT            = 2,
	EDataType__DT_BOOL             = 3,
	EDataType__DT_BYTE             = 4,
	EDataType__DT_CHAR             = 5,
	EDataType__DT_UNSPEC           = 6,
	EDataType__DT_MAX              = 7
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
