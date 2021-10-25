// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YBagContainer_BP_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function YBagContainer_BP.YBagContainer_BP_C.GetMaxInventoryWeight");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YBagContainer_BP.YBagContainer_BP_C.OffsetMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::OffsetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function YBagContainer_BP.YBagContainer_BP_C.OffsetMesh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YBagContainer_BP.YBagContainer_BP_C.OnContainerClosedCallback
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::OnContainerClosedCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function YBagContainer_BP.YBagContainer_BP_C.OnContainerClosedCallback");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YBagContainer_BP.YBagContainer_BP_C.OnContainerOpenedCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::OnContainerOpenedCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function YBagContainer_BP.YBagContainer_BP_C.OnContainerOpenedCallback");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YBagContainer_BP.YBagContainer_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YBagContainer_BP.YBagContainer_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YBagContainer_BP.YBagContainer_BP_C.BP_OnItemSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::BP_OnItemSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function YBagContainer_BP.YBagContainer_BP_C.BP_OnItemSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YBagContainer_BP.YBagContainer_BP_C.BP_OnMeshComponentAdded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AYBagContainer_BP_C::BP_OnMeshComponentAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function YBagContainer_BP.YBagContainer_BP_C.BP_OnMeshComponentAdded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YBagContainer_BP.YBagContainer_BP_C.BndEvt__YBagContainer_BP_m_inventoryComponent_K2Node_ComponentBoundEvent_0_YStateInventoryUpdatedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYBagContainer_BP_C::BndEvt__YBagContainer_BP_m_inventoryComponent_K2Node_ComponentBoundEvent_0_YStateInventoryUpdatedSignature__DelegateSignature(class UYStateInventoryComponent* stateInventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function YBagContainer_BP.YBagContainer_BP_C.BndEvt__YBagContainer_BP_m_inventoryComponent_K2Node_ComponentBoundEvent_0_YStateInventoryUpdatedSignature__DelegateSignature");

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
	} params;

	params.stateInventoryComponent = stateInventoryComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function YBagContainer_BP.YBagContainer_BP_C.ExecuteUbergraph_YBagContainer_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYBagContainer_BP_C::ExecuteUbergraph_YBagContainer_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YBagContainer_BP.YBagContainer_BP_C.ExecuteUbergraph_YBagContainer_BP");

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
