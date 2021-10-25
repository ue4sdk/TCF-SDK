// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FX_StormManager01_DistantLightning_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_StormManager01_DistantLightning_BP.FX_StormManager01_DistantLightning_BP_C.playAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_StormManager01_DistantLightning_BP_C::playAudio(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_DistantLightning_BP.FX_StormManager01_DistantLightning_BP_C.playAudio"));

	struct
	{
		struct FVector                 Location;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_DistantLightning_BP.FX_StormManager01_DistantLightning_BP_C.SpawnLightning
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_StormManager01_DistantLightning_BP_C::SpawnLightning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_DistantLightning_BP.FX_StormManager01_DistantLightning_BP_C.SpawnLightning"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_DistantLightning_BP.FX_StormManager01_DistantLightning_BP_C.SetDistantLightingProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AFX_StormManager01_DistantLightning_BP_C::SetDistantLightingProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_DistantLightning_BP.FX_StormManager01_DistantLightning_BP_C.SetDistantLightingProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
	} params;

	params.VisualData = VisualData;

	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_DistantLightning_BP.FX_StormManager01_DistantLightning_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFX_StormManager01_DistantLightning_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_DistantLightning_BP.FX_StormManager01_DistantLightning_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_DistantLightning_BP.FX_StormManager01_DistantLightning_BP_C.ExecuteUbergraph_FX_StormManager01_DistantLightning_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_StormManager01_DistantLightning_BP_C::ExecuteUbergraph_FX_StormManager01_DistantLightning_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_DistantLightning_BP.FX_StormManager01_DistantLightning_BP_C.ExecuteUbergraph_FX_StormManager01_DistantLightning_BP"));

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
