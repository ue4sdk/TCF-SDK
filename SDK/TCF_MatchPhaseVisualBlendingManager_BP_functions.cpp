// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MatchPhaseVisualBlendingManager_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.GetGameStateMatchBP
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AYGameState_Match_BP_C*  gameStateMatch                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::GetGameStateMatchBP(class AYGameState_Match_BP_C** gameStateMatch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.GetGameStateMatchBP"));

	struct
	{
		class AYGameState_Match_BP_C*  gameStateMatch;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (gameStateMatch != nullptr)
		*gameStateMatch = params.gameStateMatch;
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.TrySettingInitialVisualsOnClient
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMatchPhaseVisualBlendingManager_BP_C::TrySettingInitialVisualsOnClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.TrySettingInitialVisualsOnClient"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.OnRep_currentBlendAlphaServer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMatchPhaseVisualBlendingManager_BP_C::OnRep_currentBlendAlphaServer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.OnRep_currentBlendAlphaServer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetCurrentAlpha
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          currentAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::SetCurrentAlpha(float currentAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetCurrentAlpha"));

	struct
	{
		float                          currentAlpha;
	} params;

	params.currentAlpha = currentAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.GetCurrentAlpha
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          currentAlpha                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::GetCurrentAlpha(float* currentAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.GetCurrentAlpha"));

	struct
	{
		float                          currentAlpha;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (currentAlpha != nullptr)
		*currentAlpha = params.currentAlpha;
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetGlobalTime
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::SetGlobalTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetGlobalTime"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetMaterialParameterCollectionProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SetMaterialParameterCollectionProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetMaterialParameterCollectionProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
	} params;

	params.VisualData = VisualData;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetPostProcessProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SetPostProcessProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetPostProcessProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
	} params;

	params.VisualData = VisualData;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetSkyLightProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SetSkyLightProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetSkyLightProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
	} params;

	params.VisualData = VisualData;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetDirectionalLightProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SetDirectionalLightProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetDirectionalLightProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
	} params;

	params.VisualData = VisualData;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetStormAmbientVFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void AMatchPhaseVisualBlendingManager_BP_C::SetStormAmbientVFX(const struct FYMatchPhaseVisualRow& VisualData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetStormAmbientVFX"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
	} params;

	params.VisualData = VisualData;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetSkyAtmosphereProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SetSkyAtmosphereProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetSkyAtmosphereProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
	} params;

	params.VisualData = VisualData;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetFogProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SetFogProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetFogProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
	} params;

	params.VisualData = VisualData;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetVisualProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SetVisualProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetVisualProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
	} params;

	params.VisualData = VisualData;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_1_OnReplicatedMatchPhaseDataUpdated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AMatchPhaseVisualBlendingManager_BP_C::BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_1_OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_1_OnReplicatedMatchPhaseDataUpdated__DelegateSignature"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params;

	params.newMatchPhaseData = newMatchPhaseData;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMatchPhaseVisualBlendingManager_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.ExecuteUbergraph_MatchPhaseVisualBlendingManager_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::ExecuteUbergraph_MatchPhaseVisualBlendingManager_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.ExecuteUbergraph_MatchPhaseVisualBlendingManager_BP"));

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
