// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EditorPlacementCheck_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EditorPlacementCheck.EditorPlacementCheck_C.FindCornerPointsFromMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEditorPlacementCheck_C::FindCornerPointsFromMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EditorPlacementCheck.EditorPlacementCheck_C.FindCornerPointsFromMesh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EditorPlacementCheck.EditorPlacementCheck_C.LootOnTheFloor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 CheckLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EDrawDebugTrace>   DrawDebugType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UEditorPlacementCheck_C::LootOnTheFloor(const struct FVector& CheckLocation, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FVector* Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EditorPlacementCheck.EditorPlacementCheck_C.LootOnTheFloor"));

	struct
	{
		struct FVector                 CheckLocation;
		TEnumAsByte<EDrawDebugTrace>   DrawDebugType;
		struct FVector                 Location;
		bool                           ReturnValue;
	} params = {};

	params.CheckLocation = CheckLocation;
	params.DrawDebugType = DrawDebugType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Location != nullptr)
		*Location = params.Location;

	return params.ReturnValue;
}


// Function EditorPlacementCheck.EditorPlacementCheck_C.GetInteractableTestPoints
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FVector>         RandomPoints                   (CPF_Parm, CPF_OutParm)

void UEditorPlacementCheck_C::GetInteractableTestPoints(TArray<struct FVector>* RandomPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EditorPlacementCheck.EditorPlacementCheck_C.GetInteractableTestPoints"));

	struct
	{
		TArray<struct FVector>         RandomPoints;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomPoints != nullptr)
		*RandomPoints = params.RandomPoints;
}


// Function EditorPlacementCheck.EditorPlacementCheck_C.CheckPlacement
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEditorPlacementCheck_C::CheckPlacement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EditorPlacementCheck.EditorPlacementCheck_C.CheckPlacement"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EditorPlacementCheck.EditorPlacementCheck_C.ExecuteUbergraph_EditorPlacementCheck
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEditorPlacementCheck_C::ExecuteUbergraph_EditorPlacementCheck(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EditorPlacementCheck.EditorPlacementCheck_C.ExecuteUbergraph_EditorPlacementCheck"));

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
