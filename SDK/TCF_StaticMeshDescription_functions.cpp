// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_StaticMeshDescription_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               UV                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            UVIndex                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UStaticMeshDescription::SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int UVIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV");

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		struct FVector2D               UV;
		int                            UVIndex;
	} params;

	params.VertexInstanceID = VertexInstanceID;
	params.UV = UV;
	params.UVIndex = UVIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SlotName                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UStaticMeshDescription::SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, const struct FName& SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName");

	struct
	{
		struct FPolygonGroupID         PolygonGroupID;
		struct FName                   SlotName;
	} params;

	params.PolygonGroupID = PolygonGroupID;
	params.SlotName = SlotName;

	UObject::ProcessEvent(fn, &params);
}


// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            UVIndex                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UStaticMeshDescription::GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int UVIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV");

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		int                            UVIndex;
		struct FVector2D               ReturnValue;
	} params;

	params.VertexInstanceID = VertexInstanceID;
	params.UVIndex = UVIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Center                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 HalfExtents                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonGroupID         PolygonGroup                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonID              PolygonID_PlusX                (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonID              PolygonID_MinusX               (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonID              PolygonID_PlusY                (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonID              PolygonID_MinusY               (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonID              PolygonID_PlusZ                (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonID              PolygonID_MinusZ               (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UStaticMeshDescription::CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, struct FPolygonID* PolygonID_PlusZ, struct FPolygonID* PolygonID_MinusZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.CreateCube");

	struct
	{
		struct FVector                 Center;
		struct FVector                 HalfExtents;
		struct FPolygonGroupID         PolygonGroup;
		struct FPolygonID              PolygonID_PlusX;
		struct FPolygonID              PolygonID_MinusX;
		struct FPolygonID              PolygonID_PlusY;
		struct FPolygonID              PolygonID_MinusY;
		struct FPolygonID              PolygonID_PlusZ;
		struct FPolygonID              PolygonID_MinusZ;
	} params;

	params.Center = Center;
	params.HalfExtents = HalfExtents;
	params.PolygonGroup = PolygonGroup;

	UObject::ProcessEvent(fn, &params);

	if (PolygonID_PlusX != nullptr)
		*PolygonID_PlusX = params.PolygonID_PlusX;
	if (PolygonID_MinusX != nullptr)
		*PolygonID_MinusX = params.PolygonID_MinusX;
	if (PolygonID_PlusY != nullptr)
		*PolygonID_PlusY = params.PolygonID_PlusY;
	if (PolygonID_MinusY != nullptr)
		*PolygonID_MinusY = params.PolygonID_MinusY;
	if (PolygonID_PlusZ != nullptr)
		*PolygonID_PlusZ = params.PolygonID_PlusZ;
	if (PolygonID_MinusZ != nullptr)
		*PolygonID_MinusZ = params.PolygonID_MinusZ;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
