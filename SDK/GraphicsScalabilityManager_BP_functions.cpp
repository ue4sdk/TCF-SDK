// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GraphicsScalabilityManager_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GraphicsScalabilityManager_BP.GraphicsScalabilityManager_BP_C.ApplyShadowCustomization
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYGfxQualityPreset             gfxPreset                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGraphicsScalabilityManager_BP_C::ApplyShadowCustomization(EYGfxQualityPreset gfxPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GraphicsScalabilityManager_BP.GraphicsScalabilityManager_BP_C.ApplyShadowCustomization"));

	struct
	{
		EYGfxQualityPreset             gfxPreset;
	} params = {};

	params.gfxPreset = gfxPreset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GraphicsScalabilityManager_BP.GraphicsScalabilityManager_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AGraphicsScalabilityManager_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GraphicsScalabilityManager_BP.GraphicsScalabilityManager_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GraphicsScalabilityManager_BP.GraphicsScalabilityManager_BP_C.ExecuteUbergraph_GraphicsScalabilityManager_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGraphicsScalabilityManager_BP_C::ExecuteUbergraph_GraphicsScalabilityManager_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GraphicsScalabilityManager_BP.GraphicsScalabilityManager_BP_C.ExecuteUbergraph_GraphicsScalabilityManager_BP"));

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
