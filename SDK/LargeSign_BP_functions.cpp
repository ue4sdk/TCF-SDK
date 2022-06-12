// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LargeSign_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LargeSign_BP.LargeSign_BP_C.NewFunction_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UStaticMesh*             BackDetail                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALargeSign_BP_C::NewFunction_1(class UStaticMesh** BackDetail)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LargeSign_BP.LargeSign_BP_C.NewFunction_1"));

	struct
	{
		class UStaticMesh*             BackDetail;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (BackDetail != nullptr)
		*BackDetail = params.BackDetail;
}


// Function LargeSign_BP.LargeSign_BP_C.SetBackDetail
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             BackDetail                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALargeSign_BP_C::SetBackDetail(class UStaticMesh** BackDetail)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LargeSign_BP.LargeSign_BP_C.SetBackDetail"));

	struct
	{
		class UStaticMesh*             BackDetail;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (BackDetail != nullptr)
		*BackDetail = params.BackDetail;
}


// Function LargeSign_BP.LargeSign_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALargeSign_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LargeSign_BP.LargeSign_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
