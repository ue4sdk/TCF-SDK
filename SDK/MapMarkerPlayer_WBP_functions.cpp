// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MapMarkerPlayer_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.DetermineIsLocalPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMapMarkerPlayer_WBP_C::DetermineIsLocalPlayer(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.DetermineIsLocalPlayer"));

	struct
	{
		bool                           Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.ApplyMarkerTint
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             TintColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UMapMarkerPlayer_WBP_C::ApplyMarkerTint(const struct FSlateColor& TintColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.ApplyMarkerTint"));

	struct
	{
		struct FSlateColor             TintColor;
	} params = {};

	params.TintColor = TintColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.BP_OnUpdateMarkerData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYMapMarkerData*         markerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarkerPlayer_WBP_C::BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.BP_OnUpdateMarkerData"));

	struct
	{
		class UYMapMarkerData*         markerInfo;
	} params = {};

	params.markerInfo = markerInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.BP_OnMaximized
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsMaximized                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMapMarkerPlayer_WBP_C::BP_OnMaximized(bool IsMaximized)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.BP_OnMaximized"));

	struct
	{
		bool                           IsMaximized;
	} params = {};

	params.IsMaximized = IsMaximized;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.RenderAsLocalPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapMarkerPlayer_WBP_C::RenderAsLocalPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.RenderAsLocalPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.RenderTeamMate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapMarkerPlayer_WBP_C::RenderTeamMate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.RenderTeamMate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.RenderOtherPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapMarkerPlayer_WBP_C::RenderOtherPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.RenderOtherPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.ShowArrowMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapMarkerPlayer_WBP_C::ShowArrowMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.ShowArrowMarker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.HideArrowMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapMarkerPlayer_WBP_C::HideArrowMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.HideArrowMarker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.SetupMarkerBrushAsRegularPlayerMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapMarkerPlayer_WBP_C::SetupMarkerBrushAsRegularPlayerMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.SetupMarkerBrushAsRegularPlayerMarker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.OnMapMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapMarkerPlayer_WBP_C::OnMapMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.OnMapMarker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.ExecuteUbergraph_MapMarkerPlayer_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarkerPlayer_WBP_C::ExecuteUbergraph_MapMarkerPlayer_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarkerPlayer_WBP.MapMarkerPlayer_WBP_C.ExecuteUbergraph_MapMarkerPlayer_WBP"));

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
