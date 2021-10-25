// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_OpenPlayerSupportCommand_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OpenPlayerSupportCommand_BP.OpenPlayerSupportCommand_BP_C.BP_OnExecute
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOpenPlayerSupportCommand_BP_C::BP_OnExecute(class AYPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenPlayerSupportCommand_BP.OpenPlayerSupportCommand_BP_C.BP_OnExecute");

	struct
	{
		class AYPlayerController*      PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function OpenPlayerSupportCommand_BP.OpenPlayerSupportCommand_BP_C.ExecuteUbergraph_OpenPlayerSupportCommand_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOpenPlayerSupportCommand_BP_C::ExecuteUbergraph_OpenPlayerSupportCommand_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenPlayerSupportCommand_BP.OpenPlayerSupportCommand_BP_C.ExecuteUbergraph_OpenPlayerSupportCommand_BP");

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
