// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseSpline_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseSpline_BP.BaseSpline_BP_C.ReRunConstructionScript
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::ReRunConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.ReRunConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.AddActor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USplineMeshComponent*    CurrentSplineMesh              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDecoMeshData           DecoMeshData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABaseSpline_BP_C::AddActor(class USplineMeshComponent* CurrentSplineMesh, const struct FDecoMeshData& DecoMeshData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.AddActor"));

	struct
	{
		class USplineMeshComponent*    CurrentSplineMesh;
		struct FDecoMeshData           DecoMeshData;
	} params = {};

	params.CurrentSplineMesh = CurrentSplineMesh;
	params.DecoMeshData = DecoMeshData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.SetupSocketNames
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::SetupSocketNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.SetupSocketNames"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.GetValidSockets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FName, bool>       InSocketNameFlags              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TArray<struct FName>           ValidSocketNames               (CPF_Parm, CPF_OutParm)

void ABaseSpline_BP_C::GetValidSockets(TMap<struct FName, bool> InSocketNameFlags, TArray<struct FName>* ValidSocketNames)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.GetValidSockets"));

	struct
	{
		TMap<struct FName, bool>       InSocketNameFlags;
		TArray<struct FName>           ValidSocketNames;
	} params = {};

	params.InSocketNameFlags = InSocketNameFlags;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ValidSocketNames != nullptr)
		*ValidSocketNames = params.ValidSocketNames;
}


// Function BaseSpline_BP.BaseSpline_BP_C.UpdateValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::UpdateValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.UpdateValues"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.GetSocketFlags
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::GetSocketFlags()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.GetSocketFlags"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.Export
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::Export()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.Export"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.Import
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::Import()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.Import"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.ApplyScaling
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::ApplyScaling()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.ApplyScaling"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.Merge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::Merge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.Merge"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.AddSplineMeshWithMap
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentLoopIndex               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DistanceToSegmentDistance      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USplineMeshComponent*    SplineMeshComponent            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpline_BP_C::AddSplineMeshWithMap(int CurrentLoopIndex, float* DistanceToSegmentDistance, class USplineMeshComponent** SplineMeshComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.AddSplineMeshWithMap"));

	struct
	{
		int                            CurrentLoopIndex;
		float                          DistanceToSegmentDistance;
		class USplineMeshComponent*    SplineMeshComponent;
	} params = {};

	params.CurrentLoopIndex = CurrentLoopIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DistanceToSegmentDistance != nullptr)
		*DistanceToSegmentDistance = params.DistanceToSegmentDistance;
	if (SplineMeshComponent != nullptr)
		*SplineMeshComponent = params.SplineMeshComponent;
}


// Function BaseSpline_BP.BaseSpline_BP_C.SetSpacing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::SetSpacing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.SetSpacing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.SetupDecoMeshHISM
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDecoMeshData           DecoMeshDataInput              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TArray<class UHierarchicalInstancedStaticMeshComponent*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference)

TArray<class UHierarchicalInstancedStaticMeshComponent*> ABaseSpline_BP_C::SetupDecoMeshHISM(const struct FDecoMeshData& DecoMeshDataInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.SetupDecoMeshHISM"));

	struct
	{
		struct FDecoMeshData           DecoMeshDataInput;
		TArray<class UHierarchicalInstancedStaticMeshComponent*> ReturnValue;
	} params = {};

	params.DecoMeshDataInput = DecoMeshDataInput;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseSpline_BP.BaseSpline_BP_C.AdjustToSegment
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            StartPointINdex                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            EndPointIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpline_BP_C::AdjustToSegment(int StartPointINdex, int EndPointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.AdjustToSegment"));

	struct
	{
		int                            StartPointINdex;
		int                            EndPointIndex;
	} params = {};

	params.StartPointINdex = StartPointINdex;
	params.EndPointIndex = EndPointIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.Update"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.ConnectEndToSpline
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::ConnectEndToSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.ConnectEndToSpline"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.AddDecoMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USplineMeshComponent*    CurrentSplineMesh              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDecoMeshData           DecoMeshData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABaseSpline_BP_C::AddDecoMesh(class USplineMeshComponent* CurrentSplineMesh, const struct FDecoMeshData& DecoMeshData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.AddDecoMesh"));

	struct
	{
		class USplineMeshComponent*    CurrentSplineMesh;
		struct FDecoMeshData           DecoMeshData;
	} params = {};

	params.CurrentSplineMesh = CurrentSplineMesh;
	params.DecoMeshData = DecoMeshData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.SetupDecoMeshes
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::SetupDecoMeshes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.SetupDecoMeshes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.Help
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::Help()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.Help"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.AdjustToSpline
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::AdjustToSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.AdjustToSpline"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.AdjustToLandscape
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::AdjustToLandscape()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.AdjustToLandscape"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.RenderMeshInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           flowUpwards                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          DistanceOnSpline               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpline_BP_C::RenderMeshInfo(int CurrentIndex, bool flowUpwards, float DistanceOnSpline)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.RenderMeshInfo"));

	struct
	{
		int                            CurrentIndex;
		bool                           flowUpwards;
		float                          DistanceOnSpline;
	} params = {};

	params.CurrentIndex = CurrentIndex;
	params.flowUpwards = flowUpwards;
	params.DistanceOnSpline = DistanceOnSpline;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.MainLoop
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            LastIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpline_BP_C::MainLoop(int LastIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.MainLoop"));

	struct
	{
		int                            LastIndex;
	} params = {};

	params.LastIndex = LastIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.Init
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            LastMeshIndex                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpline_BP_C::Init(int* LastMeshIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.Init"));

	struct
	{
		int                            LastMeshIndex;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LastMeshIndex != nullptr)
		*LastMeshIndex = params.LastMeshIndex;
}


// Function BaseSpline_BP.BaseSpline_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABaseSpline_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpline_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseSpline_BP.BaseSpline_BP_C.ExecuteUbergraph_BaseSpline_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseSpline_BP_C::ExecuteUbergraph_BaseSpline_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseSpline_BP.BaseSpline_BP_C.ExecuteUbergraph_BaseSpline_BP"));

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
