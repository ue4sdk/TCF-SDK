// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MapMarker_AreaName_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapMarker_AreaName_WBP.MapMarker_AreaName_WBP_C.ShowLabel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UMapMarker_AreaName_WBP_C::ShowLabel(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarker_AreaName_WBP.MapMarker_AreaName_WBP_C.ShowLabel"));

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


// Function MapMarker_AreaName_WBP.MapMarker_AreaName_WBP_C.BP_OnUpdateMarkerData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYMapMarkerData*         markerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_AreaName_WBP_C::BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarker_AreaName_WBP.MapMarker_AreaName_WBP_C.BP_OnUpdateMarkerData"));

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


// Function MapMarker_AreaName_WBP.MapMarker_AreaName_WBP_C.ExecuteUbergraph_MapMarker_AreaName_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_AreaName_WBP_C::ExecuteUbergraph_MapMarker_AreaName_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarker_AreaName_WBP.MapMarker_AreaName_WBP_C.ExecuteUbergraph_MapMarker_AreaName_WBP"));

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
