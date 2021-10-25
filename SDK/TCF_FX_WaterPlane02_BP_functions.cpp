// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FX_WaterPlane02_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.Detect Tiles to Optimize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_WaterPlane02_BP_C::Detect_Tiles_to_Optimize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.Detect Tiles to Optimize"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.DrawAllTiles
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_WaterPlane02_BP_C::DrawAllTiles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.DrawAllTiles"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.UpdateTiles
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_WaterPlane02_BP_C::UpdateTiles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.UpdateTiles"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.CheckTerrainCollision
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 LocalPosition                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DistanceThreshold              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EDrawDebugTrace>   DrawDebugType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           BelowTerrain                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            hits                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_WaterPlane02_BP_C::CheckTerrainCollision(const struct FVector& LocalPosition, float DistanceThreshold, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool* BelowTerrain, int* hits)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.CheckTerrainCollision"));

	struct
	{
		struct FVector                 LocalPosition;
		float                          DistanceThreshold;
		TEnumAsByte<EDrawDebugTrace>   DrawDebugType;
		bool                           BelowTerrain;
		int                            hits;
	} params;

	params.LocalPosition = LocalPosition;
	params.DistanceThreshold = DistanceThreshold;
	params.DrawDebugType = DrawDebugType;

	UObject::ProcessEvent(fn, &params);

	if (BelowTerrain != nullptr)
		*BelowTerrain = params.BelowTerrain;
	if (hits != nullptr)
		*hits = params.hits;
}


// Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.GetDimensions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_WaterPlane02_BP_C::GetDimensions(struct FVector2D* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.GetDimensions"));

	struct
	{
		struct FVector2D               NewParam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_WaterPlane02_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFX_WaterPlane02_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.ExecuteUbergraph_FX_WaterPlane02_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_WaterPlane02_BP_C::ExecuteUbergraph_FX_WaterPlane02_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_WaterPlane02_BP.FX_WaterPlane02_BP_C.ExecuteUbergraph_FX_WaterPlane02_BP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
