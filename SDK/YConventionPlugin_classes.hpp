#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YConventionPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YConventionPlugin.YTCCodeConventionActor
// 0x0010 (0x0500 - 0x04F0)
class AYTCCodeConventionActor : public ACharacter
{
public:
	class USkeletalMeshComponent*                      AdditionalMesh;                                           // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YConventionPlugin.YTCCodeConventionActor"));
		return ptr;
	}

};


// Class YConventionPlugin.YTCCodeConventionComponent
// 0x0020 (0x0230 - 0x0210)
class UYTCCodeConventionComponent : public USceneComponent
{
public:
	struct FYCodeConventionBlueprintVarGroup           BlueprintGroup;                                           // 0x0210(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x14];                                      // 0x021C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YConventionPlugin.YTCCodeConventionComponent"));
		return ptr;
	}

};


// Class YConventionPlugin.YTCCodeConventionFunctions
// 0x0000 (0x0030 - 0x0030)
class UYTCCodeConventionFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YConventionPlugin.YTCCodeConventionFunctions"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
