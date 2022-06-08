#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LiveLinkComponents_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LiveLinkComponents.LiveLinkComponentController
// 0x00A8 (0x0160 - 0x00B8)
class ULiveLinkComponentController : public UActorComponent
{
public:
	struct FLiveLinkSubjectRepresentation              SubjectRepresentation;                                    // 0x00B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TMap<class UClass* /*ULiveLinkRole*/, class ULiveLinkControllerBase*> ControllerMap;                                            // 0x00C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_NoClear, CPF_Interp, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bUpdateInEditor;                                          // 0x0118(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnLiveLinkUpdated;                                        // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FComponentReference                         ComponentToControl;                                       // 0x0130(0x0028) (CPF_Edit, CPF_DisableEditOnTemplate, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisableEvaluateLiveLinkWhenSpawnable;                    // 0x0158(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEvaluateLiveLink;                                        // 0x0159(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x015A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkComponents.LiveLinkComponentController"));
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkComponentSettings
// 0x0050 (0x0080 - 0x0030)
class ULiveLinkComponentSettings : public UObject
{
public:
	TMap<class UClass* /*ULiveLinkRole*/, class UClass* /*ULiveLinkControllerBase*/> DefaultControllerForRole;                                 // 0x0030(0x0050) (CPF_Edit, CPF_Config, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkComponents.LiveLinkComponentSettings"));
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkControllerBase
// 0x0018 (0x0048 - 0x0030)
class ULiveLinkControllerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkComponents.LiveLinkControllerBase"));
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkLightController
// 0x0000 (0x0048 - 0x0048)
class ULiveLinkLightController : public ULiveLinkControllerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkComponents.LiveLinkLightController"));
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkTransformController
// 0x0008 (0x0050 - 0x0048)
class ULiveLinkTransformController : public ULiveLinkControllerBase
{
public:
	struct FLiveLinkTransformControllerData            TransformData;                                            // 0x0048(0x0006) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkComponents.LiveLinkTransformController"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
