// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FX_StormManager01_Ambient_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_StormManager01_Ambient_BP.FX_StormManager01_Ambient_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFX_StormManager01_Ambient_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Ambient_BP.FX_StormManager01_Ambient_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_Ambient_BP.FX_StormManager01_Ambient_BP_C.BndEvt__YPlayerEventComponent_BP_K2Node_ComponentBoundEvent_1_OnPlayerReady__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerCharacter*       YPlayerCharacter               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_StormManager01_Ambient_BP_C::BndEvt__YPlayerEventComponent_BP_K2Node_ComponentBoundEvent_1_OnPlayerReady__DelegateSignature(class AYPlayerCharacter* YPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Ambient_BP.FX_StormManager01_Ambient_BP_C.BndEvt__YPlayerEventComponent_BP_K2Node_ComponentBoundEvent_1_OnPlayerReady__DelegateSignature"));

	struct
	{
		class AYPlayerCharacter*       YPlayerCharacter;
	} params;

	params.YPlayerCharacter = YPlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function FX_StormManager01_Ambient_BP.FX_StormManager01_Ambient_BP_C.ExecuteUbergraph_FX_StormManager01_Ambient_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_StormManager01_Ambient_BP_C::ExecuteUbergraph_FX_StormManager01_Ambient_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_StormManager01_Ambient_BP.FX_StormManager01_Ambient_BP_C.ExecuteUbergraph_FX_StormManager01_Ambient_BP"));

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
