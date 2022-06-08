// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MatchPhaseVisualBlendingManager_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetSkyLightIntensityMultiplier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          IntensityMultiplier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::SetSkyLightIntensityMultiplier(float IntensityMultiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetSkyLightIntensityMultiplier"));

	struct
	{
		float                          IntensityMultiplier;
	} params = {};

	params.IntensityMultiplier = IntensityMultiplier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.UpdateMatchProgressionMaterialParameter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMatchPhaseVisualBlendingManager_BP_C::UpdateMatchProgressionMaterialParameter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.UpdateMatchProgressionMaterialParameter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SortFloatArrayByDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class AObjectBlueprint_C*> ObjectBlueprint                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SortFloatArrayByDistance(const struct FVector& Position, TArray<class AObjectBlueprint_C*>* ObjectBlueprint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SortFloatArrayByDistance"));

	struct
	{
		struct FVector                 Position;
		TArray<class AObjectBlueprint_C*> ObjectBlueprint;
	} params = {};

	params.Position = Position;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ObjectBlueprint != nullptr)
		*ObjectBlueprint = params.ObjectBlueprint;
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.GenerateLocalSkyIntensities
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Quality                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::GenerateLocalSkyIntensities(int Quality)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.GenerateLocalSkyIntensities"));

	struct
	{
		int                            Quality;
	} params = {};

	params.Quality = Quality;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.GetLocalPlayerSkyIntensityMultiplyer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Intensity                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::GetLocalPlayerSkyIntensityMultiplyer(float* Intensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.GetLocalPlayerSkyIntensityMultiplyer"));

	struct
	{
		float                          Intensity;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Intensity != nullptr)
		*Intensity = params.Intensity;
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.GetGameStateMatchBP
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AYGameState_Match_BP_C*  gameStateMatch                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::GetGameStateMatchBP(class AYGameState_Match_BP_C** gameStateMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.GetGameStateMatchBP"));

	struct
	{
		class AYGameState_Match_BP_C*  gameStateMatch;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (gameStateMatch != nullptr)
		*gameStateMatch = params.gameStateMatch;
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.OnRep_currentBlendAlphaServer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMatchPhaseVisualBlendingManager_BP_C::OnRep_currentBlendAlphaServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.OnRep_currentBlendAlphaServer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetCurrentAlpha
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          currentAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::SetCurrentAlpha(float currentAlpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetCurrentAlpha"));

	struct
	{
		float                          currentAlpha;
	} params = {};

	params.currentAlpha = currentAlpha;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.GetCurrentAlpha
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          currentAlpha                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::GetCurrentAlpha(float* currentAlpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.GetCurrentAlpha"));

	struct
	{
		float                          currentAlpha;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (currentAlpha != nullptr)
		*currentAlpha = params.currentAlpha;
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetGlobalTime
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::SetGlobalTime(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetGlobalTime"));

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


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetMaterialParameterCollectionProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SetMaterialParameterCollectionProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetMaterialParameterCollectionProperties"));

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


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetPostProcessProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SetPostProcessProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetPostProcessProperties"));

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


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetSkyLightProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTextureCube*            SourceCubemap                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTextureCube*            DestinationCubemap             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          BlendFractionCubemap           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::SetSkyLightProperties(const struct FYMatchPhaseVisualRow& VisualData, class UTextureCube* SourceCubemap, class UTextureCube* DestinationCubemap, float BlendFractionCubemap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetSkyLightProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
		class UTextureCube*            SourceCubemap;
		class UTextureCube*            DestinationCubemap;
		float                          BlendFractionCubemap;
	} params = {};

	params.VisualData = VisualData;
	params.SourceCubemap = SourceCubemap;
	params.DestinationCubemap = DestinationCubemap;
	params.BlendFractionCubemap = BlendFractionCubemap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetDirectionalLightProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SetDirectionalLightProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetDirectionalLightProperties"));

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


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetStormAmbientVFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void AMatchPhaseVisualBlendingManager_BP_C::SetStormAmbientVFX(const struct FYMatchPhaseVisualRow& VisualData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetStormAmbientVFX"));

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


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetSkyAtmosphereProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SetSkyAtmosphereProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetSkyAtmosphereProperties"));

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


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetFogProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMatchPhaseVisualBlendingManager_BP_C::SetFogProperties(const struct FYMatchPhaseVisualRow& VisualData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetFogProperties"));

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


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetVisualProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTextureCube*            SourceCubemap                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTextureCube*            DestinationCubemap             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          BlendFractionCubemap           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::SetVisualProperties(const struct FYMatchPhaseVisualRow& VisualData, class UTextureCube* SourceCubemap, class UTextureCube* DestinationCubemap, float BlendFractionCubemap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.SetVisualProperties"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualData;
		class UTextureCube*            SourceCubemap;
		class UTextureCube*            DestinationCubemap;
		float                          BlendFractionCubemap;
	} params = {};

	params.VisualData = VisualData;
	params.SourceCubemap = SourceCubemap;
	params.DestinationCubemap = DestinationCubemap;
	params.BlendFractionCubemap = BlendFractionCubemap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.IgnoreStormTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void AMatchPhaseVisualBlendingManager_BP_C::IgnoreStormTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.IgnoreStormTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.IgnoreStormTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void AMatchPhaseVisualBlendingManager_BP_C::IgnoreStormTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.IgnoreStormTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_1_OnReplicatedMatchPhaseDataUpdated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AMatchPhaseVisualBlendingManager_BP_C::BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_1_OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.BndEvt__MatchPhaseListenerComponent_BP_K2Node_ComponentBoundEvent_1_OnReplicatedMatchPhaseDataUpdated__DelegateSignature"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params = {};

	params.newMatchPhaseData = newMatchPhaseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.StartEndIgnoreStorm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DisableStorm                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          blendDuration                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::StartEndIgnoreStorm(bool DisableStorm, float blendDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.StartEndIgnoreStorm"));

	struct
	{
		bool                           DisableStorm;
		float                          blendDuration;
	} params = {};

	params.DisableStorm = DisableStorm;
	params.blendDuration = blendDuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.ReceiveTick"));

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


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMatchPhaseVisualBlendingManager_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.ExecuteUbergraph_MatchPhaseVisualBlendingManager_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMatchPhaseVisualBlendingManager_BP_C::ExecuteUbergraph_MatchPhaseVisualBlendingManager_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseVisualBlendingManager_BP.MatchPhaseVisualBlendingManager_BP_C.ExecuteUbergraph_MatchPhaseVisualBlendingManager_BP"));

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
