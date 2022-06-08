// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AICtrl_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AICtrl_Base_BP.AICtrl_Base_BP_C.GetAggroComponent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UYAIAggroComponent*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYAIAggroComponent* AAICtrl_Base_BP_C::GetAggroComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICtrl_Base_BP.AICtrl_Base_BP_C.GetAggroComponent"));

	struct
	{
		class UYAIAggroComponent*      ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AICtrl_Base_BP.AICtrl_Base_BP_C.SetAIReactionContext
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYAIReactionContext            newReactionContext             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICtrl_Base_BP_C::SetAIReactionContext(EYAIReactionContext newReactionContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICtrl_Base_BP.AICtrl_Base_BP_C.SetAIReactionContext"));

	struct
	{
		EYAIReactionContext            newReactionContext;
	} params = {};

	params.newReactionContext = newReactionContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICtrl_Base_BP.AICtrl_Base_BP_C.InitializeAIBehavior
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICtrl_Base_BP_C::InitializeAIBehavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICtrl_Base_BP.AICtrl_Base_BP_C.InitializeAIBehavior"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICtrl_Base_BP.AICtrl_Base_BP_C.BP_OnInitializeBehavior
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AAICtrl_Base_BP_C::BP_OnInitializeBehavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICtrl_Base_BP.AICtrl_Base_BP_C.BP_OnInitializeBehavior"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICtrl_Base_BP.AICtrl_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAICtrl_Base_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICtrl_Base_BP.AICtrl_Base_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICtrl_Base_BP.AICtrl_Base_BP_C.ExecuteUbergraph_AICtrl_Base_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICtrl_Base_BP_C::ExecuteUbergraph_AICtrl_Base_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICtrl_Base_BP.AICtrl_Base_BP_C.ExecuteUbergraph_AICtrl_Base_BP"));

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
