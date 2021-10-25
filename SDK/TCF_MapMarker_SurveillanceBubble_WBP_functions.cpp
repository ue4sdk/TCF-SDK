// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MapMarker_SurveillanceBubble_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C.BP_OnUpdateMarkerData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYMapMarkerData*         markerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_SurveillanceBubble_WBP_C::BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C.BP_OnUpdateMarkerData");

	struct
	{
		class UYMapMarkerData*         markerInfo;
	} params;

	params.markerInfo = markerInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C.BP_ApplyScale
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          zoomLevel                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_SurveillanceBubble_WBP_C::BP_ApplyScale(float zoomLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C.BP_ApplyScale");

	struct
	{
		float                          zoomLevel;
	} params;

	params.zoomLevel = zoomLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C.BP_MapDimentions
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               worldCapturedBounds            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               pixelSize                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_SurveillanceBubble_WBP_C::BP_MapDimentions(const struct FVector2D& worldCapturedBounds, const struct FVector2D& pixelSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C.BP_MapDimentions");

	struct
	{
		struct FVector2D               worldCapturedBounds;
		struct FVector2D               pixelSize;
	} params;

	params.worldCapturedBounds = worldCapturedBounds;
	params.pixelSize = pixelSize;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C.ExecuteUbergraph_MapMarker_SurveillanceBubble_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_SurveillanceBubble_WBP_C::ExecuteUbergraph_MapMarker_SurveillanceBubble_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_SurveillanceBubble_WBP.MapMarker_SurveillanceBubble_WBP_C.ExecuteUbergraph_MapMarker_SurveillanceBubble_WBP");

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
