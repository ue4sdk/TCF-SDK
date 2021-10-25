// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AL_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AL_Base_BP.AL_Base_BP_C.GetActivityRow
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           FoundRow                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FYActivityDataTableRow  Out_Row                        (CPF_Parm, CPF_OutParm)

void AAL_Base_BP_C::GetActivityRow(bool* FoundRow, struct FYActivityDataTableRow* Out_Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function AL_Base_BP.AL_Base_BP_C.GetActivityRow");

	struct
	{
		bool                           FoundRow;
		struct FYActivityDataTableRow  Out_Row;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (FoundRow != nullptr)
		*FoundRow = params.FoundRow;
	if (Out_Row != nullptr)
		*Out_Row = params.Out_Row;
}


// Function AL_Base_BP.AL_Base_BP_C.GetDebugCooldownTimeStatus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 DebugCooldownTimer             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AAL_Base_BP_C::GetDebugCooldownTimeStatus(struct FString* DebugCooldownTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AL_Base_BP.AL_Base_BP_C.GetDebugCooldownTimeStatus");

	struct
	{
		struct FString                 DebugCooldownTimer;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (DebugCooldownTimer != nullptr)
		*DebugCooldownTimer = params.DebugCooldownTimer;
}


// Function AL_Base_BP.AL_Base_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAL_Base_BP_C::GetDebugDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function AL_Base_BP.AL_Base_BP_C.GetDebugDescription");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AL_Base_BP.AL_Base_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAL_Base_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AL_Base_BP.AL_Base_BP_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AL_Base_BP.AL_Base_BP_C.ExecuteUbergraph_AL_Base_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAL_Base_BP_C::ExecuteUbergraph_AL_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AL_Base_BP.AL_Base_BP_C.ExecuteUbergraph_AL_Base_BP");

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
