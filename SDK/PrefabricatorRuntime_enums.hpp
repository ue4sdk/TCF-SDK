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

// Enum PrefabricatorRuntime.EPrefabricatorPivotPosition
enum class EPrefabricatorPivotPosition : uint8_t
{
	EPrefabricatorPivotPosition__ExtremeLeft = 0,
	EPrefabricatorPivotPosition__ExtremeRight = 1,
	EPrefabricatorPivotPosition__Center = 2,
	EPrefabricatorPivotPosition__EPrefabricatorPivotPosition_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
