#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Spline_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Spline_BP.Spline_BP_C
// 0x0058 (0x02A8 - 0x0250)
class ASpline_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USplineComponent*                            Spline;                                                   // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FSplineMeshData_FSplineMeshData>     SplineMeshComponents;                                     // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FSplineHierarchicalData>             HierarchicalData;                                         // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	float                                              LastSplineLocation;                                       // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Iterations;                                               // 0x0284(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> OverwriteHierarchicalData;                                // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class UStaticMesh*>                         OverwriteMeshes;                                          // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Spline_BP.Spline_BP_C"));
		return ptr;
	}


	void SpawnObject(class UStaticMesh* StaticMesh, const struct FTransform& Transform, float Distance);
	void findOverrideForCurrentIndex(TArray<struct FSplineOverwriteMesh>* Array, bool* Found, class UStaticMesh** Mesh, float* DistanceLeft, float* DistanceRight, struct FTransform* MeshTransform);
	struct FVector GetSplinePointAtDistance(class USplineComponent* Spline, float Position, float Distance, float* SplineDistance);
	void CreateHierachicalStatickMesh(int MeshIndex, int SplineMeshComponentIndex, class UStaticMesh* NewMesh);
	void RandomBasedOnProbabilityArray(int InitialSeed, TArray<int>* ProbabilityArray, int* Index);
	void Set_Probability_to_Equal_Length();
	void PlaceActorsAlongSpline();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Spline_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
