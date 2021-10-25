// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UI_RadialStationMinimap_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.OnTargetingStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_RadialStationMinimap_WBP_C::OnTargetingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.OnTargetingStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.OnTargetingStopped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UUI_RadialStationMinimap_WBP_C::OnTargetingStopped(bool interupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.OnTargetingStopped");

	struct
	{
		bool                           interupted;
	} params;

	params.interupted = interupted;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_RadialStationMinimap_WBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_RadialStationMinimap_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.TryInitializeTargeting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   oldPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   newPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_RadialStationMinimap_WBP_C::TryInitializeTargeting(class APawn* oldPawn, class APawn* newPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.TryInitializeTargeting");

	struct
	{
		class APawn*                   oldPawn;
		class APawn*                   newPawn;
	} params;

	params.oldPawn = oldPawn;
	params.newPawn = newPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.CacheConeMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_RadialStationMinimap_WBP_C::CacheConeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.CacheConeMaterial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.ExecuteUbergraph_UI_RadialStationMinimap_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_RadialStationMinimap_WBP_C::ExecuteUbergraph_UI_RadialStationMinimap_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialStationMinimap_WBP.UI_RadialStationMinimap_WBP_C.ExecuteUbergraph_UI_RadialStationMinimap_WBP");

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
