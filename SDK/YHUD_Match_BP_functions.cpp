// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YHUD_Match_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YHUD_Match_BP.YHUD_Match_BP_C.ClearInteractionPlate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYHUD_Match_BP_C::ClearInteractionPlate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YHUD_Match_BP.YHUD_Match_BP_C.ClearInteractionPlate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YHUD_Match_BP.YHUD_Match_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYHUD_Match_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YHUD_Match_BP.YHUD_Match_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YHUD_Match_BP.YHUD_Match_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYHUD_Match_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YHUD_Match_BP.YHUD_Match_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YHUD_Match_BP.YHUD_Match_BP_C.OnInteractionDetected
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerInteraction     interactionData                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           detected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AYHUD_Match_BP_C::OnInteractionDetected(const struct FYPlayerInteraction& interactionData, bool detected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YHUD_Match_BP.YHUD_Match_BP_C.OnInteractionDetected"));

	struct
	{
		struct FYPlayerInteraction     interactionData;
		bool                           detected;
	} params = {};

	params.interactionData = interactionData;
	params.detected = detected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YHUD_Match_BP.YHUD_Match_BP_C.OnInitialized
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AYHUD_Match_BP_C::OnInitialized(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YHUD_Match_BP.YHUD_Match_BP_C.OnInitialized"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YHUD_Match_BP.YHUD_Match_BP_C.BP_OnHUDVisibilityChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYHUD_Match_BP_C::BP_OnHUDVisibilityChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YHUD_Match_BP.YHUD_Match_BP_C.BP_OnHUDVisibilityChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YHUD_Match_BP.YHUD_Match_BP_C.ExecuteUbergraph_YHUD_Match_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYHUD_Match_BP_C::ExecuteUbergraph_YHUD_Match_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YHUD_Match_BP.YHUD_Match_BP_C.ExecuteUbergraph_YHUD_Match_BP"));

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
