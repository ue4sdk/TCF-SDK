// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_OpenBugReporterCommand_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OpenBugReporterCommand_BP.OpenBugReporterCommand_BP_C.BP_IsAvailable
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOpenBugReporterCommand_BP_C::BP_IsAvailable(class AYPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBugReporterCommand_BP.OpenBugReporterCommand_BP_C.BP_IsAvailable");

	struct
	{
		class AYPlayerController*      PlayerController;
		bool                           ReturnValue;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OpenBugReporterCommand_BP.OpenBugReporterCommand_BP_C.BP_OnExecute
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOpenBugReporterCommand_BP_C::BP_OnExecute(class AYPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBugReporterCommand_BP.OpenBugReporterCommand_BP_C.BP_OnExecute");

	struct
	{
		class AYPlayerController*      PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function OpenBugReporterCommand_BP.OpenBugReporterCommand_BP_C.ExecuteUbergraph_OpenBugReporterCommand_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOpenBugReporterCommand_BP_C::ExecuteUbergraph_OpenBugReporterCommand_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBugReporterCommand_BP.OpenBugReporterCommand_BP_C.ExecuteUbergraph_OpenBugReporterCommand_BP");

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
