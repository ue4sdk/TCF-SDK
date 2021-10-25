// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_Mineral_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_Mineral_BP.AAM_Mineral_BP_C.GetActorClassToSpawn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYActivityLocation*      Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass*                  ActivityActorClass             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void AAAM_Mineral_BP_C::GetActorClassToSpawn(class AYActivityLocation* Location, class UClass** ActivityActorClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_Mineral_BP.AAM_Mineral_BP_C.GetActorClassToSpawn"));

	struct
	{
		class AYActivityLocation*      Location;
		class UClass*                  ActivityActorClass;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);

	if (ActivityActorClass != nullptr)
		*ActivityActorClass = params.ActivityActorClass;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
