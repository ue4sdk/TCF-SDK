// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LightningFunctions_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightningFunctions_BP.LightningFunctions_BP_C.IsStormLightningDebugEnabled
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            DebugLevel                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULightningFunctions_BP_C::IsStormLightningDebugEnabled(class UObject* __WorldContext, int* DebugLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningFunctions_BP.LightningFunctions_BP_C.IsStormLightningDebugEnabled"));

	struct
	{
		class UObject*                 __WorldContext;
		int                            DebugLevel;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (DebugLevel != nullptr)
		*DebugLevel = params.DebugLevel;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
