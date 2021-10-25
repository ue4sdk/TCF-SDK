// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FX_StormManager01_Rain_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.SetRainProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AFX_StormManager01_Rain_BP_C::SetRainProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.SetRainProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
	} params;

	params.VisualData = VisualData;

	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.InitializeOcclusionCheckParameters
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_StormManager01_Rain_BP_C::InitializeOcclusionCheckParameters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.InitializeOcclusionCheckParameters"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.SpawnRainEffect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* Component                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_StormManager01_Rain_BP_C::SpawnRainEffect(class UParticleSystemComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.SpawnRainEffect"));

	struct
	{
		class UParticleSystemComponent* Component;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Component != nullptr)
		*Component = params.Component;
}


// Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.rainOpacity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Opacity                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_StormManager01_Rain_BP_C::rainOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.rainOpacity"));

	struct
	{
		float                          Opacity;
	} params;

	params.Opacity = Opacity;

	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.rainSpawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          spawnRateMultiplier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_StormManager01_Rain_BP_C::rainSpawn(float spawnRateMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.rainSpawn"));

	struct
	{
		float                          spawnRateMultiplier;
	} params;

	params.spawnRateMultiplier = spawnRateMultiplier;

	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.rainPosition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_StormManager01_Rain_BP_C::rainPosition()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.rainPosition"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.rainOcclusion
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_StormManager01_Rain_BP_C::rainOcclusion()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.rainOcclusion"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.TogglePositionUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AFX_StormManager01_Rain_BP_C::TogglePositionUpdate(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.TogglePositionUpdate"));

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.ToggleOcclusionCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AFX_StormManager01_Rain_BP_C::ToggleOcclusionCheck(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.ToggleOcclusionCheck"));

	struct
	{
		bool                           IsEnabled;
	} params;

	params.IsEnabled = IsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFX_StormManager01_Rain_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.ExecuteUbergraph_FX_StormManager01_Rain_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_StormManager01_Rain_BP_C::ExecuteUbergraph_FX_StormManager01_Rain_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Rain_BP.FX_StormManager01_Rain_BP_C.ExecuteUbergraph_FX_StormManager01_Rain_BP"));

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
