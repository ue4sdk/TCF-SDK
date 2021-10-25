// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AC_TrackingFootprint_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AC_TrackingFootprint_BP.AC_TrackingFootprint_BP_C.UpdateVisuals
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   StormPhase                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_TrackingFootprint_BP_C::UpdateVisuals(const struct FName& StormPhase)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_TrackingFootprint_BP.AC_TrackingFootprint_BP_C.UpdateVisuals"));

	struct
	{
		struct FName                   StormPhase;
	} params;

	params.StormPhase = StormPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_TrackingFootprint_BP.AC_TrackingFootprint_BP_C.OnRep_StormPhase
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_TrackingFootprint_BP_C::OnRep_StormPhase()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_TrackingFootprint_BP.AC_TrackingFootprint_BP_C.OnRep_StormPhase"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_TrackingFootprint_BP.AC_TrackingFootprint_BP_C.SetIsEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAC_TrackingFootprint_BP_C::SetIsEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_TrackingFootprint_BP.AC_TrackingFootprint_BP_C.SetIsEnabled"));

	struct
	{
		bool                           IsEnabled;
	} params;

	params.IsEnabled = IsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_TrackingFootprint_BP.AC_TrackingFootprint_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAC_TrackingFootprint_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_TrackingFootprint_BP.AC_TrackingFootprint_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_TrackingFootprint_BP.AC_TrackingFootprint_BP_C.ExecuteUbergraph_AC_TrackingFootprint_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_TrackingFootprint_BP_C::ExecuteUbergraph_AC_TrackingFootprint_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_TrackingFootprint_BP.AC_TrackingFootprint_BP_C.ExecuteUbergraph_AC_TrackingFootprint_BP"));

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
