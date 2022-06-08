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

// Enum YPlayfabServices.EYPlayfabMessageExecutionType
enum class EYPlayfabMessageExecutionType : uint8_t
{
	EYPlayfabMessageExecutionType__RequestToPlayfab = 0,
	EYPlayfabMessageExecutionType__Response = 1,
	EYPlayfabMessageExecutionType__Notify = 2,
	EYPlayfabMessageExecutionType__EYPlayfabMessageExecutionType_MAX = 3
};


// Enum YPlayfabServices.EYPlayfabMessageRequestResponse
enum class EYPlayfabMessageRequestResponse : uint8_t
{
	EYPlayfabMessageRequestResponse__Invalid = 0,
	EYPlayfabMessageRequestResponse__NotLoggedIn = 1,
	EYPlayfabMessageRequestResponse__Pending = 2,
	EYPlayfabMessageRequestResponse__Ok = 3,
	EYPlayfabMessageRequestResponse__EYPlayfabMessageRequestResponse_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
