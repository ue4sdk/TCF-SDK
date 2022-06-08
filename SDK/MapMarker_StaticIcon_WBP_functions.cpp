// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MapMarker_StaticIcon_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.UpdateMarkerIconBasedOnType
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMapMarkerType                Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_StaticIcon_WBP_C::UpdateMarkerIconBasedOnType(EYMapMarkerType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.UpdateMarkerIconBasedOnType"));

	struct
	{
		EYMapMarkerType                Type;
	} params = {};

	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.ShowLabel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UMapMarker_StaticIcon_WBP_C::ShowLabel(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.ShowLabel"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.BP_OnUpdateMarkerData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYMapMarkerData*         markerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_StaticIcon_WBP_C::BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.BP_OnUpdateMarkerData"));

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


// Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.PlayHighlightAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapMarker_StaticIcon_WBP_C::PlayHighlightAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.PlayHighlightAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.BP_OnMaximized
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsMaximized                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMapMarker_StaticIcon_WBP_C::BP_OnMaximized(bool IsMaximized)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.BP_OnMaximized"));

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


// Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.ExecuteUbergraph_MapMarker_StaticIcon_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_StaticIcon_WBP_C::ExecuteUbergraph_MapMarker_StaticIcon_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.ExecuteUbergraph_MapMarker_StaticIcon_WBP"));

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
