// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MapMarkerMovementNoise_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapMarkerMovementNoise_WBP.MapMarkerMovementNoise_WBP_C.BP_OnUpdateMarkerData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYMapMarkerData*         markerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarkerMovementNoise_WBP_C::BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerMovementNoise_WBP.MapMarkerMovementNoise_WBP_C.BP_OnUpdateMarkerData");

	struct
	{
		class UYMapMarkerData*         markerInfo;
	} params;

	params.markerInfo = markerInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarkerMovementNoise_WBP.MapMarkerMovementNoise_WBP_C.ExecuteUbergraph_MapMarkerMovementNoise_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarkerMovementNoise_WBP_C::ExecuteUbergraph_MapMarkerMovementNoise_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerMovementNoise_WBP.MapMarkerMovementNoise_WBP_C.ExecuteUbergraph_MapMarkerMovementNoise_WBP");

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
