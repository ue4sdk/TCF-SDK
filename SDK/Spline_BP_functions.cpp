// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Spline_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spline_BP.Spline_BP_C.SpawnObject
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             StaticMesh                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASpline_BP_C::SpawnObject(class UStaticMesh* StaticMesh, const struct FTransform& Transform, float Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Spline_BP.Spline_BP_C.SpawnObject"));

	struct
	{
		class UStaticMesh*             StaticMesh;
		struct FTransform              Transform;
		float                          Distance;
	} params = {};

	params.StaticMesh = StaticMesh;
	params.Transform = Transform;
	params.Distance = Distance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Spline_BP.Spline_BP_C.findOverrideForCurrentIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FSplineOverwriteMesh> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Found                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UStaticMesh*             Mesh                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DistanceLeft                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DistanceRight                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              MeshTransform                  (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void ASpline_BP_C::findOverrideForCurrentIndex(TArray<struct FSplineOverwriteMesh>* Array, bool* Found, class UStaticMesh** Mesh, float* DistanceLeft, float* DistanceRight, struct FTransform* MeshTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Spline_BP.Spline_BP_C.findOverrideForCurrentIndex"));

	struct
	{
		TArray<struct FSplineOverwriteMesh> Array;
		bool                           Found;
		class UStaticMesh*             Mesh;
		float                          DistanceLeft;
		float                          DistanceRight;
		struct FTransform              MeshTransform;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
	if (Found != nullptr)
		*Found = params.Found;
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (DistanceLeft != nullptr)
		*DistanceLeft = params.DistanceLeft;
	if (DistanceRight != nullptr)
		*DistanceRight = params.DistanceRight;
	if (MeshTransform != nullptr)
		*MeshTransform = params.MeshTransform;
}


// Function Spline_BP.Spline_BP_C.GetSplinePointAtDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SplineDistance                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector ASpline_BP_C::GetSplinePointAtDistance(class USplineComponent* Spline, float Position, float Distance, float* SplineDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Spline_BP.Spline_BP_C.GetSplinePointAtDistance"));

	struct
	{
		class USplineComponent*        Spline;
		float                          Position;
		float                          Distance;
		struct FVector                 ReturnValue;
		float                          SplineDistance;
	} params = {};

	params.Spline = Spline;
	params.Position = Position;
	params.Distance = Distance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SplineDistance != nullptr)
		*SplineDistance = params.SplineDistance;

	return params.ReturnValue;
}


// Function Spline_BP.Spline_BP_C.CreateHierachicalStatickMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MeshIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            SplineMeshComponentIndex       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             NewMesh                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASpline_BP_C::CreateHierachicalStatickMesh(int MeshIndex, int SplineMeshComponentIndex, class UStaticMesh* NewMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Spline_BP.Spline_BP_C.CreateHierachicalStatickMesh"));

	struct
	{
		int                            MeshIndex;
		int                            SplineMeshComponentIndex;
		class UStaticMesh*             NewMesh;
	} params = {};

	params.MeshIndex = MeshIndex;
	params.SplineMeshComponentIndex = SplineMeshComponentIndex;
	params.NewMesh = NewMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Spline_BP.Spline_BP_C.RandomBasedOnProbabilityArray
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<int>                    ProbabilityArray               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            InitialSeed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASpline_BP_C::RandomBasedOnProbabilityArray(int InitialSeed, TArray<int>* ProbabilityArray, int* Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Spline_BP.Spline_BP_C.RandomBasedOnProbabilityArray"));

	struct
	{
		TArray<int>                    ProbabilityArray;
		int                            InitialSeed;
		int                            Index;
	} params = {};

	params.InitialSeed = InitialSeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ProbabilityArray != nullptr)
		*ProbabilityArray = params.ProbabilityArray;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function Spline_BP.Spline_BP_C.Set Probability to Equal Length
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASpline_BP_C::Set_Probability_to_Equal_Length()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Spline_BP.Spline_BP_C.Set Probability to Equal Length"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Spline_BP.Spline_BP_C.PlaceActorsAlongSpline
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASpline_BP_C::PlaceActorsAlongSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Spline_BP.Spline_BP_C.PlaceActorsAlongSpline"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Spline_BP.Spline_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASpline_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Spline_BP.Spline_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Spline_BP.Spline_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASpline_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Spline_BP.Spline_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Spline_BP.Spline_BP_C.ExecuteUbergraph_Spline_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASpline_BP_C::ExecuteUbergraph_Spline_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Spline_BP.Spline_BP_C.ExecuteUbergraph_Spline_BP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
