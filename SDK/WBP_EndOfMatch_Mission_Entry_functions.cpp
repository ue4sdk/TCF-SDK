// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_EndOfMatch_Mission_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EndOfMatch_Mission_Entry.WBP_EndOfMatch_Mission_Entry_C.PlayScreenInAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Mission_Entry_C::PlayScreenInAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Mission_Entry.WBP_EndOfMatch_Mission_Entry_C.PlayScreenInAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Mission_Entry.WBP_EndOfMatch_Mission_Entry_C.PlayScreenOutAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Mission_Entry_C::PlayScreenOutAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Mission_Entry.WBP_EndOfMatch_Mission_Entry_C.PlayScreenOutAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Mission_Entry.WBP_EndOfMatch_Mission_Entry_C.ExecuteUbergraph_WBP_EndOfMatch_Mission_Entry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Mission_Entry_C::ExecuteUbergraph_WBP_EndOfMatch_Mission_Entry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Mission_Entry.WBP_EndOfMatch_Mission_Entry_C.ExecuteUbergraph_WBP_EndOfMatch_Mission_Entry"));

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
