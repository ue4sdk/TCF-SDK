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

// Enum LiveLink.ELiveLinkAxis
enum class ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X               = 0,
	ELiveLinkAxis__Y               = 1,
	ELiveLinkAxis__Z               = 2,
	ELiveLinkAxis__XNeg            = 3,
	ELiveLinkAxis__YNeg            = 4,
	ELiveLinkAxis__ZNeg            = 5,
	ELiveLinkAxis__ELiveLinkAxis_MAX = 6
};


// Enum LiveLink.ELiveLinkTimecodeProviderEvaluationType
enum class ELiveLinkTimecodeProviderEvaluationType : uint8_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest = 2,
	ELiveLinkTimecodeProviderEvaluationType__ELiveLinkTimecodeProviderEvaluationType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
