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

// Enum ConstructionSystemRuntime.EConstructionSystemToolType
enum class EConstructionSystemToolType : uint8_t
{
	EConstructionSystemToolType__BuildTool = 0,
	EConstructionSystemToolType__RemoveTool = 1,
	EConstructionSystemToolType__EConstructionSystemToolType_MAX = 2
};


// Enum ConstructionSystemRuntime.EConstructionSystemCursorVisiblity
enum class EConstructionSystemCursorVisiblity : uint8_t
{
	EConstructionSystemCursorVisiblity__Visible = 0,
	EConstructionSystemCursorVisiblity__VisibleInvalid = 1,
	EConstructionSystemCursorVisiblity__Hidden = 2,
	EConstructionSystemCursorVisiblity__EConstructionSystemCursorVisiblity_MAX = 3
};


// Enum ConstructionSystemRuntime.EPrefabricatorConstructionSnapType
enum class EPrefabricatorConstructionSnapType : uint8_t
{
	EPrefabricatorConstructionSnapType__Floor = 0,
	EPrefabricatorConstructionSnapType__Wall = 1,
	EPrefabricatorConstructionSnapType__Object = 2,
	EPrefabricatorConstructionSnapType__EPrefabricatorConstructionSnapType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
