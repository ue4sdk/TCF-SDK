// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FortunaPass_Globe_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FortunaPass_Globe_BP.FortunaPass_Globe_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFortunaPass_Globe_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPass_Globe_BP.FortunaPass_Globe_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FortunaPass_Globe_BP.FortunaPass_Globe_BP_C.Rotation__FinishedFunc
// (FUNC_BlueprintEvent)

void AFortunaPass_Globe_BP_C::Rotation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPass_Globe_BP.FortunaPass_Globe_BP_C.Rotation__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FortunaPass_Globe_BP.FortunaPass_Globe_BP_C.Rotation__UpdateFunc
// (FUNC_BlueprintEvent)

void AFortunaPass_Globe_BP_C::Rotation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPass_Globe_BP.FortunaPass_Globe_BP_C.Rotation__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FortunaPass_Globe_BP.FortunaPass_Globe_BP_C.ExecuteUbergraph_FortunaPass_Globe_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFortunaPass_Globe_BP_C::ExecuteUbergraph_FortunaPass_Globe_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPass_Globe_BP.FortunaPass_Globe_BP_C.ExecuteUbergraph_FortunaPass_Globe_BP"));

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
