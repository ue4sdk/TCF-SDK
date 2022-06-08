// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CollapseDestructibleComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.ExecutePartialCollapse
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCollapseDestructibleComponent_BP_C::ExecutePartialCollapse()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.ExecutePartialCollapse"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.CollapseDestructibleMesh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYDestructibleMeshComponent* DestructibleMeshComponent      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCollapseDestructibleComponent_BP_C::CollapseDestructibleMesh(class UYDestructibleMeshComponent* DestructibleMeshComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.CollapseDestructibleMesh"));

	struct
	{
		class UYDestructibleMeshComponent* DestructibleMeshComponent;
	} params = {};

	params.DestructibleMeshComponent = DestructibleMeshComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.TriggerNextDelayedDestroy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCollapseDestructibleComponent_BP_C::TriggerNextDelayedDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.TriggerNextDelayedDestroy"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCollapseDestructibleComponent_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.ExecuteUbergraph_CollapseDestructibleComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCollapseDestructibleComponent_BP_C::ExecuteUbergraph_CollapseDestructibleComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.ExecuteUbergraph_CollapseDestructibleComponent_BP"));

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


// Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.OnCollapseCompleted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCollapseDestructibleComponent_BP_C::OnCollapseCompleted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.OnCollapseCompleted__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.OnCollapseTriggered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCollapseDestructibleComponent_BP_C::OnCollapseTriggered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CollapseDestructibleComponent_BP.CollapseDestructibleComponent_BP_C.OnCollapseTriggered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
