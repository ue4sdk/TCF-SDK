// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YBagContainer_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YBagContainer_BP.YBagContainer_BP_C.GetMaxInventoryWeight
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int AYBagContainer_BP_C::GetMaxInventoryWeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBagContainer_BP.YBagContainer_BP_C.GetMaxInventoryWeight"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function YBagContainer_BP.YBagContainer_BP_C.OffsetMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::OffsetMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBagContainer_BP.YBagContainer_BP_C.OffsetMesh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YBagContainer_BP.YBagContainer_BP_C.OnContainerClosedCallback
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::OnContainerClosedCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBagContainer_BP.YBagContainer_BP_C.OnContainerClosedCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YBagContainer_BP.YBagContainer_BP_C.OnContainerOpenedCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::OnContainerOpenedCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBagContainer_BP.YBagContainer_BP_C.OnContainerOpenedCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YBagContainer_BP.YBagContainer_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBagContainer_BP.YBagContainer_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YBagContainer_BP.YBagContainer_BP_C.BP_OnItemSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::BP_OnItemSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBagContainer_BP.YBagContainer_BP_C.BP_OnItemSet"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YBagContainer_BP.YBagContainer_BP_C.BP_OnMeshComponentAdded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::BP_OnMeshComponentAdded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBagContainer_BP.YBagContainer_BP_C.BP_OnMeshComponentAdded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YBagContainer_BP.YBagContainer_BP_C.BndEvt__YBagContainer_BP_m_inventoryComponent_K2Node_ComponentBoundEvent_0_YStateInventoryUpdatedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYBagContainer_BP_C::BndEvt__YBagContainer_BP_m_inventoryComponent_K2Node_ComponentBoundEvent_0_YStateInventoryUpdatedSignature__DelegateSignature(class UYStateInventoryComponent* stateInventoryComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBagContainer_BP.YBagContainer_BP_C.BndEvt__YBagContainer_BP_m_inventoryComponent_K2Node_ComponentBoundEvent_0_YStateInventoryUpdatedSignature__DelegateSignature"));

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
	} params = {};

	params.stateInventoryComponent = stateInventoryComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YBagContainer_BP.YBagContainer_BP_C.ToggleGleam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::ToggleGleam()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBagContainer_BP.YBagContainer_BP_C.ToggleGleam"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YBagContainer_BP.YBagContainer_BP_C.ExecuteUbergraph_YBagContainer_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYBagContainer_BP_C::ExecuteUbergraph_YBagContainer_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YBagContainer_BP.YBagContainer_BP_C.ExecuteUbergraph_YBagContainer_BP"));

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
