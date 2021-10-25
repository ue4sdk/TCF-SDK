// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MapMarker_Sabotage_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C.BP_OnUpdateMarkerData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYMapMarkerData*         markerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_Sabotage_WBP_C::BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C.BP_OnUpdateMarkerData");

	struct
	{
		class UYMapMarkerData*         markerInfo;
	} params;

	params.markerInfo = markerInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C.BP_OnTimeUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_Sabotage_WBP_C::BP_OnTimeUpdated(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C.BP_OnTimeUpdated");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C.BP_OnMaximized
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsMaximized                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMapMarker_Sabotage_WBP_C::BP_OnMaximized(bool IsMaximized)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C.BP_OnMaximized");

	struct
	{
		bool                           IsMaximized;
	} params;

	params.IsMaximized = IsMaximized;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C.ExecuteUbergraph_MapMarker_Sabotage_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_Sabotage_WBP_C::ExecuteUbergraph_MapMarker_Sabotage_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_Sabotage_WBP.MapMarker_Sabotage_WBP_C.ExecuteUbergraph_MapMarker_Sabotage_WBP");

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
