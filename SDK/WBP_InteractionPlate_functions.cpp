// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_InteractionPlate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InteractionPlate.WBP_InteractionPlate_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_InteractionPlate_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params = {};

	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.OnLoaded_48107EB84E65360E4B3D24959CE3BACA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InteractionPlate_C::OnLoaded_48107EB84E65360E4B3D24959CE3BACA(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.OnLoaded_48107EB84E65360E4B3D24959CE3BACA"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.TrySetLabelVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldBeVisible                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InteractionPlate_C::TrySetLabelVisibility(bool shouldBeVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.TrySetLabelVisibility"));

	struct
	{
		bool                           shouldBeVisible;
	} params = {};

	params.shouldBeVisible = shouldBeVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.Interaction_PromptVisible
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InteractionPlate_C::Interaction_PromptVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.Interaction_PromptVisible"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.OnInteraction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InteractionPlate_C::OnInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.OnInteraction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InteractionPlate_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.OnInteractionStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InteractionPlate_C::OnInteractionStarted(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.OnInteractionStarted"));

	struct
	{
		EYInteractionType              interactionType;
		class AYPlayerController_Match* interactingPlayer;
	} params = {};

	params.interactionType = interactionType;
	params.interactingPlayer = interactingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.BP_InitializeFor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InteractionPlate_C::BP_InitializeFor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.BP_InitializeFor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.BP_WidgetPlateDataSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InteractionPlate_C::BP_WidgetPlateDataSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.BP_WidgetPlateDataSet"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.ToggledHud
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InteractionPlate_C::ToggledHud(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.ToggledHud"));

	struct
	{
		bool                           Visibility;
	} params = {};

	params.Visibility = Visibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.ButtonAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InteractionPlate_C::ButtonAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.ButtonAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.OnDetected
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerInteraction     interactionData                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           detected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InteractionPlate_C::OnDetected(const struct FYPlayerInteraction& interactionData, bool detected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.OnDetected"));

	struct
	{
		struct FYPlayerInteraction     interactionData;
		bool                           detected;
	} params = {};

	params.interactionData = interactionData;
	params.detected = detected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.TrySetInteractionHintVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldBeVisible                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InteractionPlate_C::TrySetInteractionHintVisibility(bool shouldBeVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.TrySetInteractionHintVisibility"));

	struct
	{
		bool                           shouldBeVisible;
	} params = {};

	params.shouldBeVisible = shouldBeVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.TrySetVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldBeVisible                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InteractionPlate_C::TrySetVisibility(bool shouldBeVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.TrySetVisibility"));

	struct
	{
		bool                           shouldBeVisible;
	} params = {};

	params.shouldBeVisible = shouldBeVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InteractionPlate_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InteractionPlate.WBP_InteractionPlate_C.ExecuteUbergraph_WBP_InteractionPlate
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InteractionPlate_C::ExecuteUbergraph_WBP_InteractionPlate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InteractionPlate.WBP_InteractionPlate_C.ExecuteUbergraph_WBP_InteractionPlate"));

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
