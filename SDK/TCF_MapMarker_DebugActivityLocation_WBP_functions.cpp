// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MapMarker_DebugActivityLocation_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.DetermineDescription
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 String                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UMapMarker_DebugActivityLocation_WBP_C::DetermineDescription(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.DetermineDescription");

	struct
	{
		struct FString                 String;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (String != nullptr)
		*String = params.String;
}


// Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.OnLoaded_B3B98F444EC944B14EDF53A5B786652A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_DebugActivityLocation_WBP_C::OnLoaded_B3B98F444EC944B14EDF53A5B786652A(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.OnLoaded_B3B98F444EC944B14EDF53A5B786652A");

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapMarker_DebugActivityLocation_WBP_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.SetupTexture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMapMarker_DebugActivityLocation_WBP_C::SetupTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.SetupTexture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMapMarker_DebugActivityLocation_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.BP_OnUpdateMarkerData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYMapMarkerData*         markerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_DebugActivityLocation_WBP_C::BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.BP_OnUpdateMarkerData");

	struct
	{
		class UYMapMarkerData*         markerInfo;
	} params;

	params.markerInfo = markerInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.ExecuteUbergraph_MapMarker_DebugActivityLocation_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapMarker_DebugActivityLocation_WBP_C::ExecuteUbergraph_MapMarker_DebugActivityLocation_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarker_DebugActivityLocation_WBP.MapMarker_DebugActivityLocation_WBP_C.ExecuteUbergraph_MapMarker_DebugActivityLocation_WBP");

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
