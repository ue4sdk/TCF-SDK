// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MapMarker_Vehicle_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapMarker_Vehicle_WBP.MapMarker_Vehicle_WBP_C.ShouldUpdate
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UYResourceFarmingMapMarkerData* MarkerData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UMapMarker_Vehicle_WBP_C::ShouldUpdate(class UYResourceFarmingMapMarkerData* MarkerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_Vehicle_WBP.MapMarker_Vehicle_WBP_C.ShouldUpdate");

	struct
	{
		class UYResourceFarmingMapMarkerData* MarkerData;
		bool                           ReturnValue;
	} params;

	params.MarkerData = MarkerData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MapMarker_Vehicle_WBP.MapMarker_Vehicle_WBP_C.BP_OnUpdateMarkerData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYMapMarkerData*         markerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_Vehicle_WBP_C::BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_Vehicle_WBP.MapMarker_Vehicle_WBP_C.BP_OnUpdateMarkerData");

	struct
	{
		class UYMapMarkerData*         markerInfo;
	} params;

	params.markerInfo = markerInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_Vehicle_WBP.MapMarker_Vehicle_WBP_C.ExecuteUbergraph_MapMarker_Vehicle_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_Vehicle_WBP_C::ExecuteUbergraph_MapMarker_Vehicle_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_Vehicle_WBP.MapMarker_Vehicle_WBP_C.ExecuteUbergraph_MapMarker_Vehicle_WBP");

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
