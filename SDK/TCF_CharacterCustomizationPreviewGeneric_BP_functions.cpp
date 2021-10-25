// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_CharacterCustomizationPreviewGeneric_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.SetColorParamOnMeshes
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Parameter                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreviewGeneric_BP_C::SetColorParamOnMeshes(const struct FLinearColor& Color, const struct FName& Parameter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.SetColorParamOnMeshes"));

	struct
	{
		struct FLinearColor            Color;
		struct FName                   Parameter;
	} params;

	params.Color = Color;
	params.Parameter = Parameter;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.SetMaterailValueOnMeshes
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Parameter                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreviewGeneric_BP_C::SetMaterailValueOnMeshes(float Value, const struct FName& Parameter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.SetMaterailValueOnMeshes"));

	struct
	{
		float                          Value;
		struct FName                   Parameter;
	} params;

	params.Value = Value;
	params.Parameter = Parameter;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.EvaluateMainMeshVisualization
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACharacterCustomizationPreviewGeneric_BP_C::EvaluateMainMeshVisualization()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.EvaluateMainMeshVisualization"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.SetupForArchetype
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   archetypeId                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreviewGeneric_BP_C::SetupForArchetype(const struct FName& archetypeId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.SetupForArchetype"));

	struct
	{
		struct FName                   archetypeId;
	} params;

	params.archetypeId = archetypeId;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.GetWeaponSocketName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   SocketName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreviewGeneric_BP_C::GetWeaponSocketName(struct FName* SocketName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.GetWeaponSocketName"));

	struct
	{
		struct FName                   SocketName;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SocketName != nullptr)
		*SocketName = params.SocketName;
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.ResetVisualization
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACharacterCustomizationPreviewGeneric_BP_C::ResetVisualization()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.ResetVisualization"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.Timeline_1__FinishedFunc
// (FUNC_BlueprintEvent)

void ACharacterCustomizationPreviewGeneric_BP_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.Timeline_1__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.Timeline_1__UpdateFunc
// (FUNC_BlueprintEvent)

void ACharacterCustomizationPreviewGeneric_BP_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.Timeline_1__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.BP_OnVisualziationState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYCharacterVisualizationRuntimeData Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ACharacterCustomizationPreviewGeneric_BP_C::BP_OnVisualziationState(const struct FYCharacterVisualizationRuntimeData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.BP_OnVisualziationState"));

	struct
	{
		struct FYCharacterVisualizationRuntimeData Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.BP_OnActiveCustomizationDataChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveCustomizationData newCustomizationData           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ACharacterCustomizationPreviewGeneric_BP_C::BP_OnActiveCustomizationDataChanged(const struct FYActiveCustomizationData& newCustomizationData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.BP_OnActiveCustomizationDataChanged"));

	struct
	{
		struct FYActiveCustomizationData newCustomizationData;
	} params;

	params.newCustomizationData = newCustomizationData;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.BP_SetWeaponAnimationPose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EYEquipedWeaponPoseType        pose                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreviewGeneric_BP_C::BP_SetWeaponAnimationPose(EYEquipedWeaponPoseType pose)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.BP_SetWeaponAnimationPose"));

	struct
	{
		EYEquipedWeaponPoseType        pose;
	} params;

	params.pose = pose;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.StopFoamTimeline
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACharacterCustomizationPreviewGeneric_BP_C::StopFoamTimeline()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.StopFoamTimeline"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ACharacterCustomizationPreviewGeneric_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.ExecuteUbergraph_CharacterCustomizationPreviewGeneric_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreviewGeneric_BP_C::ExecuteUbergraph_CharacterCustomizationPreviewGeneric_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreviewGeneric_BP.CharacterCustomizationPreviewGeneric_BP_C.ExecuteUbergraph_CharacterCustomizationPreviewGeneric_BP"));

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
