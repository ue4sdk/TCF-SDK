// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YControllerContractsBoardsDataComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YControllerContractsBoardsDataComponent_BP.YControllerContractsBoardsDataComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYControllerContractsBoardsDataComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YControllerContractsBoardsDataComponent_BP.YControllerContractsBoardsDataComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YControllerContractsBoardsDataComponent_BP.YControllerContractsBoardsDataComponent_BP_C.ExecuteUbergraph_YControllerContractsBoardsDataComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYControllerContractsBoardsDataComponent_BP_C::ExecuteUbergraph_YControllerContractsBoardsDataComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YControllerContractsBoardsDataComponent_BP.YControllerContractsBoardsDataComponent_BP_C.ExecuteUbergraph_YControllerContractsBoardsDataComponent_BP"));

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
