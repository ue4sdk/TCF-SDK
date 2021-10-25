// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MS_Line_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MS_Line_Base.MS_Line_Base_C.OnRep_HintData
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_Line_Base_C::OnRep_HintData()
{
	static auto fn = UObject::FindObject<UFunction>("Function MS_Line_Base.MS_Line_Base_C.OnRep_HintData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MS_Line_Base.MS_Line_Base_C.IsPlayerFacing
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPlayerFacing                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMS_Line_Base_C::IsPlayerFacing(bool* IsPlayerFacing)
{
	static auto fn = UObject::FindObject<UFunction>("Function MS_Line_Base.MS_Line_Base_C.IsPlayerFacing");

	struct
	{
		bool                           IsPlayerFacing;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsPlayerFacing != nullptr)
		*IsPlayerFacing = params.IsPlayerFacing;
}


// Function MS_Line_Base.MS_Line_Base_C.CreateHintIndicator
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              RelatedTransform               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void UMS_Line_Base_C::CreateHintIndicator(const struct FTransform& RelatedTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function MS_Line_Base.MS_Line_Base_C.CreateHintIndicator");

	struct
	{
		struct FTransform              RelatedTransform;
	} params;

	params.RelatedTransform = RelatedTransform;

	UObject::ProcessEvent(fn, &params);
}


// Function MS_Line_Base.MS_Line_Base_C.ClearIndicators
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_Line_Base_C::ClearIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function MS_Line_Base.MS_Line_Base_C.ClearIndicators");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MS_Line_Base.MS_Line_Base_C.BP_ClearHindIndicator
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMS_Line_Base_C::BP_ClearHindIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function MS_Line_Base.MS_Line_Base_C.BP_ClearHindIndicator");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MS_Line_Base.MS_Line_Base_C.ExecuteUbergraph_MS_Line_Base
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMS_Line_Base_C::ExecuteUbergraph_MS_Line_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MS_Line_Base.MS_Line_Base_C.ExecuteUbergraph_MS_Line_Base");

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
