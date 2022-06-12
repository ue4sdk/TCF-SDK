// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AIChar_Leafman_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIChar_Leafman_BP.AIChar_Leafman_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAIChar_Leafman_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIChar_Leafman_BP.AIChar_Leafman_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIChar_Leafman_BP.AIChar_Leafman_BP_C.BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_0_YTakeDamageEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AAIChar_Leafman_BP_C::BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_0_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIChar_Leafman_BP.AIChar_Leafman_BP_C.BndEvt__m_damageComponent_K2Node_ComponentBoundEvent_0_YTakeDamageEvent__DelegateSignature"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIChar_Leafman_BP.AIChar_Leafman_BP_C.ExecuteUbergraph_AIChar_Leafman_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAIChar_Leafman_BP_C::ExecuteUbergraph_AIChar_Leafman_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIChar_Leafman_BP.AIChar_Leafman_BP_C.ExecuteUbergraph_AIChar_Leafman_BP"));

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
