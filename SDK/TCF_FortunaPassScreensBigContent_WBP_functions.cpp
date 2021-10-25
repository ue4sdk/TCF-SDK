// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FortunaPassScreensBigContent_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FortunaPassScreensBigContent_WBP.FortunaPassScreensBigContent_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFortunaPassScreensBigContent_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPassScreensBigContent_WBP.FortunaPassScreensBigContent_WBP_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FortunaPassScreensBigContent_WBP.FortunaPassScreensBigContent_WBP_C.ExecuteUbergraph_FortunaPassScreensBigContent_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFortunaPassScreensBigContent_WBP_C::ExecuteUbergraph_FortunaPassScreensBigContent_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPassScreensBigContent_WBP.FortunaPassScreensBigContent_WBP_C.ExecuteUbergraph_FortunaPassScreensBigContent_WBP"));

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
