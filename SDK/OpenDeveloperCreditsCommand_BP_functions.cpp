// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OpenDeveloperCreditsCommand_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OpenDeveloperCreditsCommand_BP.OpenDeveloperCreditsCommand_BP_C.BP_IsAvailable
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOpenDeveloperCreditsCommand_BP_C::BP_IsAvailable(class AYPlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OpenDeveloperCreditsCommand_BP.OpenDeveloperCreditsCommand_BP_C.BP_IsAvailable"));

	struct
	{
		class AYPlayerController*      PlayerController;
		bool                           ReturnValue;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OpenDeveloperCreditsCommand_BP.OpenDeveloperCreditsCommand_BP_C.BP_OnExecute
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOpenDeveloperCreditsCommand_BP_C::BP_OnExecute(class AYPlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OpenDeveloperCreditsCommand_BP.OpenDeveloperCreditsCommand_BP_C.BP_OnExecute"));

	struct
	{
		class AYPlayerController*      PlayerController;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OpenDeveloperCreditsCommand_BP.OpenDeveloperCreditsCommand_BP_C.ExecuteUbergraph_OpenDeveloperCreditsCommand_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOpenDeveloperCreditsCommand_BP_C::ExecuteUbergraph_OpenDeveloperCreditsCommand_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OpenDeveloperCreditsCommand_BP.OpenDeveloperCreditsCommand_BP_C.ExecuteUbergraph_OpenDeveloperCreditsCommand_BP"));

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
