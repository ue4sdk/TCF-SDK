// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SprayActor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SprayActor_BP.SprayActor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASprayActor_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SprayActor_BP.SprayActor_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SprayActor_BP.SprayActor_BP_C.BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     oldRowHandle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FDataTableRowHandle     newRowHandle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ASprayActor_BP_C::BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature(const struct FDataTableRowHandle& oldRowHandle, const struct FDataTableRowHandle& newRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SprayActor_BP.SprayActor_BP_C.BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature");

	struct
	{
		struct FDataTableRowHandle     oldRowHandle;
		struct FDataTableRowHandle     newRowHandle;
	} params;

	params.oldRowHandle = oldRowHandle;
	params.newRowHandle = newRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function SprayActor_BP.SprayActor_BP_C.ExecuteUbergraph_SprayActor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASprayActor_BP_C::ExecuteUbergraph_SprayActor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SprayActor_BP.SprayActor_BP_C.ExecuteUbergraph_SprayActor_BP");

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
