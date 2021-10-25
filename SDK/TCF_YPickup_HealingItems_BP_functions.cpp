// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPickup_HealingItems_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPickup_HealingItems_BP.YPickup_HealingItems_BP_C.BP_OnItemSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYPickup_HealingItems_BP_C::BP_OnItemSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_HealingItems_BP.YPickup_HealingItems_BP_C.BP_OnItemSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_HealingItems_BP.YPickup_HealingItems_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYPickup_HealingItems_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_HealingItems_BP.YPickup_HealingItems_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_HealingItems_BP.YPickup_HealingItems_BP_C.BP_OnMeshComponentAdded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AYPickup_HealingItems_BP_C::BP_OnMeshComponentAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_HealingItems_BP.YPickup_HealingItems_BP_C.BP_OnMeshComponentAdded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPickup_HealingItems_BP.YPickup_HealingItems_BP_C.ExecuteUbergraph_YPickup_HealingItems_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYPickup_HealingItems_BP_C::ExecuteUbergraph_YPickup_HealingItems_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPickup_HealingItems_BP.YPickup_HealingItems_BP_C.ExecuteUbergraph_YPickup_HealingItems_BP");

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
