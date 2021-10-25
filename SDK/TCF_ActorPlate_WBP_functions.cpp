// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ActorPlate_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActorPlate_WBP.ActorPlate_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UActorPlate_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActorPlate_WBP.ActorPlate_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ActorPlate_WBP.ActorPlate_WBP_C.BP_InitializeFor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UActorPlate_WBP_C::BP_InitializeFor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActorPlate_WBP.ActorPlate_WBP_C.BP_InitializeFor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ActorPlate_WBP.ActorPlate_WBP_C.ExecuteUbergraph_ActorPlate_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActorPlate_WBP_C::ExecuteUbergraph_ActorPlate_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActorPlate_WBP.ActorPlate_WBP_C.ExecuteUbergraph_ActorPlate_WBP");

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
