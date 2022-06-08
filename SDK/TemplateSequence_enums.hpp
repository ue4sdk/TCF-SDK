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

// Enum TemplateSequence.ETemplateSectionPropertyScaleType
enum class ETemplateSectionPropertyScaleType : uint8_t
{
	ETemplateSectionPropertyScaleType__FloatProperty = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly = 2,
	ETemplateSectionPropertyScaleType__ETemplateSectionPropertyScaleType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
