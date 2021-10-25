// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MapMarker_StaticIcon_WBP_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.UpdateMarkerIconBasedOnType");

	struct
	{
		EYMapMarkerType                Type;
	} params;

	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.ShowLabel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UMapMarker_StaticIcon_WBP_C::ShowLabel(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.ShowLabel");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.BP_OnUpdateMarkerData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYMapMarkerData*         markerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_StaticIcon_WBP_C::BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.BP_OnUpdateMarkerData");

	struct
	{
		class UYMapMarkerData*         markerInfo;
	} params;

	params.markerInfo = markerInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.PlayHighlightAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapMarker_StaticIcon_WBP_C::PlayHighlightAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.PlayHighlightAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.BP_OnMaximized
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsMaximized                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMapMarker_StaticIcon_WBP_C::BP_OnMaximized(bool IsMaximized)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.BP_OnMaximized");

	struct
	{
		bool                           IsMaximized;
	} params;

	params.IsMaximized = IsMaximized;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.ExecuteUbergraph_MapMarker_StaticIcon_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_StaticIcon_WBP_C::ExecuteUbergraph_MapMarker_StaticIcon_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C.ExecuteUbergraph_MapMarker_StaticIcon_WBP");

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
