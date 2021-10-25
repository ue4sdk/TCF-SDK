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

// Enum PropertyAccess.EPropertyAccessCopyBatch
enum class EPropertyAccessCopyBatch : uint8_t
{
	EPropertyAccessCopyBatch__InternalUnbatched = 0,
	EPropertyAccessCopyBatch__ExternalUnbatched = 1,
	EPropertyAccessCopyBatch__InternalBatched = 2,
	EPropertyAccessCopyBatch__ExternalBatched = 3,
	EPropertyAccessCopyBatch__Count = 4,
	EPropertyAccessCopyBatch__EPropertyAccessCopyBatch_MAX = 5
};


// Enum PropertyAccess.EPropertyAccessCopyType
enum class EPropertyAccessCopyType : uint8_t
{
	EPropertyAccessCopyType__None  = 0,
	EPropertyAccessCopyType__Plain = 1,
	EPropertyAccessCopyType__Complex = 2,
	EPropertyAccessCopyType__Bool  = 3,
	EPropertyAccessCopyType__Struct = 4,
	EPropertyAccessCopyType__Object = 5,
	EPropertyAccessCopyType__Name  = 6,
	EPropertyAccessCopyType__Array = 7,
	EPropertyAccessCopyType__PromoteBoolToByte = 8,
	EPropertyAccessCopyType__PromoteBoolToInt32 = 9,
	EPropertyAccessCopyType__PromoteBoolToInt64 = 10,
	EPropertyAccessCopyType__PromoteBoolToFloat = 11,
	EPropertyAccessCopyType__PromoteByteToInt32 = 12,
	EPropertyAccessCopyType__PromoteByteToInt64 = 13,
	EPropertyAccessCopyType__PromoteByteToFloat = 14,
	EPropertyAccessCopyType__PromoteInt32ToInt64 = 15,
	EPropertyAccessCopyType__PromoteInt32ToFloat = 16,
	EPropertyAccessCopyType__EPropertyAccessCopyType_MAX = 17
};


// Enum PropertyAccess.EPropertyAccessObjectType
enum class EPropertyAccessObjectType : uint8_t
{
	EPropertyAccessObjectType__None = 0,
	EPropertyAccessObjectType__Object = 1,
	EPropertyAccessObjectType__WeakObject = 2,
	EPropertyAccessObjectType__SoftObject = 3,
	EPropertyAccessObjectType__EPropertyAccessObjectType_MAX = 4
};


// Enum PropertyAccess.EPropertyAccessIndirectionType
enum class EPropertyAccessIndirectionType : uint8_t
{
	EPropertyAccessIndirectionType__Offset = 0,
	EPropertyAccessIndirectionType__Object = 1,
	EPropertyAccessIndirectionType__Array = 2,
	EPropertyAccessIndirectionType__ScriptFunction = 3,
	EPropertyAccessIndirectionType__NativeFunction = 4,
	EPropertyAccessIndirectionType__EPropertyAccessIndirectionType_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
