// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_OpenDebugMenuCommand_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OpenDebugMenuCommand_BP.OpenDebugMenuCommand_BP_C.BP_IsAvailable
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOpenDebugMenuCommand_BP_C::BP_IsAvailable(class AYPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenDebugMenuCommand_BP.OpenDebugMenuCommand_BP_C.BP_IsAvailable");

	struct
	{
		class AYPlayerController*      PlayerController;
		bool                           ReturnValue;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OpenDebugMenuCommand_BP.OpenDebugMenuCommand_BP_C.BP_OnExecute
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOpenDebugMenuCommand_BP_C::BP_OnExecute(class AYPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenDebugMenuCommand_BP.OpenDebugMenuCommand_BP_C.BP_OnExecute");

	struct
	{
		class AYPlayerController*      PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function OpenDebugMenuCommand_BP.OpenDebugMenuCommand_BP_C.ExecuteUbergraph_OpenDebugMenuCommand_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOpenDebugMenuCommand_BP_C::ExecuteUbergraph_OpenDebugMenuCommand_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenDebugMenuCommand_BP.OpenDebugMenuCommand_BP_C.ExecuteUbergraph_OpenDebugMenuCommand_BP");

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
