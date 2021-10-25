// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_EndOfMatch_Contract_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EndOfMatch_Contract_Entry.WBP_EndOfMatch_Contract_Entry_C.PlayScreenInAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Contract_Entry_C::PlayScreenInAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Contract_Entry.WBP_EndOfMatch_Contract_Entry_C.PlayScreenInAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_Contract_Entry.WBP_EndOfMatch_Contract_Entry_C.PlayScreenOutAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Contract_Entry_C::PlayScreenOutAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Contract_Entry.WBP_EndOfMatch_Contract_Entry_C.PlayScreenOutAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_Contract_Entry.WBP_EndOfMatch_Contract_Entry_C.ExecuteUbergraph_WBP_EndOfMatch_Contract_Entry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Contract_Entry_C::ExecuteUbergraph_WBP_EndOfMatch_Contract_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Contract_Entry.WBP_EndOfMatch_Contract_Entry_C.ExecuteUbergraph_WBP_EndOfMatch_Contract_Entry"));

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
