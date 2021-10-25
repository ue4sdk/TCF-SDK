// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerState_Match_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerState_Match_BP.PlayerState_Match_BP_C.ReceiveCopyProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            NewPlayerState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APlayerState_Match_BP_C::ReceiveCopyProperties(class APlayerState* NewPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerState_Match_BP.PlayerState_Match_BP_C.ReceiveCopyProperties"));

	struct
	{
		class APlayerState*            NewPlayerState;
	} params;

	params.NewPlayerState = NewPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerState_Match_BP.PlayerState_Match_BP_C.ExecuteUbergraph_PlayerState_Match_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APlayerState_Match_BP_C::ExecuteUbergraph_PlayerState_Match_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlayerState_Match_BP.PlayerState_Match_BP_C.ExecuteUbergraph_PlayerState_Match_BP"));

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
