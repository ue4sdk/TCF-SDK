// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_Mineral_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AAA_Mineral_Base_BP_C::GetDrawDebugLineColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDrawDebugLineColor"));

	struct
	{
		struct FCoreUObject_FColor     ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AAA_Mineral_Base_BP_C::GetDrawDebugLineTo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDrawDebugLineTo"));

	struct
	{
		struct FVector                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAA_Mineral_Base_BP_C::GetDebugDescription()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnRep_IsDepleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::OnRep_IsDepleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnRep_IsDepleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDebugDamageInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AAA_Mineral_Base_BP_C::GetDebugDamageInfo(struct FString* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDebugDamageInfo"));

	struct
	{
		struct FString                 Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnDamaged
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AAA_Mineral_Base_BP_C::OnDamaged(const struct FYDealtDamageData& DamageEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnDamaged"));

	struct
	{
		struct FYDealtDamageData       DamageEvent;
	} params = {};

	params.DamageEvent = DamageEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.TriggerLootDiscoveredCheck
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::TriggerLootDiscoveredCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.TriggerLootDiscoveredCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__YDamage_K2Node_ComponentBoundEvent_4_YTakeDamageEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AAA_Mineral_Base_BP_C::BndEvt__YDamage_K2Node_ComponentBoundEvent_4_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__YDamage_K2Node_ComponentBoundEvent_4_YTakeDamageEvent__DelegateSignature"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__YActivity_K2Node_ComponentBoundEvent_2_OnSetupComplete__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::BndEvt__YActivity_K2Node_ComponentBoundEvent_2_OnSetupComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__YActivity_K2Node_ComponentBoundEvent_2_OnSetupComplete__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__AA_Mineral_Base_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_7_OnCollapseCompleted__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::BndEvt__AA_Mineral_Base_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_7_OnCollapseCompleted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__AA_Mineral_Base_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_7_OnCollapseCompleted__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.FX-MineralCompletedCrumbleStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::FX_MineralCompletedCrumbleStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.FX-MineralCompletedCrumbleStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.FX-MineralCompletedCrumbleEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::FX_MineralCompletedCrumbleEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.FX-MineralCompletedCrumbleEnded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.MarkAsDepletedDueDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::MarkAsDepletedDueDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.MarkAsDepletedDueDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BP_OnCrumble
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::BP_OnCrumble()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BP_OnCrumble"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__AA_Mineral_Base_BP_m_scanComponent_K2Node_ComponentBoundEvent_0_OnWasScanned__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::BndEvt__AA_Mineral_Base_BP_m_scanComponent_K2Node_ComponentBoundEvent_0_OnWasScanned__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__AA_Mineral_Base_BP_m_scanComponent_K2Node_ComponentBoundEvent_0_OnWasScanned__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.ExecuteUbergraph_AA_Mineral_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Mineral_Base_BP_C::ExecuteUbergraph_AA_Mineral_Base_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.ExecuteUbergraph_AA_Mineral_Base_BP"));

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
