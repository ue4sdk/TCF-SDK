// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MeshDescription_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Position                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::SetVertexPosition(const struct FVertexID& VertexID, const struct FVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.SetVertexPosition"));

	struct
	{
		struct FVertexID               VertexID;
		struct FVector                 Position;
	} params = {};

	params.VertexID = VertexID;
	params.Position = Position;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PerimeterIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexInstanceID       VertexInstanceID               (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::SetPolygonVertexInstance(const struct FPolygonID& PolygonID, int PerimeterIndex, const struct FVertexInstanceID& VertexInstanceID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance"));

	struct
	{
		struct FPolygonID              PolygonID;
		int                            PerimeterIndex;
		struct FVertexInstanceID       VertexInstanceID;
	} params = {};

	params.PolygonID = PolygonID;
	params.PerimeterIndex = PerimeterIndex;
	params.VertexInstanceID = VertexInstanceID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonGroupID         PolygonGroupID                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup"));

	struct
	{
		struct FPolygonID              PolygonID;
		struct FPolygonGroupID         PolygonGroupID;
	} params = {};

	params.PolygonID = PolygonID;
	params.PolygonGroupID = PolygonGroupID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReversePolygonFacing(const struct FPolygonID& PolygonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing"));

	struct
	{
		struct FPolygonID              PolygonID;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NumberOfNewVertices            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReserveNewVertices(int NumberOfNewVertices)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewVertices"));

	struct
	{
		int                            NumberOfNewVertices;
	} params = {};

	params.NumberOfNewVertices = NumberOfNewVertices;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NumberOfNewVertexInstances     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReserveNewVertexInstances(int NumberOfNewVertexInstances)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances"));

	struct
	{
		int                            NumberOfNewVertexInstances;
	} params = {};

	params.NumberOfNewVertexInstances = NumberOfNewVertexInstances;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NumberOfNewTriangles           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReserveNewTriangles(int NumberOfNewTriangles)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles"));

	struct
	{
		int                            NumberOfNewTriangles;
	} params = {};

	params.NumberOfNewTriangles = NumberOfNewTriangles;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NumberOfNewPolygons            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReserveNewPolygons(int NumberOfNewPolygons)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons"));

	struct
	{
		int                            NumberOfNewPolygons;
	} params = {};

	params.NumberOfNewPolygons = NumberOfNewPolygons;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NumberOfNewPolygonGroups       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReserveNewPolygonGroups(int NumberOfNewPolygonGroups)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups"));

	struct
	{
		int                            NumberOfNewPolygonGroups;
	} params = {};

	params.NumberOfNewPolygonGroups = NumberOfNewPolygonGroups;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NumberOfNewEdges               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ReserveNewEdges(int NumberOfNewEdges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ReserveNewEdges"));

	struct
	{
		int                            NumberOfNewEdges;
	} params = {};

	params.NumberOfNewEdges = NumberOfNewEdges;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.IsVertexValid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsVertexValid(const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsVertexValid"));

	struct
	{
		struct FVertexID               VertexID;
		bool                           ReturnValue;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsVertexOrphaned(const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned"));

	struct
	{
		struct FVertexID               VertexID;
		bool                           ReturnValue;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid"));

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		bool                           ReturnValue;
	} params = {};

	params.VertexInstanceID = VertexInstanceID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTriangleID             TriangleID                     (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsTriangleValid(const struct FTriangleID& TriangleID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsTriangleValid"));

	struct
	{
		struct FTriangleID             TriangleID;
		bool                           ReturnValue;
	} params = {};

	params.TriangleID = TriangleID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTriangleID             TriangleID                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsTrianglePartOfNgon(const struct FTriangleID& TriangleID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon"));

	struct
	{
		struct FTriangleID             TriangleID;
		bool                           ReturnValue;
	} params = {};

	params.TriangleID = TriangleID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsPolygonValid(const struct FPolygonID& PolygonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsPolygonValid"));

	struct
	{
		struct FPolygonID              PolygonID;
		bool                           ReturnValue;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid"));

	struct
	{
		struct FPolygonGroupID         PolygonGroupID;
		bool                           ReturnValue;
	} params = {};

	params.PolygonGroupID = PolygonGroupID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEmpty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsEmpty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsEmpty"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsEdgeValid(const struct FEdgeID& EdgeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsEdgeValid"));

	struct
	{
		struct FEdgeID                 EdgeID;
		bool                           ReturnValue;
	} params = {};

	params.EdgeID = EdgeID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon"));

	struct
	{
		struct FEdgeID                 EdgeID;
		struct FPolygonID              PolygonID;
		bool                           ReturnValue;
	} params = {};

	params.EdgeID = EdgeID;
	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshDescriptionBase::IsEdgeInternal(const struct FEdgeID& EdgeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.IsEdgeInternal"));

	struct
	{
		struct FEdgeID                 EdgeID;
		bool                           ReturnValue;
	} params = {};

	params.EdgeID = EdgeID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> OutVertexInstanceIDs           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexVertexInstances(const struct FVertexID& VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances"));

	struct
	{
		struct FVertexID               VertexID;
		TArray<struct FVertexInstanceID> OutVertexInstanceIDs;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UMeshDescriptionBase::GetVertexPosition(const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexPosition"));

	struct
	{
		struct FVertexID               VertexID;
		struct FVector                 ReturnValue;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID0                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexID               VertexID1                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FEdgeID                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FEdgeID UMeshDescriptionBase::GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge"));

	struct
	{
		struct FVertexID               VertexID0;
		struct FVertexID               VertexID1;
		struct FEdgeID                 ReturnValue;
	} params = {};

	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexID               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVertexID UMeshDescriptionBase::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex"));

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		struct FVertexID               ReturnValue;
	} params = {};

	params.VertexInstanceID = VertexInstanceID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID0              (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexInstanceID       VertexInstanceID1              (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FEdgeID                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FEdgeID UMeshDescriptionBase::GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge"));

	struct
	{
		struct FVertexInstanceID       VertexInstanceID0;
		struct FVertexInstanceID       VertexInstanceID1;
		struct FEdgeID                 ReturnValue;
	} params = {};

	params.VertexInstanceID0 = VertexInstanceID0;
	params.VertexInstanceID1 = VertexInstanceID1;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTriangleID             TriangleID                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexInstanceID       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex"));

	struct
	{
		struct FTriangleID             TriangleID;
		struct FVertexID               VertexID;
		struct FVertexInstanceID       ReturnValue;
	} params = {};

	params.TriangleID = TriangleID;
	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexInstanceID       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex"));

	struct
	{
		struct FPolygonID              PolygonID;
		struct FVertexID               VertexID;
		struct FVertexInstanceID       ReturnValue;
	} params = {};

	params.PolygonID = PolygonID;
	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTriangleID>     OutConnectedTriangleIDs        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles"));

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		TArray<struct FTriangleID>     OutConnectedTriangleIDs;
	} params = {};

	params.VertexInstanceID = VertexInstanceID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons"));

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		TArray<struct FPolygonID>      OutConnectedPolygonIDs;
	} params = {};

	params.VertexInstanceID = VertexInstanceID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTriangleID>     OutConnectedTriangleIDs        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexConnectedTriangles(const struct FVertexID& VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles"));

	struct
	{
		struct FVertexID               VertexID;
		TArray<struct FTriangleID>     OutConnectedTriangleIDs;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons"));

	struct
	{
		struct FVertexID               VertexID;
		TArray<struct FPolygonID>      OutConnectedPolygonIDs;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutEdgeIDs                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutEdgeIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges"));

	struct
	{
		struct FVertexID               VertexID;
		TArray<struct FEdgeID>         OutEdgeIDs;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutAdjacentVertexIDs           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices"));

	struct
	{
		struct FVertexID               VertexID;
		TArray<struct FVertexID>       OutAdjacentVertexIDs;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAdjacentVertexIDs != nullptr)
		*OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTriangleID             TriangleID                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutVertexIDs                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetTriangleVertices(const struct FTriangleID& TriangleID, TArray<struct FVertexID>* OutVertexIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleVertices"));

	struct
	{
		struct FTriangleID             TriangleID;
		TArray<struct FVertexID>       OutVertexIDs;
	} params = {};

	params.TriangleID = TriangleID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = params.OutVertexIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTriangleID             TriangleID                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> OutVertexInstanceIDs           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetTriangleVertexInstances(const struct FTriangleID& TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances"));

	struct
	{
		struct FTriangleID             TriangleID;
		TArray<struct FVertexInstanceID> OutVertexInstanceIDs;
	} params = {};

	params.TriangleID = TriangleID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTriangleID             TriangleID                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexInstanceID       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVertexInstanceID UMeshDescriptionBase::GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance"));

	struct
	{
		struct FTriangleID             TriangleID;
		int                            Index;
		struct FVertexInstanceID       ReturnValue;
	} params = {};

	params.TriangleID = TriangleID;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTriangleID             TriangleID                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonGroupID         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FPolygonGroupID UMeshDescriptionBase::GetTrianglePolygonGroup(const struct FTriangleID& TriangleID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup"));

	struct
	{
		struct FTriangleID             TriangleID;
		struct FPolygonGroupID         ReturnValue;
	} params = {};

	params.TriangleID = TriangleID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTriangleID             TriangleID                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonID              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FPolygonID UMeshDescriptionBase::GetTrianglePolygon(const struct FTriangleID& TriangleID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon"));

	struct
	{
		struct FTriangleID             TriangleID;
		struct FPolygonID              ReturnValue;
	} params = {};

	params.TriangleID = TriangleID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTriangleID             TriangleID                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutEdgeIDs                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetTriangleEdges(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OutEdgeIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleEdges"));

	struct
	{
		struct FTriangleID             TriangleID;
		TArray<struct FEdgeID>         OutEdgeIDs;
	} params = {};

	params.TriangleID = TriangleID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTriangleID             TriangleID                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTriangleID>     OutTriangleIDs                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, TArray<struct FTriangleID>* OutTriangleIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles"));

	struct
	{
		struct FTriangleID             TriangleID;
		TArray<struct FTriangleID>     OutTriangleIDs;
	} params = {};

	params.TriangleID = TriangleID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutTriangleIDs != nullptr)
		*OutTriangleIDs = params.OutTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutVertexIDs                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutVertexIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonVertices"));

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FVertexID>       OutVertexIDs;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = params.OutVertexIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> OutVertexInstanceIDs           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances"));

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FVertexInstanceID> OutVertexInstanceIDs;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTriangleID>     OutTriangleIDs                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonTriangles(const struct FPolygonID& PolygonID, TArray<struct FTriangleID>* OutTriangleIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles"));

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FTriangleID>     OutTriangleIDs;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutTriangleIDs != nullptr)
		*OutTriangleIDs = params.OutTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonGroupID         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FPolygonGroupID UMeshDescriptionBase::GetPolygonPolygonGroup(const struct FPolygonID& PolygonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup"));

	struct
	{
		struct FPolygonID              PolygonID;
		struct FPolygonGroupID         ReturnValue;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutEdgeIDs                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges"));

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FEdgeID>         OutEdgeIDs;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OutEdgeIDs                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonInternalEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges"));

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FEdgeID>         OutEdgeIDs;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutPolygonIDs                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons"));

	struct
	{
		struct FPolygonGroupID         PolygonGroupID;
		TArray<struct FPolygonID>      OutPolygonIDs;
	} params = {};

	params.PolygonGroupID = PolygonGroupID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPolygonIDs != nullptr)
		*OutPolygonIDs = params.OutPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutPolygonIDs                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutPolygonIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons"));

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FPolygonID>      OutPolygonIDs;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPolygonIDs != nullptr)
		*OutPolygonIDs = params.OutPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMeshDescriptionBase::GetNumVertexVertexInstances(const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances"));

	struct
	{
		struct FVertexID               VertexID;
		int                            ReturnValue;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles"));

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		int                            ReturnValue;
	} params = {};

	params.VertexInstanceID = VertexInstanceID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons"));

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		int                            ReturnValue;
	} params = {};

	params.VertexInstanceID = VertexInstanceID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMeshDescriptionBase::GetNumVertexConnectedTriangles(const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles"));

	struct
	{
		struct FVertexID               VertexID;
		int                            ReturnValue;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMeshDescriptionBase::GetNumVertexConnectedPolygons(const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons"));

	struct
	{
		struct FVertexID               VertexID;
		int                            ReturnValue;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMeshDescriptionBase::GetNumVertexConnectedEdges(const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges"));

	struct
	{
		struct FVertexID               VertexID;
		int                            ReturnValue;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMeshDescriptionBase::GetNumPolygonVertices(const struct FPolygonID& PolygonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices"));

	struct
	{
		struct FPolygonID              PolygonID;
		int                            ReturnValue;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMeshDescriptionBase::GetNumPolygonTriangles(const struct FPolygonID& PolygonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles"));

	struct
	{
		struct FPolygonID              PolygonID;
		int                            ReturnValue;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMeshDescriptionBase::GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges"));

	struct
	{
		struct FPolygonID              PolygonID;
		int                            ReturnValue;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMeshDescriptionBase::GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons"));

	struct
	{
		struct FPolygonGroupID         PolygonGroupID;
		int                            ReturnValue;
	} params = {};

	params.PolygonGroupID = PolygonGroupID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMeshDescriptionBase::GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles"));

	struct
	{
		struct FEdgeID                 EdgeID;
		int                            ReturnValue;
	} params = {};

	params.EdgeID = EdgeID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMeshDescriptionBase::GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons"));

	struct
	{
		struct FEdgeID                 EdgeID;
		int                            ReturnValue;
	} params = {};

	params.EdgeID = EdgeID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OutVertexIDs                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetEdgeVertices(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OutVertexIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetEdgeVertices"));

	struct
	{
		struct FEdgeID                 EdgeID;
		TArray<struct FVertexID>       OutVertexIDs;
	} params = {};

	params.EdgeID = EdgeID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = params.OutVertexIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            VertexNumber                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexID               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVertexID UMeshDescriptionBase::GetEdgeVertex(const struct FEdgeID& EdgeID, int VertexNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetEdgeVertex"));

	struct
	{
		struct FEdgeID                 EdgeID;
		int                            VertexNumber;
		struct FVertexID               ReturnValue;
	} params = {};

	params.EdgeID = EdgeID;
	params.VertexNumber = VertexNumber;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTriangleID>     OutConnectedTriangleIDs        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles"));

	struct
	{
		struct FEdgeID                 EdgeID;
		TArray<struct FTriangleID>     OutConnectedTriangleIDs;
	} params = {};

	params.EdgeID = EdgeID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons"));

	struct
	{
		struct FEdgeID                 EdgeID;
		TArray<struct FPolygonID>      OutConnectedPolygonIDs;
	} params = {};

	params.EdgeID = EdgeID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.Empty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMeshDescriptionBase::Empty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.Empty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OrphanedVertices               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance"));

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		TArray<struct FVertexID>       OrphanedVertices;
	} params = {};

	params.VertexInstanceID = VertexInstanceID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = params.OrphanedVertices;
}


// Function MeshDescription.MeshDescriptionBase.DeleteVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::DeleteVertex(const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeleteVertex"));

	struct
	{
		struct FVertexID               VertexID;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FTriangleID             TriangleID                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OrphanedEdges                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> OrphanedVertexInstances        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FPolygonGroupID> OrphanedPolygonGroupsPtr       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::DeleteTriangle(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeleteTriangle"));

	struct
	{
		struct FTriangleID             TriangleID;
		TArray<struct FEdgeID>         OrphanedEdges;
		TArray<struct FVertexInstanceID> OrphanedVertexInstances;
		TArray<struct FPolygonGroupID> OrphanedPolygonGroupsPtr;
	} params = {};

	params.TriangleID = TriangleID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OrphanedEdges != nullptr)
		*OrphanedEdges = params.OrphanedEdges;
	if (OrphanedVertexInstances != nullptr)
		*OrphanedVertexInstances = params.OrphanedVertexInstances;
	if (OrphanedPolygonGroupsPtr != nullptr)
		*OrphanedPolygonGroupsPtr = params.OrphanedPolygonGroupsPtr;
}


// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup"));

	struct
	{
		struct FPolygonGroupID         PolygonGroupID;
	} params = {};

	params.PolygonGroupID = PolygonGroupID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.DeletePolygon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         OrphanedEdges                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> OrphanedVertexInstances        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FPolygonGroupID> OrphanedPolygonGroups          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::DeletePolygon(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeletePolygon"));

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FEdgeID>         OrphanedEdges;
		TArray<struct FVertexInstanceID> OrphanedVertexInstances;
		TArray<struct FPolygonGroupID> OrphanedPolygonGroups;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OrphanedEdges != nullptr)
		*OrphanedEdges = params.OrphanedEdges;
	if (OrphanedVertexInstances != nullptr)
		*OrphanedVertexInstances = params.OrphanedVertexInstances;
	if (OrphanedPolygonGroups != nullptr)
		*OrphanedPolygonGroups = params.OrphanedPolygonGroups;
}


// Function MeshDescription.MeshDescriptionBase.DeleteEdge
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexID>       OrphanedVertices               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::DeleteEdge(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OrphanedVertices)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.DeleteEdge"));

	struct
	{
		struct FEdgeID                 EdgeID;
		TArray<struct FVertexID>       OrphanedVertices;
	} params = {};

	params.EdgeID = EdgeID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = params.OrphanedVertices;
}


// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::CreateVertexWithID(const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateVertexWithID"));

	struct
	{
		struct FVertexID               VertexID;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID"));

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		struct FVertexID               VertexID;
	} params = {};

	params.VertexInstanceID = VertexInstanceID;
	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FVertexID               VertexID                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexInstanceID       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVertexInstanceID UMeshDescriptionBase::CreateVertexInstance(const struct FVertexID& VertexID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateVertexInstance"));

	struct
	{
		struct FVertexID               VertexID;
		struct FVertexInstanceID       ReturnValue;
	} params = {};

	params.VertexID = VertexID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreateVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FVertexID               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVertexID UMeshDescriptionBase::CreateVertex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateVertex"));

	struct
	{
		struct FVertexID               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FTriangleID             TriangleID                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonGroupID         PolygonGroupID                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> VertexInstanceIDs              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         NewEdgeIDs                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID"));

	struct
	{
		struct FTriangleID             TriangleID;
		struct FPolygonGroupID         PolygonGroupID;
		TArray<struct FVertexInstanceID> VertexInstanceIDs;
		TArray<struct FEdgeID>         NewEdgeIDs;
	} params = {};

	params.TriangleID = TriangleID;
	params.PolygonGroupID = PolygonGroupID;
	params.VertexInstanceIDs = VertexInstanceIDs;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.CreateTriangle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> VertexInstanceIDs              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         NewEdgeIDs                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// struct FTriangleID             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FTriangleID UMeshDescriptionBase::CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateTriangle"));

	struct
	{
		struct FPolygonGroupID         PolygonGroupID;
		TArray<struct FVertexInstanceID> VertexInstanceIDs;
		TArray<struct FEdgeID>         NewEdgeIDs;
		struct FTriangleID             ReturnValue;
	} params = {};

	params.PolygonGroupID = PolygonGroupID;
	params.VertexInstanceIDs = VertexInstanceIDs;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPolygonGroupID         PolygonGroupID                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> VertexInstanceIDs              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         NewEdgeIDs                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID"));

	struct
	{
		struct FPolygonID              PolygonID;
		struct FPolygonGroupID         PolygonGroupID;
		TArray<struct FVertexInstanceID> VertexInstanceIDs;
		TArray<struct FEdgeID>         NewEdgeIDs;
	} params = {};

	params.PolygonID = PolygonID;
	params.PolygonGroupID = PolygonGroupID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = params.VertexInstanceIDs;
	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID"));

	struct
	{
		struct FPolygonGroupID         PolygonGroupID;
	} params = {};

	params.PolygonGroupID = PolygonGroupID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonGroupID         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FPolygonGroupID UMeshDescriptionBase::CreatePolygonGroup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup"));

	struct
	{
		struct FPolygonGroupID         ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID> VertexInstanceIDs              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>         NewEdgeIDs                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// struct FPolygonID              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FPolygonID UMeshDescriptionBase::CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreatePolygon"));

	struct
	{
		struct FPolygonGroupID         PolygonGroupID;
		TArray<struct FVertexInstanceID> VertexInstanceIDs;
		TArray<struct FEdgeID>         NewEdgeIDs;
		struct FPolygonID              ReturnValue;
	} params = {};

	params.PolygonGroupID = PolygonGroupID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = params.VertexInstanceIDs;
	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexID               VertexID0                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexID               VertexID1                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID"));

	struct
	{
		struct FEdgeID                 EdgeID;
		struct FVertexID               VertexID0;
		struct FVertexID               VertexID1;
	} params = {};

	params.EdgeID = EdgeID;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeshDescription.MeshDescriptionBase.CreateEdge
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FVertexID               VertexID0                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVertexID               VertexID1                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FEdgeID                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FEdgeID UMeshDescriptionBase::CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.CreateEdge"));

	struct
	{
		struct FVertexID               VertexID0;
		struct FVertexID               VertexID1;
		struct FEdgeID                 ReturnValue;
	} params = {};

	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshDescriptionBase::ComputePolygonTriangulation(const struct FPolygonID& PolygonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation"));

	struct
	{
		struct FPolygonID              PolygonID;
	} params = {};

	params.PolygonID = PolygonID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
