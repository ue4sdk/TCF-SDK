// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MapMarker_DeliveryStation_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapMarker_DeliveryStation_WBP.MapMarker_DeliveryStation_WBP_C.BP_OnUpdateMarkerData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYMapMarkerData*         markerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_DeliveryStation_WBP_C::BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_DeliveryStation_WBP.MapMarker_DeliveryStation_WBP_C.BP_OnUpdateMarkerData");

	struct
	{
		class UYMapMarkerData*         markerInfo;
	} params;

	params.markerInfo = markerInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_DeliveryStation_WBP.MapMarker_DeliveryStation_WBP_C.ExecuteUbergraph_MapMarker_DeliveryStation_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_DeliveryStation_WBP_C::ExecuteUbergraph_MapMarker_DeliveryStation_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_DeliveryStation_WBP.MapMarker_DeliveryStation_WBP_C.ExecuteUbergraph_MapMarker_DeliveryStation_WBP");

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
