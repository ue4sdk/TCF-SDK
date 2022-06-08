// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ModalDialogConnectionLost_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ModalDialogConnectionLost_WBP.ModalDialogConnectionLost_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UModalDialogConnectionLost_WBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogConnectionLost_WBP.ModalDialogConnectionLost_WBP_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ModalDialogConnectionLost_WBP.ModalDialogConnectionLost_WBP_C.ExecuteUbergraph_ModalDialogConnectionLost_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UModalDialogConnectionLost_WBP_C::ExecuteUbergraph_ModalDialogConnectionLost_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogConnectionLost_WBP.ModalDialogConnectionLost_WBP_C.ExecuteUbergraph_ModalDialogConnectionLost_WBP"));

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
