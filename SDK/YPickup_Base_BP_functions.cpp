// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPickup_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPickup_Base_BP.YPickup_Base_BP_C.ToggleGleamAndSetMaterial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMeshComponent*          Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYPickup_Base_BP_C::ToggleGleamAndSetMaterial(class UMeshComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPickup_Base_BP.YPickup_Base_BP_C.ToggleGleamAndSetMaterial"));

	struct
	{
		class UMeshComponent*          Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.BP_OnMeshComponentAdded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AYPickup_Base_BP_C::BP_OnMeshComponentAdded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPickup_Base_BP.YPickup_Base_BP_C.BP_OnMeshComponentAdded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYPickup_Base_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPickup_Base_BP.YPickup_Base_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.ToggleGleam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYPickup_Base_BP_C::ToggleGleam()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPickup_Base_BP.YPickup_Base_BP_C.ToggleGleam"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPickup_Base_BP.YPickup_Base_BP_C.ExecuteUbergraph_YPickup_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYPickup_Base_BP_C::ExecuteUbergraph_YPickup_Base_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPickup_Base_BP.YPickup_Base_BP_C.ExecuteUbergraph_YPickup_Base_BP"));

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
