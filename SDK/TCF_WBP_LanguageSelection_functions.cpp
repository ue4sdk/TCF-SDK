// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_LanguageSelection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LanguageSelection.WBP_LanguageSelection_C.BP_ClearCombobox
// (FUNC_BlueprintEvent)

void UWBP_LanguageSelection_C::BP_ClearCombobox()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LanguageSelection.WBP_LanguageSelection_C.BP_ClearCombobox");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LanguageSelection.WBP_LanguageSelection_C.ExecuteUbergraph_WBP_LanguageSelection
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LanguageSelection_C::ExecuteUbergraph_WBP_LanguageSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LanguageSelection.WBP_LanguageSelection_C.ExecuteUbergraph_WBP_LanguageSelection");

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
