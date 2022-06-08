// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FX_StormManager01_Clouds_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_StormManager01_Clouds_BP.FX_StormManager01_Clouds_BP_C.SetCloudProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AFX_StormManager01_Clouds_BP_C::SetCloudProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Clouds_BP.FX_StormManager01_Clouds_BP_C.SetCloudProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
	} params = {};

	params.VisualData = VisualData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_StormManager01_Clouds_BP.FX_StormManager01_Clouds_BP_C.SpawnLightning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_StormManager01_Clouds_BP_C::SpawnLightning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Clouds_BP.FX_StormManager01_Clouds_BP_C.SpawnLightning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_StormManager01_Clouds_BP.FX_StormManager01_Clouds_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFX_StormManager01_Clouds_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Clouds_BP.FX_StormManager01_Clouds_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_StormManager01_Clouds_BP.FX_StormManager01_Clouds_BP_C.updateLightning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_StormManager01_Clouds_BP_C::updateLightning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Clouds_BP.FX_StormManager01_Clouds_BP_C.updateLightning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_StormManager01_Clouds_BP.FX_StormManager01_Clouds_BP_C.setCloudState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_StormManager01_Clouds_BP_C::setCloudState(float State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Clouds_BP.FX_StormManager01_Clouds_BP_C.setCloudState"));

	struct
	{
		float                          State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_StormManager01_Clouds_BP.FX_StormManager01_Clouds_BP_C.ExecuteUbergraph_FX_StormManager01_Clouds_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_StormManager01_Clouds_BP_C::ExecuteUbergraph_FX_StormManager01_Clouds_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Clouds_BP.FX_StormManager01_Clouds_BP_C.ExecuteUbergraph_FX_StormManager01_Clouds_BP"));

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
