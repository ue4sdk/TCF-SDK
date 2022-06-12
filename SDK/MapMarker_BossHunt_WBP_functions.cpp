// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MapMarker_BossHunt_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapMarker_BossHunt_WBP.MapMarker_BossHunt_WBP_C.BP_OnUpdateMarkerData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYMapMarkerData*         markerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_BossHunt_WBP_C::BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarker_BossHunt_WBP.MapMarker_BossHunt_WBP_C.BP_OnUpdateMarkerData"));

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


// Function MapMarker_BossHunt_WBP.MapMarker_BossHunt_WBP_C.BP_OnMaximized
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsMaximized                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMapMarker_BossHunt_WBP_C::BP_OnMaximized(bool IsMaximized)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarker_BossHunt_WBP.MapMarker_BossHunt_WBP_C.BP_OnMaximized"));

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


// Function MapMarker_BossHunt_WBP.MapMarker_BossHunt_WBP_C.ExecuteUbergraph_MapMarker_BossHunt_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_BossHunt_WBP_C::ExecuteUbergraph_MapMarker_BossHunt_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MapMarker_BossHunt_WBP.MapMarker_BossHunt_WBP_C.ExecuteUbergraph_MapMarker_BossHunt_WBP"));

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
