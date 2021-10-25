// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_HelmetGoggleComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.ToggleNightVision
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHelmetGoggleComponent_BP_C::ToggleNightVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.ToggleNightVision");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.EnableNV
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Parent                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHelmetGoggleComponent_BP_C::EnableNV(class UMaterialInterface* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.EnableNV");

	struct
	{
		class UMaterialInterface*      Parent;
	} params;

	params.Parent = Parent;

	UObject::ProcessEvent(fn, &params);
}


// Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.ExecuteUbergraph_HelmetGoggleComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHelmetGoggleComponent_BP_C::ExecuteUbergraph_HelmetGoggleComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.ExecuteUbergraph_HelmetGoggleComponent_BP");

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
