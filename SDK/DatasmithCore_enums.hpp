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

// Enum DatasmithCore.EDatasmithPropertyCategory
enum class EDatasmithPropertyCategory : uint8_t
{
	EDatasmithPropertyCategory__Undefined = 0,
	EDatasmithPropertyCategory__Generic = 1,
	EDatasmithPropertyCategory__RelativeLocation = 2,
	EDatasmithPropertyCategory__RelativeRotation = 3,
	EDatasmithPropertyCategory__RelativeScale3D = 4,
	EDatasmithPropertyCategory__Visibility = 5,
	EDatasmithPropertyCategory__Material = 6,
	EDatasmithPropertyCategory__Color = 7,
	EDatasmithPropertyCategory__Option = 8,
	EDatasmithPropertyCategory__EDatasmithPropertyCategory_MAX = 9
};


// Enum DatasmithCore.EDatasmithCompletionMode
enum class EDatasmithCompletionMode : uint8_t
{
	EDatasmithCompletionMode__KeepState = 0,
	EDatasmithCompletionMode__RestoreState = 1,
	EDatasmithCompletionMode__ProjectDefault = 2,
	EDatasmithCompletionMode__EDatasmithCompletionMode_MAX = 3
};


// Enum DatasmithCore.EDatasmithActorAttachmentRule
enum class EDatasmithActorAttachmentRule : uint8_t
{
	EDatasmithActorAttachmentRule__KeepRelativeTransform = 0,
	EDatasmithActorAttachmentRule__KeepWorldTransform = 1,
	EDatasmithActorAttachmentRule__EDatasmithActorAttachmentRule_MAX = 2
};


// Enum DatasmithCore.EDatasmithActorRemovalRule
enum class EDatasmithActorRemovalRule : uint8_t
{
	EDatasmithActorRemovalRule__RemoveChildren = 0,
	EDatasmithActorRemovalRule__KeepChildrenAndKeepRelativeTransform = 1,
	EDatasmithActorRemovalRule__EDatasmithActorRemovalRule_MAX = 2
};


// Enum DatasmithCore.EDatasmithKeyValuePropertyType
enum class EDatasmithKeyValuePropertyType : uint8_t
{
	EDatasmithKeyValuePropertyType__String = 0,
	EDatasmithKeyValuePropertyType__Color = 1,
	EDatasmithKeyValuePropertyType__Float = 2,
	EDatasmithKeyValuePropertyType__Bool = 3,
	EDatasmithKeyValuePropertyType__Texture = 4,
	EDatasmithKeyValuePropertyType__Vector = 5,
	EDatasmithKeyValuePropertyType__Integer = 6,
	EDatasmithKeyValuePropertyType__EDatasmithKeyValuePropertyType_MAX = 7
};


// Enum DatasmithCore.EDatasmithColorSpace
enum class EDatasmithColorSpace : uint8_t
{
	EDatasmithColorSpace__Default  = 0,
	EDatasmithColorSpace__sRGB     = 1,
	EDatasmithColorSpace__Linear   = 2,
	EDatasmithColorSpace__EDatasmithColorSpace_MAX = 3
};


// Enum DatasmithCore.EDatasmithTextureFormat
enum class EDatasmithTextureFormat : uint8_t
{
	EDatasmithTextureFormat__PNG   = 0,
	EDatasmithTextureFormat__JPEG  = 1,
	EDatasmithTextureFormat__EDatasmithTextureFormat_MAX = 2
};


// Enum DatasmithCore.EDatasmithTextureAddress
enum class EDatasmithTextureAddress : uint8_t
{
	EDatasmithTextureAddress__Wrap = 0,
	EDatasmithTextureAddress__Clamp = 1,
	EDatasmithTextureAddress__Mirror = 2,
	EDatasmithTextureAddress__EDatasmithTextureAddress_MAX = 3
};


// Enum DatasmithCore.EDatasmithTextureFilter
enum class EDatasmithTextureFilter : uint8_t
{
	EDatasmithTextureFilter__Nearest = 0,
	EDatasmithTextureFilter__Bilinear = 1,
	EDatasmithTextureFilter__Trilinear = 2,
	EDatasmithTextureFilter__Default = 3,
	EDatasmithTextureFilter__EDatasmithTextureFilter_MAX = 4
};


// Enum DatasmithCore.EDatasmithTextureMode
enum class EDatasmithTextureMode : uint8_t
{
	EDatasmithTextureMode__Diffuse = 0,
	EDatasmithTextureMode__Specular = 1,
	EDatasmithTextureMode__Normal  = 2,
	EDatasmithTextureMode__NormalGreenInv = 3,
	EDatasmithTextureMode__Displace = 4,
	EDatasmithTextureMode__Other   = 5,
	EDatasmithTextureMode__Bump    = 6,
	EDatasmithTextureMode__Ies     = 7,
	EDatasmithTextureMode__EDatasmithTextureMode_MAX = 8
};


// Enum DatasmithCore.EDatasmithLightShape
enum class EDatasmithLightShape : uint8_t
{
	EDatasmithLightShape__Rectangle = 0,
	EDatasmithLightShape__Disc     = 1,
	EDatasmithLightShape__Sphere   = 2,
	EDatasmithLightShape__Cylinder = 3,
	EDatasmithLightShape__None     = 4,
	EDatasmithLightShape__EDatasmithLightShape_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
