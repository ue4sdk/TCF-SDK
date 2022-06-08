// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LightningStrike_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightningStrike_BP.LightningStrike_BP_C.GetDamageRadius
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          LightningWarningTime           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALightningStrike_BP_C::GetDamageRadius(float* LightningWarningTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningStrike_BP.LightningStrike_BP_C.GetDamageRadius"));

	struct
	{
		float                          LightningWarningTime;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LightningWarningTime != nullptr)
		*LightningWarningTime = params.LightningWarningTime;
}


// Function LightningStrike_BP.LightningStrike_BP_C.GetWarningTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          LightningWarningTime           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALightningStrike_BP_C::GetWarningTime(float* LightningWarningTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningStrike_BP.LightningStrike_BP_C.GetWarningTime"));

	struct
	{
		float                          LightningWarningTime;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LightningWarningTime != nullptr)
		*LightningWarningTime = params.LightningWarningTime;
}


// Function LightningStrike_BP.LightningStrike_BP_C.OnWarningTimeOver
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALightningStrike_BP_C::OnWarningTimeOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningStrike_BP.LightningStrike_BP_C.OnWarningTimeOver"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningStrike_BP.LightningStrike_BP_C.DoDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALightningStrike_BP_C::DoDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningStrike_BP.LightningStrike_BP_C.DoDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningStrike_BP.LightningStrike_BP_C.BndEvt__YDataTableRowAssociation_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     oldRowHandle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FDataTableRowHandle     newRowHandle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ALightningStrike_BP_C::BndEvt__YDataTableRowAssociation_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature(const struct FDataTableRowHandle& oldRowHandle, const struct FDataTableRowHandle& newRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningStrike_BP.LightningStrike_BP_C.BndEvt__YDataTableRowAssociation_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature"));

	struct
	{
		struct FDataTableRowHandle     oldRowHandle;
		struct FDataTableRowHandle     newRowHandle;
	} params = {};

	params.oldRowHandle = oldRowHandle;
	params.newRowHandle = newRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningStrike_BP.LightningStrike_BP_C.InitializeLightningStrike
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALightningStrike_BP_C::InitializeLightningStrike()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningStrike_BP.LightningStrike_BP_C.InitializeLightningStrike"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningStrike_BP.LightningStrike_BP_C.ExecuteUbergraph_LightningStrike_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALightningStrike_BP_C::ExecuteUbergraph_LightningStrike_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningStrike_BP.LightningStrike_BP_C.ExecuteUbergraph_LightningStrike_BP"));

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
