// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PRO_PlayerController_Login_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRO_PlayerController_Login_BP.PRO_PlayerController_Login_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APRO_PlayerController_Login_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController_Login_BP.PRO_PlayerController_Login_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController_Login_BP.PRO_PlayerController_Login_BP_C.sendRequestLoginAutomationStarted
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRO_PlayerController_Login_BP_C::sendRequestLoginAutomationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController_Login_BP.PRO_PlayerController_Login_BP_C.sendRequestLoginAutomationStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRO_PlayerController_Login_BP.PRO_PlayerController_Login_BP_C.ExecuteUbergraph_PRO_PlayerController_Login_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APRO_PlayerController_Login_BP_C::ExecuteUbergraph_PRO_PlayerController_Login_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRO_PlayerController_Login_BP.PRO_PlayerController_Login_BP_C.ExecuteUbergraph_PRO_PlayerController_Login_BP");

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
