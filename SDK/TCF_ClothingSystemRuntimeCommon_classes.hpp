#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ClothingSystemRuntimeCommon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// 0x0000 (0x0028 - 0x0028)
class UClothConfigCommon : public UClothConfigBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ClothingSystemRuntimeCommon.ClothConfigCommon");
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// 0x0000 (0x0028 - 0x0028)
class UClothSharedConfigCommon : public UClothConfigCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon");
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// 0x0000 (0x0028 - 0x0028)
class UClothingAssetCustomData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ClothingSystemRuntimeCommon.ClothingAssetCustomData");
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// 0x01A8 (0x01F0 - 0x0048)
class UClothingAssetCommon : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<struct FName, class UClothConfigBase*>        ClothConfigs;                                             // 0x0050(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_EditFixedSize, CPF_EditConst, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	class UClothConfigBase*                            ClothSharedSimConfig;                                     // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClothConfigBase*                            ClothSimConfig;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClothConfigBase*                            ChaosClothSimConfig;                                      // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UClothLODDataCommon_Legacy*>          ClothLODData;                                             // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_Deprecated, CPF_NativeAccessSpecifierPublic)
	TArray<struct FClothLODDataCommon>                 LODData;                                                  // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        LodMap;                                                   // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FName>                               UsedBoneNames;                                            // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        UsedBoneIndices;                                          // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                ReferenceBoneIndex;                                       // 0x0108(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class UClothingAssetCustomData*                    customData;                                               // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FClothConfig_Legacy                         ClothConfig;                                              // 0x0118(0x00D4) (CPF_Deprecated, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ClothingSystemRuntimeCommon.ClothingAssetCommon");
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// 0x0160 (0x0188 - 0x0028)
class UClothLODDataCommon_Legacy : public UObject
{
public:
	class UClothPhysicalMeshDataBase_Legacy*           PhysicalMeshData;                                         // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FClothPhysicalMeshData                      ClothPhysicalMeshData;                                    // 0x0030(0x00F8) (CPF_NativeAccessSpecifierPublic)
	struct FClothCollisionData                         CollisionData;                                            // 0x0128(0x0040) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0168(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
