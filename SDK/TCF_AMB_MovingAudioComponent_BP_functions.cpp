// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AMB_MovingAudioComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AMB_MovingAudioComponent_BP.AMB_MovingAudioComponent_BP_C.Vector Oscilation__FinishedFunc
// (FUNC_BlueprintEvent)

void AAMB_MovingAudioComponent_BP_C::Vector_Oscilation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_MovingAudioComponent_BP.AMB_MovingAudioComponent_BP_C.Vector Oscilation__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AMB_MovingAudioComponent_BP.AMB_MovingAudioComponent_BP_C.Vector Oscilation__UpdateFunc
// (FUNC_BlueprintEvent)

void AAMB_MovingAudioComponent_BP_C::Vector_Oscilation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_MovingAudioComponent_BP.AMB_MovingAudioComponent_BP_C.Vector Oscilation__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AMB_MovingAudioComponent_BP.AMB_MovingAudioComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAMB_MovingAudioComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_MovingAudioComponent_BP.AMB_MovingAudioComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AMB_MovingAudioComponent_BP.AMB_MovingAudioComponent_BP_C.SFX_LoopCycle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAMB_MovingAudioComponent_BP_C::SFX_LoopCycle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_MovingAudioComponent_BP.AMB_MovingAudioComponent_BP_C.SFX_LoopCycle"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AMB_MovingAudioComponent_BP.AMB_MovingAudioComponent_BP_C.ExecuteUbergraph_AMB_MovingAudioComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAMB_MovingAudioComponent_BP_C::ExecuteUbergraph_AMB_MovingAudioComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_MovingAudioComponent_BP.AMB_MovingAudioComponent_BP_C.ExecuteUbergraph_AMB_MovingAudioComponent_BP"));

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
