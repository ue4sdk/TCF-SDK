// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_CustomizationRotationComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomizationRotationComponent_BP.CustomizationRotationComponent_BP_C.GetDelta
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UCustomizationRotationComponent_BP_C::GetDelta()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationRotationComponent_BP.CustomizationRotationComponent_BP_C.GetDelta"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomizationRotationComponent_BP.CustomizationRotationComponent_BP_C.GetComponentToRotate
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class USceneComponent*         ComponentToRotate              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCustomizationRotationComponent_BP_C::GetComponentToRotate(class USceneComponent** ComponentToRotate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomizationRotationComponent_BP.CustomizationRotationComponent_BP_C.GetComponentToRotate"));

	struct
	{
		class USceneComponent*         ComponentToRotate;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ComponentToRotate != nullptr)
		*ComponentToRotate = params.ComponentToRotate;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
