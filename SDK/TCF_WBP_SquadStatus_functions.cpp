// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SquadStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SquadStatus.WBP_SquadStatus_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   newText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_SquadStatus_C::SetText(const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadStatus.WBP_SquadStatus_C.SetText");

	struct
	{
		struct FText                   newText;
	} params;

	params.newText = newText;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
