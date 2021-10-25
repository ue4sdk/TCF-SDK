// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SelectionBracket_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SelectionBracket.WBP_SelectionBracket_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SelectionBracket_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SelectionBracket.WBP_SelectionBracket_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SelectionBracket.WBP_SelectionBracket_C.ExecuteUbergraph_WBP_SelectionBracket
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SelectionBracket_C::ExecuteUbergraph_WBP_SelectionBracket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SelectionBracket.WBP_SelectionBracket_C.ExecuteUbergraph_WBP_SelectionBracket");

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
