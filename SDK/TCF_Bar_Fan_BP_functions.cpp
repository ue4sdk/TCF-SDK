// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Bar_Fan_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bar_Fan_BP.Bar_Fan_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABar_Fan_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Bar_Fan_BP.Bar_Fan_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Bar_Fan_BP.Bar_Fan_BP_C.FanSpin__FinishedFunc
// (FUNC_BlueprintEvent)

void ABar_Fan_BP_C::FanSpin__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Bar_Fan_BP.Bar_Fan_BP_C.FanSpin__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Bar_Fan_BP.Bar_Fan_BP_C.FanSpin__UpdateFunc
// (FUNC_BlueprintEvent)

void ABar_Fan_BP_C::FanSpin__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Bar_Fan_BP.Bar_Fan_BP_C.FanSpin__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Bar_Fan_BP.Bar_Fan_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABar_Fan_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Bar_Fan_BP.Bar_Fan_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function Bar_Fan_BP.Bar_Fan_BP_C.ExecuteUbergraph_Bar_Fan_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABar_Fan_BP_C::ExecuteUbergraph_Bar_Fan_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Bar_Fan_BP.Bar_Fan_BP_C.ExecuteUbergraph_Bar_Fan_BP"));

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
