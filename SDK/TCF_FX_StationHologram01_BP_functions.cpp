// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FX_StationHologram01_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_StationHologram01_BP.FX_StationHologram01_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_StationHologram01_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StationHologram01_BP.FX_StationHologram01_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_StationHologram01_BP.FX_StationHologram01_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFX_StationHologram01_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StationHologram01_BP.FX_StationHologram01_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_StationHologram01_BP.FX_StationHologram01_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_StationHologram01_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StationHologram01_BP.FX_StationHologram01_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function FX_StationHologram01_BP.FX_StationHologram01_BP_C.SFX_Trigger_Hologram 
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_StationHologram01_BP_C::SFX_Trigger_Hologram_()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StationHologram01_BP.FX_StationHologram01_BP_C.SFX_Trigger_Hologram "));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_StationHologram01_BP.FX_StationHologram01_BP_C.ExecuteUbergraph_FX_StationHologram01_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_StationHologram01_BP_C::ExecuteUbergraph_FX_StationHologram01_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StationHologram01_BP.FX_StationHologram01_BP_C.ExecuteUbergraph_FX_StationHologram01_BP"));

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
