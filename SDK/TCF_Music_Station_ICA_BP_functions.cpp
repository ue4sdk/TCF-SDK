// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Music_Station_ICA_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Music_Station_ICA_BP.Music_Station_ICA_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMusic_Station_ICA_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Music_Station_ICA_BP.Music_Station_ICA_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Music_Station_ICA_BP.Music_Station_ICA_BP_C.ExecuteUbergraph_Music_Station_ICA_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMusic_Station_ICA_BP_C::ExecuteUbergraph_Music_Station_ICA_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Music_Station_ICA_BP.Music_Station_ICA_BP_C.ExecuteUbergraph_Music_Station_ICA_BP"));

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
