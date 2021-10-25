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

// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	EClusterConnectionTypeEnum__Chaos_None = 4,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max = 5,
	EClusterConnectionTypeEnum__Chaos_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
