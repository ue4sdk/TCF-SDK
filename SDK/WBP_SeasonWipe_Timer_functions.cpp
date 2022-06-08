// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_SeasonWipe_Timer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.InitializeSeasonName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SeasonWipe_Timer_C::InitializeSeasonName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.InitializeSeasonName"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.OnDataResponse
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYSeasonWipeData        seasonWipeData                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_SeasonWipe_Timer_C::OnDataResponse(const struct FYSeasonWipeData& seasonWipeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.OnDataResponse"));

	struct
	{
		struct FYSeasonWipeData        seasonWipeData;
	} params = {};

	params.seasonWipeData = seasonWipeData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.GetSeasonName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SeasonName                     (CPF_Parm, CPF_OutParm)

void UWBP_SeasonWipe_Timer_C::GetSeasonName(struct FText* SeasonName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.GetSeasonName"));

	struct
	{
		struct FText                   SeasonName;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SeasonName != nullptr)
		*SeasonName = params.SeasonName;
}


// Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.SetScalebox
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SeasonWipe_Timer_C::SetScalebox(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.SetScalebox"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.SetVisibilitySeasonName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SeasonWipe_Timer_C::SetVisibilitySeasonName(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.SetVisibilitySeasonName"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.SetVisibilityGradientBg
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SeasonWipe_Timer_C::SetVisibilityGradientBg(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.SetVisibilityGradientBg"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.SetVisibilityAnimatedBg
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SeasonWipe_Timer_C::SetVisibilityAnimatedBg(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.SetVisibilityAnimatedBg"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.SetTooltipContent
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SeasonName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_SeasonWipe_Timer_C::SetTooltipContent(const struct FText& SeasonName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.SetTooltipContent"));

	struct
	{
		struct FText                   SeasonName;
		class UWidget*                 ReturnValue;
	} params = {};

	params.SeasonName = SeasonName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SeasonWipe_Timer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SeasonWipe_Timer_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SeasonWipe_Timer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.Tick"));

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


// Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.ExecuteUbergraph_WBP_SeasonWipe_Timer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SeasonWipe_Timer_C::ExecuteUbergraph_WBP_SeasonWipe_Timer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SeasonWipe_Timer.WBP_SeasonWipe_Timer_C.ExecuteUbergraph_WBP_SeasonWipe_Timer"));

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
