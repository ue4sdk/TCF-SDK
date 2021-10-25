// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Escape_Beacon_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Escape_Beacon_BP.Escape_Beacon_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEscape_Beacon_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Escape_Beacon_BP.Escape_Beacon_BP_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Escape_Beacon_BP.Escape_Beacon_BP_C.BeaconFlash-TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AEscape_Beacon_BP_C::BeaconFlash_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Escape_Beacon_BP.Escape_Beacon_BP_C.BeaconFlash-TL__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Escape_Beacon_BP.Escape_Beacon_BP_C.BeaconFlash-TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AEscape_Beacon_BP_C::BeaconFlash_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Escape_Beacon_BP.Escape_Beacon_BP_C.BeaconFlash-TL__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Escape_Beacon_BP.Escape_Beacon_BP_C.OnBeaconUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            LightColour                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsFlashing                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          FlashPlayrate                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AEscape_Beacon_BP_C::OnBeaconUpdate(const struct FLinearColor& LightColour, bool IsFlashing, float FlashPlayrate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Escape_Beacon_BP.Escape_Beacon_BP_C.OnBeaconUpdate");

	struct
	{
		struct FLinearColor            LightColour;
		bool                           IsFlashing;
		float                          FlashPlayrate;
	} params;

	params.LightColour = LightColour;
	params.IsFlashing = IsFlashing;
	params.FlashPlayrate = FlashPlayrate;

	UObject::ProcessEvent(fn, &params);
}


// Function Escape_Beacon_BP.Escape_Beacon_BP_C.ExecuteUbergraph_Escape_Beacon_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AEscape_Beacon_BP_C::ExecuteUbergraph_Escape_Beacon_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Escape_Beacon_BP.Escape_Beacon_BP_C.ExecuteUbergraph_Escape_Beacon_BP");

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
