// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YGameMode_Match_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YGameMode_Match_BP.YGameMode_Match_BP_C.BP_MatchRepeated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYGameMode_Match_BP_C::BP_MatchRepeated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function YGameMode_Match_BP.YGameMode_Match_BP_C.BP_MatchRepeated"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YGameMode_Match_BP.YGameMode_Match_BP_C.ExecuteUbergraph_YGameMode_Match_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYGameMode_Match_BP_C::ExecuteUbergraph_YGameMode_Match_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function YGameMode_Match_BP.YGameMode_Match_BP_C.ExecuteUbergraph_YGameMode_Match_BP"));

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
